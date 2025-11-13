// 函数: sub_142c1c830
// 地址: 0x142c1c830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg2 + 0x90)
uint16_t rcx = zx.w(*(arg1 + 2))
uint64_t r8_1 = zx.q(*(arg1 + 3))
int128_t* const rcx_1

if (0 != rcx * 0x100 + r8_1.w)
    rcx_1 = (zx.q(rcx.b) << 8) + arg1 + r8_1
else
    rcx_1 = &data_14369a5d0

int32_t rdx_2 = *(*(rdi + 0x70) + zx.q(*(rdi + 0x5c)) * 0x14)
uint32_t r8_4 = (zx.d(*rcx_1) << 8) + zx.d(*(rcx_1 + 1))
uint32_t rax_2

if (r8_4 == 1)
    rax_2 = sub_142c1e900(rcx_1, rdx_2)
label_142c1c8b9:
    
    if (rax_2 != 0xffffffff)
        sub_142c1d4c0(arg1 + 4, arg2, arg1, arg1 + 6, *(rdi + 0x80) + zx.q(*(rdi + 0x5c)) * 0x14)
        *(rdi + 0x5c) += 1
        int64_t rax_5
        rax_5.b = 1
        return rax_5
else if (r8_4 == 2)
    rax_2 = sub_142c1e990(rcx_1, rdx_2)
    goto label_142c1c8b9

rax_2.b = 0
return rax_2
