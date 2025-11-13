// 函数: sub_14196d850
// 地址: 0x14196d850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t* rcx = *(arg1 + 8)
void** const result = (*(*rcx + 8))(rcx)

if (arg3 != 0)
    (*(*arg3 + 8))(arg3)
    
    if (*(arg1 + 0x10) == 0)
        int32_t var_a8
        (*(*arg3 + 0x30))(arg3, &var_a8)
        int16_t* var_98
        sub_140b63b70(*(arg1 + 8) + 0x1c, &var_98)
        int16_t* const rdx_2 = &data_142d40450
        int128_t zmm1_1 = data_143dbb1e0
        int32_t var_90
        
        if (var_90 != 0)
            rdx_2 = var_98
        
        uint64_t r9 = zx.q(var_a8)
        int512_t zmm0_1
        zmm0_1.o = zx.o(0)
        int64_t* rcx_6 = data_143f0f180
        int32_t var_64_1 = (1 << (data_1439c7a34).b) - 1
        int128_t var_88
        int128_t* var_f0_1 = &var_88
        char rax_7 = *(arg3 + 0x3c)
        int32_t var_f8_1 = 0x240000
        int16_t* const var_58_1 = rdx_2
        int32_t var_100_1 = 1
        var_88 = zx.o(0)
        int32_t var_78_1 = 1
        int128_t var_74_1 = zmm1_1
        char var_60_1 = 0
        int32_t var_50_1 = 0
        void* var_b8
        int32_t var_a4
        (*(*rcx_6 + 0x560))(zmm0_1, &var_b8, &data_143f02b98, r9, var_a4, rax_7, 1, var_100_1, 
            var_f8_1, var_f0_1)
        sub_1408c8cf0(arg1 + 0x10, var_b8)
        sub_1405d1550(&var_b8)
        int16_t* rcx_9 = var_98
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
    
    int64_t rax_9 = *(arg1 + 0x10)
    int64_t* rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_10 = &rbx_3[1]
    
    if (rcx_10 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_10 = &rbx_3[1]
    
    *(arg2 + 0x30) = rcx_10
    *rbx_3 = rax_9
    void*** rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_10 = &rcx_14[5]
    
    if (rax_10 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_10 = &rcx_14[5]
    
    *(arg2 + 0x30) = rax_10
    *(arg2 + 0x14) += 1
    int128_t zmm0 = data_142d3f800
    int32_t var_e8_1 = 0
    **(arg2 + 8) = rcx_14
    *(arg2 + 8) = &rcx_14[1]
    rcx_14[1] = 0
    rcx_14[3] = rbx_3
    *rcx_14 = &data_142d549c8
    rcx_14[2].d = 1
    rcx_14[4].d = 1
    int32_t rax_13 = *arg4
    int64_t r15_1 = *(arg1 + 0x10)
    void*** rbx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int32_t rax_14 = arg4[1]
    int32_t rax_15 = arg4[2]
    int32_t rax_16 = arg4[3]
    void* rax_17 = &rbx_8[0xa]
    int64_t var_c4_1 = 0
    int32_t var_bc_1 = 0
    
    if (rax_17 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x58)
        rbx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_17 = &rbx_8[0xa]
    
    *(arg2 + 0x30) = rax_17
    void**** rax_18 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_18 = rbx_8
    *(arg2 + 8) = &rbx_8[1]
    rbx_8[1] = 0
    *rbx_8 = &data_142d56628
    rbx_8[2].d = var_e8_1
    *(rbx_8 + 0x14) = rax_13
    rbx_8[3].d = rax_14
    *(rbx_8 + 0x1c) = rax_15
    rbx_8[4].d = rax_16
    *(rbx_8 + 0x24) = zmm0.d
    rbx_8[5].d = zmm0:4.d
    *(rbx_8 + 0x2c) = zmm0:8.d
    rbx_8[6].d = zmm0:0xc.d
    *(rbx_8 + 0x34) = var_c4_1.d
    rbx_8[7].d = var_c4_1:4.d
    *(rbx_8 + 0x3c) = var_bc_1
    rbx_8[8] = arg3
    rbx_8[9] = r15_1
    
    if ((*(*arg3 + 8))(arg3, 0) == 0)
        int64_t* rcx_20 = rbx_8[8]
        
        if ((*(*rcx_20 + 0x18))(rcx_20) == 0)
            int64_t* rcx_21 = rbx_8[8]
            
            if ((*(*rcx_21 + 0x20))(rcx_21) == 0)
                int64_t* rcx_22 = rbx_8[8]
                (*(*rcx_22 + 0x10))(rcx_22)
    
    int64_t* rcx_23 = rbx_8[9]
    
    if ((*(*rcx_23 + 8))(rcx_23) == 0)
        int64_t* rcx_24 = rbx_8[9]
        
        if ((*(*rcx_24 + 0x18))(rcx_24) == 0)
            int64_t* rcx_25 = rbx_8[9]
            
            if ((*(*rcx_25 + 0x20))(rcx_25) == 0)
                int64_t* rcx_26 = rbx_8[9]
                (*(*rcx_26 + 0x10))(rcx_26)
    
    void* rbx_11 = *(arg1 + 8)
    void*** rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_46 = &rcx_29[3]
    
    if (rax_46 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x20)
        rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_46 = &rcx_29[3]
    
    *(arg2 + 0x30) = rax_46
    int64_t* rax_47 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_47 = rcx_29
    *(arg2 + 8) = &rcx_29[1]
    rcx_29[1] = 0
    result = &data_142f7e220
    *rcx_29 = &data_142f7e220
    rcx_29[2] = rbx_11
    
    if (rbx_11 != 0)
        *(rbx_11 + 0x18) += 1

__security_check_cookie(rax_1 ^ &var_138)
return result
