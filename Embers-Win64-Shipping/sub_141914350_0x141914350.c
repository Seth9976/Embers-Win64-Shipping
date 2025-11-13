// 函数: sub_141914350
// 地址: 0x141914350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15_1 = arg3 * arg4
data_143f0f218
data_143f0f218 += r15_1
data_143f0f214 += 1
void* rbp

if (*(arg1 + 0x15b38) != 1)
    rbp = arg1 + 0x152a0
    
    if (sub_141957ff0(*(arg1 + 0x15ba0)) != 1)
        rbp = arg1 + 0x14a08
else
    rbp = arg1 + 0x152a0

sub_141931440(arg1 - 0x18, rbp)
sub_141918170(arg1 - 0x18, rbp, sub_1419163f0(arg1 - 0x18, rbp))
sub_141917e30(arg1 - 0x18, rbp)
sub_141917980(arg1 - 0x18, rbp)
sub_141917660(arg1 - 0x18, rbp)
sub_141931530(arg1 - 0x18, rbp)

if (*(arg1 + 0x808) != 0)
    sub_14190b1a0(arg1 - 0x18)

sub_141905670(arg1 - 0x18, rbp, arg1 + 0x558, data_1439c7498)
void* rcx_10 = *(arg1 + 0x558)
int32_t arg_20 = 0
sub_141916c10(arg1 - 0x18, rbp, sub_14193de20(rcx_10, &arg_20), arg_20, data_1439c74e4)

if (data_143efed00 == 0)
    int64_t rsi_1 = *(*(arg1 + 0x558) + 0x78)
    
    if (rsi_1 != *(arg1 + 0x548))
        sub_14190c0d0(arg1 - 0x18, rsi_1)
        *(arg1 + 0x548) = rsi_1
else
    sub_14190c170(arg1 - 0x18)

if (*(rbp + 0x424) != 0)
    data_143effcd8(0x8893, 0)
    *(rbp + 0x424) = 0

int32_t rcx_15 = *(arg1 + 0x8ac)
int32_t rsi_2

if (rcx_15 == 0)
    rsi_2 = rcx_15 + 3
else if (rcx_15 == 2)
    rsi_2 = 2
else if (rcx_15 != 5)
    rsi_2 = rcx_15 - 5
    
    if (rcx_15 u< 6)
        rsi_2 = 1
else
    rsi_2 = rcx_15 - 2

int32_t rax_5 = 0

if (rcx_15 == 1)
    rax_5 = 2

int32_t rsi_4 = rsi_2 * arg3 + rax_5
int32_t var_58_1 = 0x10
sub_141916e40(arg1 - 0x18, rbp, arg2, arg1 + 0x3c8, 0x10, rsi_4)
char rdx_12 = *(rbp + 0x19c)
int32_t rcx_17 = *(arg1 + 0x8ac)
int32_t arg_18 = 0
int32_t var_48 = 0
int32_t var_50
var_50.q = &var_48
var_58_1.q = &arg_18
int32_t arg_8 = 4
sub_14190d550(rcx_17, rdx_12, zx.q(arg3), &arg_8, var_58_1, var_50)
int32_t rdi = arg_8

if (data_143eff5c5 != 0 && rdi == 0xe)
    data_143f00310(0x8e72, zx.q(var_48))

if (*(arg1 + 0x15be8) != 0)
    void* rax_6 = *(arg1 + 0x15c00)
    
    if (rax_6 != 0)
        *(rax_6 + 0x10) += 1
        void* rax_7 = *(arg1 + 0x15c00)
        *(rax_7 + 0x14) += r15_1
        void* rax_8 = *(arg1 + 0x15c00)
        *(rax_8 + 0x18) += rsi_4 * arg4

uint64_t r8_4 = zx.q(arg_18)
uint64_t rcx_18 = zx.q(rdi)

if (arg4 != 1)
    return data_143f00180(rcx_18, 0, r8_4, zx.q(arg4))

return data_143eff9f0(rcx_18, 0, r8_4)
