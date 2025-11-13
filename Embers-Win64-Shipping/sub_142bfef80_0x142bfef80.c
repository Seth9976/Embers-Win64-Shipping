// 函数: sub_142bfef80
// 地址: 0x142bfef80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
uint32_t r10_4 = (zx.d(*(arg1 + 7)) << 0x10) + (zx.d(*(arg1 + 8)) << 8)
    + (zx.d(*(arg1 + 6)) << 0x18) + zx.d(*(arg1 + 9))
int32_t r10_5 = r10_4 - 1
void* rcx_1

if (r10_4 - 1 s< 0)
label_142bff015:
    rcx_1 = &data_14369a5d0
else
    while (true)
        uint64_t r8_1 = zx.q((r10_5 + r9) u>> 1)
        void* rcx = r8_1 * 0xb
        uint32_t rdx_3 = (zx.d(*(rcx + arg1 + 0xa + 1)) << 8) + (zx.d(*(rcx + arg1 + 0xa)) << 0x10)
            + zx.d(*(rcx + arg1 + 0xa + 2))
        int32_t rax_8
        
        if (arg3 u>= rdx_3)
            rax_8.b = arg3 != rdx_3
        
        if (arg3 u< rdx_3 || rax_8 s< 0)
            r10_5 = (r8_1 - 1).d
        else
            if (rax_8 s<= 0)
                rcx_1 = r8_1 * 0xb + arg1 + 0xa
                break
            
            r9 = (r8_1 + 1).d
        
        if (r9 s> r10_5)
            goto label_142bff015

return sub_142bfe860(rcx_1, arg2, arg4, arg1) __tailcall
