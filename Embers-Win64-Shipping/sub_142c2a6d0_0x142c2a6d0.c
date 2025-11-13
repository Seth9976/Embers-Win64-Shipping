// 函数: sub_142c2a6d0
// 地址: 0x142c2a6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const rbx = &data_14369a5d0
uint16_t rcx = zx.w(*(arg1 + 2))
uint64_t r9 = zx.q(*(arg1 + 3))
int128_t* const rcx_1

if (0 != rcx * 0x100 + r9.w)
    rcx_1 = (zx.q(rcx.b) << 8) + arg1 + r9
else
    rcx_1 = &data_14369a5d0

int32_t rdx = **(arg2 + 8)
uint32_t r8_4 = (zx.d(*rcx_1) << 8) + zx.d(*(rcx_1 + 1))
uint32_t result

if (r8_4 == 1)
    result = sub_142c1e900(rcx_1, rdx)
label_142c2a75d:
    
    if (result != 0xffffffff)
        int128_t* const rax_2
        
        if (result u< (zx.d(*(arg1 + 4)) << 8) + zx.d(*(arg1 + 5)))
            rax_2 = arg1 + ((zx.q(result) + 3) << 1)
        else
            rax_2 = &data_14369a5d0
        
        uint16_t rdx_2 = zx.w(*rax_2)
        uint64_t r8_6 = zx.q(*(rax_2 + 1))
        
        if (0 != rdx_2 * 0x100 + r8_6.w)
            rbx = (zx.q(rdx_2.b) << 8) + arg1 + r8_6
        
        return sub_142c2a610(rbx, arg2)
else if (r8_4 == 2)
    result = sub_142c1e990(rcx_1, rdx)
    goto label_142c2a75d

result.b = 0
return result
