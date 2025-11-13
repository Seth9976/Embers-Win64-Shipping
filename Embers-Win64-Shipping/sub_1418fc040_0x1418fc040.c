// 函数: sub_1418fc040
// 地址: 0x1418fc040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* r14 = arg3
int64_t rdi = arg7
int64_t r10 = sx.q(*(arg3 + 0x3c)) * 5
int64_t var_78
__builtin_memset(&var_78, 0, 0x38)
void* r9 = *(arg1 + 0x58)
int32_t i_2 =
    divs.dp.d(sx.q(arg5[5] - 1 + *((r10 << 3) + &data_1439c85ec)), *((r10 << 3) + &data_1439c85ec))
int32_t r8 = (*(r9 + 0xa20)).d
uint32_t count =
    divs.dp.d(sx.q(arg5[4] - 1 + *((r10 << 3) + 0x1439c85e8)), *((r10 << 3) + 0x1439c85e8))
    * (&data_1439c85f4)[r10 * 2]
void*** rax_13 = sub_1418ba820(r9 + 0x3f0, (r8 - 1 + count * i_2) & neg.d(r8), 1, 4)
void*** r15 = rax_13
void* rcx_3 = rax_13[2]
int32_t rax_14 = arg4
int64_t rbx_1 = zx.q(*(rcx_3 + 0x24)) + *(*(rcx_3 + 0x28) + 0x18)
int64_t var_88 = 1
int32_t var_90 = *(r14 + 0xe0)
int32_t var_8c = rax_14
int32_t var_80 = 1

if (i_2 != 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        memcpy(rbx_1, rdi, count)
        rbx_1 += zx.q(count)
        rdi += zx.q(arg6)
        i = i_1
        i_1 -= 1
    while (i != 1)
    r14 = arg3
    r15 = rax_13
    rax_14 = arg4

int64_t var_68
var_68:4.d = rax_14
int64_t var_58
var_58.d = *arg5
var_58:4.d = arg5[1]
int64_t var_50
var_50:4.d = arg5[4]
int64_t var_48
var_48.d = arg5[5]
var_68.d = 1
int64_t var_60
var_60:4.d = 1
int32_t var_44 = 1
void*** result

if (arg2 == 0 || data_143f01c92 == 0)
    void*** var_c8_1 = r15
    result = sub_1418fbce0(*(*(arg1 + 0x58) + 0x1a50), r14 + 0x70, &var_90, &var_78)
else
    result = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rcx_6 = &result[0xe]
    
    if (rcx_6 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x78)
        result = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rcx_6 = &result[0xe]
    
    data_143f02bac += 1
    data_143f02bc8 = rcx_6
    *data_143f02ba0 = result
    data_143f02ba0 = &result[1]
    result[1] = 0
    *result = &data_142ff1dd8
    result[2] = r14 + 0x70
    *(result + 0x18) = var_90.o
    result[5].d = var_80
    *(result + 0x30) = var_78.o
    *(result + 0x40) = var_68.o
    *(result + 0x50) = var_58.o
    result[0xc] = var_48
    result[0xd] = r15

__security_check_cookie(rax_1 ^ &var_e8)
return result
