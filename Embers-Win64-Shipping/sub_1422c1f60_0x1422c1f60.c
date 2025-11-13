// 函数: sub_1422c1f60
// 地址: 0x1422c1f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88

if (*(arg1 + 0x78) == 0)
    *arg2 = 0
else
    int64_t* rcx = *(arg1 + 0x50)
    int64_t* rdi_1
    uint64_t r8_1
    
    if (rcx == 0)
        rdi_1 = nullptr
        r8_1 = 0
    else
        int64_t* rax_3 = (*(*rcx + 0x38))(rcx)
        rdi_1 = rax_3
        
        if (rax_3 == 0)
            r8_1 = 0
        else
            r8_1 = zx.q((*(*rax_3 + 0x18))(rdi_1))
    
    int128_t zmm0 = data_143dbb1e0
    int32_t var_48_1 = 1
    int64_t* rcx_3 = data_143f0f180
    int32_t var_34_1 = (1 << (data_1439c7a34).b) - 1
    bool var_30_1 = *(arg1 + 0x50) == 0
    int64_t var_58 = 0
    int128_t var_44_1 = zmm0
    int64_t var_28_1 = 0
    int32_t var_20_1 = 0
    int64_t* var_50_1 = rdi_1
    (*(*rcx_3 + 0x128))(rcx_3, arg2, r8_1, 0x201, &var_58)

__security_check_cookie(rax_1 ^ &var_88)
return arg2
