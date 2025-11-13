// 函数: sub_142186310
// 地址: 0x142186310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8

if ((arg1[0x4d].b & 1) != 0 && (*(arg1 + 0x27c) & 1) != 0 && *(arg2 + 0x59) s< 0)
    (*(*arg1 + 0x678))(arg1, arg2)

int64_t var_a8 = arg1[0x51]
void* result = sub_1423dce10(sub_141dcc7f0(arg1), &var_a8)

if (result == 0 || *(result + 1) == 2)
    int128_t zmm6 = arg1[0x4f].d
    void* rax_5 = sub_141dcc7f0(arg1)
    int64_t* rax_6 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_6 != 0)
        *rax_6 = &data_142d57800
        sub_140d3a3a0(&rax_6[1], arg1)
        rax_6[2] = sub_1421847a4
        rax_6[4] = sub_140a387b0()
        *rax_6 = &data_142d57858
    
    int64_t var_98 = 0
    int32_t var_90_1 = 0
    
    if (rax_6 != 0)
        (*(*rax_6 + 0x40))(rax_6, &var_98)
    
    void var_88
    sub_140d3a3a0(&var_88, nullptr)
    int64_t var_80_1 = 0
    int64_t var_78_1 = 0
    void* var_68_1 = nullptr
    sub_1423e6200(rax_5, &arg1[0x51], &var_98, zmm6, 1, 0xbf800000)
    
    if (var_78_1 != 0)
        void var_58
        void* rcx_8 = &var_58
        
        if (var_68_1 != 0)
            rcx_8 = var_68_1
        
        (*(*rcx_8 + 0x10))(rcx_8)
    
    result = sub_140745b20(&var_98)
    
    if (rax_6 != 0)
        (*(*rax_6 + 0x38))(rax_6, 0)
        result = sub_140a84c80(rax_6, 0, 0)
        
        if (result != 0)
            result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_d8)
return result
