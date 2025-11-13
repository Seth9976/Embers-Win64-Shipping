// 函数: sub_14226f4b0
// 地址: 0x14226f4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int128_t var_78

if (arg3 != 0)
label_14226f58a:
    int64_t* rcx_3 = *arg2
    int128_t* rax_10
    void var_48
    
    if (rcx_3 == 0)
        rax_10 = &var_78
        int128_t zmm1 = data_143dbb0d0
        var_78 = data_143dbb0c0
        int128_t var_58_1 = data_143dbb0e0
        int128_t var_68_1 = zmm1
    else
        rax_10 = sub_1417cbc40(&var_48, (*(*rcx_3 + 0xa0))(rcx_3, &var_78))
    *arg1 = *rax_10
    arg1[1] = rax_10[1]
    arg1[2] = rax_10[2]
else
    int64_t* r8 = *arg2
    
    if (r8 == 0)
        goto label_14226f58a
    
    int16_t rdx = r8[1].w
    int64_t* rdi_1 = nullptr
    int64_t* rax_2 = nullptr
    
    if (rdx == 6)
        rax_2 = r8
    
    if (rax_2 == 0 || r8 == 0)
        goto label_14226f58a
    
    int64_t* rcx = nullptr
    
    if (rdx == 6)
        rcx = r8
    
    if (rcx == 0)
        goto label_14226f58a
    
    if ((*(*rcx + 0x1b8))(rcx, &var_78) == 0)
        goto label_14226f58a
    
    int64_t* rax_5 = *arg2
    
    if (rax_5 == 0)
    label_14226f573:
        *arg1 = data_143dbb0c0
        arg1[1] = data_143dbb0d0
        arg1[2] = data_143dbb0e0
    else
        if (rax_5[1].w == 6)
            rdi_1 = rax_5
        
        if (rdi_1 == 0)
            goto label_14226f573
        
        if ((*(*rdi_1 + 0x1b8))(rdi_1, &var_78) == 0)
            goto label_14226f573
        
        sub_1417cbc40(arg1, &var_78)
__security_check_cookie(rax_1 ^ &var_98)
return arg1
