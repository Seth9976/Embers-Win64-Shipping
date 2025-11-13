// 函数: sub_140f2e7d0
// 地址: 0x140f2e7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
int32_t r14 = 0
int32_t rax_1
int64_t* rcx_1
rax_1, rcx_1 = (**(arg1 + 0x2a8))(arg1 + 0x2a8)

if (rax_1 s> 0)
    int64_t* r15_1 = nullptr
    int32_t rax_23
    
    do
        void* rbx_1 = *(r15_1 + *(arg1 + 0x2b8))
        char* rdi_2 = *(rbx_1 + 0x10) + 0x1a8
        
        if (*(rdi_2 + 0x10) != 0)
            rcx_1 = *(rdi_2 + 8)
            
            if (rcx_1 != 0)
                char rax_4
                rax_4, rcx_1 = (*(*rcx_1 + 0x28))(rcx_1)
                
                if (rax_4 != 0)
                    int64_t* rcx_2
                    
                    if (*(rdi_2 + 0x10) == 0)
                        rcx_2 = nullptr
                    else
                        rcx_2 = *(rdi_2 + 8)
                    
                    char arg_8
                    (*(*rcx_2 + 0x48))(rcx_2, &arg_8)
                    *rdi_2 = arg_8
        
        if (*rdi_2 != data_1439ae51d)
            if (*(rbx_1 + 0x40) != 0)
                rcx_1 = *(rbx_1 + 0x38)
                
                if (rcx_1 != 0)
                    char rax_9
                    rax_9, rcx_1 = (*(*rcx_1 + 0x28))(rcx_1)
                    
                    if (rax_9 != 0)
                        int64_t* rcx_3
                        
                        if (*(rbx_1 + 0x40) == 0)
                            rcx_3 = nullptr
                        else
                            rcx_3 = *(rbx_1 + 0x38)
                        
                        uint128_t var_88
                        (*(*rcx_3 + 0x48))(rcx_3, &var_88)
                        *(rbx_1 + 0x20) = var_88
            
            uint128_t var_98_1 = *(rbx_1 + 0x20)
            
            if (*(rbx_1 + 0x88) != 0)
                rcx_1 = *(rbx_1 + 0x80)
                
                if (rcx_1 != 0)
                    char rax_12
                    rax_12, rcx_1 = (*(*rcx_1 + 0x28))(rcx_1)
                    
                    if (rax_12 != 0)
                        int64_t* rcx_4
                        
                        if (*(rbx_1 + 0x88) == 0)
                            rcx_4 = nullptr
                        else
                            rcx_4 = *(rbx_1 + 0x80)
                        
                        int64_t arg_20
                        (*(*rcx_4 + 0x48))(rcx_4, &arg_20)
                        *(rbx_1 + 0x70) = arg_20
            
            if (*(rbx_1 + 0x68) != 0)
                rcx_1 = *(rbx_1 + 0x60)
                
                if (rcx_1 != 0)
                    char rax_15
                    rax_15, rcx_1 = (*(*rcx_1 + 0x28))(rcx_1)
                    
                    if (rax_15 != 0)
                        int64_t* rcx_5
                        
                        if (*(rbx_1 + 0x68) == 0)
                            rcx_5 = nullptr
                        else
                            rcx_5 = *(rbx_1 + 0x60)
                        
                        uint128_t var_78
                        (*(*rcx_5 + 0x48))(rcx_5, &var_78)
                        *(rbx_1 + 0x48) = var_78
            
            uint128_t var_a8_1 = *(rbx_1 + 0x48)
            int32_t arg_14 = var_98_1:0xc.d.d
            
            if (*(rbx_1 + 0xa0) != 0)
                rcx_1 = *(rbx_1 + 0x98)
                
                if (rcx_1 != 0)
                    char rax_18
                    rax_18, rcx_1 = (*(*rcx_1 + 0x28))(rcx_1)
                    
                    if (rax_18 != 0)
                        int64_t* rcx_6
                        
                        if (*(rbx_1 + 0xa0) == 0)
                            rcx_6 = nullptr
                        else
                            rcx_6 = *(rbx_1 + 0x98)
                        
                        char rax_20
                        rax_20, rcx_1 = (*(*rcx_6 + 0x48))(rcx_6)
                        *(rbx_1 + 0x90) = rax_20
            
            int64_t* rax_21
            void var_b0
            
            if (*(rbx_1 + 0x90) == 0)
                uint64_t var_b8
                rax_21 = &var_b8
                var_b8 = var_98_1:8.d.q
            else
                rax_21, rcx_1 = sub_140e13cf0(*(rbx_1 + 0x10), &var_b0)
            uint128_t zmm0 = var_a8_1.d
            float zmm2 = *rax_21
            float zmm1 = *(rax_21 + 4)
            
            if (zmm0.d f!= var_a8_1:8.d || (not(zmm0.d f== 0f) && zmm0.d f!= 1f))
                rax_21.b = 0
            else
                rax_21.b = 1
            
            zmm0 = var_a8_1:4.d
            
            if (zmm0.d f!= var_a8_1:0xc.d || (not(zmm0.d f== 0f) && zmm0.d f!= 1f))
                rcx_1.b = 0
            else
                rcx_1.b = 1
            
            if (rax_21.b == 0)
                zmm0 = zx.o(0)
            else
                zmm0 = _mm_and_ps(var_98_1.d, 0x7fffffff)
            
            *arg2 = __maxss_xmmss_memss(zmm2 f+ zmm0.d, *arg2)
            
            if (rcx_1.b == 0)
                zmm0 = zx.o(0)
            else
                zmm0 = _mm_and_ps(var_98_1:4.d, 0x7fffffff)
            
            *(arg2 + 4) = __maxss_xmmss_memss(zmm1 f+ zmm0.d, *(arg2 + 4))
        
        r14 += 1
        r15_1 = &r15_1[1]
        rax_23, rcx_1 = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
    while (r14 s< rax_23)

return arg2
