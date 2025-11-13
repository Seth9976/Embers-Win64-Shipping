// 函数: sub_140f2f0d0
// 地址: 0x140f2f0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x2b0)
int32_t zmm1 = data_143dbb1f0:4.d
*arg2 = data_143dbb1f0.d
int32_t rbp = 0
arg2[1] = zmm1

if ((*rax)(arg1 + 0x2b0, zmm1) s> 0)
    void** r14_1 = nullptr
    int32_t rax_15
    
    do
        void* rbx_1 = *(r14_1 + *(arg1 + 0x2c0))
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
            int32_t arg_10
            sub_140e13cf0(*(rbx_1 + 0x10), &arg_10)
            float zmm0_1[0x4]
            
            if (*(arg1 + 0x2d8) != 1)
                if (*(rbx_1 + 0x40) != 0)
                    int64_t* rcx_6 = *(rbx_1 + 0x38)
                    
                    if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
                        int64_t* rcx_7
                        
                        if (*(rbx_1 + 0x40) == 0)
                            rcx_7 = nullptr
                        else
                            rcx_7 = *(rbx_1 + 0x38)
                        
                        float var_38[0x4]
                        (*(*rcx_7 + 0x48))(rcx_7, &var_38)
                        *(rbx_1 + 0x20) = var_38
                
                zmm0_1 = *(rbx_1 + 0x28)
                zmm0_1[0] = zmm0_1[0] f+ *(rbx_1 + 0x20)
                zmm0_1[0] = zmm0_1[0] f+ arg_10
                zmm0_1[0] = zmm0_1[0] f+ *arg2
                *arg2 = zmm0_1[0]
                zmm0_1 = __maxss_xmmss_memss(arg3[0], arg2[1])
            else
                bool cond:0_1 = *(rbx_1 + 0x40) == 0
                *arg2 = __maxss_xmmss_memss((*arg2)[0], arg_10)[0]
                
                if (not(cond:0_1))
                    int64_t* rcx_4 = *(rbx_1 + 0x38)
                    
                    if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
                        int64_t* rcx_5
                        
                        if (*(rbx_1 + 0x40) == 0)
                            rcx_5 = nullptr
                        else
                            rcx_5 = *(rbx_1 + 0x38)
                        
                        float var_48[0x4]
                        (*(*rcx_5 + 0x48))(rcx_5, &var_48)
                        *(rbx_1 + 0x20) = var_48
                
                zmm0_1 = *(rbx_1 + 0x2c)
                zmm0_1[0] = zmm0_1[0] f+ *(rbx_1 + 0x24)
                zmm0_1[0] = zmm0_1[0] f+ arg3
                zmm0_1[0] = zmm0_1[0] f+ arg2[1]
            
            arg2[1] = zmm0_1[0]
        
        rbp += 1
        r14_1 = &r14_1[1]
        rax_15 = (**(arg1 + 0x2b0))(arg1 + 0x2b0)
    while (rbp s< rax_15)

return arg2
