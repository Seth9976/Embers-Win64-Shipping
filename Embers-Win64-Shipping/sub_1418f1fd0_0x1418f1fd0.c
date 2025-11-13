// 函数: sub_1418f1fd0
// 地址: 0x1418f1fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d3ff08
arg1[1].d = 0
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
arg1[3] = arg2
*arg1 = &data_142ff1c18
arg1[4].d = arg6
__builtin_memset(arg1 + 0x24, 0, 0x20)
arg1[9] = 0
arg1[0xa].d = 0
*(arg1 + 0x54) = 0xffffffff
__builtin_memset(&arg1[0xb], 0, 0x18)
*(arg1 + 0x74) = arg5
arg1[0xf].d = arg7
arg1[0xe].d = 0
arg1[0x10] = arg4
arg1[0x11] = arg3

if (arg3 != 0)
    *(arg3 + 8) += 1

void* rax_3 = arg1[0x10]
arg1[0x12] = 0
arg1[0x13].d = 0xffffffff

if (rax_3 != 0)
    int32_t rsi_1 = *(rax_3 + 0x18)
    int64_t r14_1 = sx.q(arg1[0xd].d)
    
    if (rsi_1 == 0)
        rsi_1 = 1
    
    int32_t rax_4 = r14_1.d + rsi_1
    arg1[0xd].d = rax_4
    
    if (rax_4 s> *(arg1 + 0x6c))
        sub_1405a4d70(&arg1[0xc])
    
    memset(&arg1[0xc][r14_1], 0, sx.q(rsi_1) << 3)

return arg1
