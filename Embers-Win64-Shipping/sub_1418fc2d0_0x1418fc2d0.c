// 函数: sub_1418fc2d0
// 地址: 0x1418fc2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t rax_2 = sx.q(*(arg3 + 0x3c))
int32_t* rsi = arg5
int64_t r12 = arg8
int32_t rbx = arg7
int64_t var_80
__builtin_memset(&var_80, 0, 0x38)
int64_t r9 = rax_2 * 0x28
int32_t* var_b0 = rsi
int32_t i_2 = divs.dp.d(sx.q(rsi[7] - 1 + *(r9 + &data_1439c85ec)), *(r9 + &data_1439c85ec))
int32_t var_c8 = rbx
int32_t i_3 = i_2
int64_t var_a8 = r12
uint64_t r15_1 = zx.q(divs.dp.d(sx.q(rsi[6] - 1 + *(r9 + 0x1439c85e8)), *(r9 + 0x1439c85e8))
    * (&data_1439c85f4)[rax_2 * 0xa])
void* r9_1 = *(arg1 + 0x58)
int32_t r8_1 = (*(r9_1 + 0xa20)).d
int32_t var_cc = r15_1.d
void*** result_1 =
    sub_1418ba820(r9_1 + 0x3f0, (r8_1 - 1 + rsi[8] * r15_1.d * i_3) & neg.d(r8_1), 1, 4)
void*** result_2 = result_1
void* rcx_4 = result_1[2]
int32_t rax_13 = arg4
int32_t r13_1 = 0
int64_t rdi_1 = zx.q(*(rcx_4 + 0x24)) + *(*(rcx_4 + 0x28) + 0x18)
int32_t var_98 = *(arg3 + 0xe8)
int32_t rcx_6 = rsi[8]
int64_t var_90 = 1
int32_t var_94 = rax_13
int32_t var_88 = 1

if (rcx_6 != 0)
    do
        int64_t rbx_2 = zx.q(rbx * r13_1) + r12
        
        if (i_3 != 0)
            uint64_t i_1 = zx.q(i_2)
            uint64_t i
            
            do
                memcpy(rdi_1, rbx_2, r15_1.d)
                rdi_1 += r15_1
                rbx_2 += zx.q(arg6)
                i = i_1
                i_1 -= 1
            while (i != 1)
            rsi = var_b0
            i_3 = i_2
            r15_1 = zx.q(var_cc)
            r12 = var_a8
        
        rcx_6 = rsi[8]
        r13_1 += 1
        rbx = var_c8
    while (r13_1 u< rcx_6)
    
    result_2 = result_1
    rax_13 = arg4

int64_t var_70
var_70:4.d = rax_13
int64_t var_60
var_60.d = *rsi
var_60:4.d = rsi[1]
int64_t var_58
var_58.d = rsi[2]
var_58:4.d = rsi[6]
int64_t var_50
var_50.d = rsi[7]
var_70.d = 1
int64_t var_68
var_68:4.d = 1
var_50:4.d = rcx_6
void*** result

if (arg2 == 0 || data_143f01c92 == 0)
    void*** result_3 = result_2
    result = sub_1418fbce0(*(*(arg1 + 0x58) + 0x1a50), arg3 + 0x78, &var_98, &var_80)
else
    void*** rcx_10 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_19 = &rcx_10[0xe]
    
    if (rax_19 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x78)
        rcx_10 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_19 = &rcx_10[0xe]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_19
    *data_143f02ba0 = rcx_10
    data_143f02ba0 = &rcx_10[1]
    rcx_10[1] = 0
    *rcx_10 = &data_142ff1dd8
    rcx_10[2] = arg3 + 0x78
    *(rcx_10 + 0x18) = var_98.o
    rcx_10[5].d = var_88
    result = result_1
    *(rcx_10 + 0x30) = var_80.o
    *(rcx_10 + 0x40) = var_70.o
    *(rcx_10 + 0x50) = var_60.o
    rcx_10[0xc] = var_50
    rcx_10[0xd] = result

__security_check_cookie(rax_1 ^ &var_108)
return result
