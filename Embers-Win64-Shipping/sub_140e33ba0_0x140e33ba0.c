// 函数: sub_140e33ba0
// 地址: 0x140e33ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = -2

if (*(arg1 + 0x10) != 0)
    return 

int64_t rbx_1 = 0
int32_t rdi_1 = 0

if (arg2 u<= 1 && arg3 == 8)
    rdi_1 = 4
else if (arg2 == 2 && arg3 == 8)
    rdi_1 = 1

void* arg_20 = &data_143e29ae0
EnterCriticalSection(&data_143e29ae0)
int32_t rdx = (*(arg1 + 0x28)).d
int64_t rcx = *(arg1 + 0x20)
data_143e29b34 = sx.d(arg2)
void** const var_50 = &data_142ed6658
int64_t var_48_1 = rcx
int32_t var_40_1 = 0
int32_t var_3c_1 = rdx
void arg_8
int64_t rax_2 = sub_140e3b960(&var_50, arg1 + 0x3c, arg1 + 0x40, &arg_8, arg4, rdi_1)
var_50 = &data_142d4ba00
int64_t rdx_2 = sx.q(*(arg1 + 0x3c) * rdi_1 * *(arg1 + 0x40))
*(arg1 + 0x10) = 0

if (rdx_2 s> *(arg1 + 0x18))
    sub_140a4fbe0(arg1 + 8, rdx_2)
    rbx_1 = *(arg1 + 0x10)

int64_t rax_7 = sx.q(*(arg1 + 0x3c) * rdi_1 * *(arg1 + 0x40)) + rbx_1
*(arg1 + 0x10) = rax_7

if (rax_7 s> *(arg1 + 0x18))
    sub_140a4f990(arg1 + 8)

if (rax_2 != 0)
    memcpy(*(arg1 + 8), rax_2, (*(arg1 + 0x10)).d)
    sub_140a74f90(rax_2)

LeaveCriticalSection(&data_143e29ae0)
