// 函数: sub_142ad49a0
// 地址: 0x142ad49a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (arg2 + 0x4e) & 0x80000003

if (rax_1 s< 0)
    rax_1 = ((rax_1 - 1) | 0xfffffffc) + 1

if (rax_1 == 0)
    int32_t rdx_5
    
    if (arg2 + 0x4e == (arg2 + 0x4e) s/ 0x64 * 0x64)
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = muls.dp.d(0x51eb851f, arg2 + 0x4e)
        rdx_5 = temp3_1 s>> 7
    
    if (arg2 + 0x4e != (arg2 + 0x4e) s/ 0x64 * 0x64
            || arg2 + 0x4e == (rdx_5 + (rdx_5 u>> 0x1f)) * 0x190)
        return 0x16e

return 0x16d
