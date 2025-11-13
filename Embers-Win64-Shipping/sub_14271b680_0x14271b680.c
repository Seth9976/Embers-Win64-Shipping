// 函数: sub_14271b680
// 地址: 0x14271b680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* result

if (arg1 == 0)
    result = nullptr
else
    int64_t var_a0_1 = 0
    void* rax_2 = sub_140cde0b0()
    sub_140d19010(rax_2, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    int64_t var_a8_1 = 0
    void* result_1
    int32_t zmm6_1
    result_1, zmm6_1 = sub_140d2dfc0(sub_14272b440(), rax_2, 0, 0, 0, 0, 0, 0, 0)
    *(result_1 + 0x30) = var_a0_1
    *(result_1 + 0x68) = arg1
    sub_14263aa00(result_1, arg1 + 0x2a0, 0xc0)
    int64_t var_98
    sub_1426a6430(&var_98)
    int64_t* rcx_4 = &var_98
    
    if (arg3 == 0)
        sub_1426bf140(rcx_4, arg2)
    else
        sub_1426bf120(rcx_4, arg3)
    
    int32_t var_74_1 = zmm6_1
    int32_t var_78
    uint32_t rax_6
    
    if (arg4 != 0)
        rax_6.b = arg4 == 1
    else
        rax_6 = var_78 u>> 5
    
    int32_t rcx_9 = ((zx.d(rax_6.b) << 5 ^ var_78) & 0x20) ^ var_78
    uint32_t rax_7
    
    if (arg5 != 0)
        rax_7.b = arg5 == 1
    else
        rax_7 = rcx_9 u>> 3
    
    int32_t r8_6 = (((zx.d(rax_7.b) & 1) * 2) | zx.d(arg6)) << 2 | (rcx_9 & 0xfffffff3)
    uint32_t rax_10
    
    if (arg9 != 0)
        rax_10.b = arg9 == 1
    else
        rax_10 = r8_6 u>> 4
    
    int64_t rcx_11 = var_98
    int64_t* var_68
    int64_t* rbx_2 = var_68
    int64_t rax_12 = *(arg1 + 0x308)
    *(result_1 + 0x68) = arg1
    *(result_1 + 0xb0) &= 0xffffff00
    int64_t var_80_1 = rax_12
    *(result_1 + 0xa8) = rax_12
    int32_t rdx_9 = ((zx.d(rax_10.b) << 4 ^ r8_6) & 0x10) ^ r8_6
    *(result_1 + 0x90) = rcx_11
    *(result_1 + 0xb0) |= zx.d(rdx_9.b)
    int64_t var_90
    *(result_1 + 0x98) = var_90
    int32_t var_78_1 = rdx_9
    int32_t var_88
    *(result_1 + 0xa0) = var_88
    int64_t* rcx_13 = rbx_2
    int64_t var_70
    int64_t var_b8 = var_70
    *(result_1 + 0xb4) = zmm6_1
    int64_t* var_b0_1 = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
        rbx_2 = var_68
        rcx_13 = var_b0_1
    
    if (&var_b8 != result_1 + 0xb8)
        uint128_t zmm1_1 = var_b8.o
        uint128_t var_50_1 = zmm1_1
        var_b8.o = *(result_1 + 0xb8)
        rcx_13 = var_b0_1
        *(result_1 + 0xb8) = zmm1_1
    
    if (rcx_13 != 0)
        rcx_13[1].d -= 1
        
        if (rcx_13[1].d == 1)
            (**var_b0_1)(var_b0_1)
            int32_t rax_17 = *(var_b0_1 + 0xc)
            *(var_b0_1 + 0xc) -= 1
            
            if (rax_17 == 1)
                (*(*var_b0_1 + 8))(var_b0_1, 1)
        
        rbx_2 = var_68
    
    int32_t var_60
    *(result_1 + 0xc8) = var_60
    *(result_1 + 0x109) &= 0xfe
    *(result_1 + 0x109) |= arg8
    
    if (arg7 != 0)
        int64_t* rax_21 = sub_142729da0()
        int64_t* var_58_1 = rax_21
        sub_142639ae0(result_1, rax_21)
        rbx_2 = var_68
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t rsi_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rsi_1 == 1)
                int64_t r8_8 = *rbx_2
                (*(r8_8 + 8))(rbx_2, zx.q(rsi_1), r8_8)
    
    result = result_1

__security_check_cookie(rax_1 ^ &var_108)
return result
