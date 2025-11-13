// 函数: sub_1408d81c0
// 地址: 0x1408d81c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xb0)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    int64_t rax_1 = *arg7
    int64_t var_78_1 = rax_1
    int128_t* var_68 = nullptr
    
    if (rax_1 != 0)
        void* rax_2 = arg7[2]
        void* rcx = &arg7[4]
        
        if (rax_2 != 0)
            rcx = rax_2
        
        (**rcx)(rcx, &var_68)
    
    int64_t rax_4 = *arg4
    int128_t* var_a8 = nullptr
    
    if (rax_4 != 0)
        void* rax_5 = arg4[2]
        void* rcx_1 = &arg4[4]
        
        if (rax_5 != 0)
            rcx_1 = rax_5
        
        (**rcx_1)(rcx_1, &var_a8)
    
    rdi[2] = arg2
    *rdi = &data_142e0e3b0
    *(rdi + 0x24) = arg6
    rdi[3] = arg3
    rdi[4].d = 0x3f800000
    rdi[6] = rax_4
    rdi[8] = var_a8
    int128_t var_98
    int128_t zmm0_1 = var_98
    var_a8 = nullptr
    *(rdi + 0x50) = zmm0_1
    int128_t var_88
    *(rdi + 0x60) = var_88
    int64_t rax_10 = rax_4
    
    if (rdi[6] != 0)
        rax_10 = 0
    
    rdi[0xe] = var_78_1
    rdi[0x10] = var_68
    int128_t var_58
    zmm0_1 = var_58
    var_68 = nullptr
    *(rdi + 0x90) = zmm0_1
    int128_t var_48
    arg5 = var_48
    *(rdi + 0xa0) = arg5
    int64_t rcx_2 = rdi[0xe]
    
    if (rcx_2 != 0)
        var_78_1 = 0
        rcx_2 = rdi[0xe]
    
    char rax_13 = *(rdi + 0x24)
    
    if (rcx_2 == 0)
        rax_13 = 0
    
    *(rdi + 0x24) = rax_13
    
    if (rax_10 != 0)
        int128_t* rax_14 = var_a8
        int128_t* rcx_3 = &var_98
        
        if (rax_14 != 0)
            rcx_3 = rax_14
        
        (*(*rcx_3 + 0x10))(rcx_3)
    
    if (var_78_1 != 0)
        int128_t* rax_16 = var_68
        int128_t* rcx_4 = &var_58
        
        if (rax_16 != 0)
            rcx_4 = rax_16
        
        (*(*rcx_4 + 0x10))(rcx_4)

int64_t* result = sub_1408d7ee0(arg1, rdi, arg5.d)

if (*arg4 != 0)
    void* rax_18 = arg4[2]
    void* rcx_6 = &arg4[4]
    
    if (rax_18 != 0)
        rcx_6 = rax_18
    
    result = (*(*rcx_6 + 0x10))(rcx_6)

if (*arg7 == 0)
    return result

void* rax_20 = arg7[2]
void* rcx_7 = &arg7[4]

if (rax_20 != 0)
    rcx_7 = rax_20

return (*(*rcx_7 + 0x10))(rcx_7)
