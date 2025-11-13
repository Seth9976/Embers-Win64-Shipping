// 函数: sub_142b9ea70
// 地址: 0x142b9ea70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20
sub_142b97220(&arg_20, *(arg1 + 0x3c), arg2 + 0x5a0000)
int32_t rdx_2 = arg4 + *(arg1 + 0xc)
uint64_t r8_1 = zx.q(*(arg1 + 0x5c))
int32_t arg_8 = *(arg1 + 8) + arg_20
int32_t arg_c = rdx_2

if (r8_1.d s>= 0)
    int32_t r9_2 = *(arg1 + 0x40)
    
    if (r9_2 u> (r8_1 + 1).d)
        int64_t rcx_1 = *(arg1 + 0x48)
        uint64_t r9_3 = zx.q(r9_2 - 1)
        *(arg1 + 0x40) = r9_3.d
        *(rcx_1 + (r8_1 << 3)) = *(rcx_1 + (r9_3 << 3))
        int64_t rcx_2 = *(arg1 + 0x50)
        *(rcx_2 + r8_1) = *(rcx_2 + r9_3)
        uint64_t rcx_3 = zx.q((r9_3 - 1).d)
        int64_t rax_4 = *(arg1 + 0x50)
        *(rax_4 + r8_1) |= 4
        int64_t rax_5 = *(arg1 + 0x50)
        *(rcx_3 + rax_5) |= 8
    else
        *(arg1 + 0x40) = r8_1.d
    
    *(arg1 + 0x5c) = 0xffffffff
    *(arg1 + 0x58) = 0

*(arg1 + 0x5c) = *(arg1 + 0x40)
*(arg1 + 0x58) = 0
int32_t result = sub_142b9e3b0(arg1 + 0x40, &arg_8, 0)

if (result == 0)
    uint64_t r8_2 = zx.q(*(arg1 + 0x8c))
    arg_8 = *(arg1 + 8) - arg_20
    arg_c = *(arg1 + 0xc) - arg4
    
    if (r8_2.d s>= 0)
        int32_t r9_4 = *(arg1 + 0x70)
        
        if (r9_4 u> (r8_2 + 1).d)
            int64_t rcx_5 = *(arg1 + 0x78)
            uint64_t r9_5 = zx.q(r9_4 - 1)
            *(arg1 + 0x70) = r9_5.d
            uint64_t rdx_4 = zx.q((r9_5 - 1).d)
            *(rcx_5 + (r8_2 << 3)) = *(rcx_5 + (r9_5 << 3))
            int64_t rcx_6 = *(arg1 + 0x80)
            *(rcx_6 + r8_2) = *(rcx_6 + r9_5)
            int64_t rax_14 = *(arg1 + 0x80)
            *(rax_14 + r8_2) |= 4
            int64_t rax_15 = *(arg1 + 0x80)
            *(rdx_4 + rax_15) |= 8
        else
            *(arg1 + 0x70) = r8_2.d
        
        *(arg1 + 0x8c) = 0xffffffff
        *(arg1 + 0x88) = 0
    
    *(arg1 + 0x8c) = *(arg1 + 0x70)
    *(arg1 + 0x88) = 0
    result = sub_142b9e3b0(arg1 + 0x70, &arg_8, 0)
    *(arg1 + 0x18) = arg2
    *(arg1 + 0x14) = 0
    *(arg1 + 0x24) = arg3

return result
