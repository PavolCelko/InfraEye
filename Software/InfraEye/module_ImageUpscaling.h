#ifndef MODULE_IMAGE_UPSCALING_H_INCLUDED
#define MODULE_IMAGE_UPSCALING_H_INCLUDED

#define INPUT_ARRAY_LENGTH_D    (24)
#define INPUT_ARRAY_WIDTH_D     (32)
#define SCALING_FACTOR_D        (4)
#define OUTPUT_ARRAY_LENGTH_D   ((INPUT_ARRAY_LENGTH_D * SCALING_FACTOR_D) - SCALING_FACTOR_D)
#define OUTPUT_ARRAY_WIDTH_D    ((INPUT_ARRAY_WIDTH_D * SCALING_FACTOR_D) - SCALING_FACTOR_D)
#define OUTPUT_NUM_OF_PIXELS_D  (OUTPUT_ARRAY_LENGTH_D * OUTPUT_ARRAY_WIDTH_D)
// Output buffer size shall be multiple of OUTPUT_ARRAY_WIDTH_D
#define OUTPUT_BUFFER_SIZE_D    (8 * OUTPUT_ARRAY_LENGTH_D)

void img_up_vUpscaleImage(float* pfArray, float* fOutput, uint16_t u16BufferSize);
void img_up_vUpscaleImage_u16(uint16_t* pfArray, uint16_t* fOutput, uint16_t u16BufferSize);
void img_up_vResetUpscaling(void);

#endif // MODULE_IMAGE_UPSCALING_H_INCLUDED
