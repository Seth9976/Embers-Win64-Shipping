// 函数: sub_141764420
// 地址: 0x141764420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x68)
int128_t zmm6 = arg2
char arg_8 = 0

if (rcx s> 0)
    float (* i)[0x4] = *(arg1 + 0x10)
    int32_t zmm2 = *(arg1 + 0x74)
    int64_t var_48_1 = *(arg1 + 0x58)
    int32_t var_30_1 = *(arg1 + 0x7c)
    char* var_28_1 = &arg_8
    void* rdi_1 = sx.q(*(arg1 + 0x18)) * 0xe0
    int32_t var_50 = *(arg1 + 0x70)
    int32_t var_4c_1 = zmm2
    int32_t var_40 = zmm6.d
    int32_t r8
    int32_t var_3c_1 = r8
    void* rdi_2 = rdi_1 + i
    int32_t r9
    int32_t var_38_1 = r9
    int32_t var_34_1 = rcx
    
    for (; i != rdi_2; i = &i[0xe])
        zmm6 = sub_14175d130(i, &var_40, &var_50)
    
    float (* i_1)[0x4] = *(arg1 + 0x20)
    
    for (void* rdi_4 = sx.q(*(arg1 + 0x28)) * 0xe0 + i_1; i_1 != rdi_4; i_1 = &i_1[0xe])
        float rax_5 = i_1[0xd][0]
        
        if (rax_5 == 1)
            zmm6 = sub_14175d130(i_1, &var_40, &var_50)
        else if (rax_5 == 2)
            zmm6 = sub_14176f950(i_1, &var_40, &var_50)
        else if (rax_5 == 3)
            zmm6 = sub_14175cfb0(i_1, &var_40, &var_50)
    
    float (* i_2)[0x4] = *(arg1 + 0x30)
    
    for (void* rdi_7 = &i_2[sx.q(*(arg1 + 0x38)) * 0x14]; i_2 != rdi_7; i_2 = &i_2[0x14])
        zmm6 = sub_14175cfb0(i_2, &var_40, &var_50)

if (*(arg1 + 0x90) != 0)
    void* rax_7 = *(arg1 + 0xa0)
    void* rcx_6 = arg1 + 0xb0
    int32_t var_58 = zmm6.d
    
    if (rax_7 != 0)
        rcx_6 = rax_7
    
    (*(arg1 + 0x90))((*(*rcx_6 + 8))(rcx_6), &var_58, arg1 + 0x40)

return zx.q(arg_8)
