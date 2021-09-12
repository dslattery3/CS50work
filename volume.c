// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);

    // TODO: Copy header from input file to output file
    // .wav header is 44 bytes
    // samples is 2 bytes each
    //to change volume of sample multiply by factor argv[3]
    // fread to read 44 bytes and fwrite to write 44 bytes 
    BYTE header[HEADER_SIZE];
    fread(header, sizeof(BYTE), HEADER_SIZE, input);
    fwrite(header, sizeof(BYTE), HEADER_SIZE, output);

    // TODO: Read samples from input file and write updated data to output file
    // loop through input file until the end. each 2 byte, read to mem, write to output
    int16_t buffer;
    while (fread(&buffer, sizeof(int16_t), 1, input))
    {
        buffer = (buffer * factor);
        fwrite(&buffer, sizeof(int16_t), 1, output);
    }
    
    // Close files
    fclose(input);
    fclose(output);
}
