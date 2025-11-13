// 函数: sub_142a862b0
// 地址: 0x142a862b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r8_1 = arg2

if (arg1 == 0)
    return zx.q(sbb.d(arg3, arg3, r8_1 != 0))

if (r8_1 == 0)
    return 1

char i = *arg1
uint32_t rax_2 = zx.d(*r8_1)

if (i != 0)
    void* r9_1 = arg1 - r8_1
    
    do
        if (rax_2.b == 0)
            return 1
        
        if (i - 0x41 u<= 0x19)
            i += 0x20
        
        if (rax_2.b - 0x41 u<= 0x19)
            rax_2.b += 0x20
        
        uint32_t rcx_2 = zx.d(rax_2.b)
        uint32_t i_1 = zx.d(i)
        
        if (i_1 != rcx_2)
            return zx.q(i_1 - rcx_2)
        
        i = *(r9_1 + r8_1 + 1)
        r8_1 = &r8_1[1]
        rax_2 = zx.d(*r8_1)
    while (i != 0)

char temp1_1 = rax_2.b
rax_2.b = neg.b(rax_2.b)
return zx.q(sbb.d(rax_2, rax_2, temp1_1 != 0))
