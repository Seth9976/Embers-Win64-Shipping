// 函数: sub_1407c87e0
// 地址: 0x1407c87e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r8 = *(arg1 + 0x12)
int32_t rdi = *(arg1 + 0x20)

if (r8 == 0xffff)
    if (*(arg1 + 8) == 0 || *(arg1 + 0x10) == 1)
        *(arg1 + 0x12) = 0
        r8 = 0
    else
        void* rax_1 = sub_140761a70(arg1 + 8)
        int16_t rcx_1 = *(rax_1 + 0x5c)
        r8 = (*(rax_1 + 0x58) - 1 + rcx_1) & neg.w(rcx_1)
        *(arg1 + 0x12) = r8

if (rdi != sx.d(r8))
    if (r8 == 0xffff)
        if (*(arg1 + 8) == 0 || *(arg1 + 0x10) == 1)
            *(arg1 + 0x12) = 0
            r8 = 0
        else
            void* rax_3 = sub_140761a70(arg1 + 8)
            int16_t rcx_3 = *(rax_3 + 0x5c)
            int16_t rdx = (*(rax_3 + 0x58) - 1 + rcx_3) & neg.w(rcx_3)
            *(arg1 + 0x12) = rdx
            r8 = rdx
    
    int64_t rbx_1 = sx.q(*(arg1 + 0x20))
    int32_t rax_4 = sx.d(r8)
    
    if (rax_4 s> rbx_1.d)
        *(arg1 + 0x20) = rax_4
        
        if (rax_4 s> *(arg1 + 0x24))
            sub_1405daba0(arg1 + 0x18)
        
        memset(rbx_1 + *(arg1 + 0x18), 0, sx.q(rax_4 - rbx_1.d))
    else if (rax_4 s< rbx_1.d && rax_4 != rbx_1.d)
        *(arg1 + 0x20) = rax_4
        sub_1405dac10(arg1 + 0x18)

return memcpy(*(arg1 + 0x18), arg2, *(arg1 + 0x20)) __tailcall
