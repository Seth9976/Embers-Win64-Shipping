// 函数: sub_140b646f0
// 地址: 0x140b646f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t rbx = -1
int64_t r14 = -1
uint8_t r15_1 = (*arg2 u>> 4).b & 1
int32_t var_b8

if (r15_1 == 0)
    int32_t var_b4_1 = arg2[7]
    var_b8 = arg2[8]
    r14 = var_b8.q

int64_t var_98
SYSTEMTIME systemTime

if (FileTimeToSystemTime(&arg2[5], &systemTime) == 0)
    var_98 = 0
else
    sub_140b0a2c0(&var_98, zx.d(systemTime.wYear), zx.d(systemTime.wMonth), zx.d(systemTime.wDay), 
        zx.d(systemTime.wHour), zx.d(systemTime.wMinute), zx.d(systemTime.wSecond), 0)

int64_t var_a0
SYSTEMTIME systemTime_1

if (FileTimeToSystemTime(&arg2[3], &systemTime_1) == 0)
    var_a0 = 0
else
    sub_140b0a2c0(&var_a0, zx.d(systemTime_1.wYear), zx.d(systemTime_1.wMonth), 
        zx.d(systemTime_1.wDay), zx.d(systemTime_1.wHour), zx.d(systemTime_1.wMinute), 
        zx.d(systemTime_1.wSecond), 0)

SYSTEMTIME systemTime_2
int64_t rax_10

if (FileTimeToSystemTime(&arg2[1], &systemTime_2) == 0)
    var_b8.q = 0
    rax_10 = 0
else
    sub_140b0a2c0(&var_b8, zx.d(systemTime_2.wYear), zx.d(systemTime_2.wMonth), 
        zx.d(systemTime_2.wDay), zx.d(systemTime_2.wHour), zx.d(systemTime_2.wMinute), 
        zx.d(systemTime_2.wSecond), 0)
    rax_10 = var_b8.q

int64_t* rdx_6 = arg1[1]
char rcx_9 = *arg2 & 1
int64_t var_90 = rax_10
int64_t var_88 = var_a0
int64_t var_80 = var_98
int64_t var_78 = r14
char var_70
char var_70_1 = ((rcx_9 | 2) * 2) | (var_70 & 0xfc) | r15_1

do
    rbx += 1
while (*(arg2 + (rbx << 1) + 0x2c) != 0)

int32_t rax_15

if (rdx_6[1].d == 0)
    rax_15 = 2

if (rdx_6[1].d != 0 || (rbx + 1).d == 0)
    rax_15 = 1

int16_t* var_b0 = nullptr
int32_t rcx_10 = rbx.d + rax_15
int32_t r14_1 = rdx_6[1].d
int64_t r15_2 = *rdx_6

if (r14_1 != 0 || rcx_10 != 0)
    sub_1405a4c70(&var_b0, r14_1 + rcx_10, 0)
    memcpy(var_b0, r15_2, r14_1 * 2)
else
    int32_t var_a4_1 = 0

sub_140a2cf70(&var_b0, &arg2[0xb], rbx.d)
int64_t* rcx_14 = *arg1
int16_t* const rdx_10 = &data_142d40450

if (r14_1 != 0)
    rdx_10 = var_b0

char rax_17 = (*(*rcx_14 + 8))(rcx_14, rdx_10, &var_90)
int16_t* rcx_15 = var_b0

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

__security_check_cookie(rax_1 ^ &var_f8)
return zx.q(rax_17)
