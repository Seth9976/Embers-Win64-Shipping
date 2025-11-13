// 函数: sub_141f71f00
// 地址: 0x141f71f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == arg1[0x86])
    return 

char r15_1 = arg1[0x11].b

if ((r15_1 & 2) != 0)
    (*(*arg1 + 0x2e8))()

arg1[0x86] = arg2
int32_t i = 0
int32_t rbp_1 = 1

while (i s>= 0)
    if (i s>= arg1[0x95].d)
        break
    
    int64_t r14_1 = sx.q(i) << 3
    int64_t arg_8 = *(r14_1 + arg1[0x94])
    
    if (sub_140d3e110(&arg_8) != 0)
        sub_141f75f40(sub_140d3c6e0(&arg_8))
        i += 1
        rbp_1 += 1
    else
        int32_t rcx_2 = arg1[0x95].d
        int32_t rax_6 = rcx_2 - i
        
        if (rax_6 != 1)
            int64_t rcx_3 = arg1[0x94]
            memmove(rcx_3 + r14_1, rcx_3 + (sx.q(rbp_1) << 3), (rax_6 - 1) << 3)
            rcx_2 = arg1[0x95].d
        
        arg1[0x95].d = rcx_2 - 1
        sub_1405c53d0(&arg1[0x94])

if ((arg1[0x11].b & 1) != 0)
    (*(*arg1 + 0x920))(arg1)
    sub_141f75f40(arg1)
    sub_141f6c530(arg1)
    arg1[0xa6].d = 0
    
    if (*(arg1 + 0x534) != 0)
        sub_1405a5410(&arg1[0xa5], 0)
    
    arg1[0xa8].d = 0
    
    if (*(arg1 + 0x544) != 0)
        sub_1405dadb0(&arg1[0xa7], 0)

char rbx_2 = arg1[0x11].b & 1
sub_140af2bc0()

if ((r15_1 & 2) != 0 && rbx_2 != 0)
    (*(*arg1 + 0x2d0))(arg1, 0)

if ((arg1[0x11].b & 1) != 0)
    jump(*(*arg1 + 0x8f8))
