// 函数: sub_141ac66b0
// 地址: 0x141ac66b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* i

if (sub_141ea6180(arg1 + 0x100, arg3).b != 0)
    for (i = *(arg1 + 0x250); i != &i[sx.q(*(arg1 + 0x258))]; i = &i[1])
        int32_t rcx_1 = *i
        uint32_t rdx_2
        void* r9_1
        
        if (rcx_1 != 0xffffffff)
            rdx_2 = zx.d(rcx_1.w)
            r9_1 = arg3 + 0x10
            void* rcx_2 = *(r9_1 + 0x10)
            
            if (rcx_2 != 0)
                r9_1 = rcx_2
        
        if (rcx_1 == 0xffffffff || not(test_bit(*(r9_1 + (zx.q(rdx_2) u>> 5 << 2)), rdx_2 & 0x1f)))
            i.b = 0
            return i

i.b = *(arg1 + 0x258) s> 0
return i
