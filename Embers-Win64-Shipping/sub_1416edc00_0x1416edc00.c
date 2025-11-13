// 函数: sub_1416edc00
// 地址: 0x1416edc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg3
int32_t* rax_1 = (*(*rcx + 0x20))(rcx)
int128_t* rdi = *(arg1 + 0x58)
void* r12 = arg2
void* r14_2 = &rdi[sx.q(*(arg1 + 0x60)) * 4]
void* result
uint128_t var_50
int128_t zmm1

if (rdi == r14_2)
label_1416edcf3:
    uint128_t* rdi_1 = *(arg1 + 0x48)
    void* r14_5 = &rdi_1[sx.q(*(arg1 + 0x50)) * 4]
    
    if (rdi_1 == r14_5)
    label_1416eddb4:
        int64_t var_58_1 = 1
        int64_t* var_60 = nullptr
        int64_t var_68_1 = 0
        sub_1405a4d70(&var_60)
        int64_t* r13_1 = var_60
        int32_t r14_6 = var_58_1.d
        *r13_1 = 0
        
        if (r14_6 != 0)
            while (true)
                int32_t rdi_2 = (r13_1[sx.q(r14_6 - 1)]).d
                
                if (0 != 0)
                    memmove(&r13_1[sx.q(r14_6 - 1)], &r13_1[sx.q(r14_6)], 0 << 3)
                
                r14_6 -= 1
                void* rbx_9 = sx.q(rdi_2) * 0x3c + *(arg1 + 0x28)
                
                if (*(rbx_9 + 0x38) != 0)
                    result = *(arg1 + 0x38)
                    int64_t rcx_14 = sx.q(*(rbx_9 + 0x30)) << 6
                    uint128_t* rdi_3 = *(rcx_14 + result + 0x18)
                    void* r15_4 = &rdi_3[sx.q(*(rcx_14 + result + 0x20)) * 4]
                    
                    if (rdi_3 != r15_4)
                        void* result_1 = rdi_3 + 0x34
                        int32_t* rbx_12 = r12 - rdi_3 - 0x28
                        
                        do
                            int64_t i = 0
                            result = result_1
                            
                            do
                                if ((*(result - 0xc)).d f> *(rbx_12 + result))
                                    goto label_1416edeea
                                
                                if ((*result).d f< *(rbx_12 + result - 0xc))
                                    goto label_1416edeea
                                
                                i += 1
                                result += 4
                            while (i s< 3)
                            
                            zmm1 = rdi_3[1]
                            var_50 = *rdi_3
                            int64_t* rcx_15 = *arg3
                            int128_t var_40_3 = zmm1
                            uint64_t var_30_3 = rdi_3[2].q
                            
                            if ((*(*rcx_15 + 8))(rcx_15, &var_50).b == 0)
                                if (r13_1 != 0)
                                    sub_140a74f90(r13_1)
                                
                                goto label_1416edfc0_1
                            
                        label_1416edeea:
                            rdi_3 = &rdi_3[4]
                            result_1 += 0x40
                            rbx_12 -= 0x40
                        while (rdi_3 != r15_4)
                else if (rbx_9 != rbx_9 + 0x30)
                    void* rdx_7 = arg2
                    int32_t* rsi_1 = rbx_9 + 0x30
                    int32_t* rbx_13 = rbx_9 - rdx_7
                    
                    do
                        int64_t rcx_16 = 0
                        void* rax_18 = r12 + 0xc
                        
                        while (not((*(rax_18 - 0xc)).d f> *(rbx_13 + rax_18)))
                            if ((*rax_18).d f< *(rbx_13 + rax_18 - 0xc))
                                break
                            
                            rcx_16 += 1
                            rax_18 += 4
                            
                            if (rcx_16 s>= 3)
                                int64_t rdi_4 = sx.q(r14_6)
                                var_68_1.d = *rsi_1
                                var_68_1:4.d = 0
                                r14_6 = (rdi_4 + 1).d
                                var_58_1.d = r14_6
                                
                                if (r14_6 s> var_58_1:4.d)
                                    sub_1405a4d70(&var_60)
                                    rdx_7 = arg2
                                    r14_6 = var_58_1.d
                                    r13_1 = var_60
                                
                                r13_1[rdi_4] = var_68_1
                                break
                        
                        rbx_13 = &rbx_13[6]
                        rsi_1 = &rsi_1[1]
                    while (rbx_13 + rdx_7 != rbx_9 + 0x30)
                
                if (r14_6 == 0)
                    break
                
                r12 = arg2
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)
        
        result.b = 1
    else
        void* rbx_6 = rdi_1 - r12 + 0x28
        
        while (true)
            if (*(r12 + rbx_6 - 4) != 0 && rax_1 != 0 && *rax_1 != 0 && not(test_bit(
                *(r12 + rbx_6 - 0x10) | *(r12 + rbx_6 - 0xc), rax_1[3] u>> 0x15 & 0x1f)))
            label_1416edda1:
                rdi_1 = &rdi_1[4]
                rbx_6 += 0x40
                
                if (rdi_1 == r14_5)
                    goto label_1416eddb4
                
                continue
            
            int64_t rcx_7 = 0
            void* rax_10 = r12 + 0xc
            
            while (true)
                if ((*(rax_10 - 0xc)).d f> *(rax_10 + rbx_6))
                    goto label_1416edda1
                
                if ((*rax_10).d f< *(rax_10 + rbx_6 - 0xc))
                    goto label_1416edda1
                
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
                    
                    goto label_1416edda1
            
            break
        
    label_1416edfc0:
        result.b = 0
else
    int32_t* rbx_3 = rdi - r12 + 0x28
    
    while (true)
        if (*(r12 + rbx_3 - 4) != 0 && rax_1 != 0 && *rax_1 != 0 &&
            not(test_bit(*(r12 + rbx_3 - 0x10) | *(r12 + rbx_3 - 0xc), rax_1[3] u>> 0x15 & 0x1f)))
        label_1416edce2:
            rdi = &rdi[4]
            rbx_3 = &rbx_3[0x10]
            
            if (rdi == r14_2)
                goto label_1416edcf3
            
            continue
        
        int64_t rcx_3 = 0
        void* rax_5 = r12 + 0xc
        
        while (true)
            if ((*(rax_5 - 0xc)).d f> *(rbx_3 + rax_5))
                goto label_1416edce2
            
            if ((*rax_5).d f< *(rbx_3 + rax_5 - 0xc))
                goto label_1416edce2
            
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
                
                goto label_1416edce2
        
        break
    
label_1416edfc0_1:
    result.b = 0
return result
