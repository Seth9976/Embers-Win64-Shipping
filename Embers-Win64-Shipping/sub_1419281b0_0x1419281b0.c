// 函数: sub_1419281b0
// 地址: 0x1419281b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
*arg1 = &data_142d3ff08
arg1[1].d = 0
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
__builtin_memset(&arg1[3], 0, 0x14)
*arg1 = &data_142ff7300
*(arg1 + 0x2c) = 1
arg1[7] = 0
char rax_2

if (data_143f01c92 != 0)
    rax_2 = sub_140a80f10()

void* (* rax_9)(int64_t* arg1)

if (data_143f01c92 == 0 || rax_2 != 0)
    void* rax_16 = arg2[2]
    void* rcx_6 = &arg2[4]
    void*** var_d8 = arg1
    
    if (rax_16 != 0)
        rcx_6 = rax_16
    
    void* rax_19 = (*arg2)((*(*rcx_6 + 8))(rcx_6), &var_d8)
    int64_t* rcx_8 = arg1[7]
    arg1[7] = rax_19
    
    if (rax_19 != 0)
        *(rax_19 + 8) += 1
    
    if (rcx_8 != 0)
        rcx_8[1].d -= 1
        
        if (rcx_8[1].d == 1)
            (**rcx_8)(rcx_8, 1)
    
    rax_9 = arg1[7]
    *(rax_9 + 8) += 1
    rax_9.b = 0
else
    void*** rsi_3 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
    void* rax_3 = &rsi_3[0xa]
    
    if (rax_3 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x60)
        rsi_3 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
        rax_3 = &rsi_3[0xa]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_3
    *data_143f02ba0 = rsi_3
    data_143f02ba0 = &rsi_3[1]
    int64_t rdx = *arg2
    int64_t rax_5 = arg2[2]
    arg2[2] = 0
    int128_t zmm1 = *(arg2 + 0x30)
    int128_t var_58 = *(arg2 + 0x20)
    
    if (rdx != 0)
        *arg2 = 0
    
    void*** rax_6 = sub_140a82f30(0x60, 0x10)
    *rax_6 = &data_142ff8828
    rax_6[2] = arg1
    rax_6[4] = rdx
    rax_6[6] = rax_5
    int128_t* var_68_2 = nullptr
    *(rax_6 + 0x40) = var_58
    *(rax_6 + 0x50) = zmm1
    int64_t rax_7 = rdx
    
    if (rax_6[4] != 0)
        rax_7 = 0
    
    *rax_6 = &data_142ff8848
    void* (* var_c8)(int64_t* arg1)
    void* (* rax_8)(int64_t* arg1) = var_c8
    int64_t* var_b8_1 = rax_6
    
    if (rax_6 != -0x10)
        rax_8 = j_sub_14192d420
    
    rsi_3[1] = 0
    *rsi_3 = &data_142ff4958
    rsi_3[2] = rax_8
    rsi_3[4] = 0
    void var_a8
    
    if (rsi_3[2] != 0)
        int64_t* rcx_3 = &var_a8
        
        if (var_b8_1 != 0)
            rcx_3 = var_b8_1
        
        (**rcx_3)(rcx_3)
    
    if (rax_8 != 0)
        int64_t* rcx_4 = &var_a8
        
        if (var_b8_1 != 0)
            rcx_4 = var_b8_1
        
        (*(*rcx_4 + 0x10))(rcx_4)
    
    if (rax_7 != 0)
        int128_t* rcx_5 = &var_58
        
        if (var_68_2 != 0)
            rcx_5 = var_68_2
        
        (*(*rcx_5 + 0x10))(rcx_5)
    
    rax_9.b = 1

arg1[8].b = rax_9.b

if (*arg2 != 0)
    void* rdx_4 = arg2[2]
    void* rcx_9 = &arg2[4]
    
    if (rdx_4 != 0)
        rcx_9 = rdx_4
    
    int64_t rdx_5 = *rcx_9
    (*(rdx_5 + 0x10))(rcx_9, rdx_5)

__security_check_cookie(rax_1 ^ &var_f8)
return arg1
