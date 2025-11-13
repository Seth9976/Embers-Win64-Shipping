// 函数: sub_1423426a0
// 地址: 0x1423426a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
char rdi = 0

if (*(arg1 + 0x38) != 0)
    int64_t* rbx_1
    int64_t rbp
    
    if (*(arg1 + 0x250) == 0)
        rbx_1 = 0.q
        rbp.b = 0
    else
        rbx_1 = *(arg1 + 0x258)
        
        if (rbx_1 == 0)
            rbx_1 = 0.q
            rbp.b = 0
        else
            int32_t rax = rbx_1[1].d
            
            if (rax s<= 0)
                rbx_1 = 0.q
                rbp.b = 0
            else
                void* rdx_1 = nullptr
                
                if (rbx_1 == 0)
                    goto label_1423426fa
                
                if (rax == 0)
                    rbx_1 = nullptr
                else
                    rbx_1[1].d = rax + 1
                label_1423426fa:
                    
                    if (rbx_1 != 0)
                        rdx_1 = *(arg1 + 0x250)
                
                rdi = 1
                
                if (sub_140e19840(rdx_1, arg2) == 0)
                    rbp.b = 0
                else
                    rbp = 1
    
    if ((rdi & 1) != 0 && rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rcx_4 = *(arg1 + 0x38)
    (*(*rcx_4 + 0xa8))(rcx_4, arg1 + 8)
    int32_t rdx_3 = *(arg1 + 0x270)
    int32_t var_68
    int32_t var_60
    int32_t var_58
    char var_50
    
    if (rdx_3 s> 0 || *(arg1 + 0x274) s> 0)
        int64_t var_48 = data_143e1df90
        int64_t var_40_1 = data_143e1df98
        void* rax_8 = data_143e1dfa0
        void* var_38_1 = rax_8
        uint128_t zmm6 = _mm_cvtpd_ps(zx.o(data_14399f938))
        
        if (rax_8 != 0)
            *(rax_8 + 8) += 1
            rdx_3 = *(arg1 + 0x270)
        
        int64_t* rcx_5 = *(arg1 + 0x38)
        (*(*rcx_5 + 0x50))(rcx_5, arg1 + 8, 0, &var_48, _mm_cvtepi32_ps(zx.o(*(arg1 + 0x27c))).d, 
            zmm6.d, rdx_3, 0)
        var_48 = data_143e1dfa8
        int64_t var_40_2 = data_143e1dfb0
        void* rax_12 = data_143e1dfb8
        void* var_38_2 = rax_12
        
        if (rax_12 != 0)
            *(rax_12 + 8) += 1
        
        var_50 = 0
        int64_t r10_1 = **(arg1 + 0x38)
        var_58 = *(arg1 + 0x274)
        uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x280)))
        var_60 = zmm6.d
        var_68 = zmm0.d
        (*(r10_1 + 0x50))(zmm0, arg1 + 8, 0, &var_48, var_68, var_60, var_58, 0)
    
    if (*(arg1 + 0x2a1) != 0)
        int64_t* rcx_7 = *(arg1 + 0x38)
        char rax_15 = (*(*rcx_7 + 0x180))(rcx_7)
        
        if ((rax_15 == 0 || rax_15 - 3 u<= 1) && rbp.b == 0)
            int64_t rdi_1 = **(arg1 + 0x38)
            int32_t rax_18 = (*(*(arg1 + 8) + 0xc8))(arg1 + 8)
            int64_t r8_1 = *(arg1 + 8)
            int32_t rax_19 = (*(r8_1 + 0xc0))(arg1 + 8, arg2, r8_1)
            int32_t rax_20 = (*(rdi_1 + 0xb0))(*(arg1 + 0x38), arg1 + 8, zx.q(rax_19), 
                zx.q(rax_18), var_68, var_60, var_58, var_50)
            int64_t* rcx_11 = *(arg1 + 0x38)
            int32_t rbx_2
            rbx_2.b = rax_20 != 0
            void* rax_22 = (*(*rcx_11 + 0x30))(rcx_11)
            
            if (rax_22 != 0 && sub_14243ade0(rax_22) != 0)
                void* rcx_13 = *(rax_22 + 0x188)
                
                if (rcx_13 != 0)
                    int64_t* rax_24 = sub_142029890(rcx_13, 0)
                    char rax_25
                    
                    if (rax_24 != 0)
                        int64_t rdx_7 = *rax_24
                        rax_25 = (*(rdx_7 + 0xd20))(rax_24, rdx_7)
                    
                    if (rax_24 == 0 || rax_25 == 0)
                        rbx_2.b = 0
            
            if (rbx_2.b != 0)
                *(arg1 + 0x2a1) = 0
                sub_140dbda80(arg1 + 0xe0, arg1 + 0x2a4)
                *(arg1 + 0x2a4) = -1
    
    *(arg1 + 0x27c) = data_143dbb180.d
    result = data_143dbb180:4.d
    *(arg1 + 0x280) = result
    *(arg1 + 0x270) = 0

return result
