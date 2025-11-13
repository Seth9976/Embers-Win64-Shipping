// 函数: sub_142296220
// 地址: 0x142296220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88

if (*(arg1 + 0x34) == 0)
    *arg2 = 0
else
    void* rcx = *(arg1 + 0x20)
    int64_t rax_3 = rcx s>> 1
    void* r9_1 = rax_3 + arg1 + 0x20
    char rdx = *(arg1 + 0x20) & 1
    
    if (rdx == 0)
        r9_1 = rcx
    
    int64_t* rdi_1
    uint64_t r8_1
    
    if (r9_1 == 0)
        rdi_1 = nullptr
        r8_1 = 0
    else
        if (rdx != 0)
            rcx = arg1 + 0x20 + rax_3
        
        int64_t* rax_5 = (*(*rcx + 0x38))(rcx)
        rdi_1 = rax_5
        
        if (rax_5 == 0)
            r8_1 = 0
        else
            r8_1 = zx.q((*(*rax_5 + 0x18))(rdi_1))
    
    int128_t zmm0 = data_143dbb1e0
    int32_t var_48_1 = 1
    int64_t* var_50_1 = rdi_1
    int32_t var_34_1 = (1 << (data_1439c7a34).b) - 1
    void* rax_10 = *(arg1 + 0x20)
    int64_t var_58 = 0
    int64_t var_28_1 = 0
    int32_t var_20_1 = 0
    int128_t var_44_1 = zmm0
    
    if ((rax_10.b & 1) != 0)
        rax_10 = (rax_10 s>> 1) + arg1 + 0x20
    
    int64_t* rcx_4 = data_143f0f180
    bool var_30_1 = rax_10 == 0
    (*(*rcx_4 + 0x128))(rcx_4, arg2, r8_1, 0x201, &var_58)

__security_check_cookie(rax_1 ^ &var_88)
return arg2
