// 函数: sub_140cd84a0
// 地址: 0x140cd84a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_1405c5570(arg2, 0)

char result = sub_140d3ccc0(arg1, arg2, arg3, 0, 0)

if (arg2[1].d s> 0)
    int64_t rsi_1 = 0
    
    do
        result = sub_140d23cf0(*(rsi_1 + *arg2))
        
        if (result == 0)
            int32_t rdx_1 = arg2[1].d
            int32_t rax_3 = rdx_1 - i - 1
            
            if (rax_3 s>= 1)
                rax_3 = 1
            
            if (rax_3 != 0)
                uint64_t rcx_3 = *arg2
                memcpy(rcx_3 + (sx.q(i) << 3), rcx_3 + (sx.q(rdx_1 - rax_3) << 3), rax_3 << 3)
                rdx_1 = arg2[1].d
            
            arg2[1].d = rdx_1 - 1
            result = sub_1405c53d0(arg2)
            i -= 1
            rsi_1 -= 8
        
        i += 1
        rsi_1 += 8
    while (i s< arg2[1].d)

return result
