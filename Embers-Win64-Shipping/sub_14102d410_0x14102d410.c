// 函数: sub_14102d410
// 地址: 0x14102d410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_558
int64_t rax_1 = __security_cookie ^ &var_558
void* rdx = *(arg1 + 0x138)
void* rsi = **(rdx + 0xae0)
int32_t rax_3 = *(arg1 + 0x130)
uint64_t rax_4

if (rax_3 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rax_3)
    rax_4 = zx.q(temp0_1)
else
    rax_4 = 0x20

void* rbx_1 = rsi + 0x98 + rax_4 * 0x1b8

if (*(rbx_1 + 0x60) != 0)
    sub_141018b50(rbx_1, rdx)

sub_141037e50(arg2, arg1)
int64_t rcx_3 = *(*(rbx_1 + 0x68) + 0xb0)
int64_t var_80
__builtin_memset(&var_80, 0, 0x40)
int64_t var_a0 = 0x40
int64_t var_a8 = zx.q(*(rbx_1 + 0x18)) + rcx_3
int64_t var_98 = zx.q(*(rbx_1 + 0x1c)) + rcx_3
uint64_t var_88 = zx.q(*(rbx_1 + 0x3c))
uint64_t var_90 = zx.q(*(rbx_1 + 0x10) * *(rbx_1 + 0x3c))

if (*(rbx_1 + 0xc) != 0)
    int64_t var_68_1 = zx.q(*(rbx_1 + 0x28)) + rcx_3
    uint64_t var_58_1 = zx.q(*(rbx_1 + 0x3c))
    uint64_t var_60_1 = zx.q(*(rbx_1 + 0xc) * *(rbx_1 + 0x3c))

int64_t var_70 = 0
int64_t var_80_1 = zx.q(*(rbx_1 + 0x20)) + rcx_3
int64_t var_50
var_50.d = arg3
int64_t var_78 = 0x40
var_50:4.d = 1
int64_t var_48
var_48.d = 1
void var_528
memset(&var_528, 0, 0x480)
int64_t var_428 = *(arg2 + 0x18)
int64_t r8
int64_t var_420 = r8
int64_t r9
int64_t var_128 = r9
sub_141037ee0(rbx_1, arg1)
int64_t* var_530 = &var_a8
int64_t result = sub_14101cf50(arg1, &var_528, rsi, 0, 0)
__security_check_cookie(rax_1 ^ &var_558)
return result
