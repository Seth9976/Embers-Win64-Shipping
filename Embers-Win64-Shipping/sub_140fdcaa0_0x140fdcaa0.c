// 函数: sub_140fdcaa0
// 地址: 0x140fdcaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0

if (data_143f01c92 == 0)
label_140fdcaec:
    
    if (sub_140a80f40() != 0)
        goto label_140fdcb26
    
label_140fdcccf:
    char rcx_8 = (*(arg4 + 0x3c)).b
    int32_t var_94_1 = (1 << (data_1439c7a34).b) - 1
    int32_t rax_18 = *(arg4 + 0x40)
    int128_t var_b8 = zx.o(0)
    int32_t var_a8_1 = 1
    int128_t var_a4_1 = data_143dbb1e0
    char var_90_1 = 0
    int64_t var_88_1 = 0
    int32_t var_80_1 = 0
    void*** rax_19 = sub_140fd0da0(arg1, arg6, arg7, 1, 0, 0, rcx_8, arg5, 1, rax_18, &var_b8)
    int64_t* rbx_2 = *arg2
    *arg2 = rax_19
    
    if (rax_19 != 0)
        rax_19[1].d += 1
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            char rax_21
            
            if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_21 = sub_1405949a0()
            
            if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_21 != 0))
                (**rbx_2)(rbx_2, 1)
            else
                bool z_3
                
                if (0 == *(rbx_2 + 0xc))
                    *(rbx_2 + 0xc) = 1
                    z_3 = true
                else
                    *(rbx_2 + 0xc)
                    z_3 = false
                
                if (z_3)
                    sub_1405dcc10(&data_143f02390, rbx_2)
    
    void* rbx_3 = *arg2
    int64_t* var_78_1 = arg1
    
    if (rbx_3 != 0)
        *(rbx_3 + 8) += 1
    
    void*** rcx_13 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    int32_t var_58_1 = arg7
    void* var_68_1 = arg4
    int32_t var_60_1 = arg5
    void* rax_24 = &rcx_13[8]
    int32_t var_5c_1 = arg6
    int64_t var_50_1 = arg8
    
    if (rax_24 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x48)
        rcx_13 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_24 = &rcx_13[8]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_24
    void**** rax_25 = data_143f02ba0
    int64_t var_70 = 0
    *rax_25 = rcx_13
    data_143f02ba0 = &rcx_13[1]
    rcx_13[1] = 0
    *rcx_13 = &data_142efae28
    rcx_13[2] = arg1
    rcx_13[3] = rbx_3
    rcx_13[4] = arg4
    rcx_13[5].d = arg5
    *(rcx_13 + 0x2c) = arg6
    rcx_13[6].d = arg7
    rcx_13[7] = arg8
    sub_1405d1550(&var_70, 0)
else
    if (sub_140a80f10() == 0)
        if (data_143f01c92 != 0)
            goto label_140fdcccf
        
        goto label_140fdcaec
    
label_140fdcb26:
    char rcx_1 = (*(arg4 + 0x3c)).b
    int32_t var_d4_1 = (1 << (data_1439c7a34).b) - 1
    int32_t rax_5 = *(arg4 + 0x40)
    int128_t var_f8 = zx.o(0)
    char var_130_1 = 0
    char var_d0_1 = 0
    int64_t var_c8_1 = 0
    int32_t var_c0_1 = 0
    char var_138_1 = 0
    int32_t var_e8_1 = 1
    int128_t var_e4_1 = data_143dbb1e0
    void*** rax_6 = sub_140fd0da0(arg1, arg6, arg7, 1, 0, 0, rcx_1, arg5, 1, rax_5, &var_f8)
    char var_128
    var_128.q = arg8
    var_130_1.d = arg7
    var_138_1.d = arg6
    (*(*arg1 + 0x728))(arg1, rax_6, arg4, zx.q(arg5), 0, 0, var_128)
    
    if (rax_6 != 0)
        rax_6[1].d += 1
    
    void var_48
    
    if (arg2 != &var_48)
        int64_t* rbx_1 = *arg2
        *arg2 = rax_6
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                char rax_9
                
                if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_9 = sub_1405949a0()
                
                if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_9 != 0))
                    (**rbx_1)(rbx_1, 1)
                else
                    bool z_1
                    
                    if (0 == *(rbx_1 + 0xc))
                        *(rbx_1 + 0xc) = 1
                        z_1 = true
                    else
                        *(rbx_1 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        sub_1405dcc10(&data_143f02390, rbx_1)
    else if (rax_6 != 0)
        rax_6[1].d -= 1
        
        if (rax_6[1].d == 1)
            char rax_13
            
            if (rax_6[2].b == 0 && data_143f0f1d0 == 0)
                rax_13 = sub_1405949a0()
            
            if (rax_6[2].b != 0 || (data_143f0f1d0 == 0 && rax_13 != 0))
                (**rax_6)(rax_6, 1)
            else
                bool z_2
                
                if (0 == *(rax_6 + 0xc))
                    *(rax_6 + 0xc) = 1
                    z_2 = true
                else
                    *(rax_6 + 0xc)
                    z_2 = false
                
                if (z_2)
                    sub_1405dcc10(&data_143f02390, rax_6)

return arg2
