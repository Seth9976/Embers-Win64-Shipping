// 函数: sub_1414fe5b0
// 地址: 0x1414fe5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *arg2
uint64_t result = zx.q(rcx) & 0x3fffff

if (result.d u< *(arg1 + 0xa0))
    void* rbx_3 = result * 0x60 + *(arg1 + 0x98)
    
    if (*(rbx_3 + 0x5c) == (rcx u>> 0x16).w)
        int32_t rax_1 = sub_1414fd180(arg1 + 0x98)
        int64_t rcx_3 = *(arg1 + 0xa8)
        int64_t rdx = sx.q(*(rbx_3 + 0x50))
        int64_t r10_1 = sx.q(rax_1)
        void* r9_2 = (rdx << 5) + rcx_3
        int64_t r8_1 = r10_1 << 5
        *(r8_1 + rcx_3 + 0x14) = rdx.d
        *(r8_1 + rcx_3 + 0x18) = *(r9_2 + 0x18)
        *((sx.q(*(r9_2 + 0x18)) << 5) + *(arg1 + 0xa8) + 0x14) = r10_1.d
        *(r9_2 + 0x18) = r10_1.d
        void* rcx_7 = *(arg1 + 0xa8) + r8_1
        *rcx_7 = arg3
        *(rcx_7 + 8) = arg4
        result = zx.q(*arg2)
        *(rcx_7 + 0x10) = result.d
        *(rcx_7 + 0x1c) = 0

return result
