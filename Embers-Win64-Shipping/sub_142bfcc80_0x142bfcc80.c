// 函数: sub_142bfcc80
// 地址: 0x142bfcc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r15 = zx.q(arg1[2])
uint64_t r12 = zx.q(*arg1)
uint64_t r14 = zx.q(arg1[1])
uint32_t r13 = zx.d(arg1[3])

if (arg3 u>= (r12.d << 0x18) + (r15.d << 8) + (r14.d << 0x10) + r13)
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
else
    int32_t rbx_1 = 0
    uint32_t i_2 = zx.d(arg1[4])
    uint32_t i_1 = i_2
    void* rcx_1 = &arg1[5 + zx.q(i_2 * arg3)]
    
    if (i_2 != 0)
        uint32_t i
        
        do
            uint32_t rax_6 = zx.d(*rcx_1)
            rcx_1 += 1
            rbx_1 = (rbx_1 << 8) + rax_6
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *(arg2 + 0x10) = sub_142c02cd0(arg1, arg3)
    *(arg2 + 8) =
        zx.q(rbx_1) + zx.q(i_2 * ((((((r12 << 8) + r14) << 8) + r15) << 8).d + r13 + 1)) + 4 + arg1

return arg2
