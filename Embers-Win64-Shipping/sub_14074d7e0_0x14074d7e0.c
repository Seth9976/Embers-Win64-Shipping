// 函数: sub_14074d7e0
// 地址: 0x14074d7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg2 != 0)
    void* rax = sub_140871760()
    void* rcx = *(arg2 + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (result << 3)) == rax + 0x30)
        void* rcx_1 = *(arg2 + 0x28)
        *(arg2 + 0x30) = *(arg1 + 0x30)
        *(arg2 + 0x38) = *(arg1 + 0x38)
        *(arg2 + 0x3c) = *(arg1 + 0x3c)
        sub_14076eb70(rcx_1, *(arg1 + 0x38), *(arg1 + 0x3c))
        sub_14076ed50(*(arg2 + 0x28), *(arg1 + 0x30))

result.b = 1
return result
