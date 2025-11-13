// 函数: sub_1422a7b50
// 地址: 0x1422a7b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
int32_t rax = *(arg1 + 0x68)
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(rax)
int32_t result_1 = data_1439c7a8c
int64_t __saved_rbx
int32_t rdx

if (&__saved_rbx == 0x20)
    rdx = 0x20
else
    rdx = 0x1f - temp0

uint64_t rflags_1
char temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(rax - 1)
char r8

if (rax == 1)
    r8 = 0x20
else
    r8 = 0x1f - temp0_1

int32_t result = 1 << ((0x20 - r8) & (not.d(rdx << 0x1a s>> 0x1f)).b)

if (result s< 8)
    *(arg1 + 0x68) = 8
    return result

if (result s< result_1)
    result_1 = result

*(arg1 + 0x68) = result_1
return result
