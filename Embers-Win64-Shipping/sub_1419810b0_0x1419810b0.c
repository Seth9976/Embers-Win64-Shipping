// 函数: sub_1419810b0
// 地址: 0x1419810b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f0f1a4 != 0)
    int32_t rax_1 = *(arg2 + 0x8c)
    uint64_t rflags_1
    int32_t temp0_1
    
    if (rax_1 != 0)
        temp0_1, rflags_1 = _bit_scan_forward(rax_1)
    jump(*(*data_143f0f180 + 0x308))

void* const rbx = nullptr

if (data_143f01c92 != 0 && sub_141989210() != 0)
    rbx = arg2

int32_t rax_4 = *(arg2 + 0x8c)
int32_t r8_2

if (rax_4 != 0)
    uint64_t rflags_2
    int32_t temp0_2
    temp0_2, rflags_2 = _bit_scan_forward(rax_4)
    r8_2 = temp0_2
    int32_t arg_20 = r8_2
else
    r8_2 = rax_4 + 0x20

int64_t* rcx_2 = data_143f0f180
int64_t result = (*(*rcx_2 + 0x308))(rcx_2, arg3, r8_2)

if (rbx != 0)
    result = LeaveCriticalSection(&data_143f02f58)
    data_143f01c8c -= 1

return result
