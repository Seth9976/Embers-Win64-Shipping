// 函数: sub_140baad50
// 地址: 0x140baad50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596d10(arg1, arg2)
int16_t* const rbp = &data_142d40450
int16_t* rbx

if (arg1[1].d == 0)
    rbx = &data_142d40450
else
    rbx = *arg1

void* rbx_1 = &rbx[1]

if (*rbx == 0x2f)
    while (true)
        int16_t rax_1 = *rbx_1
        
        if (rax_1 == 0)
            break
        
        rbx_1 += 2
        
        if (rax_1 == 0x2f)
            if (*rbx_1 == 0)
                break
            
            int32_t rsi = 5
            int32_t rcx_1
            int32_t r10_3
            
            if (sub_140a546e0(rbx_1, u"L10N/", 5) == 0)
                rcx_1 = arg1[1].d
                
                if (rcx_1 != 0)
                    rbp = *arg1
                
                int16_t i = *(rbx_1 + 0xa)
                void* rbx_2 = rbx_1 + 0xa
                r10_3 = ((rbx_1 - 2 - rbp) s>> 1).d
                rsi = 6
                
                while (i != 0)
                    rbx_2 += 2
                    
                    if (i == 0x2f)
                        break
                    
                    i = *rbx_2
                    rsi += 1
                
                goto label_140baae35
            
            if (sub_140a54510(rbx_1, u"L10N") == 0)
                rcx_1 = arg1[1].d
                
                if (rcx_1 != 0)
                    rbp = *arg1
                
                r10_3 = ((rbx_1 - 2 - rbp) s>> 1).d
            label_140baae35:
                int32_t rbx_3 = rcx_1 - 1
                
                if (rcx_1 == 0)
                    rbx_3 = 0
                
                int32_t rbx_4 = rbx_3 - r10_3
                
                if (rsi s>= 0)
                    if (rsi s< rbx_4)
                        rbx_4 = rsi
                    
                    if (rbx_4 != 0)
                        int32_t rax_5 = rcx_1 - rbx_4
                        
                        if (rax_5 != r10_3)
                            int64_t r9_1 = *arg1
                            memmove(r9_1 + (sx.q(r10_3) << 1), r9_1 + (sx.q(rbx_4 + r10_3) << 1), 
                                (rax_5 - r10_3) * 2)
                            rcx_1 = arg1[1].d
                        
                        arg1[1].d = rcx_1 - rbx_4
                        sub_1405a50a0(arg1)
            
            return arg1

return arg1
