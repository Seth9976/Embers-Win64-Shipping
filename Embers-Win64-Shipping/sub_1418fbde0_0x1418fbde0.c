// 函数: sub_1418fbde0
// 地址: 0x1418fbde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t rsi = 0
EnterCriticalSection(&data_143efbb80)
void* var_a0 = arg3
int32_t var_98 = arg4
int32_t var_94 = 0
int32_t var_a8
sub_1418fa310(&data_1439c7360, &var_a8, &var_a0)
int64_t rdx_1 = sx.q(var_a8)

if (rdx_1.d != 0xffffffff)
    rsi = *((rdx_1 << 5) + data_1439c7360 + 0x10)
    sub_1405c3390(&data_1439c7360, rdx_1.d)

LeaveCriticalSection(&data_143efbb80)
char rcx = arg4.b
uint32_t rax_4 = *(arg3 + 0x90) u>> rcx
uint32_t r8_3 = 1
uint32_t rdx_3 = *(arg3 + 0x94) u>> rcx
uint32_t r9 = 1

if (rax_4 u>= 1)
    r8_3 = rax_4

int32_t rax_5 = *(arg3 + 0xc8)

if (rdx_3 u>= 1)
    r9 = rdx_3

uint32_t rcx_2

if (rax_5 s< 0 || rax_5 s<= 2)
    rcx_2 = 1
else if (rax_5 == 3)
    rcx_2 = 6
else if (rax_5 == 5)
    rcx_2 = *(arg3 + 0xc0)
else if (rax_5 != 6)
    rcx_2 = 1
else
    rcx_2 = *(arg3 + 0xc0) * 6

int64_t var_88 = 1
int32_t var_90 = 1
int32_t var_8c = arg4
int32_t result_1 = 1
int64_t var_78 = 0
int64_t var_70 = 0
int32_t var_60 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int32_t var_68 = 1
int32_t var_64 = arg4
uint32_t var_5c = rcx_2
uint32_t var_4c = r8_3
int32_t var_44 = 1
int32_t result

if (arg2 == 0 || data_143f01c92 == 0)
    int64_t var_b8_1 = rsi
    result = sub_1418fbce0(*(*(arg1 + 0x58) + 0x1a50), arg3 + 0x70, &var_90, &var_78)
else
    void*** rcx_5 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_7 = &rcx_5[0xe]
    
    if (rax_7 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x78)
        rcx_5 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_7 = &rcx_5[0xe]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_7
    *data_143f02ba0 = rcx_5
    data_143f02ba0 = &rcx_5[1]
    rcx_5[1] = 0
    *rcx_5 = &data_142ff1dd8
    rcx_5[2] = arg3 + 0x70
    *(rcx_5 + 0x18) = var_90.o
    result = result_1
    rcx_5[5].d = result
    *(rcx_5 + 0x30) = var_78.o
    *(rcx_5 + 0x40) = var_68.o
    *(rcx_5 + 0x50) = var_58.o
    rcx_5[0xc] = r9.q
    rcx_5[0xd] = rsi

__security_check_cookie(rax_1 ^ &var_d8)
return result
