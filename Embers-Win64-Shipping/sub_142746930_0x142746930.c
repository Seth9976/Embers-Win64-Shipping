// 函数: sub_142746930
// 地址: 0x142746930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_14231b1a0(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9418)
uint32_t result = zx.d(arg2[5].b)
int64_t var_b8
int64_t var_a8
uint32_t result_1
int32_t arg_18
int64_t* arg_20

if ((result.b & 1) != 0)
    int64_t* rcx_1 = arg2[1]
    int64_t r13_1 = 0
    var_b8 = 0
    int32_t var_ac_1 = 0
    int32_t* rdx = *rcx_1
    
    if (&rdx[1] u> rcx_1[1])
        int32_t* rdx_1 = &arg_18
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_1, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_1, 4)
    else
        arg_18 = *rdx
        *rcx_1 += 4
    
    int32_t rcx_4 = arg_18
    int32_t var_b0_1 = rcx_4
    
    if (rcx_4 s> 0)
        sub_1405daba0(&var_b8)
        rcx_4 = arg_18
        r13_1 = var_b8
    
    (*(*arg2 + 0x150))(arg2, r13_1, zx.q(rcx_4))
    int64_t* rcx_6 = arg2[1]
    int64_t r12_1 = 0
    var_b8 = 0
    int32_t rsi_1 = 0
    var_b0_1.q = 0
    int32_t* rdx_4 = *rcx_6
    
    if (&rdx_4[1] u> rcx_6[1])
        uint32_t* rdx_5 = &result_1
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_5, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_5, 4)
    else
        result_1 = *rdx_4
        *rcx_6 += 4
    
    uint32_t result_4 = result_1
    
    if (result_4 != 0)
        uint32_t result_10 = result_4
        
        if (result_4 s> 0)
            sub_1405daba0(&var_b8)
            result_4 = result_1
            rsi_1 = var_ac_1
            r12_1 = var_b8
        
        (*(*arg2 + 0x150))(arg2, r12_1, zx.q(result_4))
        int64_t* rcx_10 = data_143ef8530
        int64_t rax_10 = (*(*rcx_10 + 0xa0))(rcx_10, r12_1, zx.q(result_1))
        int64_t* rcx_11 = data_143ef8530
        var_a8 = rax_10
        int64_t r8_4 = *rcx_11
        int64_t* rax_11 = (*(r8_4 + 0x180))(rcx_11, 1, r8_4)
        int64_t* var_58_1 = nullptr
        int32_t var_50_1 = 0
        int64_t* var_48_1 = nullptr
        int64_t r9_1 = *rax_11
        arg_20 = rax_11
        void var_98
        (*(r9_1 + 0x48))(rax_11, rax_10, &var_98, r9_1)
        int64_t* rdi_2 = nullptr
        
        if (var_50_1 u> 0)
            int64_t* rcx_13 = data_143ef8530
            int64_t r9_2 = *rcx_13
            int64_t* rax_12 = (*(r9_2 + 0x138))(rcx_13, *var_58_1, 0, r9_2)
            rdi_2 = rax_12
            
            if (rax_12 != 0)
                int64_t* rcx_14 = data_143f74110
                int64_t rdx_12 = *rcx_14
                int32_t rax_13 = (*(rdx_12 + 0x38))(rcx_14, rdx_12)
                int64_t rdx_13 = *rdi_2
                
                if ((*(rdx_13 + 0x30))(rdi_2, rdx_13) != rax_13)
                    sub_142246c60(data_143f52708, rdi_2)
                    rdi_2 = nullptr
        
        int64_t* rcx_17 = arg_20
        *(arg1 + 0x418) = rdi_2
        (*(*rcx_17 + 0x68))(rcx_17)
        int64_t* rcx_18 = data_143ef8530
        (*(*rcx_18 + 0xb8))(rcx_18, var_a8)
        
        if (var_58_1 != 0 && var_58_1 != &var_98)
            (*(*var_48_1 + 0xb8))(var_48_1, var_58_1)
    
    int512_t zmm1_1
    result, zmm1_1 = sub_140b4e7c0(arg2, &data_1439a9418)
    
    if (result s>= 0x10)
        int64_t* rcx_21 = arg2[1]
        uint32_t* rdx_17 = *rcx_21
        
        if (&rdx_17[1] u> rcx_21[1])
            uint32_t* rdx_18 = &result_1
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                result = sub_140b54070(arg2, rdx_18, zmm1_1)
            else
                result = (*(*arg2 + 0x150))(arg2, rdx_18, 4)
        else
            result = *rdx_17
            result_1 = result
            *rcx_21 += 4
        
        uint32_t result_7 = result_1
        
        if (result_7 != 0)
            int32_t rdi_3 = 0
            
            if (result_7 s> rsi_1)
                int32_t var_b0_2 = 0
                
                if (rsi_1 != result_7)
                    sub_1405c5510(&var_b8, result_7)
                    rsi_1 = var_ac_1
                    rdi_3 = var_b0_2
                    r12_1 = var_b8
                    result_7 = result_1
            
            int32_t rax_20 = rdi_3 + result_7
            int32_t var_b0_3 = rax_20
            
            if (rax_20 s> rsi_1)
                sub_1405daba0(&var_b8)
                r12_1 = var_b8
            
            memset(sx.q(rdi_3) + r12_1, 0, sx.q(result_7))
            result = (*(*arg2 + 0x150))(arg2, r12_1, zx.q(result_1))
            
            if (*(arg1 + 0x418) != 0)
                int64_t* rcx_28 = data_143ef8530
                int64_t rax_23 = (*(*rcx_28 + 0xa0))(rcx_28, r12_1, zx.q(result_1))
                int64_t* rcx_29 = data_143ef8530
                int64_t rdx_23 = *rcx_29
                int64_t* rax_24 = (*(rdx_23 + 0x170))(rcx_29, rdx_23)
                int64_t* rcx_30 = data_143f74110
                int64_t rdx_24 = *rcx_30
                int64_t* rax_26 = (**rax_24)(rax_24, zx.q((*(rdx_24 + 0x38))(rcx_30, rdx_24)))
                int64_t r9_3 = *rax_26
                (*(r9_3 + 0x10))(rax_26, *(arg1 + 0x418), rax_23, r9_3)
                int64_t* rcx_33 = data_143ef8530
                result = (*(*rcx_33 + 0xb8))(rcx_33, rax_23)
    
    if (r12_1 != 0)
        result = sub_140a74f90(r12_1)
    
    if (r13_1 != 0)
        result = sub_140a74f90(r13_1)
else if ((result.b & 2) != 0)
    int64_t* rcx_36 = *(arg1 + 0x418)
    char* rax_29
    char* const rbx_3
    
    if (rcx_36 != 0)
        rax_29 = (*(*rcx_36 + 0x28))(rcx_36)
        rbx_3 = rax_29
    
    if (rcx_36 == 0 || rax_29 == 0 || arg2[0xe] != 0)
        rbx_3 = &data_1437020ab
    
    int64_t rax_30 = -1
    
    do
        rax_30 += 1
    while (rbx_3[rax_30] != 0)
    
    int64_t* rcx_37 = arg2[1]
    arg_18 = rax_30.d + 1
    int32_t* rdx_28 = *rcx_37
    
    if (&rdx_28[1] u> rcx_37[1])
        int32_t* rdx_29 = &arg_18
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_29, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_29, 4)
    else
        arg_18 = *rdx_28
        *rcx_37 += 4
    
    (*(*arg2 + 0x150))(arg2, rbx_3, zx.q(arg_18))
    int64_t* rcx_40 = data_143ef8530
    int64_t* rax_37 = (*(*rcx_40 + 0xa8))(rcx_40, 0)
    int64_t* rcx_41 = data_143ef8530
    int64_t r8_11 = *rcx_41
    int64_t* rax_38 = (*(r8_11 + 0x180))(rcx_41, 1, r8_11)
    int64_t* rcx_42 = *(arg1 + 0x418)
    result_1 = 0
    var_b8 = 0
    int64_t rsi_3 = 0
    int32_t var_b0
    var_b0.q = 0
    int32_t r13_2 = 0
    char var_c8
    int32_t var_ac
    
    if (rcx_42 != 0)
        int64_t rbx_4 = *rcx_42
        int32_t rax_39 = (*(rbx_4 + 0xc8))(rcx_42)
        (*(rbx_4 + 0x100))(*(arg1 + 0x418), zx.q(rax_39))
        int64_t* rcx_44 = *(arg1 + 0x418)
        int64_t* rax_41 = (*(*rcx_44 + 0x58))(rcx_44)
        arg_20 = rax_41
        
        if (rax_41 != 0)
            var_c8 = 0
            (*(*rax_38 + 0x18))(rax_38, rax_37, &arg_20, 1, 0)
            uint32_t result_2 = (*(*rax_37 + 0x18))(rax_37)
            result_1 = result_2
            uint64_t result_9 = zx.q(result_2)
            uint32_t result_11 = result_2
            
            if (result_2 s> 0)
                sub_1405daba0(&var_b8)
                result_9 = zx.q(result_1)
                r13_2 = var_ac
                rsi_3 = var_b8
            
            (*(*rax_37 + 0x30))(rax_37, rsi_3, result_9)
    
    int64_t* rcx_49 = arg2[1]
    uint32_t* rdx_35 = *rcx_49
    
    if (&rdx_35[1] u> rcx_49[1])
        uint32_t* rdx_36 = &result_1
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_36, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_36, 4)
    else
        result_1 = *rdx_35
        *rcx_49 += 4
    
    uint32_t result_5 = result_1
    
    if (result_5 != 0)
        (*(*arg2 + 0x150))(arg2, rsi_3, zx.q(result_5))
    
    (*(*rax_38 + 0x68))(rax_38)
    
    if (rax_37 != 0)
        (**rax_37)(rax_37, 1)
    
    int64_t* rcx_54 = data_143ef8530
    result_1 = 0
    int64_t* rax_52 = (*(*rcx_54 + 0xa8))(rcx_54, 0)
    
    if (*(arg1 + 0x418) != 0)
        int64_t* rcx_55 = data_143ef8530
        int64_t rdx_38 = *rcx_55
        int64_t* rax_53 = (*(rdx_38 + 0x170))(rcx_55, rdx_38)
        int64_t* rcx_56 = data_143f74110
        int64_t rdx_39 = *rcx_56
        int64_t* rax_55 = (**rax_53)(rax_53, zx.q((*(rdx_39 + 0x38))(rcx_56, rdx_39)))
        int64_t* rcx_58 = data_143f74110
        int64_t rbx_6 = *rax_55
        int64_t r8_14 = *rcx_58
        int64_t rax_56 = (*(r8_14 + 0x160))(rcx_58, &var_a8, r8_14)
        (*rbx_6)(rax_55, *(arg1 + 0x418), rax_56)
        int64_t r9_4 = *rax_55
        (*(r9_4 + 8))(rax_55, *(arg1 + 0x418), rax_52, r9_4, var_c8)
        uint32_t result_3 = (*(*rax_52 + 0x18))(rax_52)
        int32_t rbx_7 = 0
        result_1 = result_3
        uint32_t result_8 = result_3
        
        if (result_3 s> r13_2)
            int32_t var_b0_4 = 0
            
            if (r13_2 != result_3)
                sub_1405c5510(&var_b8, result_3)
                result_8 = result_1
                r13_2 = var_ac
                rbx_7 = var_b0_4
                rsi_3 = var_b8
        
        int32_t rax_58 = rbx_7 + result_8
        int32_t var_b0_5 = rax_58
        
        if (rax_58 s> r13_2)
            sub_1405daba0(&var_b8)
            rsi_3 = var_b8
        
        memset(sx.q(rbx_7) + rsi_3, 0, sx.q(result_8))
        (*(*rax_52 + 0x30))(rax_52, rsi_3, zx.q(result_1))
    
    int64_t* rcx_67 = arg2[1]
    uint32_t* rdx_47 = *rcx_67
    
    if (&rdx_47[1] u> rcx_67[1])
        uint32_t* rdx_48 = &result_1
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            result = sub_140b54070(arg2, rdx_48, zmm1)
        else
            result = (*(*arg2 + 0x150))(arg2, rdx_48, 4)
    else
        result = *rdx_47
        result_1 = result
        *rcx_67 += 4
    
    uint32_t result_6 = result_1
    
    if (result_6 != 0)
        result = (*(*arg2 + 0x150))(arg2, rsi_3, zx.q(result_6))
    
    if (rax_52 != 0)
        result = (**rax_52)(rax_52, 1)
    
    if (rsi_3 != 0)
        result = sub_140a74f90(rsi_3)

if (arg2[8].d s< 0x194)
    int32_t zmm0_1 = (zx.o(0)).d
    
    if (zmm0_1 f== *(arg1 + 0x398))
        result.b = 0
    else
        result.b = 1
    
    *(arg1 + 0x394) = result.b
    
    if (not(zmm0_1 f!= *(arg1 + 0x398)))
        *(arg1 + 0x398) = 0x3f800000
    
    result.b = *(arg1 + 0x390) != 0xffffffff
    *(arg1 + 0x388) = result.b
    *(arg1 + 0x390) = 1
    int32_t temp0_1 = *(arg1 + 0x3e4)
    result.b = temp0_1 != 0xffffffff
    *(arg1 + 0x3e0) = result.b
    
    if (temp0_1 == 0xffffffff)
        *(arg1 + 0x3e4) = 0

return result
