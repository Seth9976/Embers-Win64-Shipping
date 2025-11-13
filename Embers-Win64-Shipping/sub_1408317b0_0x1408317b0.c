// 函数: sub_1408317b0
// 地址: 0x1408317b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t r14 = sx.q(arg3)
int128_t var_88 = zx.o(0)
int32_t var_78 = 1
int64_t* rcx_1 = data_143f0f180
int32_t var_64 = (1 << (data_1439c7a34).b) - 1
char var_60 = 0
int32_t var_50 = 0
int64_t var_58 = arg5
int128_t var_74 = data_143dbb1e0
int64_t* rsi_1
int64_t* rdi_4

if (arg4 == 0)
    int64_t* var_a0
    (*(*rcx_1 + 0x498))(rcx_1, &var_a0, &data_143f02b98, zx.q((&data_1439c85f4)[r14 * 0xa]), 0x208, 
        &var_88)
    
    if (arg1 == &var_a0)
    label_140831a7a:
        int64_t* rdi_6 = var_a0
        
        if (rdi_6 != 0)
            rdi_6[1].d -= 1
            
            if (rdi_6[1].d == 1)
                char rax_26
                
                if (rdi_6[2].b == 0 && data_143f0f1d0 == 0)
                    rax_26 = sub_1405949a0()
                
                if (rdi_6[2].b != 0 || (data_143f0f1d0 == 0 && rax_26 != 0))
                    (**rdi_6)(rdi_6, 1)
                else
                    bool z_5
                    
                    if (0 == *(rdi_6 + 0xc))
                        *(rdi_6 + 0xc) = 1
                        z_5 = true
                    else
                        *(rdi_6 + 0xc)
                        z_5 = false
                    
                    if (z_5)
                        sub_1405dcc10(&data_143f02390, rdi_6)
    else
        int64_t* rdi_5 = *arg1
        *arg1 = var_a0
        var_a0 = nullptr
        
        if (rdi_5 != 0)
            rdi_5[1].d -= 1
            
            if (rdi_5[1].d == 1)
                char rax_22
                
                if (rdi_5[2].b == 0 && data_143f0f1d0 == 0)
                    rax_22 = sub_1405949a0()
                
                if (rdi_5[2].b != 0 || (data_143f0f1d0 == 0 && rax_22 != 0))
                    (**rdi_5)(rdi_5, 1)
                else
                    bool z_4
                    
                    if (0 == *(rdi_5 + 0xc))
                        *(rdi_5 + 0xc) = 1
                        z_4 = true
                    else
                        *(rdi_5 + 0xc)
                        z_4 = false
                    
                    if (z_4)
                        sub_1405dcc10(&data_143f02390, rdi_5)
            
            goto label_140831a7a
    
    int64_t* rcx_8 = data_143f0f180
    int32_t var_e8_2
    var_e8_2.b = r14.b
    int64_t* var_98
    (*(*rcx_8 + 0x590))(rcx_8, &var_98, &data_143f02b98, *arg1, var_e8_2)
    rsi_1 = &arg1[2]
    
    if (rsi_1 == &var_98)
    label_140831b5e:
        rdi_4 = var_98
    label_140831b62:
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                char rax_35
                
                if (rdi_4[2].b == 0 && data_143f0f1d0 == 0)
                    rax_35 = sub_1405949a0()
                
                if (rdi_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_35 != 0))
                    (**rdi_4)(rdi_4, 1)
                else
                    bool z_7
                    
                    if (0 == *(rdi_4 + 0xc))
                        *(rdi_4 + 0xc) = 1
                        z_7 = true
                    else
                        *(rdi_4 + 0xc)
                        z_7 = false
                    
                    if (z_7)
                        sub_1405dcc10(&data_143f02390, rdi_4)
    else
        int64_t* rdi_7 = *rsi_1
        *rsi_1 = var_98
        var_98 = nullptr
        
        if (rdi_7 != 0)
            rdi_7[1].d -= 1
            
            if (rdi_7[1].d == 1)
                char rax_32
                
                if (rdi_7[2].b == 0 && data_143f0f1d0 == 0)
                    rax_32 = sub_1405949a0()
                
                if (rdi_7[2].b != 0 || (data_143f0f1d0 == 0 && rax_32 != 0))
                    (**rdi_7)(rdi_7, 1)
                else
                    bool z_6
                    
                    if (0 == *(rdi_7 + 0xc))
                        *(rdi_7 + 0xc) = 1
                        z_6 = true
                    else
                        *(rdi_7 + 0xc)
                        z_6 = false
                    
                    if (z_6)
                        sub_1405dcc10(&data_143f02390, rdi_7)
            
            goto label_140831b5e
else
    int64_t var_e0
    var_e0.b = r14.b
    int64_t* var_b0
    (*(*rcx_1 + 0x560))(rcx_1, &var_b0, &data_143f02b98, 1, 1, var_e0, 1, 1, 0x10008, &var_88)
    
    if (&arg1[1] == &var_b0)
    label_1408318e2:
        int64_t* rdi_2 = var_b0
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                char rax_11
                
                if (rdi_2[2].b == 0 && data_143f0f1d0 == 0)
                    rax_11 = sub_1405949a0()
                
                if (rdi_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_11 != 0))
                    (**rdi_2)(rdi_2, 1)
                else
                    bool z_2
                    
                    if (0 == *(rdi_2 + 0xc))
                        *(rdi_2 + 0xc) = 1
                        z_2 = true
                    else
                        *(rdi_2 + 0xc)
                        z_2 = false
                    
                    if (z_2)
                        sub_1405dcc10(&data_143f02390, rdi_2)
    else
        int64_t* rdi_1 = arg1[1]
        arg1[1] = var_b0
        var_b0 = nullptr
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                char rax_7
                
                if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_7 = sub_1405949a0()
                
                if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_7 != 0))
                    (**rdi_1)(rdi_1, 1)
                else
                    bool z_1
                    
                    if (0 == *(rdi_1 + 0xc))
                        *(rdi_1 + 0xc) = 1
                        z_1 = true
                    else
                        *(rdi_1 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        sub_1405dcc10(&data_143f02390, rdi_1)
            
            goto label_1408318e2
    
    int64_t* rcx_4 = data_143f0f180
    int64_t* var_a8
    (*(*rcx_4 + 0x5a0))(rcx_4, &var_a8, &data_143f02b98, arg1[1], 0)
    rsi_1 = &arg1[2]
    
    if (rsi_1 == &var_a8)
        goto label_1408319cd
    
    int64_t* rdi_3 = *rsi_1
    *rsi_1 = var_a8
    var_a8 = nullptr
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d != 1)
            goto label_1408319cd
        
        char rax_17
        
        if (rdi_3[2].b == 0 && data_143f0f1d0 == 0)
            rax_17 = sub_1405949a0()
        
        if (rdi_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_17 != 0))
            (**rdi_3)(rdi_3, 1)
        label_1408319cd:
            rdi_4 = var_a8
            goto label_140831b62
        
        bool z_3
        
        if (0 == *(rdi_3 + 0xc))
            *(rdi_3 + 0xc) = 1
            z_3 = true
        else
            *(rdi_3 + 0xc)
            z_3 = false
        
        if (not(z_3))
            goto label_1408319cd
        
        sub_1405dcc10(&data_143f02390, rdi_3)
        rdi_4 = var_a8
        goto label_140831b62
int64_t rax_38 = *rsi_1
int64_t* rbx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_11 = &rbx_4[1]

if (rcx_11 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rbx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_11 = &rbx_4[1]

*(arg2 + 0x30) = rcx_11
*rbx_4 = rax_38
void*** rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_39 = &rcx_15[6]

if (rax_39 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_39 = &rcx_15[6]

*(arg2 + 0x30) = rax_39
void**** rax_40 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_40 = rcx_15
*(arg2 + 8) = &rcx_15[1]
rcx_15[1] = 0
*rcx_15 = &data_142da7798
rcx_15[2].d = 1
rcx_15[3] = rbx_4
rcx_15[4].d = 1
*(rcx_15 + 0x24) = 3
rcx_15[5] = 0
__security_check_cookie(rax_1 ^ &var_108)
return &data_142da7798
