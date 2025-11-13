// 函数: sub_1410290a0
// 地址: 0x1410290a0
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
    int64_t var_18
    sub_141022920(*(*(*(arg1 + (zx.q(rdi_1) << 3) + 0x140) + 0x138) + 0x38), &var_18)
    char rcx_2 = rdi_1.b
    int64_t var_10
    *(arg2 + 0x20) = var_10
    rdi_1 = 0x20
    *(arg2 + 0x18) = var_18
    i = not.d(1 << rcx_2) & i_1
    i_1 = i
    
    if (i != 0)
        uint64_t rflags_2
        int32_t temp0_2
        temp0_2, rflags_2 = _bit_scan_forward(i)
        rdi_1 = temp0_2
while (i != 0)
