// 函数: sub_1423efdb0
// 地址: 0x1423efdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = arg3
arg3.b = sub_140b5b8a0(arg3.d, 0).b == 0
int64_t i
i.b = i_1:4.d != 0
i.b |= arg3.b

if (i.b != 0)
    void* rcx_1 = *(arg1 + 0xe0)
    void* rdx_2 = (sx.q(*(arg1 + 0xe8)) << 6) + rcx_1
    
    if (rcx_1 != rdx_2)
        i = i_1
        
        while (*(rcx_1 + 0x18) != i)
            rcx_1 += 0x40
            
            if (rcx_1 == rdx_2)
                return i
        
        *rcx_1 = arg2

return i
