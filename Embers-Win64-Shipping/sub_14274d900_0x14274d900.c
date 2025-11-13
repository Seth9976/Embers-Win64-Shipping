// 函数: sub_14274d900
// 地址: 0x14274d900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = *(arg1 + 0x80)
int16_t rdi = *rax
*(arg1 + 0x10) = &rax[1]
uint64_t r11_1 = zx.q(zx.d(rax[1]) * r9)
*(arg1 + 0x10) = &rax[2]
int32_t* r11_2 = r11_1 + *(arg1 + 0x70)
uint32_t rcx = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
int32_t i_2 = *(arg1 + 0x40)
int32_t* result = zx.q(rcx * r9) + *(arg1 + 0x70)

if (i_2 s> 0)
    uint64_t i_1 = zx.q(i_2)
    void* r8_2 = zx.q(rdi) * 0x70 + *(arg1 + 0x50)
    uint64_t i
    
    do
        int32_t rcx_2 = *r11_2
        r11_2 = &r11_2[1]
        int32_t* result_1 = result
        result = &result[1]
        int32_t rcx_3
        
        if (rcx_2 == 0)
            rcx_3 = -1
        else
            *(r8_2 + 0x10) += 1
            rcx_3 = *(r8_2 + 0x10)
        
        *result_1 = rcx_3
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
