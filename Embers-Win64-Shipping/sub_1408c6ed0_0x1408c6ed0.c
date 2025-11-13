// 函数: sub_1408c6ed0
// 地址: 0x1408c6ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi_1 = arg2 - arg1
int32_t* rbx = arg1 + 0x7c
int64_t i_1 = 4
int64_t i

do
    rbx[-5] = *(rdi_1 + rbx - 0x14)
    rbx[-4].b = *(rdi_1 + rbx - 0x10)
    *(rbx - 0xf) = *(rdi_1 + rbx - 0xf)
    void* rax_5 = rdi_1 - 0xc + rbx
    
    if (&rbx[-3] != rax_5)
        int32_t rsi_1 = *(rbx + rdi_1 - 4)
        int64_t r12_1 = *rax_5
        int32_t r8_1 = *rbx
        rbx[-1] = rsi_1
        
        if (rsi_1 != 0 || r8_1 != 0)
            sub_1405c4b20(&rbx[-3], rsi_1, r8_1)
            memcpy(*(rbx - 0xc), r12_1, rsi_1 * 0x1c)
        else
            *rbx = rsi_1
    
    rbx -= -0x80
    i = i_1
    i_1 -= 1
while (i != 1)
*(arg1 + 0x200) = *(arg2 + 0x200)
*(arg1 + 0x201) = *(arg2 + 0x201)
return arg1
