// 函数: png_read_image
// 地址: 0x1403c45c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int32_t r14_1

if ((*(arg1 + 0x158) & 0x40) != 0)
    if (*(arg1 + 0x25b) != 0 && (*(arg1 + 0x15c) & 2) == 0)
        png_warning(arg1, "Interlace handling should be turned on when using png_read_image")
        *(arg1 + 0x1e0) = *(arg1 + 0x1dc)
    
    r14_1 = png_set_interlace_handling(arg1)
    
    if (r14_1 s> 0)
        goto label_1403c465d
    
    return 

r14_1 = png_set_interlace_handling(arg1)

if ((*(arg1 + 0x158) & 0x40) == 0)
    sub_1403dd0d0(arg1)
    
    if (r14_1 s> 0)
        goto label_1403c465d
    
    return 

png_warning(arg1, "Ignoring extra png_start_read_image() call; row buffer not reallocated")

if (r14_1 s<= 0)
    return 

label_1403c465d:
int32_t i = *(arg1 + 0x1dc)
int32_t r15_1 = 0

do
    if (i != 0)
        int64_t rbp_1 = 0
        
        do
            png_read_row(arg1, *(arg2 + (rbp_1 << 3)), nullptr)
            rbp_1 += 1
        while (i != rbp_1.d)
    
    r15_1 += 1
while (r15_1 != r14_1)
