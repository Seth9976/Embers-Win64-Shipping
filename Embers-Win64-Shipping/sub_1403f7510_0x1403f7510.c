// 函数: sub_1403f7510
// 地址: 0x1403f7510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(arg2 - 1)

if (temp0 + 1 s<= 8)
    int32_t r8_2 = *(arg1 + 0x24)
    int32_t r10_1 = arg1[4].d
    uint32_t temp0_3 = divu.dp.d(0:r10_1, arg2)
    arg1[5].d = temp0_3
    uint32_t temp0_4 = divu.dp.d(0:r8_2, temp0_3)
    int32_t rdx_4
    rdx_4.b = arg2 u< temp0_4 + 1
    int32_t rbx_3 = (arg2 - (arg2 - (neg.d(rdx_4) & (arg2 - temp0_4 - 1)) - temp0_4)) * temp0_3
    *(arg1 + 0x24) = r8_2 - rbx_3
    int32_t rax_15
    
    if (arg2 - (neg.d(rdx_4) & (arg2 - temp0_4 - 1)) - temp0_4 == 1)
        rax_15 = r10_1 - rbx_3
    else
        rax_15 = temp0_3
    
    arg1[4].d = rax_15
    sub_1403f7470(arg1)
    return arg2 - (neg.d(rdx_4) & (arg2 - temp0_4 - 1)) - temp0_4 - 1

int32_t r8 = *(arg1 + 0x24)
int32_t r11_1 = arg1[4].d
uint32_t temp0_1 = divu.dp.d(0:r11_1, ((arg2 - 1) u>> (temp0 - 7).b) + 1)
arg1[5].d = temp0_1
uint32_t temp0_2 = divu.dp.d(0:r8, temp0_1)
int32_t rdx
rdx.b = ((arg2 - 1) u>> (temp0 - 7).b) + 1 u< temp0_2 + 1
int32_t rsi_2
int32_t r9_4 = (((arg2 - 1) u>> (temp0 - 7).b) + 1 - rsi_2) * temp0_1
*(arg1 + 0x24) = r8 - r9_4
int32_t rax_6

if (rsi_2 == 1)
    rax_6 = r11_1 - r9_4
else
    rax_6 = temp0_1

arg1[4].d = rax_6
sub_1403f7470(arg1)
int32_t result = sub_1403f7340(arg1, temp0 - 7) | (((arg2 - 1) u>> (temp0 - 7).b) + 1
    - (neg.d(rdx) & (((arg2 - 1) u>> (temp0 - 7).b) + 1 - temp0_2 - 1)) - temp0_2 - 1) << (temp0 - 7).b

if (result u<= arg2 - 1)
    return result

arg1[6].d = 1
return arg2 - 1
