// 函数: sub_14106df30
// 地址: 0x14106df30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
char rax_2 = sub_14106e310(arg1)
int64_t rax_3 = *(arg1 + 0x30)

if (rax_3 != 0)
    int64_t rcx = *(arg1 + 0x40)
    *(arg1 + 0x40) = 0
    int128_t zmm1_1 = *(arg1 + 0x60)
    int128_t var_38 = *(arg1 + 0x50)
    
    if (rax_3 != 0)
        *(arg1 + 0x30) = 0
    
    void*** rax_4 = sub_140a82f30(0x60, 0x10)
    *rax_4 = &data_142f04648
    rax_4[2].b = rax_2
    rax_4[4] = rax_3
    rax_4[6] = rcx
    int128_t* var_48_2 = nullptr
    *(rax_4 + 0x40) = var_38
    *(rax_4 + 0x50) = zmm1_1
    int64_t rax_5 = rax_3
    
    if (rax_4[4] != 0)
        rax_5 = 0
    
    *rax_4 = &data_142f04668
    int64_t (* var_a8)(char* arg1)
    int64_t (* rax_6)(char* arg1) = var_a8
    
    if (rax_4 != -0x10)
        rax_6 = sub_14106bba0
    
    void*** var_98_1 = rax_4
    var_a8 = rax_6
    sub_140a20e40(2, &var_a8)
    
    if (rax_5 != 0)
        int128_t* rcx_4 = &var_38
        
        if (var_48_2 != 0)
            rcx_4 = var_48_2
        
        (*(*rcx_4 + 0x10))(rcx_4)

__security_check_cookie(rax_1 ^ &var_c8)
return zx.q(rax_2)
