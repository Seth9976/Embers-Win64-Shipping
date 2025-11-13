// 函数: sub_141901f10
// 地址: 0x141901f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t rdi = 0
EnterCriticalSection(&data_143efbb80)
void* var_b0 = arg2
int32_t var_a8 = arg5
int32_t var_a4 = 0
int32_t var_b8
sub_1418fa310(&data_1439c7360, &var_b8, &var_b0)
int64_t rdx_1 = sx.q(var_b8)

if (rdx_1.d != 0xffffffff)
    rdi = *((rdx_1 << 5) + data_1439c7360 + 0x10)
    sub_1405c3390(&data_1439c7360, rdx_1.d)

LeaveCriticalSection(&data_143efbb80)
int32_t rdx_2 = *(arg2 + 0xe4)
char rcx = arg5.b
uint32_t r8_4 = *(arg2 + 0x90) u>> rcx
uint32_t r9_1 = *(arg2 + 0x94) u>> rcx
int32_t rcx_1 = arg3 + arg4 * 6
uint32_t rax_4 = 1
int32_t var_a0 = rdx_2
int32_t var_9c = arg5
int32_t var_98 = 1

if (r8_4 u>= 1)
    rax_4 = r8_4

int32_t var_94 = rcx_1
uint32_t var_5c = rax_4
uint32_t rax_5 = 1
int32_t result_1 = 1
int64_t var_88 = 0

if (r9_1 u>= 1)
    rax_5 = r9_1

int64_t var_80 = 0
int64_t var_68 = 0
int32_t var_60 = 0
int32_t var_74 = arg5
int32_t var_70 = rcx_1
int32_t var_6c = 1
int32_t var_54 = 1
int32_t result

if (data_143f01c92 == 0)
    int64_t var_c8_1 = rdi
    result = sub_1418fbce0(*(*(arg1 + 0x58) + 0x1a50), arg2 + 0x70, &var_a0, &var_88)
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
    rcx_4[2] = arg2 + 0x70
    *(rcx_4 + 0x18) = var_a0.o
    result = result_1
    rcx_4[5].d = result
    *(rcx_4 + 0x30) = var_88.o
    *(rcx_4 + 0x40) = rdx_2.o
    *(rcx_4 + 0x50) = var_68.o
    rcx_4[0xc] = rax_5.q
    rcx_4[0xd] = rdi

__security_check_cookie(rax_1 ^ &var_e8)
return result
