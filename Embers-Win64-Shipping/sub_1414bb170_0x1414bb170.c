// 函数: sub_1414bb170
// 地址: 0x1414bb170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg4
uint64_t rdx = zx.q(arg3[0x2a9].d)
int64_t rdi = 0
int64_t arg_20 = 0
void* rax_2 = sub_1405948b0((*(rax + 0x40))(arg4, rdx, &arg_20))
void* rdx_1

if (arg8 == 0)
    rdx_1 = &data_143eec458
    
    if (arg9 == 0)
        rdx_1 = &data_143eec718
else
    rdx_1 = &data_143eebc18
    
    if (arg9 == 0)
        rdx_1 = &data_143eebed8

void* rax_3 = sub_1419cec70(*(rax_2 + 0x28), rdx_1, 0)
*arg2 = data_143a2fe60
int64_t rax_5 = 0
void* rdx_2 = *arg6

if (rdx_2 != 0)
    int64_t rdx_3 = sx.q(*(rdx_2 + 0x10c))
    int64_t* rbp_1 = *(arg6[1] + 0x10)
    int64_t* rax_7 = rbp_1[3]
    
    if (rax_7[rdx_3] == 0)
        sub_1419ccf30(rbp_1, rdx_3.d)
        rax_7 = rbp_1[3]
    
    rax_5 = rax_7[rdx_3]

arg2[1] = rax_5
int64_t rax_8 = 0
void* rdx_4 = *arg7

if (rdx_4 != 0)
    int64_t rdx_5 = sx.q(*(rdx_4 + 0x10c))
    int64_t* rbp_2 = *(arg7[1] + 0x10)
    int64_t* rax_10 = rbp_2[3]
    
    if (rax_10[rdx_5] == 0)
        sub_1419ccf30(rbp_2, rdx_5.d)
        rax_10 = rbp_2[3]
    
    rax_8 = rax_10[rdx_5]

arg2[5] = rax_8

if (rax_3 != 0)
    int64_t rdx_6 = sx.q(*(rax_3 + 0x10c))
    int64_t* rsi_1 = *(rax_2 + 0x10)
    int64_t* rdi_1 = rsi_1[3]
    
    if (rdi_1[rdx_6] == 0)
        sub_1419ccf30(rsi_1, rdx_6.d)
        rdi_1 = rsi_1[3]
    
    rdi = rdi_1[rdx_6]

arg2[4] = rdi
sub_1419870b0(arg1, arg2, 2)
int64_t* rcx_9 = *(rax_2 + 0x28)

if (arg8 == 0)
    if (arg9 == 0)
        int64_t* r9_7 = arg5
        arg5 = arg4
        return sub_1414dd3a0(sub_1419cec70(rcx_9, &data_143eec718, 0), arg1, arg3, r9_7) __tailcall
    
    int64_t* r9_5 = arg5
    arg5 = arg4
    return sub_1414dd3a0(sub_1419cec70(rcx_9, &data_143eec458, 0), arg1, arg3, r9_5) __tailcall

if (arg9 == 0)
    int64_t* r9_3 = arg5
    arg5 = arg4
    return sub_1414dd3a0(sub_1419cec70(rcx_9, &data_143eebed8, 0), arg1, arg3, r9_3) __tailcall

int64_t* r9_1 = arg5
arg5 = arg4
return sub_1414dd3a0(sub_1419cec70(rcx_9, &data_143eebc18, 0), arg1, arg3, r9_1) __tailcall
