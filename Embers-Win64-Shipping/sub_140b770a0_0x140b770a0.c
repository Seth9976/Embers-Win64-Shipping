// 函数: sub_140b770a0
// 地址: 0x140b770a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1409391d0(arg1, arg2)
int32_t i = 0

if (arg3[1].d s> 0)
    int32_t rcx = arg1[4].d
    
    do
        int64_t r15_1 = *arg3
        int16_t arg_18
        
        if (((rcx - 2) & 0xfffffff5) != 0 || rcx == 0xa)
            int64_t* rcx_1 = arg1[1]
            arg_18 = 0x2c
            (*(*rcx_1 + 0x150))(rcx_1, &arg_18, 2)
        
        sub_14067f880(arg1[1])
        int32_t j_2 = *(arg1 + 0x24)
        int64_t* rsi_1 = arg1[1]
        
        if (j_2 s> 0)
            uint64_t j_1 = zx.q(j_2)
            uint64_t j
            
            do
                int64_t rax_3 = *rsi_1
                arg_18 = 9
                (*(rax_3 + 0x150))(rsi_1, &arg_18, 2)
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        (*(*arg1 + 0x10))(arg1, (sx.q(i) << 4) + r15_1)
        i += 1
        arg1[4].d = 7
        rcx = 7
    while (i s< arg3[1].d)

return sub_140938f70(arg1) __tailcall
