// 函数: sub_141901ce0
// 地址: 0x141901ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t rdi = 0
EnterCriticalSection(&data_143efbb80)
void* var_a0 = arg2
int32_t var_98 = arg4
int32_t var_94 = arg3
int32_t var_a8
sub_1418fa310(&data_1439c7360, &var_a8, &var_a0)
int64_t rdx_1 = sx.q(var_a8)

if (rdx_1.d != 0xffffffff)
    rdi = *((rdx_1 << 5) + data_1439c7360 + 0x10)
    sub_1405c3390(&data_1439c7360, rdx_1.d)

LeaveCriticalSection(&data_143efbb80)
int32_t var_8c = arg4
int32_t var_88 = 1
int32_t var_84 = arg3
int64_t rax_4 = sx.q(*(arg2 + 0xa4)) * 0x28
int32_t result_1 = 1
uint32_t r10 = *(rax_4 + 0x1439c85e8)
char rcx_1 = arg4.b
uint32_t r9 = *(rax_4 + &data_1439c85ec)
int32_t rax_5 = *(arg2 + 0xec)
uint32_t rdx_3 = *(arg2 + 0x9c) u>> rcx_1
uint32_t r8_4 = *(arg2 + 0x98) u>> rcx_1
int32_t var_90 = rax_5
int64_t var_78 = 0

if (r8_4 u>= r10)
    r10 = r8_4

int64_t var_70 = 0
int64_t var_58 = 0
int32_t var_50 = 0

if (rdx_3 u>= r9)
    r9 = rdx_3

int32_t var_64 = arg4
int32_t var_60 = arg3
int32_t var_5c = 1
uint32_t var_4c = r10
int32_t var_44 = 1
int32_t result

if (data_143f01c92 == 0)
    int64_t var_b8_1 = rdi
    result = sub_1418fbce0(*(*(arg1 + 0x58) + 0x1a50), arg2 + 0x78, &var_90, &var_78)
else
    void*** rcx_4 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_6 = &rcx_4[0xe]
    
    if (rax_6 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x78)
        rcx_4 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_6 = &rcx_4[0xe]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_6
    *data_143f02ba0 = rcx_4
    data_143f02ba0 = &rcx_4[1]
    rcx_4[1] = 0
    *rcx_4 = &data_142ff1dd8
    rcx_4[2] = arg2 + 0x78
    *(rcx_4 + 0x18) = var_90.o
    result = result_1
    rcx_4[5].d = result
    *(rcx_4 + 0x30) = var_78.o
    *(rcx_4 + 0x40) = rax_5.o
    *(rcx_4 + 0x50) = var_58.o
    rcx_4[0xc] = r9.q
    rcx_4[0xd] = rdi

__security_check_cookie(rax_1 ^ &var_d8)
return result
