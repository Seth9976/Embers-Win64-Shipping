// 函数: sub_140b4e3b0
// 地址: 0x140b4e3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0x20
uint32_t rax_1 = arg2 u>> 1
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(rax_1)
int32_t r10

if (rax_1 == 0)
    r10 = 0x20
else
    r10 = 0x1f - temp0

uint64_t rflags_1
int32_t temp0_2
temp0_2, rflags_1 = _bit_scan_reverse(rax_1 - 1)
int32_t r11

if (rax_1 == 1)
    r11 = 0x20
else
    r11 = 0x1f - temp0_2

int32_t rdx = 1 << ((0x20 - r11) & not.d(r10 << 0x1a s>> 0x1f)).b

if (rdx u>= 0x20)
    if (arg2 u< 4)
        rdx = 0x20
    
    r9 = rdx

int32_t rax_4

if (arg2 s> 0)
    rax_4 = *(arg1 + 0xab8)
    
    if (rax_4 == 0 || rax_4 s< r9)
    label_140b4e436:
        *(arg1 + 0xab8) = r9
        sub_140b52190(arg1)
        int64_t rax_5
        rax_5.b = 1
        return rax_5
    
    if (rax_4 s> r9 && arg3 != 0)
        goto label_140b4e436

rax_4.b = 0
return rax_4
