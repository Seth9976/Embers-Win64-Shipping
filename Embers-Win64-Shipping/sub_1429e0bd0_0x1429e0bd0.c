// 函数: sub_1429e0bd0
// 地址: 0x1429e0bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t rdi = arg2 - 1

if (rdi s>= 0)
    int32_t temp0_1
    
    do
        int64_t rdx = arg1[2]
        char* r8_2 = *arg1 + (rdx u>> 3)
        int32_t rax_4
        
        if (r8_2 u>= arg1[1])
            arg1[4](arg1[3])
            rax_4 = 0
        else
            uint32_t rax_3 = zx.d(*r8_2) u>> (7 - (rdx.b & 7))
            arg1[2] = rdx + 1
            rax_4 = rax_3 & 1
        
        rsi |= rax_4 << rdi.b
        temp0_1 = rdi
        rdi -= 1
    while (temp0_1 - 1 s>= 0)

return zx.q(rsi)
