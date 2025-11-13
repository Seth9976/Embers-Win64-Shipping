// 函数: sub_1416ee000
// 地址: 0x1416ee000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = arg1
int64_t* rcx = *arg3
int32_t* rax_1 = (*(*rcx + 0x20))(rcx)
int128_t* rdi = *(r12 + 0x58)
void* r14_2 = &rdi[sx.q(*(r12 + 0x60)) * 4]
void* result
uint128_t var_50
int128_t zmm1

if (rdi == r14_2)
label_1416ee0f2:
    uint128_t* rdi_1 = *(r12 + 0x48)
    void* r14_5 = &rdi_1[sx.q(*(r12 + 0x50)) * 4]
    
    if (rdi_1 == r14_5)
    label_1416ee1b4:
        int64_t var_58_1 = 1
        int64_t* var_60 = nullptr
        int64_t var_68_1 = 0
        sub_1405a4d70(&var_60)
        int64_t* r15_1 = var_60
        int32_t i = var_58_1.d
        *r15_1 = 0
        
        while (i != 0)
            int32_t rsi_1 = (r15_1[sx.q(i - 1)]).d
            
            if (0 != 0)
                memmove(&r15_1[sx.q(i - 1)], &r15_1[sx.q(i)], 0 << 3)
            
            i -= 1
            void* rbx_9 = sx.q(rsi_1) * 0x3c + *(r12 + 0x28)
            
            if (*(rbx_9 + 0x38) == 0)
                if (rbx_9 != rbx_9 + 0x30)
                    result = arg2 + 0xc
                    int32_t* rbx_10 = rbx_9 - arg2
                    int32_t* r14_6 = rbx_9 + 0x30
                    
                    do
                        int64_t rcx_15 = 0
                        
                        while (not(*(result - 0xc) f> *(rbx_10 + result)))
                            if (*result f< *(rbx_10 + result - 0xc))
                                break
                            
                            rcx_15 += 1
                            result += 4
                            
                            if (rcx_15 s>= 3)
                                int64_t i_1 = sx.q(i)
                                var_68_1.d = *r14_6
                                var_68_1:4.d = 0
                                i = (i_1 + 1).d
                                var_58_1.d = i
                                
                                if (i s> var_58_1:4.d)
                                    sub_1405a4d70(&var_60)
                                    i = var_58_1.d
                                    r15_1 = var_60
                                
                                r15_1[i_1] = var_68_1
                                break
                        
                        rbx_10 = &rbx_10[6]
                        r14_6 = &r14_6[1]
                        result = arg2 + 0xc
                    while (rbx_10 + arg2 != rbx_9 + 0x30)
                
                r12 = arg1
            else
                r12 = arg1
                
                if (sub_1416e9cf0(sx.q(*(rbx_9 + 0x30)) * 0x98 + *(r12 + 0x38), arg2, arg3).b == 0)
                    if (r15_1 != 0)
                        sub_140a74f90(r15_1)
                    
                    goto label_1416ee26b_1
        
        if (r15_1 != 0)
            sub_140a74f90(r15_1)
        
        result.b = 1
    else
        int32_t* rbx_6 = rdi_1 - arg2 + 0x28
        
        while (true)
            if (*(rbx_6 + arg2 - 4) != 0 && rax_1 != 0 && *rax_1 != 0 && not(test_bit(
                *(rbx_6 + arg2 - 0x10) | *(rbx_6 + arg2 - 0xc), rax_1[3] u>> 0x15 & 0x1f)))
            label_1416ee1a1:
                rdi_1 = &rdi_1[4]
                rbx_6 = &rbx_6[0x10]
                
                if (rdi_1 == r14_5)
                    goto label_1416ee1b4
                
                continue
            
            int64_t rcx_7 = 0
            void* rax_10 = arg2 + 0xc
            
            while (true)
                if ((*(rax_10 - 0xc)).d f> *(rbx_6 + rax_10))
                    goto label_1416ee1a1
                
                if ((*rax_10).d f< *(rbx_6 + rax_10 - 0xc))
                    goto label_1416ee1a1
                
                rcx_7 += 1
                rax_10 += 4
                
                if (rcx_7 s>= 3)
                    int64_t* rcx_8 = *arg3
                    zmm1 = rdi_1[1]
                    var_50 = *rdi_1
                    uint64_t var_30_2 = rdi_1[2].q
                    int128_t var_40_2 = zmm1
                    
                    if ((*(*rcx_8 + 8))(rcx_8, &var_50).b == 0)
                        break
                    
                    goto label_1416ee1a1
            
            break
        
    label_1416ee26b:
        result.b = 0
else
    int32_t* rbx_3 = rdi - arg2 + 0x28
    
    while (true)
        if (*(rbx_3 + arg2 - 4) != 0 && rax_1 != 0 && *rax_1 != 0 &&
            not(test_bit(*(rbx_3 + arg2 - 0x10) | *(rbx_3 + arg2 - 0xc), rax_1[3] u>> 0x15 & 0x1f)))
        label_1416ee0e1:
            rdi = &rdi[4]
            rbx_3 = &rbx_3[0x10]
            
            if (rdi == r14_2)
                goto label_1416ee0f2
            
            continue
        
        int64_t rcx_3 = 0
        void* rax_5 = arg2 + 0xc
        
        while (true)
            if ((*(rax_5 - 0xc)).d f> *(rbx_3 + rax_5))
                goto label_1416ee0e1
            
            if ((*rax_5).d f< *(rbx_3 + rax_5 - 0xc))
                goto label_1416ee0e1
            
            rcx_3 += 1
            rax_5 += 4
            
            if (rcx_3 s>= 3)
                int64_t* rcx_4 = *arg3
                zmm1 = rdi[1]
                var_50 = *rdi
                uint64_t var_30_1 = rdi[2].q
                int128_t var_40_1 = zmm1
                
                if ((*(*rcx_4 + 8))(rcx_4, &var_50).b == 0)
                    break
                
                goto label_1416ee0e1
        
        break
    
label_1416ee26b_1:
    result.b = 0
return result
