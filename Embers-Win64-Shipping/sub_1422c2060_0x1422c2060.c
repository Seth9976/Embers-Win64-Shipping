// 函数: sub_1422c2060
// 地址: 0x1422c2060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88

if (*(arg1 + 0x78) == 0)
    *arg2 = 0
else
    int64_t* rcx = *(arg1 + 0x50)
    int64_t* rdi_1
    uint64_t r9_1
    
    if (rcx == 0)
        rdi_1 = nullptr
        r9_1 = 0
    else
        int64_t* rax_3 = (*(*rcx + 0x38))(rcx)
        rdi_1 = rax_3
        
        if (rax_3 == 0)
            r9_1 = 0
        else
            r9_1 = zx.q((*(*rax_3 + 0x18))(rdi_1))
    
    char rcx_2 = (data_1439c7a34).b
    int128_t zmm0 = data_143dbb1e0
    int64_t var_58 = 0
    int64_t* rcx_3 = data_143f0f180
    int32_t var_34_1 = (1 << rcx_2) - 1
    bool var_30_1 = *(arg1 + 0x50) == 0
    int64_t var_28_1 = 0
    int128_t var_44_1 = zmm0
    int32_t var_20_1 = 0
    (*(*rcx_3 + 0x498))(rcx_3, arg2, &data_143f02b98, r9_1, 0x201, &var_58, var_58, rdi_1, 1)

__security_check_cookie(rax_1 ^ &var_88)
return arg2
