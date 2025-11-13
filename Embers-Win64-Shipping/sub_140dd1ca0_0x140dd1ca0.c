// 函数: sub_140dd1ca0
// 地址: 0x140dd1ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
*arg1 = 0
int32_t rbp = 0

if ((*rax)(arg2) s> 0)
    void** r15_1 = nullptr
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    int128_t zmm7
    int128_t var_48_1 = zmm7
    int32_t rax_20
    
    do
        void* rbx_1 = *(r15_1 + arg2[2])
        char* rdi_2 = *(rbx_1 + 0x10) + 0x1a8
        
        if (*(rdi_2 + 0x10) != 0)
            int64_t* rcx_1 = *(rdi_2 + 8)
            
            if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
                int64_t* rcx_2
                
                if (*(rdi_2 + 0x10) == 0)
                    rcx_2 = nullptr
                else
                    rcx_2 = *(rdi_2 + 8)
                
                char arg_8
                (*(*rcx_2 + 0x48))(rcx_2, &arg_8)
                *rdi_2 = arg_8
        
        if (*rdi_2 != data_1439ae51d)
            int64_t* rcx_3 = &data_143dbb1f0
            int64_t* rax_9 = *(rbx_1 + 0x10) + 0x158
            
            if (rax_9[1].b != 0)
                rcx_3 = rax_9
            
            zmm6 = *rcx_3
            zmm7 = *(rcx_3 + 4)
            
            if (*(rbx_1 + 0x68) != 0)
                int64_t* rcx_4 = *(rbx_1 + 0x60)
                
                if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
                    int64_t* rcx_5
                    
                    if (*(rbx_1 + 0x68) == 0)
                        rcx_5 = nullptr
                    else
                        rcx_5 = *(rbx_1 + 0x60)
                    
                    float var_78[0x4]
                    (*(*rcx_5 + 0x48))(rcx_5, &var_78)
                    *(rbx_1 + 0x48) = var_78
            
            bool cond:1_1 = *(rbx_1 + 0x80) == 0
            float zmm0[0x4] = *(rbx_1 + 0x54)
            zmm0[0] = zmm0[0] f+ *(rbx_1 + 0x4c)
            zmm0[0] = zmm0[0] f+ zmm7.d
            float temp0_1[0x4] = __maxss_xmmss_memss(zmm0[0], *(arg1 + 4))
            *(arg1 + 4) = temp0_1[0]
            
            if (not(cond:1_1))
                int64_t* rcx_6 = *(rbx_1 + 0x78)
                
                if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
                    int64_t* rcx_7
                    
                    if (*(rbx_1 + 0x80) == 0)
                        rcx_7 = nullptr
                    else
                        rcx_7 = *(rbx_1 + 0x78)
                    
                    (*(*rcx_7 + 0x48))(rcx_7)
                    *(rbx_1 + 0x70) = temp0_1[0]
            
            zmm0 = *(rbx_1 + 0x70)
            
            if (not(zmm0[0] <= 0f))
                zmm6 = _mm_min_ss(zmm6[0], zmm0[0])
            
            if (*(rbx_1 + 0x68) != 0)
                int64_t* rcx_8 = *(rbx_1 + 0x60)
                
                if (rcx_8 != 0 && (*(*rcx_8 + 0x28))(rcx_8) != 0)
                    int64_t* rcx_9
                    
                    if (*(rbx_1 + 0x68) == 0)
                        rcx_9 = nullptr
                    else
                        rcx_9 = *(rbx_1 + 0x60)
                    
                    float var_68[0x4]
                    (*(*rcx_9 + 0x48))(rcx_9, &var_68)
                    *(rbx_1 + 0x48) = var_68
            
            zmm0 = *(rbx_1 + 0x50)
            zmm0[0] = zmm0[0] f+ *(rbx_1 + 0x48)
            zmm0[0] = zmm0[0] + zmm6[0]
            zmm0[0] = zmm0[0] f+ *arg1
            *arg1 = zmm0[0]
        
        rbp += 1
        r15_1 = &r15_1[1]
        rax_20 = (**arg2)(arg2)
    while (rbp s< rax_20)

return arg1
