// 函数: sub_1414bb420
// 地址: 0x1414bb420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg4
int64_t rbp = 0
uint64_t rdx = zx.q(arg3[0x2a9].d)
int64_t arg_10 = 0
void* rax_2 = sub_1405948b0((*(rax + 0x40))(arg4, rdx, &arg_10))
void* rdx_1 = &data_143eeb7f8

if (arg8 == 0)
    rdx_1 = &data_143eec038

void* rax_3 = sub_1419cec70(*(rax_2 + 0x28), rdx_1, 0)
*arg2 = data_143a2fe60
int64_t rax_5 = 0
void* rdx_2 = *arg6

if (rdx_2 != 0)
    int64_t rdx_3 = sx.q(*(rdx_2 + 0x10c))
    int64_t* r14_1 = *(arg6[1] + 0x10)
    int64_t* rax_7 = r14_1[3]
    
    if (rax_7[rdx_3] == 0)
        sub_1419ccf30(r14_1, rdx_3.d)
        rax_7 = r14_1[3]
    
    rax_5 = rax_7[rdx_3]

arg2[1] = rax_5
int64_t rax_8 = 0
void* rdx_4 = *arg7

if (rdx_4 != 0)
    int64_t rdx_5 = sx.q(*(rdx_4 + 0x10c))
    int64_t* r14_2 = *(arg7[1] + 0x10)
    int64_t* rax_10 = r14_2[3]
    
    if (rax_10[rdx_5] == 0)
        sub_1419ccf30(r14_2, rdx_5.d)
        rax_10 = r14_2[3]
    
    rax_8 = rax_10[rdx_5]

arg2[5] = rax_8

if (rax_3 != 0)
    int64_t rdx_6 = sx.q(*(rax_3 + 0x10c))
    int64_t* rbx_1 = *(rax_2 + 0x10)
    int64_t* rax_11 = rbx_1[3]
    
    if (rax_11[rdx_6] == 0)
        sub_1419ccf30(rbx_1, rdx_6.d)
        rax_11 = rbx_1[3]
    
    rbp = rax_11[rdx_6]

arg2[4] = rbp
sub_1419870b0(arg1, arg2, 2)
int64_t* rcx_9 = *(rax_2 + 0x28)

if (arg8 == 0)
    int64_t* r9_2 = arg5
    arg5 = arg4
    return sub_1414dcfa0(sub_1419cec70(rcx_9, &data_143eec038, 0), arg1, arg3, r9_2) __tailcall

int64_t* r9 = arg5
arg5 = arg4
return sub_1414dcfa0(sub_1419cec70(rcx_9, &data_143eeb7f8, 0), arg1, arg3, r9) __tailcall
