// 函数: sub_142048ad0
// 地址: 0x142048ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(arg2)
int32_t r9
bool z

r9 = z ? 0x20 : 0x1f - temp0

int32_t r9_2 = r9 << 0x1a s>> 0x1f
uint64_t rflags_1
char temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(arg2 - 1)
char rax_2

if (r9_2 == 0)
    rax_2 = 0x20
else
    rax_2 = 0x1f - temp0_1

arg1[2] = 0xffff
*(arg1 + 0xc) = 0xffff
int32_t rdx = 1
arg1[1] = 0x10
*arg1 = (1 << ((0x20 - rax_2) & (not.d(r9_2)).b)) - 1
*(arg1 + 0x14) = 0x8000

if (arg3 != 0)
    if ((1 << ((0x20 - rax_2) & (not.d(r9_2)).b)) - 1 u>= 1)
        rdx = (1 << ((0x20 - rax_2) & (not.d(r9_2)).b)) - 1
    
    *arg1 = rdx
    int32_t rax_6 = rdx << 0x10
    uint64_t rflags_2
    int32_t temp0_2
    temp0_2, rflags_2 = _bit_scan_reverse(rax_6)
    int32_t r11_1
    
    if (rax_6 == 0)
        r11_1 = 0x20
    else
        r11_1 = 0x1f - temp0_2
    
    int32_t rdx_2 = not.d(rdx << (r11_1 + 0x10).b)
    arg1[1] = r11_1 + 0x10
    arg1[2] = rdx_2
    arg1[5] = 0x8000 << r11_1.b
    arg1[3] = rdx_2
    arg1[4] = 0x10 - r11_1

return arg1
