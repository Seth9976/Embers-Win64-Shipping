// 函数: sub_1422af6f0
// 地址: 0x1422af6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8

if ((*(arg1 + 0x3b) & 2) != 0)
    int64_t* rcx = arg1[0x21]
    char var_307
    char var_305
    int32_t var_2f8
    void var_2a8
    (*(*rcx + 0x150))(rcx, arg1[0x22], &var_305, &var_2a8, &var_2f8, &var_307)
    float var_2c8[0x2][0x4]
    (*(*arg1 + 0x100))(arg1, &var_2c8)
    int64_t r12
    
    if (var_307 != 0 || (*(arg1 + 0x3b) & 4) != 0)
        r12.b = 1
    else
        r12 = 0
    
    void* rax_4 = arg1[0x22]
    void* r15_1 = nullptr
    int32_t r13_1
    
    if (rax_4 == 0)
        r13_1 = 0
    else
        r13_1 = *(rax_4 + 0x124)
    
    int32_t var_2d0_1 = arg1[0x20].d
    char rax_6 = *(arg1 + 0x32) - 1
    int64_t var_2d8 = arg1[0x1f]
    bool var_306_1 = rax_6 u<= 1
    char var_308_1
    
    if (*(arg1 + 0x3a) s>= 0 && *(data_143f52da8 + 4) == 0)
        var_308_1 = 0
    
    if (*(arg1 + 0x3a) s< 0 || *(data_143f52da8 + 4) != 0 || *(arg1 + 0x33) == 2)
        var_308_1 = 1
    
    uint32_t rdi_1 = zx.d(*(arg1 + 0x3f))
    char rax_9 = (*(*arg1 + 0x128))(arg1)
    int64_t rdx_3 = *arg1
    char rax_10 = (*(rdx_3 + 0x120))(arg1, rdx_3)
    void var_268
    sub_14075e140(&var_268, &arg1[0x10], &var_2a8, &var_2d8, &arg1[0x18], arg1 + 0xdc, &var_2c8, 
        *(arg1 + 0x35) u>> 3 & 1, rax_10, rax_9, var_308_1, var_305, var_306_1, rdi_1, 
        (*(arg1 + 0x44)).d, r13_1, var_2f8, r12.b, &arg1[4])
    int64_t* rcx_6 = data_143f0f180
    int64_t rdx_5 = arg1[0x28]
    void* r8_4 = &var_268
    int64_t rax_14 = *rcx_6
    
    if (rdx_5 == 0)
        int128_t* var_380_2
        var_380_2.d = 1
        int128_t* var_388_2
        var_388_2.d = 2
        void* var_2f0
        (*(rax_14 + 0xf8))(rcx_6, &var_2f0, r8_4, &data_143f556a0, var_388_2, var_380_2)
        void* const rbx_2 = var_2f0
        void* const var_300 = rbx_2
        
        if (rbx_2 != 0)
            *(rbx_2 + 8) += 1
            rbx_2 = var_300
        
        sub_1405d1550(&var_2f0)
        
        if (&arg1[0x28] != &var_300)
            int64_t* rdi_2 = arg1[0x28]
            arg1[0x28] = rbx_2
            var_300 = nullptr
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    char rax_16
                    
                    if (rdi_2[2].b == 0 && data_143f0f1d0 == 0)
                        rax_16 = sub_1405949a0()
                    
                    if (rdi_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_16 != 0))
                        (**rdi_2)(rdi_2, 1)
                    else
                        bool z_1
                        
                        if (0 == *(rdi_2 + 0xc))
                            *(rdi_2 + 0xc) = 1
                            z_1 = true
                        else
                            *(rdi_2 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_18 = sub_140a20af0()
                            
                            if (rax_18 != 0)
                                r15_1 = *(&data_143cf0bf8 + (zx.q(rax_18) u>> 0xe << 3))
                                    + (zx.q(rax_18) & 0x3fff) * 0x18
                            
                            *(r15_1 + 8) = rdi_2
                            sub_1405a42f0(&data_143f02390, rax_18)
        
        sub_1405d1550(&var_300)
    else
        (*(rax_14 + 0x100))(rcx_6, rdx_5, r8_4)

void* result = arg1[0x22]

if (result != 0)
    *(result + 0x120) &= 0xfd

__security_check_cookie(rax_1 ^ &var_3a8)
return result
