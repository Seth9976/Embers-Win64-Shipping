// 函数: sub_140de94d0
// 地址: 0x140de94d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x2a8)
*arg2 = 0
int32_t rsi = 0

if ((*rax)(arg1 + 0x2a8) s> 0)
    void** r14_1 = nullptr
    int32_t rax_14
    
    do
        void* rdi_1 = *(r14_1 + *(arg1 + 0x2b8))
        char* rbx_2 = *(rdi_1 + 0x10) + 0x1a8
        
        if (*(rbx_2 + 0x10) != 0)
            int64_t* rcx_1 = *(rbx_2 + 8)
            
            if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
                int64_t* rcx_2
                
                if (*(rbx_2 + 0x10) == 0)
                    rcx_2 = nullptr
                else
                    rcx_2 = *(rbx_2 + 8)
                
                char arg_8
                (*(*rcx_2 + 0x48))(rcx_2, &arg_8)
                *rbx_2 = arg_8
        
        if (*rbx_2 != data_1439ae51d)
            if (*(rdi_1 + 0x48) != 0)
                int64_t* rcx_3 = *(rdi_1 + 0x40)
                
                if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
                    int64_t* rcx_4
                    
                    if (*(rdi_1 + 0x48) == 0)
                        rcx_4 = nullptr
                    else
                        rcx_4 = *(rdi_1 + 0x40)
                    
                    float var_38[0x4]
                    (*(*rcx_4 + 0x48))(rcx_4, &var_38)
                    *(rdi_1 + 0x28) = var_38
            
            int32_t* rcx_5 = &data_143dbb1f0
            float zmm0[0x4] = *(rdi_1 + 0x30)
            int32_t* rax_12 = *(rdi_1 + 0x10) + 0x158
            zmm0[0] = zmm0[0] f+ *(rdi_1 + 0x28)
            float zmm1 = *(rdi_1 + 0x34) f+ *(rdi_1 + 0x2c)
            
            if (rax_12[2].b != 0)
                rcx_5 = rax_12
            
            zmm0[0] = zmm0[0] f+ *rcx_5
            zmm1 = zmm1 f+ rcx_5[1]
            float temp0_1[0x4] = __maxss_xmmss_memss(zmm0[0], *arg2)
            float temp0_2 = __maxss_xmmss_memss(zmm1, *(arg2 + 4))
            *arg2 = temp0_1[0]
            *(arg2 + 4) = temp0_2
        
        rsi += 1
        r14_1 = &r14_1[1]
        rax_14 = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
    while (rsi s< rax_14)

return arg2
