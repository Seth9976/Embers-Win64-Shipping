// 函数: sub_1418d72b0
// 地址: 0x1418d72b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg1[0x26].d)

if (result.d != arg2[0x26].d)
label_1418d7424:
    result.b = 0
else
    int64_t rbx_1 = sx.q(arg1[1].d)
    
    if (rbx_1.d != arg2[1].d)
    label_1418d7424_1:
        result.b = 0
    else if (memcmp(arg1[0x25], arg2[0x25], result << 2).d != 0)
    label_1418d7424_2:
        result.b = 0
    else
        int32_t i = 0
        
        if (rbx_1.d s> 0)
            void* rax = *arg2
            int64_t rdi_1 = 0
            int16_t* r14_2 = *arg1 - rax
            int16_t* rbx_2 = rax + 0x12
            
            do
                if (*(r14_2 + rbx_2) != *rbx_2)
                    goto label_1418d7424_2
                
                if (*(r14_2 + rbx_2 - 2) != rbx_2[-1])
                    goto label_1418d7424_2
                
                result = sx.q(*(r14_2 + rbx_2 - 0xa))
                
                if (result.d != *(rbx_2 - 0xa))
                    goto label_1418d7424_2
                
                if (result.d != 0
                        && memcmp(*(r14_2 + rbx_2 - 0x12), *(rbx_2 - 0x12), result << 2).d != 0)
                    goto label_1418d7424_2
                
                rdi_1 += 1
                rbx_2 = &rbx_2[0xc]
            while (rdi_1 s< rbx_1)
        
        void* rbx_3 = &arg1[8]
        void* rsi_1 = arg2 - arg1
        
        do
            if (*rbx_3 != *(rsi_1 + rbx_3))
                goto label_1418d7424_2
            
            if (*(rbx_3 + 2) != *(rsi_1 + rbx_3 + 2))
                goto label_1418d7424_2
            
            result = sx.q(*(rbx_3 - 0x28))
            
            if (result.d != *(rsi_1 + rbx_3 - 0x28))
                goto label_1418d7424_2
            
            int64_t rdi_2 = sx.q(*(rbx_3 - 8))
            
            if (rdi_2.d != *(rsi_1 + rbx_3 - 8))
                goto label_1418d7424_2
            
            int64_t r14_3 = sx.q(*(rbx_3 - 0x18))
            
            if (r14_3.d != *(rsi_1 + rbx_3 - 0x18))
                goto label_1418d7424_2
            
            if (memcmp(*(rbx_3 - 0x30), *(rsi_1 + rbx_3 - 0x30), result << 2).d != 0)
                goto label_1418d7424_2
            
            if (memcmp(*(rbx_3 - 0x10), *(rsi_1 + rbx_3 - 0x10), rdi_2 * 2).d != 0)
                goto label_1418d7424_2
            
            if (memcmp(*(rbx_3 - 0x20), *(rsi_1 + rbx_3 - 0x20), r14_3 * 6).d != 0)
                goto label_1418d7424_2
            
            i += 1
            rbx_3 += 0x38
        while (i u< 5)
        
        result.b = 1

return result
