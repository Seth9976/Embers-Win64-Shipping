// 函数: sub_142c5f8c0
// 地址: 0x142c5f8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg2 == 0 || *arg2 == 0)
label_142c5fa07:
    result.b = 0
else if (sub_142c70460(U"*", arg2).d == 0)
    char* rsi_1 = -ffffffffffffffff
    
    do
        rsi_1 = &rsi_1[1]
    while (*(rsi_1 + arg2) != 0)
    
    result = strchr(arg1, 0x3a)
    void* r14_2
    
    if (result == 0)
        r14_2 = -ffffffffffffffff
        
        do
            r14_2 += 1
        while (*(arg1 + r14_2) != 0)
    else
        r14_2 = result - arg1
    
    void* rbx_1 = nullptr
    
    if (rsi_1 == 0)
    label_142c5fa07_1:
        result.b = 0
    else
        bool cond:0_1 = 0 == rsi_1
        
        if (0 u< rsi_1)
            goto label_142c5f96b
        
        while (true)
            if (cond:0_1)
                goto label_142c5fa07_1
            
            void* rdi_1 = rbx_1
            
            if (rbx_1 u< rsi_1)
                do
                    if (strchr(", ", sx.d(*(rdi_1 + arg2))) != 0)
                        break
                    
                    rdi_1 += 1
                while (rdi_1 u< rsi_1)
            
            void* r15_1 = rbx_1 + 1
            
            if (*(rbx_1 + arg2) != 0x2e)
                r15_1 = rbx_1
            
            void* r8_2 = rdi_1 - r15_1
            
            if (r8_2 u<= r14_2)
                void* rbx_5 = r15_1 - rdi_1 + r14_2 + arg1
                
                if (sub_142c704d0(r15_1 + arg2, rbx_5, r8_2).d != 0)
                    if (rdi_1 - r15_1 == r14_2)
                        break
                    
                    if (*(rbx_5 - 1) == 0x2e)
                        break
            
            rbx_1 = rdi_1 + 1
            
            if (rbx_1 u>= rsi_1)
                goto label_142c5fa07_1
            
        label_142c5f96b:
            
            if (strchr(", ", sx.d(*(rbx_1 + arg2))) != 0)
                rbx_1 += 1
                
                if (rbx_1 u< rsi_1)
                    goto label_142c5f96b
            
            cond:0_1 = rbx_1 == rsi_1
        
        result.b = 1
else
    result.b = 1

return result
