// 函数: sub_14102db20
// 地址: 0x14102db20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x130)

if (i_1 == 0)
    return 

uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_forward(i_1)
int32_t rsi_1 = temp0_1

if (i_1 == 0)
    return 

int32_t i

do
    int64_t* rcx = data_143f0f180
    void* rdi_1 = *(arg1 + (zx.q(rsi_1) << 3) + 0x140)
    void* arg_8
    uint64_t r8_2
    int64_t* r9_1
    r8_2, r9_1 = (*(*rcx + 0xf0))(rcx, &arg_8, arg2)
    sub_14102d900(rdi_1, arg_8, r8_2, r9_1)
    sub_1405d1550(&arg_8)
    int32_t rax_2 = 1 << rsi_1.b
    rsi_1 = 0x20
    i = not.d(rax_2) & i_1
    i_1 = i
    
    if (i != 0)
        uint64_t rflags_2
        int32_t temp0_2
        temp0_2, rflags_2 = _bit_scan_forward(i)
        rsi_1 = temp0_2
while (i != 0)
