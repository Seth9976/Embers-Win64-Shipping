// 函数: sub_1422657b0
// 地址: 0x1422657b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t result = __security_cookie ^ &var_258
int64_t result_1 = result
void* r15 = arg1[0x53]

if (r15 != 0)
    void* rax_1 = sub_142531230()
    void* rdx_1 = *(r15 + 0x10)
    result = sx.q(*(rax_1 + 0x38))
    
    if (result.d s<= *(rdx_1 + 0x38))
        int64_t result_2 = result
        result = *(rdx_1 + 0x30)
        
        if (*(result + (result_2 << 3)) == rax_1 + 0x30 && *(r15 + 0x70) != 0)
            result = sub_140f61940()
            
            if (result.b != 0)
                int128_t var_208
                int64_t var_1d8
                
                if (arg1[0x9c] != 0)
                    void* const rbx_1 = arg1[0x53]
                    void* rax_2
                    int64_t rax_3
                    void* rdx_2
                    
                    if (rbx_1 != 0)
                        rax_2 = sub_142531230()
                        rdx_2 = *(rbx_1 + 0x10)
                        rax_3 = sx.q(*(rax_2 + 0x38))
                    
                    if (rbx_1 == 0 || rax_3.d s> *(rdx_2 + 0x38)
                            || *(*(rdx_2 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
                        rbx_1 = nullptr
                    
                    int64_t* rcx_1 = *(rbx_1 + 0x70)
                    int64_t* rbx_2 = arg1[0x9d]
                    var_1d8 = arg1[0x9c]
                    int64_t* var_1d0_1 = rbx_2
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d += 1
                    
                    var_208 = var_1d8.o
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d += 1
                    
                    (*(*rcx_1 + 0x290))(rcx_1, &var_208)
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d -= 1
                        
                        if (rbx_2[1].d == 1)
                            (**rbx_2)(rbx_2)
                            int32_t temp8_1 = *(rbx_2 + 0xc)
                            *(rbx_2 + 0xc) -= 1
                            
                            if (temp8_1 == 1)
                                (*(*rbx_2 + 8))(rbx_2, 1)
                
                void* var_1f8
                void*** var_1f0
                
                if (arg1[0x9e] == 0)
                    int64_t* rax_9 = sub_1424c7800()
                    void* rdx_4 = rax_9[0x23]
                    
                    if (rdx_4 == 0)
                        int64_t rdx_5 = *rax_9
                        (*(rdx_5 + 0x390))(rax_9, rdx_5)
                        rdx_4 = rax_9[0x23]
                    
                    var_1f8 = *(rdx_4 + 0xb0)
                    result = sub_140596d10(&var_1f0, rdx_4 + 0xb8)
                    
                    if (var_1f8 != 0)
                        int64_t* rax_11 = sub_140d30800(&var_1f8, &var_208)
                        int16_t* rbx_4
                        
                        if (rax_11[1].d == 0)
                            rbx_4 = &data_142d40450
                        else
                            rbx_4 = *rax_11
                        
                        result = sub_140d2f6f0(sub_1425b9650(), 0, rbx_4, 0, 0, 0, 1, 0)
                        int64_t rcx_8 = var_208.q
                        arg1[0x9e] = result
                        
                        if (rcx_8 != 0)
                            result = sub_140a74f90(rcx_8)
                    
                    void*** rcx_9 = var_1f0
                    
                    if (rcx_9 != 0)
                        result = sub_140a74f90(rcx_9)
                
                if (arg1[0x9e] != 0 || arg1[0x9e] != 0)
                    void*** rax_13 = sub_142259280()
                    var_1f0 = rax_13
                    var_1f8 = &rax_13[2]
                    sub_140918950(&var_1f8, &rax_13[2])
                    int64_t var_238_1 = 0x2e8
                    void var_218
                    void* var_1e8_1 = &var_218
                    sub_140e23ed0(&rax_13[2], "SVirtualJoystick")
                    void var_1c8
                    int64_t* rax_14
                    int128_t zmm1_1
                    rax_14, zmm1_1 = sub_140e93f70(&var_1c8)
                    void** rax_15 = sub_14225c6b0(&var_1f8, &var_208, rax_14, zmm1_1)
                    int64_t* rbx_6 = rax_15[1]
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d += 1
                    
                    if (&arg1[0x9c] == &var_1d8)
                    label_142265a6e:
                        
                        if (rbx_6 != 0)
                            rbx_6[1].d -= 1
                            
                            if (rbx_6[1].d == 1)
                                (**rbx_6)(rbx_6)
                                int32_t temp2_1 = *(rbx_6 + 0xc)
                                *(rbx_6 + 0xc) -= 1
                                
                                if (temp2_1 == 1)
                                    (*(*rbx_6 + 8))(rbx_6, 1)
                    else
                        arg1[0x9c] = *rax_15
                        int64_t* rdi_1 = arg1[0x9d]
                        
                        if (rbx_6 == rdi_1)
                            goto label_142265a6e
                        
                        arg1[0x9d] = rbx_6
                        
                        if (rdi_1 != 0)
                            rdi_1[1].d -= 1
                            
                            if (rdi_1[1].d == 1)
                                (**rdi_1)(rdi_1)
                                int32_t temp7_1 = *(rdi_1 + 0xc)
                                *(rdi_1 + 0xc) -= 1
                                
                                if (temp7_1 == 1)
                                    (*(*rdi_1 + 8))(rdi_1, 1)
                    
                    int64_t* rbx_7 = var_208:8.q
                    
                    if (rbx_7 != 0)
                        rbx_7[1].d -= 1
                        
                        if (rbx_7[1].d == 1)
                            (**rbx_7)(rbx_7)
                            int32_t temp6_1 = *(rbx_7 + 0xc)
                            *(rbx_7 + 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                (*(*rbx_7 + 8))(rbx_7, 1)
                    
                    void*** rbx_8 = var_1f0
                    
                    if (rbx_8 != 0)
                        rbx_8[1].d -= 1
                        
                        if (rbx_8[1].d == 1)
                            (**rbx_8)(rbx_8)
                            int32_t temp9_1 = *(rbx_8 + 0xc)
                            *(rbx_8 + 0xc) -= 1
                            
                            if (temp9_1 == 1)
                                (*rbx_8)[1](rbx_8, 1)
                    
                    sub_140ddea30(&var_1c8)
                    int64_t* rbx_9 = arg1[0x9d]
                    var_1d8 = arg1[0x9c]
                    int64_t* var_1d0_2 = rbx_9
                    
                    if (rbx_9 != 0)
                        rbx_9[1].d += 1
                    
                    var_208 = var_1d8.o
                    
                    if (rbx_9 != 0)
                        rbx_9[1].d += 1
                    
                    int64_t* rcx_23 = *(r15 + 0x70)
                    (*(*rcx_23 + 0x288))(rcx_23, &var_208, 0)
                    
                    if (rbx_9 != 0)
                        rbx_9[1].d -= 1
                        
                        if (rbx_9[1].d == 1)
                            (**rbx_9)(rbx_9)
                            int32_t temp11_1 = *(rbx_9 + 0xc)
                            *(rbx_9 + 0xc) -= 1
                            
                            if (temp11_1 == 1)
                                (*(*rbx_9 + 8))(rbx_9, 1)
                    
                    result = (*(*arg1 + 0xba0))(arg1, arg1[0x9e])

__security_check_cookie(result_1 ^ &var_258)
return result
