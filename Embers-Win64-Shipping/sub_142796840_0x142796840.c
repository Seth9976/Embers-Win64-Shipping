// 函数: sub_142796840
// 地址: 0x142796840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg2
int64_t* rcx = *(arg1 + 0x710)

if (rcx != 0)
    sub_142789be0(rcx, 1)

int32_t rax = *(arg1 + 0x52c)
*(arg1 + 0x710) = rbx

if (*(rbx + 8) != rax || arg3 != 0)
    sub_142795a30(arg1)
    sub_142793580(arg1)
    rbx = *(arg1 + 0x710)

int64_t r14 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int64_t var_68 = 0
int32_t var_60 = 0
int64_t var_78 = 0
int32_t var_70 = 0
int128_t* i = sub_14278a9c0(arg1, rbx, &var_78, &var_58, &var_68)

if (*(arg1 + 0x168) != 0)
    int64_t* var_48 = &var_78
    void* const var_38 = &data_14278ea00
    void* var_40_1 = arg1
    int64_t** var_30_1 = &var_48
    sub_14077b750(var_70, &var_38, 0)
    int64_t* rcx_5 = data_143f0f180
    int64_t* var_88
    var_88.d = *(arg1 + 0x528) * *(arg1 + 0x52c)
    memcpy((*(*rcx_5 + 0x130))(rcx_5, &data_143f02b98, *(arg1 + 0x508), 0, var_88, 1), 
        *(arg1 + 0x520), *(arg1 + 0x528) * *(arg1 + 0x52c))
    int64_t* rcx_7 = data_143f0f180
    (*(*rcx_7 + 0x138))(rcx_7, &data_143f02b98, *(arg1 + 0x508))
    int64_t* rcx_8 = data_143f0f180
    var_88.d = *(arg1 + 0x568) * *(arg1 + 0x56c)
    memcpy((*(*rcx_8 + 0x130))(rcx_8, &data_143f02b98, *(arg1 + 0x548), 0, var_88, 1), 
        *(arg1 + 0x560), *(arg1 + 0x56c) * *(arg1 + 0x568))
    int64_t* rcx_10 = data_143f0f180
    (*(*rcx_10 + 0x138))(rcx_10, &data_143f02b98, *(arg1 + 0x548))
    int64_t rbx_1 = *(arg1 + 0x490)
    int32_t rax_9 = sub_1422c6cd0(arg1 + 0x470)
    int64_t* rcx_12 = data_143f0f180
    var_88.d = rax_9
    memcpy((*(*rcx_12 + 0x130))(rcx_12, &data_143f02b98, rbx_1, 0, var_88, 1), *(arg1 + 0x4d0), 
        sub_1422c6cd0(arg1 + 0x470))
    int64_t* rcx_15 = data_143f0f180
    (*(*rcx_15 + 0x138))(rcx_15, &data_143f02b98, *(arg1 + 0x490))
    int64_t rbx_3 = *(arg1 + 0x4a8)
    int32_t rax_13 = sub_1422c6d00(arg1 + 0x470)
    int64_t* rcx_17 = data_143f0f180
    var_88.d = rax_13
    memcpy((*(*rcx_17 + 0x130))(rcx_17, &data_143f02b98, rbx_3, 0, var_88, 1), *(arg1 + 0x4d8), 
        sub_1422c6d00(arg1 + 0x470))
    int64_t* rcx_20 = data_143f0f180
    (*(*rcx_20 + 0x138))(rcx_20, &data_143f02b98, *(arg1 + 0x4a8))
    int64_t* rcx_21 = data_143f0f180
    var_88.d = var_50 << 2
    memcpy((*(*rcx_21 + 0x110))(rcx_21, &data_143f02b98, *(arg1 + 0x588), 0, var_88, 1), var_58, 
        var_50 << 2)
    int64_t* rcx_23 = data_143f0f180
    (*(*rcx_23 + 0x118))(rcx_23, &data_143f02b98, *(arg1 + 0x588))
    int64_t* rcx_24 = data_143f0f180
    var_88.d = var_60 << 2
    memcpy((*(*rcx_24 + 0x110))(rcx_24, &data_143f02b98, *(arg1 + 0x5a8), 0, var_88, 1), var_68, 
        var_60 << 2)
    int64_t* rcx_26 = data_143f0f180
    (*(*rcx_26 + 0x118))(rcx_26, &data_143f02b98, *(arg1 + 0x5a8))
    
    if (*(arg1 + 0x468) != 0)
        int64_t* rcx_27 = data_143f0f180
        var_88.d = var_70 << 2
        int64_t rax_27 =
            (*(*rcx_27 + 0x130))(rcx_27, &data_143f02b98, *(arg1 + 0x5c8), 0, var_88, 1)
        void* rdx_8 = *(arg1 + 0x710)
        memcpy(rax_27, *(rdx_8 + 0x70), *(rdx_8 + 0x78) << 2)
        int64_t* rcx_29 = data_143f0f180
        (*(*rcx_29 + 0x138))(rcx_29, &data_143f02b98, *(arg1 + 0x5c8))
    
    void* rcx_30 = *(arg1 + 0x710)
    i = *(rcx_30 + 0x90)
    
    for (void* r9_3 = &i[sx.q(*(rcx_30 + 0x98)) * 2]; i != r9_3; i = &i[2])
        uint128_t zmm1_1 = *i
        int32_t zmm0_1 = (i[1]).d
        var_38.o = zmm1_1
        int64_t r8_27 = _mm_bsrli_si128(zmm1_1, 8).q
        
        if (r8_27.d s> 0)
            void* const rcx_31 = var_38
            int32_t* rdx_11 = *(arg1 + 0x6f8) + r14
            r14 += 0x20
            *rdx_11 = rcx_31.d
            rdx_11[2] = r8_27.d
            rdx_11[1] = (rcx_31 u>> 0x20).d
            rdx_11[3] = (r8_27 u>> 0x20).d
            rdx_11[4] = zmm0_1

int64_t rcx_34 = var_78

if (rcx_34 != 0)
    i = sub_140a74f90(rcx_34)

int64_t rcx_35 = var_68

if (rcx_35 != 0)
    i = sub_140a74f90(rcx_35)

int64_t rcx_36 = var_58

if (rcx_36 == 0)
    return i

return sub_140a74f90(rcx_36)
