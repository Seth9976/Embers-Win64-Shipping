// 函数: sub_140cf05a0
// 地址: 0x140cf05a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg3
(*(*arg3 + 0xf8))(arg3, &arg1[1])
arg1[2].b = 0
*(arg1 + 0x14) = arg3[5]
__builtin_memset(arg1 + 0x1c, 0, 0x24)
arg1[8].d = arg4
arg1[9] = -1
__builtin_memset(&arg1[0xa], 0, 0x11)
*(arg1 + 0x64) = 0
*(arg1 + 0x6c) = 0
int64_t rcx_1 = *(arg3[1] + 0x10)

if (((rcx_1 u>> 0x14).b & 1) != 0)
    *(arg1 + 0x1c) = *(arg3[0xf] + 0x18)
    int64_t* rcx_3 = arg3[0xf]
    void var_18
    *(arg1 + 0x50) = *(*(*rcx_3 + 0x318))(rcx_3, &var_18)
    return arg1

void* rax_11

if (((rcx_1 u>> 0x30).b & 1) == 0)
    if ((rcx_1.b u>> 6 & 1) != 0)
        rax_11 = arg3[0xf]
        goto label_140cf0677
    
    void arg_8
    
    if (((rcx_1 u>> 0x15).b & 1) != 0 || ((rcx_1 u>> 0x2f).b & 1) != 0)
        int64_t* rcx_4 = arg3[0xf]
        *(arg1 + 0x2c) = *(*(*rcx_4 + 0xf8))(rcx_4, &arg_8)
        return arg1
    
    if (((rcx_1 u>> 0x2e).b & 1) != 0)
        int64_t* rcx_6 = arg3[0xf]
        *(arg1 + 0x2c) = *(*(*rcx_6 + 0xf8))(rcx_6, &arg_8)
        int64_t* rcx_8 = arg3[0x10]
        *(arg1 + 0x34) = *(*(*rcx_8 + 0xf8))(rcx_8, &arg_8)
        return arg1
    
    if (((rcx_1 u>> 0x11).b & 1) != 0)
        int64_t rax_29
        rax_29.b = (*(arg3 + 0x7b) & *(zx.q(*(arg3 + 0x79)) + arg5)) != 0
        arg1[2].b = rax_29.b
else
    rax_11 = arg3[0x10]
label_140cf0677:
    
    if (rax_11 != 0)
        *(arg1 + 0x24) = *(rax_11 + 0x18)
return arg1
