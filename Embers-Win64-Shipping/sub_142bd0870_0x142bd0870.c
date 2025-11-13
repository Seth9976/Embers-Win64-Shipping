// 函数: sub_142bd0870
// 地址: 0x142bd0870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* rbp = arg1[2]
int32_t r14 = -1
int32_t var_90 = 3
int32_t var_88
int32_t result

if (sub_142bd0dd0(arg1, &var_90, 1) != 1 || var_88 s< 0)
label_142bd0ae2:
    result = 0xa0
else
    *(rbp + 0x38) = var_88
    
    if (var_88 == 0)
    label_142bd0913:
        int64_t r15_1 = -0x10
        
        while (true)
            int64_t* r10_1 = arg1[1]
            char* rax_9
            uint64_t rdx_3
            
            while (true)
                int32_t rax_4 = r10_1[3].d
                
                if (rax_4 s< 2)
                    if (rax_4 s>= 1)
                        goto label_142bd0984
                    
                    int64_t rdx_1 = r10_1[2]
                    uint32_t rcx_1
                    
                    while (true)
                        char* rax_5 = *r10_1
                        
                        if (rax_5 u>= rdx_1)
                            goto label_142bd09ad
                        
                        rcx_1 = zx.d(*rax_5)
                        *r10_1 = &rax_5[1]
                        
                        if (rcx_1 != 0x20)
                            if (rcx_1 != 9)
                                break
                    
                    if (rcx_1 == 0xd || rcx_1 == 0xa)
                        r10_1[3].d = 2
                    else if (rcx_1 != 0x3b)
                        if (rcx_1 != 0xffffffff && rcx_1 != 0x1a)
                            goto label_142bd0984
                        
                    label_142bd09ad:
                        r10_1[3].d = 3
                    else
                        r10_1[3].d = 1
                    label_142bd0984:
                        int64_t rdx_2 = r10_1[2]
                        
                        while (true)
                            char* rax_7 = *r10_1
                            
                            if (rax_7 u>= rdx_2)
                                goto label_142bd09ad
                            
                            uint32_t rcx_2 = zx.d(*rax_7)
                            *r10_1 = &rax_7[1]
                            
                            if (rcx_2 == 0xd)
                                break
                            
                            if (rcx_2 == 0xa)
                                break
                            
                            if (rcx_2 == 0xffffffff)
                                goto label_142bd09ad
                            
                            if (rcx_2 == 0x1a)
                                goto label_142bd09ad
                        
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
                goto label_142bd0ae2
            
            int32_t rax_10 = sub_142bd14c0(rax_9, rdx_3)
            
            if (rax_10 - 0x14 u> 0x37)
                goto label_142bd0ae2
            
            switch (rax_10)
                case 0x14, 0x15, 0x16
                    int64_t _Base = *(rbp + 0x30)
                    *(rbp + 0x38) = r14 + 1
                    qsort(_Base, zx.q(r14 + 1), 0x10, sub_142bbb210)
                    result = 0
                    break
                case 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x23, 0x26, 
                        0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 
                        0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 
                        0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a
                    goto label_142bd0ae2
                case 0x22, 0x24, 0x25
                    r14 += 1
                    r15_1 += 0x10
                    
                    if (r14 s>= *(rbp + 0x38))
                        goto label_142bd0ae2
                    
                    void* rbx_1 = *(rbp + 0x30)
                    int32_t var_78 = 5
                    int32_t var_68_1 = 5
                    int32_t* rbx_2 = rbx_1 + r15_1
                    int32_t var_58_1 = 3
                    int32_t var_48_1 = 3
                    int32_t rax_11 = sub_142bd0dd0(arg1, &var_78, 4)
                    
                    if (rax_11 s< 3)
                        goto label_142bd0ae2
                    
                    int32_t var_70
                    *rbx_2 = var_70
                    int32_t var_60
                    rbx_2[1] = var_60
                    int32_t var_50
                    
                    if (rax_10 != 0x25)
                        rbx_2[2] = var_50
                        int32_t rax_13
                        int32_t var_40
                        
                        if (rax_10 == 0x22)
                            rax_13 = var_40
                        
                        if (rax_10 != 0x22 || rax_11 != 4)
                            rax_13 = 0
                        
                        rbx_2[3] = rax_13
                        continue
                    else
                        rbx_2[2] = 0
                        rbx_2[3] = var_50
                        continue
                case 0x4b
                    continue
    else
        int32_t result_1
        *(rbp + 0x30) = sub_142b99a90(*arg1, 0x10, 0, var_88, 0, &result_1)
        result = result_1
        
        if (result == 0)
            goto label_142bd0913

__security_check_cookie(rax_1 ^ &var_c8)
return result
