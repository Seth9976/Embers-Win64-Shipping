// 函数: sub_141028fe0
// 地址: 0x141028fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x130)

if (i_1 == 0)
    return 

uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_forward(i_1)
int32_t rdi_1 = temp0_1

if (i_1 == 0)
    return 

int32_t i

do
    int128_t var_18 = *arg2
    sub_141028e60(*(arg1 + (zx.q(rdi_1) << 3) + 0x140), &var_18)
    int32_t rax = 1 << rdi_1.b
    rdi_1 = 0x20
    i = not.d(rax) & i_1
    i_1 = i
    
    if (i != 0)
        uint64_t rflags_2
        int32_t temp0_2
        temp0_2, rflags_2 = _bit_scan_forward(i)
        rdi_1 = temp0_2
while (i != 0)
