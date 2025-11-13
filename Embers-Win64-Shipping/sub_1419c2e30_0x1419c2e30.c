// 函数: sub_1419c2e30
// 地址: 0x1419c2e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2] = arg3
*arg1 = &data_14300e498
arg1[1] = arg2
sub_140b58260(&arg1[3], arg2, 1)
sub_140b4c620(&arg1[4], &arg1[3])
arg1[5].d &= 0xfffffffe
int32_t rcx_12 = (((((((((zx.d(arg9) & 0xfffffffd) | (zx.d(arg10) * 2)) * 2)
    | (zx.d(arg8) & 0xfffffff9)) * 2) | (zx.d(arg7) & 0xfffffff1)) * 2) | (zx.d(arg6) & 0xffffffe1))
    * 2) | (zx.d(arg5) & 0xffffffc1)
int32_t rdi_1 = 0
int32_t rcx_14 = (rcx_12 * 2) | ((zx.d(arg4) | arg1[5].d) & 0xffffff81)
void*** arg_58
arg1[6] = arg_58
arg1[7] = arg11
arg1[8] = arg12
arg1[9] = arg13
arg1[0xa] = arg14
arg1[5].d = rcx_14
void* rcx_15 = &arg1[0x12]
arg1[0xb] = arg15
arg1[0xc] = arg16
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = arg1
arg1[0x10] = 0
arg1[0x11] = 0
*(rcx_15 + 0x10) = 0
*(rcx_15 + 0x18) = 0
*(rcx_15 + 0x1c) = 0x80
void* rax_20 = *(rcx_15 + 0x10)

if (rax_20 != 0)
    rcx_15 = rax_20

*rcx_15 = 0
*(rcx_15 + 8) = 0
arg1[0x16].d = 0xffffffff
*(arg1 + 0xb4) = 0
arg1[0x18] = 0
arg1[0x19].d = 0
arg1[0x1a].b = 0
void* rax_21 = data_143f1da48

if (rax_21 != 0)
    *(rax_21 + 8) = &arg1[0xd]
    rax_21 = data_143f1da48

arg1[0xd] = rax_21
arg1[0xe] = &data_143f1da48
data_143f1da48 = &arg1[0xd]
arg_58 = arg1
sub_1419cfef0()
sub_1419be530(&data_1439c9740, &arg1[4], &arg_58)

if ((arg1[5].b & 1) != 0)
    sub_1419cf300()
    int32_t i_2 = data_143f21a88
    int32_t i = i_2
    
    if (i_2 s> 0)
        do
            int32_t rcx_17 = i & 0x80000001
            
            if (rcx_17 s< 0)
                rcx_17 = ((rcx_17 - 1) | 0xfffffffe) + 1
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(i)
            int32_t i_1 = (temp1_1 - temp0_1) s>> 1
            i = i_1
            int32_t rax_25 = i_1 + rdi_1
            
            if (*(*(data_143f21a80 + (sx.q(rax_25) << 3)) + 0x20) u< arg1[4])
                rdi_1 = rax_25 + rcx_17
        while (i s> 0)
    
    data_143f21a88 = i_2 + 1
    
    if (i_2 + 1 s> data_143f21a8c)
        sub_1405a4d70(&data_143f21a80)
    
    void**** rbx_1 = sx.q(rdi_1) << 3
    void* rdx_7 = data_143f21a80 + rbx_1
    memmove(rdx_7 + 8, rdx_7, (i_2 - rdi_1) << 3)
    *(rbx_1 + data_143f21a80) = arg1

data_143f1d980 += 1
return arg1
