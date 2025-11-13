// 函数: sub_1422cfe90
// 地址: 0x1422cfe90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t arg_18 = arg3
uint64_t r10 = zx.q(arg3) * 3
int64_t r9 = **(arg1 + 0x58)
int64_t* rbx_2 = zx.q(*(r9 + (r10 << 3))) * 0x30 + *(arg1 + 0x28)

if (((*(rbx_2 + 0x2c) u>> 3).b & 1) == 0)
    return 0

void* rbp = *rbx_2
int64_t* r12 = *(*(rbp + 0x78) + 0xb8)
int64_t var_38
int64_t* rax_6 = sub_140b63b70(&rbx_2[1], &var_38)

if (&arg2[0xf] != rax_6)
    int64_t rcx_1 = arg2[0xf]
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    arg2[0xf] = *rax_6
    *rax_6 = 0
    arg2[0x10].d = rax_6[1].d
    *(arg2 + 0x84) = *(rax_6 + 0xc)
    rax_6[1] = 0

int64_t rcx_3 = var_38

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

bool rsi_1 = *(arg2 + 0x4e)
arg2[7] = *(rbp + 0x78)
arg2[0xe].w = arg_18
arg2[6] = sx.q(*(rbx_2 + 0x14)) + arg2[0xa]

if (rsi_1 != 0 && ((*(rbx_2 + 0x2c) u>> 7).b & 1) != 0 && *(*(arg1 + 0x58) + 0x20) != 0)
    rsi_1 = *(r9 + (r10 << 3) + 8) != 0xffffffff

sub_140b560b0(*arg2, rsi_1)

if (*(*rbx_2 + 0x38) != 1)
    int64_t* rcx_5 = *arg2
    arg_18.d = rbx_2[2].d
    (*(*rcx_5 + 0x168))(rcx_5, &arg_18)

char rbx_3 = *(arg2 + 0x4e)
*(arg2 + 0x4e) = rsi_1
int64_t result = (*(*r12 + 0x80))(r12, arg2, arg2[6])
*(arg2 + 0x4e) = rbx_3
return result
