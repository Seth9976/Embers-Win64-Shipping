// 函数: sub_141eb6150
// 地址: 0x141eb6150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141eb52b0(arg1)
*(arg1 + 0xd8) = 0
arg1[0x38] = 0
*(arg1 + 0xe8) = 0
*(arg1 + 0xf0) = 0
*(arg1 + 0xa0) = *arg3
sub_141eb6b40(&arg1[2], arg4)
*(arg1 + 0x78) = *arg5
*(arg1 + 0x88) = arg5[1]
int64_t rcx_1 = *arg6
arg1[0x2c] = arg7
arg1[0x2e] = arg8
*(arg1 + 0x98) = rcx_1
arg1[0x2d] = arg13
sub_140d3a3a0(arg1, arg2)
*(arg1 + 0xc0) = *arg10
arg1[0x32] = arg10[1].d
*(arg1 + 0xcc) = *arg11
arg1[0x35] = arg11[1].d

if (arg12 != 0)
    sub_1407473e0(&arg1[0x36], arg12)
else if (arg1[0x38] != 0)
    int64_t* rcx_4 = *(arg1 + 0xd8)
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x38))(rcx_4, 0)
        int64_t rcx_5 = *(arg1 + 0xd8)
        
        if (rcx_5 != 0)
            *(arg1 + 0xd8) = sub_140a84c80(rcx_5, 0, 0)
        
        arg1[0x38] = 0

int32_t rax_11 = arg1[0x3d]
arg1[0x3c] = 0

if (rax_11 s< 0 && rax_11 != 0)
    sub_1405a5390(&arg1[0x3a], 0)

arg1[0x3e].b = arg9
return arg1
