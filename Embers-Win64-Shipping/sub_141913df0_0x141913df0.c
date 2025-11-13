// 函数: sub_141913df0
// 地址: 0x141913df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg7
int32_t r15_1 = arg6 * r14
data_143f0f218
data_143f0f218 += r15_1
data_143f0f214 += 1
void* rsi

if (*(arg1 + 0x15b38) != 1)
    rsi = arg1 + 0x152a0
    
    if (sub_141957ff0(*(arg1 + 0x15ba0)) != 1)
        rsi = arg1 + 0x14a08
else
    rsi = arg1 + 0x152a0

sub_141931440(arg1 - 0x18, rsi)
sub_141918170(arg1 - 0x18, rsi, sub_1419163f0(arg1 - 0x18, rsi))
sub_141917e30(arg1 - 0x18, rsi)
sub_141917980(arg1 - 0x18, rsi)
sub_141917660(arg1 - 0x18, rsi)
sub_141931530(arg1 - 0x18, rsi)

if (*(arg1 + 0x808) != 0)
    sub_14190b1a0(arg1 - 0x18)

sub_141905670(arg1 - 0x18, rsi, arg1 + 0x558, data_1439c7498)
void* rcx_10 = *(arg1 + 0x558)
arg7 = 0
sub_141916c10(arg1 - 0x18, rsi, sub_14193de20(rcx_10, &arg7), arg7, data_1439c74e4)

if (data_143efed00 == 0)
    int64_t rbp_1 = *(*(arg1 + 0x558) + 0x78)
    
    if (rbp_1 != *(arg1 + 0x548))
        sub_14190c0d0(arg1 - 0x18, rbp_1)
        *(arg1 + 0x548) = rbp_1
else
    sub_14190c170(arg1 - 0x18)

int32_t rbp_2 = *(arg2 + 0x28)

if (*(rsi + 0x424) != rbp_2)
    data_143effcd8(0x8893, zx.q(rbp_2))
    *(rsi + 0x424) = rbp_2

int32_t var_58_1 = 0x10
sub_141916e40(arg1 - 0x18, rsi, arg3, arg1 + 0x3c8, 0x10, arg4 + arg5)
char rdx_13 = *(rsi + 0x19c)
int32_t rcx_16 = *(arg1 + 0x8ac)
int32_t arg_8 = 4
int32_t var_48 = 0
int32_t arg_10 = 0
int32_t var_50
var_50.q = &arg_10
var_58_1.q = &var_48
sub_14190d550(rcx_16, rdx_13, zx.q(arg6), &arg_8, var_58_1, var_50)
int32_t rdi = arg_8

if (data_143eff5c5 != 0 && rdi == 0xe)
    data_143f00310(0x8e72, zx.q(arg_10))

int32_t temp1 = *(arg2 + 0x18)
int32_t rdx_15 = var_48
int32_t r10 = 2

if (temp1 == 4)
    r10 = 4

int32_t r8_4 = 0x1403

if (temp1 == 4)
    r8_4 = 0x1405

if (*(arg1 + 0x15be8) != 0)
    void* rax_6 = *(arg1 + 0x15c00)
    
    if (rax_6 != 0)
        *(rax_6 + 0x10) += 1
        void* rax_7 = *(arg1 + 0x15c00)
        *(rax_7 + 0x14) += r15_1
        void* r9_4 = *(arg1 + 0x15c00)
        *(r9_4 + 0x18) += rdx_15 * r14

uint64_t rax_10 = zx.q(r10 * arg5)
uint64_t rcx_17 = zx.q(rdi)

if (r14 u> 1)
    return data_143f00188(rcx_17, rdx_15, r8_4, zx.q(rax_10.d), r14)

var_50.q = rax_10
return data_143effbf8(rcx_17, 0, zx.q(arg4), zx.q(rdx_15), r8_4, var_50)
