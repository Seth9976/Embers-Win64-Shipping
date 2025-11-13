// 函数: sub_140378690
// 地址: 0x140378690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0

if (*arg1 == 0x165)
    uint32_t i_2 = zx.d(arg1[4])
    
    if (i_2 s> 0)
        void* r9_1 = &arg1[0xf]
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            uint32_t rcx = zx.d(*r9_1)
            r9_1 += 0x14
            r8 |= zx.d(rcx.b) | rcx u>> 8
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (*arg1 == 0x166 || *arg1 == 0xfffe)
    r8 = *(arg1 + 0x14)
else if (arg1[1] == 1)
    r8 = 4
else if (arg1[1] == 2)
    r8 = 3
else if (arg2 != 0)
    uint64_t rax_3 = zx.q(zx.d(arg1[1]) - 1)
    
    if (rax_3.d u<= 7)
        r8 = *(&data_143cc6f80 + (rax_3 << 2))

return zx.q(r8)
