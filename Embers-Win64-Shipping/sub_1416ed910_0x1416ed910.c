// 函数: sub_1416ed910
// 地址: 0x1416ed910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg3
void* rbp = arg1
int64_t* rcx = *r15
(*(*rcx + 0x20))(rcx)
int32_t* rdi = *(rbp + 0x58)
void* rsi_1 = sx.q(*(rbp + 0x60)) * 0x1c + rdi
int64_t result
int64_t var_48

if (rdi == rsi_1)
label_1416ed9d3:
    int64_t* var_38 = nullptr
    int64_t var_30_1 = 1
    var_48 = 0
    sub_1405a4d70(&var_38)
    int64_t* r12_1 = var_38
    int32_t r14_1 = var_30_1.d
    *r12_1 = var_48
    
    if (r14_1 != 0)
        while (true)
            int32_t rdi_1 = (r12_1[sx.q(r14_1 - 1)]).d
            
            if (0 != 0)
                memmove(&r12_1[sx.q(r14_1 - 1)], &r12_1[sx.q(r14_1)], 0 << 3)
            
            r14_1 -= 1
            void* rbx_6 = sx.q(rdi_1) * 0x3c + *(rbp + 0x28)
            
            if (*(rbx_6 + 0x38) != 0)
                int64_t rcx_5 = sx.q(*(rbx_6 + 0x30)) * 5
                int64_t rax_10 = *(arg1 + 0x38)
                int32_t* rdi_2 = *(rax_10 + (rcx_5 << 3))
                void* rbp_3 = sx.q(*(rax_10 + (rcx_5 << 3) + 8)) * 0x1c + rdi_2
                
                if (rdi_2 != rbp_3)
                    int64_t result_1 = &rdi_2[4]
                    int32_t* rbx_9 = arg2 - rdi_2 - 4
                    
                    do
                        int64_t i = 0
                        result = result_1
                        
                        do
                            if (*(result - 0xc) f> *(rbx_9 + result))
                                goto label_1416edaf4
                            
                            if (*result f< *(rbx_9 + result - 0xc))
                                goto label_1416edaf4
                            
                            i += 1
                            result += 4
                        while (i s< 3)
                        
                        int64_t* rcx_6 = *r15
                        var_48.d = *rdi_2
                        
                        if ((*(*rcx_6 + 8))(rcx_6, &var_48).b == 0)
                            if (r12_1 != 0)
                                sub_140a74f90(r12_1)
                            
                            goto label_1416edbcc
                        
                    label_1416edaf4:
                        rdi_2 = &rdi_2[7]
                        result_1 += 0x1c
                        rbx_9 -= 0x1c
                    while (rdi_2 != rbp_3)
            else if (rbx_6 != rbx_6 + 0x30)
                void* rbx_10 = rbx_6 - arg2
                int32_t* rsi_2 = rbx_6 + 0x30
                
                do
                    int64_t rcx_7 = 0
                    void* rax_13 = arg2 + 0xc
                    
                    while (not(*(rax_13 - 0xc) f> *(rbx_10 + rax_13)))
                        if (*rax_13 f< *(rbx_10 + rax_13 - 0xc))
                            break
                        
                        rcx_7 += 1
                        rax_13 += 4
                        
                        if (rcx_7 s>= 3)
                            int32_t rax_14 = *rsi_2
                            int64_t rdi_3 = sx.q(r14_1)
                            int32_t var_3c_1 = 0
                            r14_1 = (rdi_3 + 1).d
                            var_30_1.d = r14_1
                            
                            if (r14_1 s> var_30_1:4.d)
                                sub_1405a4d70(&var_38)
                                r14_1 = var_30_1.d
                                r12_1 = var_38
                            
                            r12_1[rdi_3] = rax_14.q
                            break
                    
                    rbx_10 += 0x18
                    rsi_2 = &rsi_2[1]
                while (rbx_10 + arg2 != rbx_6 + 0x30)
                
                r15 = arg3
            
            if (r14_1 == 0)
                break
            
            rbp = arg1
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)
    
    result.b = 1
else
    int32_t* rbx_3 = rdi - arg2 + 4
    
    while (true)
        int64_t i_1 = 0
        void* rax_2 = arg2 + 0xc
        
        do
            if (*(rax_2 - 0xc) f> *(rbx_3 + rax_2))
                goto label_1416ed9bf
            
            if (*rax_2 f< *(rbx_3 + rax_2 - 0xc))
                goto label_1416ed9bf
            
            i_1 += 1
            rax_2 += 4
        while (i_1 s< 3)
        
        int64_t* rcx_1 = *r15
        var_48.d = *rdi
        
        if ((*(*rcx_1 + 8))(rcx_1, &var_48).b == 0)
        label_1416edbcc:
            result.b = 0
            break
        
    label_1416ed9bf:
        rdi = &rdi[7]
        rbx_3 = &rbx_3[7]
        
        if (rdi == rsi_1)
            rbp = arg1
            goto label_1416ed9d3
return result
