// 函数: sub_142690ab0
// 地址: 0x142690ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1[0x1d] + 0x4a0) = 0xd
void* rdi = *(arg1[0x1d] + 0x4a8)
void* rcx = *(rdi + 8)

if (rcx != 0)
    sub_142609270(rcx)

*(rdi + 8) = 0
sub_142679620(rdi + 0x10, 0)
void* rax_2 = arg1[0x1d]
int128_t zmm0 = *(rax_2 + 0x454) ^ data_142d3f780
arg1[0x50] = (_mm_unpacklo_ps(*(rax_2 + 0x450) ^ data_142d3f780, *(rax_2 + 0x458))).q
arg1[0x51].d = zmm0.d
sub_142677940(arg1)
sub_14268cf50(arg1)
uint64_t result
result.b = 1
return result
