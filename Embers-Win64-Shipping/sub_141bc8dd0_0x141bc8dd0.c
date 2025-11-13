// 函数: sub_141bc8dd0
// 地址: 0x141bc8dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
void var_68

if (sub_140cdd6a0(arg1) s< 0x18d)
    void* rax_1 = arg1[0x6e]
    
    if (rax_1 != 0)
        void* rcx_1 = *(rax_1 + 0x28)
        int64_t rbx_1 = data_143e24408
        
        if (rcx_1 != 0)
            int64_t* rax_3 = (*(*(rcx_1 + 0x28) + 0x10))(rcx_1 + 0x28)
            
            if (rax_3 != 0)
                int64_t r8_1 = *rax_3
                
                if (*(*(r8_1 + 0x10))(rax_3, &var_68, r8_1) == rbx_1)
                    sub_141b85ed0(&arg1[0x2b], rax_3)
        
        arg1[0x6e] = 0
    
    void* rdx_3 = arg1[0x6f]
    
    if (rdx_3 != 0)
        sub_140693270(&arg1[0x3b], rdx_3 + 0x28)
        arg1[0x6f] = 0
    
    void* rdx_5 = arg1[0x70]
    
    if (rdx_5 != 0)
        sub_140693270(&arg1[0x4c], rdx_5 + 0x28)
        arg1[0x70] = 0
    
    void* rdx_7 = arg1[0x71]
    
    if (rdx_7 != 0)
        sub_140693270(&arg1[0x5d], rdx_7 + 0x28)
        arg1[0x71] = 0

int32_t result = sub_140cdd6a0(arg1)

if (result s< 0x1d3)
    result = sub_140db26d0(&arg1[0x72])
    
    if (result.b != 0)
        sub_140d962e0(&arg1[0x2c], &arg1[0x72])
        void var_58
        result = sub_140693420(&arg1[0x72], sub_140d93b50(&var_58))
        int64_t* var_20
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                result = (**var_20)(var_20)
                int32_t temp1_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    result = (*(*var_20 + 8))(var_20, 1)
    
    if (data_14399f5e0.d f!= arg1[0x7c].d || data_14399f5e0:4.d f!= *(arg1 + 0x3e4)
            || data_14399f5e0:8.d f!= arg1[0x7d].d || data_14399f5e0:0xc.d f!= *(arg1 + 0x3ec)
            || arg1[0x7e].b != 0)
        sub_140693390(&arg1[0x36], &arg1[0x7c])
        arg1[0x7e].b = 0
        result = &var_68
        *(arg1 + 0x3e0) = data_14399f5e0
        
        if (&var_68 != &arg1[0x7f])
            uint128_t zmm0_2 = *(arg1 + 0x3f8)
            *(arg1 + 0x3f8) = zx.o(0)
            int64_t* rbx_5 = _mm_bsrli_si128(zmm0_2, 8).q
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    result = (**rbx_5)(rbx_5)
                    int32_t temp3_1 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        return (*(*rbx_5 + 8))(rbx_5, 1)

return result
