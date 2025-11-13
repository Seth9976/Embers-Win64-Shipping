// 函数: sub_1423b37e0
// 地址: 0x1423b37e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t* arg_38
int64_t* r13 = arg_38
int32_t result = r13[1].d

if (result != 0 && not(arg3.d f== 0f))
    int128_t zmm6 = arg5
    
    if (not(zmm6.d f== 0f) && arg2 != 0)
        void* rsi_1 = nullptr
        int32_t rdi_1 = 0
        int32_t r12_1 = 1
        int128_t zmm7 = arg6
        void* var_c8 = nullptr
        int32_t var_bc_1 = 0
        
        if (result s> 1)
            int64_t rbx_1 = 0x20
            
            do
                int64_t r14_1 = *r13
                
                if (not(zmm7.d f> *(r14_1 + rbx_1 + 0x18)))
                    int64_t r15_1 = sx.q(rdi_1)
                    rdi_1 = (r15_1 + 1).d
                    int32_t var_c0_1 = rdi_1
                    
                    if (rdi_1 s> var_bc_1)
                        sub_1405c4e40(&var_c8)
                        rdi_1 = var_c0_1
                        rsi_1 = var_c8
                    
                    void* rcx_3 = (r15_1 << 5) + rsi_1
                    *rcx_3 = *(rbx_1 + r14_1 - 0x20)
                    void* rax_1 = *(rbx_1 + r14_1 - 0x18)
                    *(rcx_3 + 8) = rax_1
                    
                    if (rax_1 != 0)
                        *(rax_1 + 8) += 1
                        rdi_1 = var_c0_1
                        rsi_1 = var_c8
                    
                    *(rcx_3 + 0x10) = *(rbx_1 + r14_1 - 0x10)
                    *(rcx_3 + 0x18) = *(rbx_1 + r14_1 - 8)
                
                result = r13[1].d
                r12_1 += 1
                rbx_1 += 0x20
            while (r12_1 s< result)
        
        int64_t r15_2 = *r13
        int32_t i_3 = rdi_1 + 1
        int64_t rbx_3 = sx.q(result) << 5
        int32_t i_4 = i_3
        
        if (i_3 s> var_bc_1)
            sub_1405c4e40(&var_c8)
            i_3 = i_4
            rsi_1 = var_c8
        
        void* rcx_7 = (sx.q(rdi_1) << 5) + rsi_1
        *rcx_7 = *(rbx_3 + r15_2 - 0x20)
        void* rax_5 = *(rbx_3 + r15_2 - 0x18)
        *(rcx_7 + 8) = rax_5
        
        if (rax_5 != 0)
            *(rax_5 + 8) += 1
            i_3 = i_4
            rsi_1 = var_c8
        
        int128_t zmm8 = arg7
        *(rcx_7 + 0x10) = *(rbx_3 + r15_2 - 0x10)
        void* i = (sx.q(i_3) << 5) + rsi_1
        *(rcx_7 + 0x18) = *(rbx_3 + r15_2 - 8)
        
        if (rsi_1 != i)
            int32_t* rcx_8 = rsi_1 + 0x18
            
            do
                int32_t zmm0 = *rcx_8
                
                if (not(zmm0 f<= zmm6.d))
                    zmm0 = zmm6.d
                
                *rcx_8 = zmm0 f- zmm7.d f+ zmm8.d
                rcx_8 = &rcx_8[8]
            while (&rcx_8[-6] != i)
        
        int32_t i_5 = i_3
        void* rcx_9 = nullptr
        void* var_b8 = nullptr
        int32_t r8_1
        
        if (i_3 != 0)
            sub_14083a1f0(&var_b8, i_5, 0)
            void* rax_9 = var_b8
            void* rsi_2 = rsi_1 - rax_9
            void* rcx_11 = rax_9 + 0x10
            int32_t i_1
            
            do
                *(rcx_11 - 0x10) = *(rsi_2 + rcx_11 - 0x10)
                void* rax_11 = *(rsi_2 + rcx_11 - 8)
                *(rcx_11 - 8) = rax_11
                
                if (rax_11 != 0)
                    *(rax_11 + 8) += 1
                
                *rcx_11 = *(rsi_2 + rcx_11)
                *(rcx_11 + 8) = *(rsi_2 + rcx_11 + 8)
                rcx_11 += 0x20
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            i_3 = i_4
            rsi_1 = var_c8
            int32_t var_ac
            r8_1 = var_ac
            rcx_9 = var_b8
        else
            r8_1 = 0
        
        char r9
        char var_90_1 = r9
        void* var_88 = rcx_9
        char var_8f_1 = arg4
        int32_t var_94_1 = arg3.d
        int32_t var_98 = 0
        var_b8 = nullptr
        int32_t i_6 = i_5
        int32_t var_7c_1 = r8_1
        int32_t var_b0_1
        var_b0_1.q = 0
        sub_141c4fe50(&var_b8)
        int64_t* var_a8 = &arg_10
        int32_t* var_a0_1 = &var_98
        sub_14239dd60(arg1 + 0x18, &arg_38, &var_a8, nullptr)
        int64_t rbx_5 = *(arg1 + 0x18)
        sub_141c4fe50(&var_88)
        void* r15_5 = sx.q(arg_38.d) * 0x30 + rbx_5
        int64_t rbx_6 = sx.q(*(r15_5 + 0x20))
        int32_t rax_17 = (rbx_6 + 1).d
        *(r15_5 + 0x20) = rax_17
        
        if (rax_17 s> *(r15_5 + 0x24))
            sub_1405c4e40(r15_5 + 0x18)
        
        int64_t rdi_3 = rbx_6 << 5
        int64_t* rbx_8 = *(r15_5 + 0x18) + rdi_3
        sub_140a96170(rbx_8)
        rbx_8[3].d = 0
        int128_t* rbx_10 = *(r15_5 + 0x18) + rdi_3
        sub_1405d9400()
        result = sub_14065da90(rbx_10, &data_143cd6fd8)
        zmm6.d = zmm6.d f- zmm7.d
        zmm6.d = zmm6.d f+ zmm8.d
        *(rbx_10 + 0x18) = zmm6.d
        
        if (i_3 != 0)
            void* rsi_3 = rsi_1 + 8
            int32_t i_2
            
            do
                int64_t* rbx_11 = *rsi_3
                
                if (rbx_11 != 0)
                    result = rbx_11[1].d
                    rbx_11[1].d -= 1
                    
                    if (result == 1)
                        (**rbx_11)(rbx_11)
                        result = *(rbx_11 + 0xc)
                        *(rbx_11 + 0xc) -= 1
                        
                        if (result == 1)
                            result = (*(*rbx_11 + 8))(rbx_11, 1)
                
                rsi_3 += 0x20
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
            rsi_1 = var_c8
        
        if (rsi_1 != 0)
            return sub_140a74f90(rsi_1)

return result
