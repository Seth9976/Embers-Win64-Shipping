// 函数: sub_141c58430
// 地址: 0x141c58430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*(arg1 + 0x2e8) == 0)
    int32_t rcx_5 = arg1[0xb6]
    
    if (rcx_5 != 1)
        if (rcx_5 != 2)
            return sub_141c36c90(rcx_5, arg1[0xb8], *(arg1 + 0x40), &arg1[0x98], &arg1[0x54])
        
        result = arg1[0xb8]
        
        if (result == rcx_5)
            return sub_141c3c8f0(*(arg1 + 0x40), &arg1[0x98], &arg1[0x54])
        
        if (result == 4)
            return sub_141c3cb60(*(arg1 + 0x40), &arg1[0x98], &arg1[0x54])
        
        if (result == 6)
            return sub_141c3cbf0(*(arg1 + 0x40), &arg1[0x98], &arg1[0x54])
        
        if (result == 8)
            return sub_141c3d050(*(arg1 + 0x40), &arg1[0x98], &arg1[0x54])
    else
        result = arg1[0xb8]
        
        if (result == 2)
            return sub_141c3d650(*(arg1 + 0x40), &arg1[0x98], &arg1[0x54])
        
        if (result == 4)
            return sub_141c3d720(*(arg1 + 0x40), &arg1[0x98], &arg1[0x54])
        
        if (result == 6)
            return sub_141c3d7a0(*(arg1 + 0x40), &arg1[0x98], &arg1[0x54])
        
        if (result == 8)
            return sub_141c3da40(*(arg1 + 0x40), &arg1[0x98], &arg1[0x54])
else
    int128_t zmm0 = data_14399f720
    int64_t* rcx = *(arg1 + 0x40)
    void** const var_48 = &data_143208358
    int64_t var_40
    __builtin_memset(&var_40, 0, 0x14)
    int128_t var_18_1 = zmm0
    int64_t var_38
    
    if (&var_40 != rcx)
        var_40 = *rcx
        *rcx = 0
        var_38.d = rcx[1].d
        var_38:4.d = *(rcx + 0xc)
        rcx[1] = 0
    
    int32_t rdx = arg1[0xb8]
    int128_t var_18_2 = zmm0
    zmm0 = *(arg1 + 0x20)
    int32_t var_30_1 = arg1[0xb6]
    *arg1 = rdx
    int128_t var_28_2 = zmm0
    int64_t* rax_5 = sub_141c5d950(arg2, rdx)
    int64_t* rcx_2 = *(arg1 + 0x2e8)
    *(arg1 + 8) = rax_5
    uint128_t zmm0_1 = zx.o(*(arg2 + 0xc))
    void** const* var_68 = &var_48
    void* rax_6 = *(arg1 + 0x40)
    int32_t* var_60_1 = arg1
    int32_t var_54_1 = _mm_cvtepi32_ps(zmm0_1).d
    uint32_t var_58_1 = divu.dp.d(0:(*(rax_6 + 8)), arg1[0xb6])
    void* arg_8 = &arg1[0x98]
    (*(*rcx_2 + 8))(rcx_2, &var_68, &arg_8)
    int64_t* rbx_1 = *(arg1 + 0x40)
    result = &var_40
    
    if (rbx_1 != &var_40)
        int64_t rcx_3 = *rbx_1
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        *rbx_1 = var_40
        var_40 = 0
        rbx_1[1].d = var_38.d
        result = var_38:4.d
        *(rbx_1 + 0xc) = result
        int64_t var_38_1 = 0
    
    int64_t rcx_4 = var_40
    
    if (rcx_4 != 0)
        return sub_140a74f90(rcx_4)

return result
