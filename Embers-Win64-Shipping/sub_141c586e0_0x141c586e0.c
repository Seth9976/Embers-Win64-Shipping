// 函数: sub_141c586e0
// 地址: 0x141c586e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x2e8) == 0)
    int32_t rcx_5 = arg1[0xb6]
    
    if (rcx_5 == 1)
        int32_t rax_14 = arg1[0xb8]
        
        if (rax_14 == 2)
            sub_141c3d5b0(*(arg1 + 0x40), &arg1[0x98], &arg1[0x14], &arg1[0x54])
        else if (rax_14 == 4)
            sub_141c3d6c0(*(arg1 + 0x40), &arg1[0x98], &arg1[0x14], &arg1[0x54])
        else if (rax_14 == 6)
            sub_141c3d760(*(arg1 + 0x40), &arg1[0x98], &arg1[0x14], &arg1[0x54])
        else if (rax_14 == 8)
            sub_141c3d9d0(*(arg1 + 0x40), &arg1[0x98], &arg1[0x14], &arg1[0x54])
    else if (rcx_5 != 2)
        sub_141c36c50(rcx_5, arg1[0xb8], *(arg1 + 0x40), &arg1[0x98], &arg1[0x14], &arg1[0x54])
    else
        int32_t rax_15 = arg1[0xb8]
        
        if (rax_15 == rcx_5)
            sub_141c3c8c0(*(arg1 + 0x40), &arg1[0x98], &arg1[0x14], &arg1[0x54])
        else if (rax_15 == 4)
            sub_141c3cae0(*(arg1 + 0x40), &arg1[0x98], &arg1[0x14], &arg1[0x54])
        else if (rax_15 == 6)
            sub_141c3cbb0(*(arg1 + 0x40), &arg1[0x98], &arg1[0x14], &arg1[0x54])
        else if (rax_15 == 8)
            sub_141c3d010(*(arg1 + 0x40), &arg1[0x98], &arg1[0x14], &arg1[0x54])
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
    int64_t* rdi_1 = *(arg1 + 0x40)
    
    if (rdi_1 != &var_40)
        int64_t rcx_3 = *rdi_1
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        *rdi_1 = var_40
        var_40 = 0
        rdi_1[1].d = var_38.d
        *(rdi_1 + 0xc) = var_38:4.d
        int64_t var_38_1 = 0
    
    int64_t rcx_4 = var_40
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

return memcpy(&arg1[0x14], &arg1[0x54], arg1[0x94]) __tailcall
