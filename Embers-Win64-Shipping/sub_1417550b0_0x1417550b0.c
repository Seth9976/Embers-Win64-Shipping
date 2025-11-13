// 函数: sub_1417550b0
// 地址: 0x1417550b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a9538)
sub_141755af0(arg1, arg2)
int32_t rax_1
int512_t zmm1
rax_1, zmm1 = sub_140b4e7c0(arg2, &data_1439a9538)
void* var_78

if (rax_1 s>= 0x1f)
    sub_141708230(arg2, arg1 + 0x10, zmm1)
else
    var_78 = nullptr
    int32_t i_5 = 0
    sub_141708040(arg2, &var_78, zmm1)
    int32_t rax_2 = *(arg1 + 0x18)
    int32_t i_3 = i_5
    
    if (i_3 s> rax_2)
        *(arg1 + 0x18) = i_3
        
        if (i_3 s> *(arg1 + 0x1c))
            sub_1405a4df0(arg1 + 0x10)
    else if (i_3 s< rax_2 && rax_2 != i_3)
        *(arg1 + 0x18) = i_3
        sub_1405fde90(arg1 + 0x10)
    
    int32_t i = 0
    void* r9_1 = var_78
    
    if (*(arg1 + 0x18) s> 0)
        int64_t r8_1 = 0
        int128_t* rcx_8 = r9_1 + 0x10
        
        do
            int128_t zmm0_1 = *rcx_8
            int64_t rax_4 = *(arg1 + 0x10)
            rcx_8 += 0x28
            i += 1
            r8_1 += 0x18
            *(r8_1 + rax_4 - 0x18) = zmm0_1
            zmm1.o = zx.o(*(rcx_8 - 0x18))
            *(r8_1 + rax_4 - 8) = (zmm1.o).q
        while (i s< *(arg1 + 0x18))
    
    void* rax_5 = r9_1
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            *rax_5 = &data_142fc3cd0
            rax_5 += 0x28
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    if (r9_1 != 0)
        zmm1 = sub_140a74f90(r9_1)

sub_141754910(arg1 + 0x20, arg2, zmm1)
sub_1417558e0(arg2, arg1 + 0x60)
int32_t result
int512_t zmm1_1
result, zmm1_1 = sub_140b4e7c0(arg2, &data_1439a9538)

if (result s>= 0x14)
    int64_t* rcx_13 = arg2[1]
    int32_t* r8_2 = *rcx_13
    
    if (&r8_2[1] u> rcx_13[1])
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, arg1 + 0x78, zmm1_1)
            return sub_14152dda0(arg2, arg1 + 0x7c, zmm1_1)
        
        (*(*arg2 + 0x150))(arg2, arg1 + 0x78, 4)
        return sub_14152dda0(arg2, arg1 + 0x7c, zmm1_1)
    
    *(arg1 + 0x78) = *r8_2
    int64_t* rax_8 = arg2[1]
    *rax_8 += 4
    return sub_14152dda0(arg2, arg1 + 0x7c, zmm1_1)

if ((arg2[5].b & 1) != 0)
    var_78 = nullptr
    void** const var_68 = &data_142fc4250
    int32_t i_6 = 0
    int64_t var_60
    __builtin_memset(&var_60, 0, 0x14)
    int64_t var_40
    __builtin_memset(&var_40, 0, 0x11)
    void** const var_48 = &data_142fc4220
    sub_14172eb30(&var_68, &var_48)
    sub_141731520(arg1 + 0x20, arg1 + 0x10, &var_78, &var_68, arg1 + 0x60)
    sub_14175d510(arg1 + 0x20, &var_78, arg1 + 0x78, arg1 + 0x7c)
    int64_t rcx_21 = var_40
    var_68 = &data_142fc4250
    var_48 = &data_142fc4220
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)
    
    int64_t rcx_22 = var_60
    result = 0x42fc4068
    var_68 = &data_142fc4068
    
    if (rcx_22 != 0)
        result = sub_140a74f90(rcx_22)
    
    int32_t i_4 = i_6
    void* rbx_1 = var_78
    
    if (i_4 != 0)
        int32_t i_2
        
        do
            int64_t rcx_23 = *rbx_1
            
            if (rcx_23 != 0)
                result = sub_140a74f90(rcx_23)
            
            rbx_1 += 0x10
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
        rbx_1 = var_78
    
    if (rbx_1 != 0)
        return sub_140a74f90(rbx_1)

return result
