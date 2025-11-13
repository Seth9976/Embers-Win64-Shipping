// 函数: png_write_image
// 地址: 0x1403c2200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int32_t i = png_set_interlace_handling(arg1)

if (i s<= 0)
    return 

int32_t i_1 = i
i = *(arg1 + 0x1dc)
int32_t rbx_1 = 0

do
    bool cond:0_1 = i == 0
    i = 0
    
    if (not(cond:0_1))
        int64_t rbp_1 = 0
        
        do
            png_write_row(arg1, *(arg2 + (rbp_1 << 3)))
            i = *(arg1 + 0x1dc)
            rbp_1 += 1
        while (rbp_1.d u< i)
    
    rbx_1 += 1
while (rbx_1 != i_1)
