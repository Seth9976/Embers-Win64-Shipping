// 函数: sub_1405b2c90
// 地址: 0x1405b2c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg2

if (r9 == 0)
    return 

int64_t rax_1 = sx.q(*(arg1 + 0x538))
int32_t r8_1 = 0

if (rax_1.d s> 0)
    void* r11_1 = *(arg1 + 0x530)
    int64_t rdx = 0
    int64_t* rax_2 = r11_1 + 8
    
    do
        if (*rax_2 == r9)
            *(r11_1 + sx.q(r8_1) * 0x10) = arg3
            return 
        
        r8_1 += 1
        rdx += 1
        rax_2 = &rax_2[2]
    while (rdx s< rax_1)

int64_t rdi_1 = sx.q(*(arg1 + 0x538))
int64_t var_10_1 = r9
int32_t rax_3 = (rdi_1 + 1).d
*(arg1 + 0x538) = rax_3

if (rax_3 s> *(arg1 + 0x53c))
    sub_1405a4f90(arg1 + 0x530)

*(*(arg1 + 0x530) + rdi_1 * 0x10) = arg3.o
