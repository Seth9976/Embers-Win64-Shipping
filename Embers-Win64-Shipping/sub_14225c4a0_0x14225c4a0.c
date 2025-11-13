// 函数: sub_14225c4a0
// 地址: 0x14225c4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbp_1 = *arg1 + 4
void* rax
int512_t zmm1
rax, zmm1 = sub_14224f4a0(*(data_143f5b298 + 0x680))
int64_t* rcx_2 = data_143ef8520
int64_t var_48 = *rax
char* arg_38
arg_38.b = *arg_38
int64_t* result = (*(*rcx_2 + 0xd8))(rcx_2, arg2, &var_48, 1, 1, &arg_38)

if (result == 0)
    return result

int64_t r8_2 = *result
result[2] = arg6
(*(r8_2 + 0x88))(result, arg3, r8_2)
int64_t* rbx_1 = *arg1[1]

if (rbx_1 != 0)
    int64_t rsi_1 = sx.q(rbx_1[1].d)
    int32_t rax_4 = (rsi_1 + 1).d
    rbx_1[1].d = rax_4
    
    if (rax_4 s> *(rbx_1 + 0xc))
        sub_1405a4d70(rbx_1)
    
    *(*rbx_1 + (rsi_1 << 3)) = result

zmm1.o = arg4
(*(*result + 0xd8))(result, zmm1)
zmm1.o = arg5
(*(*result + 0xe8))(result, zmm1)
int32_t rax_9 = (*(*result + 0x30))(result)
void* rdx_3 = arg1[2]
int16_t var_58 = rbp_1[0xc].w
char var_56_1 = *(rbp_1 + 0x32)
void* rcx_12 = nullptr

if (*(rdx_3 + 8) == 7)
    rcx_12 = rdx_3

char arg_8
sub_1417c7e10(&arg_8, &var_58, rcx_12 != 0, rax_9 == 5)
void* const rdx_5 = 0x10

if (rax_9 == 5)
    rdx_5 = 0x20

int64_t* result_1
(*(*result + 0xa8))(result, sub_140acc970(&result_1, rdx_5 + rbp_1))
char var_68 = arg_8
(*(*result + 0x100))(result, &var_68)
(*(*result + 0x98))(result, sub_140acc970(&result_1, rbp_1))
void* rdx_11 = *arg1
result_1 = result
sub_142211530(&result_1, *(rdx_11 + 0x48), rdx_11 + 0x50)
int64_t* rcx_20 = arg1[2]
(*(*rcx_20 + 0xb8))(rcx_20, result)
(**result)(result)
return result
