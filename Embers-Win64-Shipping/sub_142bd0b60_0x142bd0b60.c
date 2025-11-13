// 函数: sub_142bd0b60
// 地址: 0x142bd0b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* rbp = arg1[2]
int32_t rdi = -1
int32_t var_90 = 3
int32_t var_88
int32_t result

if (sub_142bd0dd0(arg1, &var_90, 1) != 1 || var_88 s< 0)
label_142bd0d02:
    result = 0xa0
else
    *(rbp + 0x28) = var_88
    
    if (var_88 == 0)
    label_142bd0bfd:
        int64_t rsi_1 = -0x14
        
        while (true)
            int64_t* r10_1 = arg1[1]
            char* rax_9
            uint64_t rdx_3
            
            while (true)
                int32_t rax_4 = r10_1[3].d
                
                if (rax_4 s< 2)
                    if (rax_4 s>= 1)
                        goto label_142bd0c64
                    
                    int64_t rdx_1 = r10_1[2]
                    uint32_t rcx_1
                    
                    while (true)
                        char* rax_5 = *r10_1
                        
                        if (rax_5 u>= rdx_1)
                            goto label_142bd0c8d
                        
                        rcx_1 = zx.d(*rax_5)
                        *r10_1 = &rax_5[1]
                        
                        if (rcx_1 != 0x20)
                            if (rcx_1 != 9)
                                break
                    
                    if (rcx_1 == 0xd || rcx_1 == 0xa)
                        r10_1[3].d = 2
                    else if (rcx_1 != 0x3b)
                        if (rcx_1 != 0xffffffff && rcx_1 != 0x1a)
                            goto label_142bd0c64
                        
                    label_142bd0c8d:
                        r10_1[3].d = 3
                    else
                        r10_1[3].d = 1
                    label_142bd0c64:
                        int64_t rdx_2 = r10_1[2]
                        
                        while (true)
                            char* rax_7 = *r10_1
                            
                            if (rax_7 u>= rdx_2)
                                goto label_142bd0c8d
                            
                            uint32_t rcx_2 = zx.d(*rax_7)
                            *r10_1 = &rax_7[1]
                            
                            if (rcx_2 == 0xd)
                                break
                            
                            if (rcx_2 == 0xa)
                                break
                            
                            if (rcx_2 == 0xffffffff)
                                goto label_142bd0c8d
                            
                            if (rcx_2 == 0x1a)
                                goto label_142bd0c8d
                        
                        r10_1[3].d = 2
                
                r10_1[3].d = 0
                rax_9 = sub_142bd1340(r10_1)
                
                if (rax_9 != 0)
                    rdx_3 = *r10_1 - rax_9 - 1
                    break
                
                int32_t rcx_4 = r10_1[3].d
                
                if (rcx_4 s< 3 && rcx_4 s>= 2)
                    continue
                
                rdx_3 = 0
                break
            
            if (rax_9 == 0)
                goto label_142bd0d02
            
            int32_t rax_10 = sub_142bd14c0(rax_9, rdx_3)
            
            if (rax_10 s< 0x14)
                goto label_142bd0d02
            
            if (rax_10 s> 0x15 && rax_10 != 0x17)
                if (rax_10 == 0x38)
                    rdi += 1
                    rsi_1 += 0x14
                    
                    if (rdi s>= *(rbp + 0x28))
                        goto label_142bd0d02
                    
                    void* rbx_1 = *(rbp + 0x20)
                    int32_t var_78 = 3
                    int32_t var_68_1 = 2
                    int32_t* rbx_2 = rbx_1 + rsi_1
                    int32_t var_58_1 = 2
                    int32_t var_48_1 = 2
                    int32_t var_38_1 = 2
                    
                    if (sub_142bd0dd0(arg1, &var_78, 5) != 5)
                        goto label_142bd0d02
                    
                    int32_t var_70
                    *rbx_2 = var_70
                    int32_t var_60
                    rbx_2[1] = var_60
                    int32_t var_50
                    rbx_2[2] = var_50
                    int32_t var_40
                    rbx_2[3] = var_40
                    int32_t var_30
                    rbx_2[4] = var_30
                    continue
                else
                    if (rax_10 != 0x4b)
                        goto label_142bd0d02
                    
                    continue
            
            *(rbp + 0x28) = rdi + 1
            result = 0
            break
    else
        int32_t result_1
        *(rbp + 0x20) = sub_142b99a90(*arg1, 0x14, 0, var_88, 0, &result_1)
        result = result_1
        
        if (result == 0)
            goto label_142bd0bfd

__security_check_cookie(rax_1 ^ &var_c8)
return result
