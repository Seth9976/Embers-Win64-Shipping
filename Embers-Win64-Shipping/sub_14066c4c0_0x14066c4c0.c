// 函数: sub_14066c4c0
// 地址: 0x14066c4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2[1].d
void*** result

if (arg3 == 0)
    int64_t var_98 = 0
    int64_t rsi_1 = 0
    int64_t var_90_1 = 0
    int32_t rcx_7 = 0
    int32_t rdx_2
    int16_t* r14_1
    
    if (rdi == 0)
        r14_1 = &data_142d40450
        rdx_2 = 0
    label_14066c5c5:
        
        if (*r14_1 != 0)
            int64_t rdi_2 = -1
            
            do
                rdi_2 += 1
            while (r14_1[rdi_2] != 0)
            
            if (rdi_2.d + 1 s> 0)
                sub_1405947f0(&var_98, rdi_2.d + 1)
                rcx_7 = var_90_1:4.d
                rdx_2 = var_90_1.d
                rsi_1 = var_98
            
            int32_t rax_5 = rdi_2.d + 1 + rdx_2
            var_90_1.d = rax_5
            
            if (rax_5 s> rcx_7)
                sub_140594770(&var_98)
                rsi_1 = var_98
            
            UnDecorator::getReferenceType(rsi_1, r14_1, (rdi_2.d + 1) * 2)
    else
        r14_1 = *arg2
        rdx_2 = 0
        
        if (r14_1 != 0)
            goto label_14066c5c5
    void*** rax_6 = j_sub_140a82f30(0x88)
    void*** rdi_4
    
    if (rax_6 == 0)
        rdi_4 = nullptr
    else
        void*** rax_7 = sub_1406695d0(rax_6, &var_98)
        rsi_1 = var_98
        rdi_4 = rax_7
    
    void*** rax_8 = j_sub_140a82f30(0x18)
    
    if (rax_8 == 0)
        rax_8 = nullptr
    else
        rax_8[1].d = 1
        *rax_8 = &data_142d83c20
        *(rax_8 + 0xc) = 1
        rax_8[2] = rdi_4
    
    void*** var_a8 = rdi_4
    int64_t* r14_2 = var_a8
    
    if (rax_8 != 0)
        rax_8[1].d += 1
        
        if (rax_8 != 0)
            rax_8[1].d -= 1
            
            if (rax_8[1].d == 1)
                (**rax_8)(rax_8)
                int32_t temp3_1 = *(rax_8 + 0xc)
                *(rax_8 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*rax_8)[1](rax_8, 1)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    var_a8.o = zx.o(0)
    
    if (sub_140665cf0(r14_2, &var_a8, 0) == 0)
        if (rax_8 != 0)
            rax_8[1].d -= 1
            
            if (rax_8[1].d == 1)
                (**rax_8)(rax_8)
                int32_t temp6_1 = *(rax_8 + 0xc)
                *(rax_8 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*rax_8)[1](rax_8, 1)
        
        if (rax_8 != 0)
            rax_8[1].d -= 1
            
            if (rax_8[1].d == 1)
                (**rax_8)(rax_8)
                int32_t temp8_1 = *(rax_8 + 0xc)
                *(rax_8 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*rax_8)[1](rax_8, 1)
        
        sub_140679620(arg1)
        result.b = 0
    else
        uint128_t zmm0_2 = var_a8.o
        var_a8.o = zmm0_2
        int64_t* rdi_6 = _mm_bsrli_si128(zmm0_2, 8).q
        
        if (rdi_6 != 0)
            rdi_6[1].d += 1
        
        int64_t* rsi_2 = *(arg1 + 0x30)
        *(arg1 + 0x28) = var_a8
        *(arg1 + 0x30) = rax_8
        
        if (rsi_2 != 0)
            rsi_2[1].d -= 1
            
            if (rsi_2[1].d == 1)
                (**rsi_2)(rsi_2)
                int32_t temp10_1 = *(rsi_2 + 0xc)
                *(rsi_2 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*rsi_2 + 8))(rsi_2, 1)
        
        if (rdi_6 != 0)
            rdi_6[1].d -= 1
            
            if (rdi_6[1].d == 1)
                (**rdi_6)(rdi_6)
                int32_t temp12_1 = *(rdi_6 + 0xc)
                *(rdi_6 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*rdi_6 + 8))(rdi_6, 1)
        
        if (rax_8 != 0)
            rax_8[1].d -= 1
            
            if (rax_8[1].d == 1)
                (**rax_8)(rax_8)
                int32_t temp13_1 = *(rax_8 + 0xc)
                *(rax_8 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*rax_8)[1](rax_8, 1)
        
        result.b = 1
else
    int64_t rsi = *arg2
    void var_88
    sub_140669460(&var_88)
    int64_t i = 0
    int32_t rax_1 = rdi - 1
    
    if (rdi == 0)
        rax_1 = 0
    
    if (rax_1 s> 0)
        do
            char rax_2 = sub_140672d50(&var_88, *(rsi + (i << 1)))
            i += 1
            
            if (rax_2 == 0)
                break
        while (i s< sx.q(rax_1))
    
    int64_t var_68
    
    if (var_68 == 0)
        sub_140679620(arg1)
    else
        void* var_60
        
        if (var_60 != 0)
            *(var_60 + 8) += 1
        
        int64_t* rbx = *(arg1 + 0x30)
        *(arg1 + 0x28) = var_68
        *(arg1 + 0x30) = var_60
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp1_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx + 8))(rbx, 1)
    
    sub_140669f90(&var_88)
    int32_t var_28
    
    if (var_28 s<= 0)
        sub_140679620(arg1)
        result.b = 0
    else
        result.b = 1

return result
