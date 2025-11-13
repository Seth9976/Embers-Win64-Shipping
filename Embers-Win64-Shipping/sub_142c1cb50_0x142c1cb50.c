// 函数: sub_142c1cb50
// 地址: 0x142c1cb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg2 + 0x90)
int128_t* const rbx = &data_14369a5d0
uint16_t rcx = zx.w(*(arg1 + 2))
uint64_t r9_1 = zx.q(*(arg1 + 3))
int128_t* const rcx_1

if (0 != rcx * 0x100 + r9_1.w)
    rcx_1 = (zx.q(rcx.b) << 8) + arg1 + r9_1
else
    rcx_1 = &data_14369a5d0

int32_t rdx_1 = *(*(r9 + 0x70) + zx.q(*(r9 + 0x5c)) * 0x14)
uint32_t r8_5 = (zx.d(*rcx_1) << 8) + zx.d(*(rcx_1 + 1))
uint32_t rax_2

if (r8_5 == 1)
    rax_2 = sub_142c1e900(rcx_1, rdx_1)
label_142c1cbdf:
    
    if (rax_2 != 0xffffffff && rax_2 u< (zx.d(*(arg1 + 4)) << 8) + zx.d(*(arg1 + 5)))
        if (rax_2 u< (zx.d(*(arg1 + 4)) << 8) + zx.d(*(arg1 + 5)))
            rbx = arg1 + ((zx.q(rax_2) + 3) << 1)
        
        sub_142c22da0(arg2, (zx.d(*rbx) << 8) + zx.d(*(rbx + 1)))
        int64_t rax_5
        rax_5.b = 1
        return rax_5
else if (r8_5 == 2)
    rax_2 = sub_142c1e990(rcx_1, rdx_1)
    goto label_142c1cbdf

rax_2.b = 0
return rax_2
