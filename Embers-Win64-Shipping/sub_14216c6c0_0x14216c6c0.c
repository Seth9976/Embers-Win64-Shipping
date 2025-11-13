// 函数: sub_14216c6c0
// 地址: 0x14216c6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0

if (*(arg1 + 0x59) != 0)
    return 0

*(arg1 + 0x59) = 1
int32_t i = 0

if (arg2[1].d s> 0)
    int64_t* r15_1 = nullptr
    
    do
        int64_t rax_2 = *arg2
        int64_t var_48 = 0
        int32_t var_40_1 = 0
        int64_t var_38 = 0
        int32_t rbx_1 = *(r15_1 + rax_2 + 8)
        int64_t rdi_1 = *(r15_1 + rax_2)
        int32_t var_30_1 = rbx_1
        
        if (rbx_1 != 0)
            sub_1405a4c70(&var_38, rbx_1, 0)
            memcpy(var_38, rdi_1, rbx_1 * 2)
        else
            int32_t var_2c_1 = 0
        
        int32_t r8_3
        r8_3.b = arg1[6].b != 0
        
        if (sub_142002f00(&var_38, &var_48, r8_3) != 0)
            int32_t r8_4 = var_40_1
            int32_t rbx_2 = 0
            
            if (r8_4 s> 0)
                int64_t* rdi_2 = nullptr
                
                do
                    void* rdx_3 = *(rdi_2 + var_48)
                    
                    if (rdx_3 != 0)
                        void* rax_5 = arg1[5]
                        
                        if (rax_5 == 0)
                        label_14216c7dc:
                            (*(*arg1 + 0x268))(arg1)
                            r8_4 = var_40_1
                            rbp += 1
                        else
                            void* r9_1 = *(rdx_3 + 0x10)
                            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                            
                            if (rax_6.d s<= *(r9_1 + 0x38)
                                    && *(*(r9_1 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)
                                goto label_14216c7dc
                    
                    rbx_2 += 1
                    rdi_2 = &rdi_2[1]
                while (rbx_2 s< r8_4)
        
        int64_t rcx_5 = var_38
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int64_t rcx_6 = var_48
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        i += 1
        r15_1 = &r15_1[2]
    while (i s< arg2[1].d)

return zx.q(rbp)
