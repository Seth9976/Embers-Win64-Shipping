// 函数: sub_1418d7450
// 地址: 0x1418d7450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*(arg2 + 0x40) != *(arg1 + 0x40))
label_1418d74f9:
    result.b = 0
else
    int64_t rcx = sx.q(*(arg2 + 0x38))
    
    if (rcx.d != *(arg1 + 0x38) || *(arg2 + 0x44) != *(arg1 + 0x44))
    label_1418d74f9_1:
        result.b = 0
    else
        if (rcx.d s> 0)
            void* r12_1 = *(arg1 + 0x30)
            int64_t rsi_1 = 0
            int64_t* rbx_1 = *(arg2 + 0x30)
            void* rdi_1 = r12_1 + 8
            int64_t* r12_2 = r12_1 - rbx_1
            
            do
                if (*(rdi_1 + 8) != rbx_1[2].d)
                    goto label_1418d74f9_2
                
                result = sx.q(rbx_1[1].d)
                
                if (*rdi_1 != result.d)
                    goto label_1418d74f9_2
                
                if (result.d != 0 && memcmp(*(r12_2 + rbx_1), *rbx_1, result * 0x18).d != 0)
                    goto label_1418d74f9_2
                
                rsi_1 += 1
                rdi_1 += 0x18
                rbx_1 = &rbx_1[3]
            while (rsi_1 s< rcx)
        
        if (sub_1418d72b0(arg1 + 0x48, arg2 + 0x48).b == 0)
        label_1418d74f9_2:
            result.b = 0
        else
            result.b = 1

return result
