// 函数: sub_140e88d80
// 地址: 0x140e88d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t* result = __security_cookie ^ &var_278
int64_t* result_2 = result
int32_t var_1f8 = 0

if (*(arg1 + 0xd8) == 0)
    int64_t* rcx = *(arg1 + 0x40)
    int64_t* result_1
    int64_t* var_230
    void* var_228
    int128_t var_208
    
    if (rcx != 0)
        int64_t* rax_2 = (*(*rcx + 8))(rcx, &var_208)
        result_1 = *rax_2
        int64_t* rcx_2 = rax_2[1]
        var_230 = rcx_2
        
        if (rcx_2 != 0)
            rcx_2[1].d += 1
        
        char rax_3 = sub_140d9c320(arg2, &result_1)
        int64_t* rbx_1 = var_208:8.q
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (rax_3 == 0)
            int64_t* rcx_6 = *(arg1 + 0x40)
            (*(*rcx_6 + 0x20))(rcx_6)
            
            if (arg1 + 0x40 != &var_228)
                *(arg1 + 0x40) = 0
                int64_t* rbx_2 = *(arg1 + 0x48)
                
                if (rbx_2 != 0)
                    *(arg1 + 0x48) = 0
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp9_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
            
            if (arg1 + 0x30 != &var_228)
                *(arg1 + 0x30) = 0
                int64_t* rbx_3 = *(arg1 + 0x38)
                
                if (rbx_3 != 0)
                    *(arg1 + 0x38) = 0
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp12_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp12_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
    
    result = sub_140db3500(arg2)
    int64_t* rcx_14
    int64_t* rbx_4
    int32_t r14_1
    
    if (result.b == 0)
        rbx_4 = var_230
        rcx_14 = &var_208
        r14_1 = 4
        var_208 = zx.o(0)
    else
        result = sub_140db22a0(arg2, &var_228)
        rbx_4 = result[1]
        result_1 = *result
        var_230 = rbx_4
        
        if (rbx_4 != 0)
            rbx_4[1].d += 1
        
        rcx_14 = &result_1
        r14_1 = 3
    
    if (arg1 + 0x20 != rcx_14)
        *(arg1 + 0x20) = *rcx_14
        int64_t* rbx_5 = *(arg1 + 0x28)
        *rcx_14 = 0
        result = rcx_14[1]
        
        if (result != rbx_5)
            rcx_14[1] = 0
            *(arg1 + 0x28) = result
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    result = (**rbx_5)(rbx_5)
                    int32_t temp7_1 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        result = (*(*rbx_5 + 8))(rbx_5, 1)
        
        rbx_4 = var_230
    
    if ((r14_1.b & 4) != 0)
        int64_t* rdi_2 = var_208:8.q
        r14_1 &= 0xfffffffb
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                result = (**rdi_2)(rdi_2)
                int32_t temp6_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    result = (*(*rdi_2 + 8))(rdi_2, 1)
    
    if ((r14_1.b & 2) != 0)
        r14_1 &= 0xfffffffd
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                result = (**rbx_4)(rbx_4)
                int32_t temp11_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    result = (*(*rbx_4 + 8))(rbx_4, 1)
    
    int64_t* var_220
    
    if ((r14_1.b & 1) != 0 && var_220 != 0)
        var_220[1].d -= 1
        
        if (var_220[1].d == 1)
            result = (**var_220)(var_220)
            int32_t temp13_1 = *(var_220 + 0xc)
            *(var_220 + 0xc) -= 1
            
            if (temp13_1 == 1)
                result = (*(*var_220 + 8))(var_220, 1)
    
    if (*(arg1 + 0x20) != 0 && *(arg1 + 0x30) == 0)
        void*** rax_21 = sub_140e48eb0()
        var_228 = &rax_21[2]
        sub_140918950(&var_228, &rax_21[2])
        int64_t var_258_1 = 0x2d0
        void var_248
        void* var_218_1 = &var_248
        int128_t zmm6_1 = sub_140e23ed0(&rax_21[2], "SMenuPanel")
        void var_1f0
        int64_t* rax_22
        int128_t zmm1_1
        rax_22, zmm1_1 = sub_140e4fe80(&var_1f0)
        sub_140e56fb0(&var_228, &result_1, rax_22, zmm1_1)
        
        if (rax_21 != 0)
            rax_21[1].d -= 1
            
            if (rax_21[1].d == 1)
                (**rax_21)(rax_21)
                int32_t temp16_1 = *(rax_21 + 0xc)
                *(rax_21 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*rax_21)[1](rax_21, 1)
        
        int128_t var_48_1 = zmm6_1
        sub_140ddea30(&var_1f0)
        int32_t rax_25 = *(arg2 + 0x130)
        result = zx.q(rax_25 - 1)
        int64_t r14_2 = sx.q(result.d)
        
        if (rax_25 - 1 s>= 0)
            zmm6_1 = result_1.o
            int64_t r15_3 = r14_2 * 0x48
            int64_t temp23_1
            
            do
                void* rax_26 = *(arg2 + 0x128)
                void* rcx_30 = arg2 + 8
                var_208 = zmm6_1
                
                if (rax_26 != 0)
                    rcx_30 = rax_26
                
                if (var_230 != 0)
                    var_230[1].d += 1
                
                int64_t* rcx_31 = *(rcx_30 + r15_3 + 0x38)
                result = (*(*rcx_31 + 0xb0))(rcx_31, &var_228, &var_208)
                
                if (arg1 + 0x40 != result)
                    *(arg1 + 0x40) = *result
                    *result = 0
                    int64_t rcx_33 = result[1]
                    int64_t* rdi_3 = *(arg1 + 0x48)
                    
                    if (rcx_33 != rdi_3)
                        result[1] = 0
                        *(arg1 + 0x48) = rcx_33
                        
                        if (rdi_3 != 0)
                            rdi_3[1].d -= 1
                            
                            if (rdi_3[1].d == 1)
                                result = (**rdi_3)(rdi_3)
                                int32_t temp25_1 = *(rdi_3 + 0xc)
                                *(rdi_3 + 0xc) -= 1
                                
                                if (temp25_1 == 1)
                                    result = (*(*rdi_3 + 8))(rdi_3, 1)
                
                if (rax_21 != 0)
                    rax_21[1].d -= 1
                    
                    if (rax_21[1].d == 1)
                        result = (**rax_21)(rax_21)
                        int32_t temp21_1 = *(rax_21 + 0xc)
                        *(rax_21 + 0xc) -= 1
                        
                        if (temp21_1 == 1)
                            result = (*rax_21)[1](rax_21, 1)
                
                int64_t* rdi_5 = var_208:8.q
                
                if (rdi_5 != 0)
                    rdi_5[1].d -= 1
                    
                    if (rdi_5[1].d == 1)
                        result = (**rdi_5)(rdi_5)
                        int32_t temp24_1 = *(rdi_5 + 0xc)
                        *(rdi_5 + 0xc) -= 1
                        
                        if (temp24_1 == 1)
                            result = (*(*rdi_5 + 8))(rdi_5, 1)
                
                if (*(arg1 + 0x40) != 0)
                    if (var_230 != 0)
                        var_230[1].d += 1
                    
                    result = &var_228
                    int64_t rax_35
                    int64_t* rcx_41
                    
                    if (arg1 + 0x30 == &var_228)
                    label_140e8923d:
                        
                        if (var_230 == 0)
                            goto label_140e892bd
                        
                        var_230[1].d -= 1
                        
                        if (var_230[1].d != 1)
                            goto label_140e89264
                        
                        result = (**var_230)(var_230)
                        int32_t temp27_1 = *(var_230 + 0xc)
                        *(var_230 + 0xc) -= 1
                        
                        if (temp27_1 != 1)
                            goto label_140e89264
                        
                        rax_35 = *var_230
                        rcx_41 = var_230
                    else
                        result = result_1
                        *(arg1 + 0x30) = result
                        int64_t* rdi_6 = *(arg1 + 0x38)
                        
                        if (var_230 == rdi_6)
                            goto label_140e8923d
                        
                        *(arg1 + 0x38) = var_230
                        
                        if (rdi_6 == 0)
                            goto label_140e89264
                        
                        rdi_6[1].d -= 1
                        
                        if (rdi_6[1].d != 1)
                            goto label_140e89264
                        
                        result = (**rdi_6)(rdi_6)
                        int32_t temp29_1 = *(rdi_6 + 0xc)
                        *(rdi_6 + 0xc) -= 1
                        
                        if (temp29_1 != 1)
                            goto label_140e89264
                        
                        rax_35 = *rdi_6
                        rcx_41 = rdi_6
                    
                    result = (*(rax_35 + 8))(rcx_41, 1)
                    goto label_140e89264
                
                r15_3 -= 0x48
                temp23_1 = r14_2
                r14_2 -= 1
            while (temp23_1 - 1 s>= 0)
        
    label_140e89264:
        
        if (var_230 != 0)
            var_230[1].d -= 1
            
            if (var_230[1].d == 1)
                result = (**var_230)(var_230)
                int32_t temp18_1 = *(var_230 + 0xc)
                *(var_230 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    result = (*(*var_230 + 8))(var_230, 1)

label_140e892bd:
__security_check_cookie(result_2 ^ &var_278)
return result
