// 函数: sub_1420ab490
// 地址: 0x1420ab490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x220)
char r12 = arg4
int128_t zmm6 = arg2

if (result != 0)
    if (arg2.d f>= 0f)
        int128_t zmm0 = *(result + 0x28)
        
        if (not(arg2.d f< zmm0.d))
            zmm6 = zmm0
    else
        zmm6 = zx.o(0)
    
    int64_t rbx_1 = sx.q(data_143a2e420)
    void* r15_1 = nullptr
    void* var_58 = nullptr
    int32_t i_4 = rbx_1.d
    int32_t var_4c_1 = 0
    int32_t i_5 = rbx_1.d
    
    if (rbx_1.d s> 0)
        sub_1405a4f90(&var_58)
        i_4 = i_5
        r15_1 = var_58
    
    result = memset(r15_1, 0, rbx_1 << 4)
    int32_t i = 0
    int32_t i_3 = 0
    
    if (*(arg1 + 0x268) s> 0)
        int64_t* r12_1 = nullptr
        
        do
            int32_t rdi_1 = 0
            int64_t rbx_2 = 0
            int64_t* rbp_1 = *(r12_1 + *(arg1 + 0x260))
            int64_t rax_2 = (*(*rbp_1 + 0x260))(rbp_1)
            void* j
            
            if (rax_2 != 0)
                j = sub_141dc5a00((*(*rbp_1 + 0x260))(rbp_1))
            
            if (rax_2 != 0 && j != 0)
                do
                    rdi_1 += 1
                    rbx_2 += 1
                    j = sub_141dc5a00(j)
                while (j != 0)
                
                if (rbx_2 s< 0 || rdi_1 s>= i_4)
                    goto label_1420ab5bd
            else if (rdi_1 s>= i_4)
            label_1420ab5bd:
                int64_t i_6 = sx.q(i_4)
                data_143a2e420 = rdi_1 + 1
                int32_t rdi_3 = rdi_1 + 1 - i_4
                i_4 = i_6.d + rdi_3
                
                if (i_4 s> var_4c_1)
                    sub_1405a4f90(&var_58)
                    r15_1 = var_58
                
                memset((i_6 << 4) + r15_1, 0, sx.q(rdi_3) << 4)
                i = i_3
            
            int64_t* rbx_4 = (rbx_2 << 4) + r15_1
            int64_t rdi_4 = sx.q(rbx_4[1].d)
            int32_t rax_5 = (rdi_4 + 1).d
            rbx_4[1].d = rax_5
            
            if (rax_5 s> *(rbx_4 + 0xc))
                sub_1405a4d70(rbx_4)
            
            result = *rbx_4
            i += 1
            r12_1 = &r12_1[1]
            i_3 = i
            *(result + (rdi_4 << 3)) = rbp_1
        while (i s< *(arg1 + 0x268))
        
        r12 = arg4
    
    int32_t r14_1 = 0
    
    if (i_4 s<= 0)
    label_1420ab6b7:
        *(arg1 + 0x284) = zmm6.d
        void* rbx_6 = r15_1
        
        if (i_4 != 0)
            int32_t i_1
            
            do
                int64_t rcx_12 = *rbx_6
                
                if (rcx_12 != 0)
                    result = sub_140a74f90(rcx_12)
                
                rbx_6 += 0x10
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
    else
        int32_t* rbp_2 = r15_1 + 8
        
        while (true)
            int32_t rbx_5 = 0
            
            if (*rbp_2 s> 0)
                int64_t* rdi_5 = nullptr
                
                while (true)
                    void* r8_4 = *(rdi_5 + *(rbp_2 - 8))
                    int64_t* rcx_11 = *(r8_4 + 0x28)
                    result = (*(*rcx_11 + 0x260))(rcx_11, zmm6, r8_4, zx.q(arg3), r12)
                    
                    if (*(arg1 + 0x268) == 0)
                        *(arg1 + 0x284) = zmm6.d
                        void* rbx_7 = r15_1
                        
                        if (i_4 != 0)
                            int32_t i_2
                            
                            do
                                int64_t rcx_14 = *rbx_7
                                
                                if (rcx_14 != 0)
                                    result = sub_140a74f90(rcx_14)
                                
                                rbx_7 += 0x10
                                i_2 = i_4
                                i_4 -= 1
                            while (i_2 != 1)
                        
                        break
                    
                    rbx_5 += 1
                    rdi_5 = &rdi_5[1]
                    
                    if (rbx_5 s>= *rbp_2)
                        goto label_1420ab6ab
                
                break
            
        label_1420ab6ab:
            r14_1 += 1
            rbp_2 = &rbp_2[4]
            
            if (r14_1 s>= i_4)
                goto label_1420ab6b7
    
    if (r15_1 != 0)
        return sub_140a74f90(r15_1)

return result
