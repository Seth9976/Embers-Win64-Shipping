// 函数: sub_141e87d10
// 地址: 0x141e87d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (data_143f39be0 != 0)
    data_143f39be1 = 1
    void*** rax = j_sub_140a82f30(0x10)
    void*** rdi_1 = rax
    
    if (rax == 0)
        rdi_1 = nullptr
    else
        *rdi_1 = &data_143250790
        rdi_1[1] = sub_140a491d0(1)
        sub_140d21fd0()
        void arg_18
        sub_140dcee30(&data_1439aad30, &arg_18, rdi_1, sub_141e819d0)
        sub_140d21f60()
        void arg_20
        sub_140dcee30(&data_1439aad48, &arg_20, rdi_1, sub_141e819c0)
        void*** rax_2 = sub_140a84c80(0, 0x30, 0)
        void*** var_58_1 = rax_2
        
        if (rax_2 != 0)
            *rax_2 = &data_142d3fe58
            rax_2[1] = rdi_1
            rax_2[2] = sub_141e819d0
            rax_2[4] = sub_140a387b0()
            *rax_2 = &data_142d3feb0
        
        if (rax_2 != 0)
            sub_140599630(&data_1439aa9d0, 1)
            void var_88
            (*rax_2)[6](rax_2, &var_88)
            int64_t rsi_1 = sx.q(data_1439aa9d8)
            int32_t rax_5 = (rsi_1 + 1).d
            bool cond:0_1 = rax_5 s<= data_1439aa9dc
            data_1439aa9d8 = rax_5
            
            if (not(cond:0_1))
                sub_1405a4f90(&data_1439aa9d0)
            
            void** rax_8 = (rsi_1 << 4) + data_1439aa9d0
            *rax_8 = rax_2
            rax_8[1].d = 3
        
        void*** rax_9 = sub_140a84c80(0, 0x30, 0)
        void*** var_48_1 = rax_9
        
        if (rax_9 != 0)
            *rax_9 = &data_142d3fe58
            rax_9[1] = rdi_1
            rax_9[2] = sub_141e819c0
            rax_9[4] = sub_140a387b0()
            *rax_9 = &data_142d3feb0
        
        if (rax_9 != 0)
            sub_140599630(&data_1439aa9e8, 1)
            void var_80
            (*rax_9)[6](rax_9, &var_80)
            int64_t rsi_2 = sx.q(data_1439aa9f0)
            int32_t rax_12 = (rsi_2 + 1).d
            bool cond:1_1 = rax_12 s<= data_1439aa9f4
            data_1439aa9f0 = rax_12
            
            if (not(cond:1_1))
                sub_1405a4f90(&data_1439aa9e8)
            
            void**** rax_15 = (rsi_2 << 4) + data_1439aa9e8
            *rax_15 = rax_9
            rax_15[1].d = 3
    
    int32_t* rax_16 = data_143f39ec0
    data_143f39be8 = rdi_1
    int32_t rbx_3 = *rax_16
    void arg_8
    int32_t arg_10 = *sub_140b5e500(&arg_8, 0xfc)
    int32_t arg_14 = 0
    int64_t var_68
    int64_t* rax_18
    int32_t r9_1
    rax_18, r9_1 = sub_140b5e690(&arg_10, &var_68)
    int16_t* const rdx_10
    
    if (rax_18[1].d == 0)
        rdx_10 = &data_142d40450
    else
        rdx_10 = *rax_18
    
    void*** rax_19 =
        sub_140a6e140(data_143f39be8, rdx_10, 0, sbb.d(r9_1, r9_1, rbx_3 != 0) + 2, -1, 0)
    int64_t rcx_8 = var_68
    data_143db7aa0 = rax_19
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    int64_t* rcx_9 = *(data_143f39be8 + 8)
    (*(*rcx_9 + 0x20))(rcx_9, 0xffffffff, 0)
    int128_t var_78 = zx.o(0)
    sub_141e75650(&var_78)
    sub_141e8d480(&var_78)
    int32_t* rax_22 = data_143f39ea8
    data_143f3a08c += 1
    
    if (*rax_22 != 0)
        sub_141e89520()
    
    int64_t* rdi_2 = var_78:8.q
    
    if (rdi_2 != 0)
        (*(*rdi_2 + 0x20))(rdi_2, 0xffffffff, 0)
        sub_140a4fc50(rdi_2)
    
    result = var_78.q
    
    if (result != 0)
        result[9].d -= 1
        
        if (result[9].d == 1)
            return sub_140a2f6e0(var_78.q)

return result
