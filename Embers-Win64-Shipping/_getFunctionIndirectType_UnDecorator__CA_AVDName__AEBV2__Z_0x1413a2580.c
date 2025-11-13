// 函数: ?getFunctionIndirectType@UnDecorator@@CA?AVDName@@AEBV2@@Z
// 地址: 0x1413a2580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_38 = zmm6
int32_t rax = *(arg3 + 0x38)
int32_t rdx_1 = *arg4 * rax
int32_t rdi_1 = arg4[2] * rax
*arg4 = rdx_1
arg4[2] = rdi_1
int32_t rcx = *(arg3 + 0x3c)
int64_t* var_88
int32_t var_78
int128_t var_58
int32_t arg_1c
void*** rdi_3
int64_t* r14_1

if (rcx == 1)
    int32_t rcx_23 = 0
    int32_t rdi_8 = (rdi_1 - rdx_1) * (arg4[3] - arg4[1])
    int32_t var_6c_2 = 0x467a0000
    var_78 = 6
    int32_t var_74_1 = 3
    int16_t var_68_2 = 0
    char var_70_2 = 0
    var_88 = nullptr
    int64_t var_80_5 = 0
    
    if (rdi_8 s> 0)
        var_80_5.d = rdi_8
        sub_140610660(&var_88)
    else if (rdi_8 s< 0)
        int32_t r12_8 = neg.d(rdi_8)
        
        if (r12_8 != 0)
            int32_t rax_26 = neg.d(rdi_8 + r12_8)
            
            if (rax_26 != 0)
                memmove(sx.q(rdi_8) << 4, nullptr, rax_26 << 4)
                rcx_23 = var_80_5.d
            
            var_80_5.d = rcx_23 - r12_8
            sub_1405a5010(&var_88)
    
    int32_t rdi_9 = data_143f029c8
    *arg4
    sub_140b34200("FlushRHIThreadTotal", rdi_9)
    
    if (*(arg2 + 0x14) u> 0)
        j_sub_14196ef60(&data_143f02b88, arg2, arg5, arg6)
    
    sub_14198b230()
    
    if (data_143f01c92 != 0)
        sub_14198b3f0()
    
    int64_t rdx_13
    rdx_13.b = 1
    zmm6 = sub_14198b7d0()
    sub_140b38680("FlushRHIThreadTotal", rdi_9)
    int64_t* rcx_32 = data_143f0f180
    int32_t var_48_2 = var_68_2.d
    var_58 = var_78.o
    var_78.o = zmm6
    (*(*rcx_32 + 0x2f0))(rcx_32, arg3, &var_78, &var_88, &var_58)
    int32_t rax_30 = arg4[2] - *arg4
    r14_1 = var_88
    arg_1c = arg4[3] - arg4[1]
    var_88 = nullptr
    int64_t var_80_6 = 0
    void*** rax_33 = j_sub_140a82f30(0x40)
    rdi_3 = rax_33
    
    if (rax_33 == 0)
        goto label_1413a2a3a
    
    rax_33[1] = rax_30.q
    rax_33[2].d = 2
    *(rax_33 + 0x14) = 0x2000
    *(rax_33 + 0x16) = 4
    rax_33[3] = 0
    rax_33[4] = 0
    *rdi_3 = &data_142f04400
    rdi_3[5] = r14_1
    rdi_3[7] = sx.q(var_80_5:4.d)
    rdi_3[6] = sx.q(var_80_5.d)
    goto label_1413a2a4a

if (rcx == 2)
label_1413a2738:
    int32_t rcx_12 = 0
    int32_t rdi_5 = (rdi_1 - rdx_1) * (arg4[3] - arg4[1])
    int32_t var_6c_1 = 0x467a0000
    var_78.q = 6
    int16_t var_68_1 = 0
    char var_70_1 = 0
    var_88 = nullptr
    int64_t var_80_3 = 0
    
    if (rdi_5 s> 0)
        var_80_3.d = rdi_5
        sub_1406105e0(&var_88)
    else if (rdi_5 s< 0)
        int32_t r12_5 = neg.d(rdi_5)
        
        if (r12_5 != 0)
            int32_t rax_15 = neg.d(rdi_5 + r12_5)
            
            if (rax_15 != 0)
                memmove(sx.q(rdi_5) << 2, nullptr, rax_15 << 2)
                rcx_12 = var_80_3.d
            
            var_80_3.d = rcx_12 - r12_5
            sub_1405dac90(&var_88)
    
    int32_t rdi_6 = data_143f029c8
    *arg4
    sub_140b34200("FlushRHIThreadTotal", rdi_6)
    
    if (*(arg2 + 0x14) u> 0)
        j_sub_14196ef60(&data_143f02b88, arg2, arg5, arg6)
    
    sub_14198b230()
    
    if (data_143f01c92 != 0)
        sub_14198b3f0()
    
    int64_t rdx_7
    rdx_7.b = 1
    zmm6 = sub_14198b7d0()
    sub_140b38680("FlushRHIThreadTotal", rdi_6)
    int64_t* rcx_21 = data_143f0f180
    int32_t var_48_1 = var_68_1.d
    var_58 = var_78.o
    var_78.o = zmm6
    (*(*rcx_21 + 0x2f8))(rcx_21, arg3, &var_78, &var_88, &var_58)
    int32_t rax_19 = arg4[2] - *arg4
    r14_1 = var_88
    arg_1c = arg4[3] - arg4[1]
    var_88 = nullptr
    int64_t var_80_4 = 0
    void*** rax_22 = j_sub_140a82f30(0x40)
    rdi_3 = rax_22
    
    if (rax_22 == 0)
        goto label_1413a2a3a
    
    rax_22[1] = rax_19.q
    rax_22[2].d = 0
    *(rax_22 + 0x14) = 0x801
    *(rax_22 + 0x16) = 4
    rax_22[3] = 0
    rax_22[4] = 0
    *rdi_3 = &data_142d56fd0
    rdi_3[5] = r14_1
    rdi_3[7] = sx.q(var_80_3:4.d)
    rdi_3[6] = sx.q(var_80_3.d)
    goto label_1413a2a4a

if (rcx == 0xa)
    int32_t i_1 = (rdi_1 - rdx_1) * (arg4[3] - arg4[1])
    int32_t rcx_4 = 0
    var_88 = nullptr
    int64_t var_80_1 = 0
    
    if (i_1 s> 0)
        var_80_1.d = i_1
        sub_1405a4d70(&var_88)
        int64_t* rax_3 = var_88
        
        if (i_1 != 0)
            int32_t i
            
            do
                *rax_3 = 0
                rax_3 = &rax_3[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
    else if (i_1 s< 0)
        int32_t r12_2 = neg.d(i_1)
        
        if (r12_2 != 0)
            int32_t rax_5 = neg.d(r12_2 + i_1)
            
            if (rax_5 != 0)
                memmove(sx.q(i_1) << 3, nullptr, rax_5 << 3)
                rcx_4 = var_80_1.d
            
            var_80_1.d = rcx_4 - r12_2
            sub_1405c53d0(&var_88)
    
    int128_t zmm0 = *arg4
    var_78.o = zmm0
    (*(*data_143f0f180 + 0x650))(zmm0, arg2, arg3, &var_78, &var_88, 0, 0, 0)
    int32_t rax_8 = arg4[2] - *arg4
    r14_1 = var_88
    arg_1c = arg4[3] - arg4[1]
    var_88 = nullptr
    int64_t var_80_2 = 0
    void*** rax_11 = j_sub_140a82f30(0x40)
    rdi_3 = rax_11
    
    if (rax_11 == 0)
    label_1413a2a3a:
        rdi_3 = nullptr
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
        
        goto label_1413a2a4a
    
    rax_11[1] = rax_8.q
    rax_11[2].d = 1
    *(rax_11 + 0x14) = 0x1000
    *(rax_11 + 0x16) = 4
    rax_11[3] = 0
    rax_11[4] = 0
    *rdi_3 = &data_142d56ff0
    rdi_3[5] = r14_1
    rdi_3[7] = sx.q(var_80_1:4.d)
    rdi_3[6] = sx.q(var_80_1.d)
label_1413a2a4a:
    int64_t* rcx_35 = var_88
    *arg1 = rdi_3
    
    if (rcx_35 != 0)
        sub_140a74f90(rcx_35)
else
    if (rcx == 0x25)
        goto label_1413a2738
    
    *arg1 = 0

return arg1
