// 函数: sub_140840240
// 地址: 0x140840240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x68) == 0 && *(arg1 + 0xc8) == 0)
    return 

if (sub_14074a210((*U"1111")[sx.q(arg3)]) != 0)
    int32_t count = *(arg1 + 0xc8) << 2
    uint64_t r14_2 = zx.q(*(arg1 + 0x68) * 0xc)
    int128_t var_50
    __builtin_memset(&var_50, 0, 0x14)
    int32_t rbx_1 = count + r14_2.d
    sub_14076dc30(&var_50, 4, rbx_1 u>> 2, 0x1c, 4, u"NiagaraTaskInfosBuffer")
    int64_t* rcx_2 = data_143f0f180
    int64_t rax_6 = (*(*rcx_2 + 0x130))(rcx_2, &data_143f02b98, var_50.q, 0, rbx_1, 1)
    memcpy(rax_6, *(arg1 + 0x60), r14_2.d)
    memcpy(r14_2 + rax_6, *(arg1 + 0xc0), count)
    int64_t* rcx_5 = data_143f0f180
    (*(*rcx_5 + 0x138))(rcx_5, &data_143f02b98, var_50.q)
    void* r14_3 = &(*U"1111")[sx.q(arg3)]
    int32_t rbx_2
    rbx_2.b = data_1439c7a20 != 0
    void* var_60
    sub_1419a2ec0(std::_Get_future_error_what(*r14_3), &var_60, &data_143ce88e0, rbx_2)
    void* rsi_1 = var_60
    int64_t rax_11 = *(arg1 + 0x18)
    int32_t r15_3 = sbb.d(count, count, data_1439c7a20 != 0) & 2
    int64_t* rdi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_8 = &rdi_4[1]
    
    if (rcx_8 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rdi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_8 = &rdi_4[1]
    
    *(arg2 + 0x30) = rcx_8
    *rdi_4 = rax_11
    void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_12 = &rcx_12[6]
    
    if (rax_12 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_12 = &rcx_12[6]
    
    *(arg2 + 0x30) = rax_12
    *(arg2 + 0x14) += 1
    **(arg2 + 8) = rcx_12
    *(arg2 + 8) = &rcx_12[1]
    rcx_12[3] = rdi_4
    rcx_12[4].d = r15_3
    rcx_12[1] = 0
    *rcx_12 = &data_142da7798
    rcx_12[5] = 0
    rcx_12[2].d = 1
    *(rcx_12 + 0x24) = 3
    int64_t rax_15 = *(arg1 + 0xd8)
    int64_t* rdi_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_16 = &rdi_9[1]
    
    if (rcx_16 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rdi_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_16 = &rdi_9[1]
    
    *(arg2 + 0x30) = rcx_16
    *rdi_9 = rax_15
    void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_16 = &rcx_20[6]
    
    if (rax_16 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_16 = &rcx_20[6]
    
    *(arg2 + 0x30) = rax_16
    void**** rax_17 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_17 = rcx_20
    *(arg2 + 8) = &rcx_20[1]
    rcx_20[1] = 0
    rcx_20[3] = rdi_9
    void* rdi_12 = nullptr
    *rcx_20 = &data_142da7798
    rcx_20[2].d = 1
    rcx_20[4] = 1
    rcx_20[5] = 0
    void* var_58
    
    if (rsi_1 != 0)
        int64_t rdx_3 = sx.q(*(rsi_1 + 0x10c))
        int64_t* r14_5 = *(var_58 + 0x10)
        int64_t* rdi_13 = r14_5[3]
        
        if (rdi_13[rdx_3] == 0)
            sub_1419ccf30(r14_5, rdx_3.d)
            rdi_13 = r14_5[3]
        
        rdi_12 = rdi_13[rdx_3]
        r14_3 = &(*U"1111")[sx.q(arg3)]
    
    *(arg2 + 0x1b0) = rdi_12
    sub_14198aa60(rdi_12)
    void*** rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_19 = &rcx_28[3]
    
    if (rax_19 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x20)
        rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_19 = &rcx_28[3]
    
    *(arg2 + 0x30) = rax_19
    void**** rax_20 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_20 = rcx_28
    *(arg2 + 8) = &rcx_28[1]
    rcx_28[1] = 0
    *rcx_28 = &data_142dd5b40
    rcx_28[2] = rdi_12
    sub_14088fa40(rsi_1, arg2, *(arg1 + 0xd8), *(arg1 + 0x18))
    int64_t r15_5 = var_50:8.q
    sub_14088fdc0(rsi_1, arg2, r15_5, *(arg1 + 0x68), *(arg1 + 0xc8))
    int32_t rax_23 = *(arg1 + 0x68)
    void* rax_29
    void*** rcx_40
    void** rdi_16
    
    if (data_1439c7a20 == 0)
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rax_23 + 0x3f)
        sub_1419cd1c0(arg2, rsi_1, ((temp1_1 & 0x3f) + temp2_1) s>> 6, 1, 1)
        sub_140891480(rsi_1, arg2)
        void* rax_32 = *(arg1 + 0x18)
        void** rdi_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_45 = &rdi_21[1]
        
        if (rcx_45 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            rdi_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_45 = &rdi_21[1]
        
        *(arg2 + 0x30) = rcx_45
        *rdi_21 = rax_32
        void*** rcx_49 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_33 = &rcx_49[6]
        
        if (rax_33 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_49 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_33 = &rcx_49[6]
        
        *(arg2 + 0x30) = rax_33
        void**** rax_34 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_34 = rcx_49
        *(arg2 + 8) = &rcx_49[1]
        rcx_49[1] = 0
        *rcx_49 = &data_142da7798
        rcx_49[2].d = 1
        rcx_49[3] = rdi_21
        rcx_49[4].d = 1
        *(rcx_49 + 0x24) = 3
        rcx_49[5] = 0
        sub_1419a2ec0(std::_Get_future_error_what(*r14_3), &var_60, &data_143ce89e0, 0)
        void* rsi_2 = var_60
        void* rdi_24 = nullptr
        
        if (rsi_2 != 0)
            int64_t rdx_17 = sx.q(*(rsi_2 + 0x10c))
            int64_t* r14_6 = *(var_58 + 0x10)
            int64_t* rdi_25 = r14_6[3]
            
            if (rdi_25[rdx_17] == 0)
                sub_1419ccf30(r14_6, rdx_17.d)
                rdi_25 = r14_6[3]
            
            rdi_24 = rdi_25[rdx_17]
        
        *(arg2 + 0x1b0) = rdi_24
        sub_14198aa60(rdi_24)
        void*** rcx_59 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_38 = &rcx_59[3]
        
        if (rax_38 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x20)
            rcx_59 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_38 = &rcx_59[3]
        
        *(arg2 + 0x30) = rax_38
        void**** rax_39 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_39 = rcx_59
        *(arg2 + 8) = &rcx_59[1]
        rcx_59[1] = 0
        *rcx_59 = &data_142dd5b40
        rcx_59[2] = rdi_24
        sub_14088fba0(rsi_2, arg2, *(arg1 + 0x18))
        sub_14088fed0(rsi_2, arg2, r15_5, *(arg1 + 0x68), *(arg1 + 0xc8))
        int32_t temp5_1
        int32_t temp6_1
        temp5_1:temp6_1 = sx.q(*(arg1 + 0xc8) + 0x3f)
        sub_1419cd1c0(arg2, rsi_2, ((temp5_1 & 0x3f) + temp6_1) s>> 6, 1, 1)
        sub_140891640(rsi_2, arg2)
        void* rax_45 = *(arg1 + 0x18)
        rdi_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_67 = &rdi_16[1]
        
        if (rcx_67 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            rdi_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_67 = &rdi_16[1]
        
        *(arg2 + 0x30) = rcx_67
        *rdi_16 = rax_45
        rcx_40 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_46 = &rcx_40[6]
        
        if (rax_46 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_40 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_46 = &rcx_40[6]
        
        *(arg2 + 0x30) = rax_46
        void** rax_47 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_47 = rcx_40
        rax_29 = &rcx_40[1]
        *(arg2 + 8) = rax_29
        rcx_40[4].d = 0
    else
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(rax_23 + *(arg1 + 0xc8) + 0x3f)
        sub_1419cd1c0(arg2, rsi_1, ((temp3_1 & 0x3f) + temp4_1) s>> 6, 1, 1)
        sub_140891480(rsi_1, arg2)
        void* rax_26 = *(arg1 + 0x18)
        rdi_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_36 = &rdi_16[1]
        
        if (rcx_36 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            rdi_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_36 = &rdi_16[1]
        
        *(arg2 + 0x30) = rcx_36
        *rdi_16 = rax_26
        rcx_40 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_27 = &rcx_40[6]
        
        if (rax_27 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_40 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_27 = &rcx_40[6]
        
        *(arg2 + 0x30) = rax_27
        int64_t* rax_28 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_28 = rcx_40
        rax_29 = &rcx_40[1]
        *(arg2 + 8) = rax_29
        rcx_40[4].d = 2
    
    rcx_40[5] = 0
    *(rcx_40 + 0x24) = 3
    rcx_40[3] = rdi_16
    rcx_40[2].d = 1
    *rcx_40 = &data_142da7798
    *rax_29 = 0
    void* rax_48 = *(arg1 + 0xd8)
    void** rdi_32 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_74 = &rdi_32[1]
    
    if (rcx_74 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rdi_32 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_74 = &rdi_32[1]
    
    *(arg2 + 0x30) = rcx_74
    *rdi_32 = rax_48
    void*** rcx_78 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_49 = &rcx_78[6]
    
    if (rax_49 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_78 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_49 = &rcx_78[6]
    
    *(arg2 + 0x30) = rax_49
    void**** rax_50 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_50 = rcx_78
    *(arg2 + 8) = &rcx_78[1]
    *rcx_78 = &data_142da7798
    rcx_78[2].d = 1
    rcx_78[3] = rdi_32
    rcx_78[4].d = 2
    *(rcx_78 + 0x24) = 1
    rcx_78[5] = 0
    rcx_78[1] = 0
    sub_1405ec8a0(&var_50:8)
    sub_1405d1550(&var_50)

int64_t rsi_3 = sx.q(*(arg1 + 0xc8))

if (rsi_3.d != 0)
    int32_t rax_52 = *(arg1 + 0x38)
    int32_t rdx_24 = rsi_3.d + rax_52
    
    if (rdx_24 s> *(arg1 + 0x3c))
        sub_1405dadb0(arg1 + 0x30, rdx_24)
        rax_52 = *(arg1 + 0x38)
    
    memcpy(*(arg1 + 0x30) + (sx.q(rax_52) << 2), *(arg1 + 0xc0), (rsi_3 << 2).d)
    *(arg1 + 0x38) += rsi_3.d

bool cond:1_1 = *(arg1 + 0x6c) == 0
*(arg1 + 0x68) = 0

if (not(cond:1_1))
    sub_14083ad30(arg1 + 0x60, 0)

sub_140825190(arg1 + 0x70, 0)
bool cond:2_1 = *(arg1 + 0xcc) == 0
*(arg1 + 0xc8) = 0

if (not(cond:2_1))
    sub_1405dadb0(arg1 + 0xc0, 0)
