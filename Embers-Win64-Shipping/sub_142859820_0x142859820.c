// 函数: sub_142859820
// 地址: 0x142859820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void* rbx = *(arg1 + 0x128)
int32_t* r14 = arg4

if (rbx != 0)
    if (arg6 != 0)
        sub_1428a5c60(&data_143feaef8, sub_142858f00)
        int32_t* rcx = data_143feaef0
        *arg6 = 0
        int32_t var_38 = arg1[0x48]
        
        if (rcx != 0)
            int32_t rax_2 = sub_1428989f0(rcx, &var_38)
            *arg6 = sub_142898ea0(data_143feaef0, rax_2)
        
        if (arg2 != 0)
            goto label_1428598ea
        
        if (arg3 == 0)
            return 1
    else if (arg2 != 0)
    label_1428598ea:
        
        if (arg3 != 0)
            void* const rcx_2 = &data_1434da090
            int64_t rax_5 = 0
            int64_t rax_6
            
            while (true)
                if (*rcx_2 == *(rbx + 0x24))
                    if (rax_5.d == 0xffffffff)
                        rax_6 = 0
                    else if (rax_5.d != 5)
                        rax_6 = *((sx.q(rax_5.d) << 3) + 0x143feae40)
                    else
                        rax_6 = sub_1428bc140()
                    
                    break
                
                rax_5 += 1
                rcx_2 += 8
                
                if (rax_5 u>= 0x16)
                    rax_6 = 0
                    break
            
            *arg2 = rax_6
            void* const rcx_3 = &data_1434da140
            int64_t rax_8 = 0
            
            while (true)
                if (*rcx_3 != *(rbx + 0x28))
                    rax_8 += 1
                    rcx_3 += 8
                    
                    if (rax_8 u< 0xc)
                        continue
                else if (rax_8.d != 0xffffffff)
                    int64_t rcx_4 = sx.q(rax_8.d)
                    *arg3 = (&data_143feaf00)[rcx_4]
                    
                    if (r14 != 0)
                        *r14 = *((rcx_4 << 2) + 0x143b815c8)
                    
                    if (arg5 != 0)
                        *arg5 = *((rcx_4 << 3) + 0x143feaf60)
                    
                    break
                
                *arg3 = 0
                
                if (r14 != 0)
                    *r14 = 0
                
                if (arg5 != 0)
                    *arg5 = 0
                
                int32_t* rax_10 = nullptr
                
                if (*(rbx + 0x28) != 0x40)
                    rax_10 = r14
                
                r14 = rax_10
                break
            
            void* rcx_6 = *arg2
            
            if (rcx_6 != 0)
                bool c_1
                
                if (*arg3 == 0)
                    c_1 = test_bit(sub_142890eb0(rcx_6), 0x15)
                
                if ((*arg3 != 0 || c_1) && (r14 == 0 || *r14 != 0))
                    if (arg7 != 0)
                        return 1
                    
                    int32_t rcx_7 = *arg1
                    
                    if ((rcx_7 & 0xffffff00) == 0x300 && rcx_7 s>= 0x301)
                        int64_t rax_17
                        
                        if (*(rbx + 0x24) == 4 && *(rbx + 0x28) == 1)
                            rax_17 = sub_14289b930("RC4-HMAC-MD5")
                        
                        if (*(rbx + 0x24) == 4 && *(rbx + 0x28) == 1 && rax_17 != 0)
                            *arg2 = rax_17
                            *arg3 = 0
                        else
                            if (*(rbx + 0x24) == 0x40 && *(rbx + 0x28) == 2)
                                rax_17 = sub_14289b930("AES-128-CBC-HMAC-SHA1")
                            
                            if (*(rbx + 0x24) == 0x40 && *(rbx + 0x28) == 2 && rax_17 != 0)
                                *arg2 = rax_17
                                *arg3 = 0
                            else
                                if (*(rbx + 0x24) == 0x80 && *(rbx + 0x28) == 2)
                                    rax_17 = sub_14289b930("AES-256-CBC-HMAC-SHA1")
                                
                                if (*(rbx + 0x24) == 0x80 && *(rbx + 0x28) == 2 && rax_17 != 0)
                                    *arg2 = rax_17
                                    *arg3 = 0
                                else
                                    if (*(rbx + 0x24) == 0x40 && *(rbx + 0x28) == 0x10)
                                        rax_17 = sub_14289b930("AES-128-CBC-HMAC-SHA256")
                                    
                                    if (*(rbx + 0x24) == 0x40 && *(rbx + 0x28) == 0x10
                                            && rax_17 != 0)
                                        *arg2 = rax_17
                                        *arg3 = 0
                                    else if (*(rbx + 0x24) == 0x80 && *(rbx + 0x28) == 0x10)
                                        rax_17 = sub_14289b930("AES-256-CBC-HMAC-SHA256")
                                        
                                        if (rax_17 != 0)
                                            *arg2 = rax_17
                                            *arg3 = 0
                    
                    return 1

return 0
