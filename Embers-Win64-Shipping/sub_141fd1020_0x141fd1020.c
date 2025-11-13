// 函数: sub_141fd1020
// 地址: 0x141fd1020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0xee]
int64_t* rax_1 = (*(*rcx + 0x18))(rcx)
int32_t result
int64_t var_88

if (rax_1 != 0)
    int32_t var_78 = 0x2cf5a13d
    int32_t var_74_1 = 0xe
    int32_t var_70_1 = sub_140b1a070(1)
    int32_t var_6c_1 = sub_140b19bb0()
    int32_t var_68_1 = sub_140b19e50()
    int64_t var_64_1 = 0
    int64_t var_5c_1 = 0
    int64_t* rax_7 = j_sub_140b17d00()
    int64_t var_50_1 = *rax_7
    int32_t var_48_1 = rax_7[1].d
    void var_40
    sub_140596d10(&var_40, &rax_7[2])
    int32_t var_30_1 = 0
    int64_t var_28
    __builtin_memset(&var_28, 0, 0x20)
    int512_t zmm1_1 = sub_141fa70e0(&var_28, &arg1[0x18f])
    int64_t var_18
    (*(*arg1 + 0x440))(arg1, &var_18)
    void* rcx_9 = arg1[0x28]
    char rax_9
    
    if (rcx_9 != 0)
        rax_9 = sub_14243aea0(rcx_9)
    
    int32_t rax_11
    
    if (rcx_9 == 0 || rax_9 == 0)
        rax_11 = var_30_1
    else
        rax_11 = var_30_1 | 1
        int32_t var_30_2 = rax_11
    
    if (arg1[0x1c5].b != 0)
        rax_11 |= 2
        int32_t var_30_3 = rax_11
    
    if (*(arg1 + 0xe29) != 0)
        rax_11 |= 4
        int32_t var_30_4 = rax_11
    
    if (*(arg1 + 0xe2a) != 0)
        int32_t var_30_5 = rax_11 | 8
    
    var_64_1.o = *sub_140b214c0(&var_88)
    sub_141fa7730(rax_1, &var_78, zmm1_1)
    (*(*rax_1 + 0x1b0))(rax_1)
    sub_141fa6430(&var_78)
    result.b = 1
else
    int16_t* const r8_1
    
    if (arg1[0x173].d == rax_1.d)
        r8_1 = &data_142d40450
    else
        r8_1 = arg1[0x172]
    
    sub_140a2e390(&var_88, u"Couldn't open demo file %s for writing", r8_1)
    
    if (arg2 == &var_88)
        int64_t rcx_4 = var_88
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        result.b = 0
    else
        int64_t rcx_3 = *arg2
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        *arg2 = var_88
        int32_t var_80
        arg2[1].d = var_80
        int32_t var_7c
        *(arg2 + 0xc) = var_7c
        result.b = 0
return result
