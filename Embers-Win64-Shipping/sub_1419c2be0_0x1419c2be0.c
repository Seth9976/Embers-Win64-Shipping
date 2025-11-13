// 函数: sub_1419c2be0
// 地址: 0x1419c2be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = arg2
arg1[2] = arg3
*arg1 = &data_142d54980
arg1[3] = arg4
sub_140b58260(&arg1[4], arg4, 1)
sub_140b4c620(&arg1[5], &arg1[4])
int16_t* arg_28
int16_t* rbx = arg_28
sub_140b4c820(&arg1[6], rbx)
void* rcx_3 = &arg1[0x17]
arg1[8] = arg5
int32_t rsi = 0
arg1[9].d = arg6
*(arg1 + 0x4c) = arg13
arg1[0xa].d = arg7
arg1[0xb] = arg8
arg1[0xc] = arg9
arg1[0xd] = arg10
arg1[0xe] = arg11
arg1[0xf] = arg12
arg1[7] = rbx
arg1[0x10] = arg14
arg1[0x11] = 0
arg1[0x12] = 0
arg1[0x13] = arg1
arg1[0x15] = 0
arg1[0x16] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_10 = *(rcx_3 + 0x10)

if (rax_10 != 0)
    rcx_3 = rax_10

*rcx_3 = 0
*(rcx_3 + 8) = 0
arg1[0x1b].d = 0xffffffff
*(arg1 + 0xdc) = 0
arg1[0x1d] = 0
arg1[0x1e].d = 0
sub_140b51dc0(arg3)
arg1[0x14].b = 0
void* rax_11 = data_143f1da58

if (rax_11 != 0)
    *(rax_11 + 8) = &arg1[0x11]
    rax_11 = data_143f1da58

arg1[0x11] = rax_11
arg1[0x12] = &data_143f1da58
data_143f1da58 = &arg1[0x11]
arg_28 = arg1
sub_1419ce870()
sub_1419be530(&data_1439c94a0, &arg1[5], &arg_28)
void* rax_12 = sub_1419cf430(arg2)
void** rdi_1 = rax_12
int32_t i_2 = *(rax_12 + 8)
int32_t i = i_2

if (i_2 s> 0)
    do
        int32_t rcx_7 = i & 0x80000001
        
        if (rcx_7 s< 0)
            rcx_7 = ((rcx_7 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_1 = (temp1_1 - temp0_1) s>> 1
        i = i_1
        int32_t rax_16 = i_1 + rsi
        
        if (*(*(*rax_12 + (sx.q(rax_16) << 3)) + 0x28) u< arg1[5])
            rsi = rax_16 + rcx_7
    while (i s> 0)

rdi_1[1].d = i_2 + 1

if (i_2 + 1 s> *(rdi_1 + 0xc))
    sub_1405a4d70(rdi_1)

void**** rbx_2 = sx.q(rsi) << 3
void* rdx_8 = *rdi_1 + rbx_2
memmove(rdx_8 + 8, rdx_8, (i_2 - rsi) << 3)
*(rbx_2 + *rdi_1) = arg1
return arg1
