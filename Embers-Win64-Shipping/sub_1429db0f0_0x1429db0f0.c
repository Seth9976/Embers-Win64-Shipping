// 函数: sub_1429db0f0
// 地址: 0x1429db0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1c0) != 0)
    int32_t i_1 = 0
    int32_t i = 0
    
    if (*(arg1 + 0x1c8) s> 0)
        do
            data_143cc7040(sx.q(i) * 0x30 + *(arg1 + 0x1c0))
            i += 1
        while (i s< *(arg1 + 0x1c8))
    
    if (*(arg1 + 0x1c8) s> 0)
        int64_t rsi_1 = 0
        
        do
            int64_t* rdi_4 = *(rsi_1 + *(arg1 + 0x1c0) + 0x18)
            sub_1429e1490(*rdi_4 + 0x270)
            sub_1429e7bb0(*rdi_4)
            sub_1429dde60(rdi_4[7])
            DeleteCriticalSection(&rdi_4[9])
            sub_1429dde60(rdi_4)
            i_1 += 1
            rsi_1 += 0x30
        while (i_1 s< *(arg1 + 0x1c8))
    
    DeleteCriticalSection(*(arg1 + 0x550))

void* rcx_8 = *(arg1 + 0x550)

if (rcx_8 != 0)
    sub_1429e13b0(rcx_8)
    sub_1429e15f0(*(arg1 + 0x550) + 0xc70)

sub_1429dde60(*(arg1 + 0x1c0))
sub_1429dde60(*(arg1 + 0x550))
sub_1429dde60(arg1)
return 0
