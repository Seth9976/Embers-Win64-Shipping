// 函数: sub_141914620
// 地址: 0x141914620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x15be8) != 0)
    void* rax_1 = *(arg1 + 0x15c00)
    
    if (rax_1 != 0)
        *(rax_1 + 0x10) += 1

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
int32_t arg_20 = 0
sub_141916c10(arg1 - 0x18, rsi, sub_14193de20(rcx_10, &arg_20), arg_20, data_1439c74e4)

if (data_143efed00 == 0)
    int64_t rbp_1 = *(*(arg1 + 0x558) + 0x78)
    
    if (rbp_1 != *(arg1 + 0x548))
        sub_14190c0d0(arg1 - 0x18, rbp_1)
        *(arg1 + 0x548) = rbp_1
else
    sub_14190c170(arg1 - 0x18)

if (*(rsi + 0x424) != 0)
    data_143effcd8(0x8893, 0)
    *(rsi + 0x424) = 0

int32_t var_30 = 1
int32_t var_38_1 = 0x10
sub_141916e40(arg1 - 0x18, rsi, 0, arg1 + 0x3c8, 0x10, 1)
char rdx_12 = *(rsi + 0x19c)
int32_t rcx_16 = *(arg1 + 0x8ac)
int32_t var_28
var_30.q = &var_28
arg_20 = 4
void var_24
var_38_1.q = &var_24
var_28 = 0
sub_14190d550(rcx_16, rdx_12, 0, &arg_20, var_38_1, var_30)
int32_t rbx = arg_20

if (data_143eff5c5 != 0 && rbx == 0xe)
    data_143f00310(0x8e72, zx.q(var_28))

data_143effcd8(0x8f3f, zx.q(*(arg2 + 0x28)))
data_143f00380(zx.q(rbx), zx.q(arg3))
jump(data_143effcd8)
