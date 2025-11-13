// 函数: sub_1413d4eb0
// 地址: 0x1413d4eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(arg3)
int64_t __saved_r15
int32_t rdi

if (&__saved_r15 == 0x20)
    rdi = 0x20
else
    rdi = 0x1f - temp0

int32_t rdi_2 = rdi << 0x1a s>> 0x1f
uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(arg3 - 1)
int32_t rsi

if (rdi_2 == 0)
    rsi = 0x20
else
    rsi = 0x1f - temp0_1

sub_1413e84a0(arg1)
void* rbx = data_143ec4d80
sub_1413d8670(arg1, arg2, ((0x20 - rsi) & not.d(rdi_2)) + 1, rbx + 8)
int64_t result
int32_t zmm0
zmm0, result = sub_1413d69f0(arg1, arg2, arg3, rbx + 8)
*arg4 = zmm0
return result
