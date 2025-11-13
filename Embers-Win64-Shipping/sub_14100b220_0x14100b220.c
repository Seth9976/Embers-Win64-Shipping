// 函数: sub_14100b220
// 地址: 0x14100b220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
*arg1 = arg2
arg1[1] = arg2
int32_t rax_2 = 0x20

if (arg2 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(arg2)
    rax_2 = temp0_1

arg1[2] = rax_2
bool cond:0 = data_143f0f1d8 != 0
arg1[7] = 0
*(arg1 + 0x20) = 0

if (cond:0)
    arg2 = 1

int32_t var_20 = 0
int32_t var_1c = arg2
int32_t r9
int32_t var_24 = r9
*(arg1 + 0xc) = arg3.o
*(arg1 + 0x28) = 0
*(arg1 + 0x30) = 0
__builtin_memset(&arg1[0x10], 0, 0x14)
*(arg1 + 0x38) = &data_142efce08
InitializeCriticalSection(&arg1[0x16])
SetCriticalSectionSpinCount(&arg1[0x16], 0xfa0)
__security_check_cookie(rax_1 ^ &var_48)
return arg1
