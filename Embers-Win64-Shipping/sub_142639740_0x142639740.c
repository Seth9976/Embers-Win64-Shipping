// 函数: sub_142639740
// 地址: 0x142639740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
uint64_t result

if (arg1[0xc] != 0)
    void* rax_3 = (*(*arg1 + 0x150))()
    int32_t var_98_1 = 0
    *(arg1 + 0x8c) = *(rax_3 + 0x520)
    uint32_t (* var_a0_1)(int64_t* arg1) = sub_14263c2d0
    int64_t var_a8 = 0
    void* rcx_1 = *(rax_3 + 0x188)
    void* rsi_1
    
    if (rcx_1 == 0)
        rsi_1 = *(rax_3 + 0x300)
    else
        rsi_1 = *(rcx_1 + 0xc0)
    
    int128_t zmm6 = arg1[0x11].d
    int64_t* rax_4 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_4 != 0)
        *rax_4 = &data_142e33ea8
        sub_140d3a3a0(&rax_4[1], arg1)
        *(rax_4 + 0x10) = var_a0_1.o
        rax_4[5] = sub_140a387b0()
        *rax_4 = &data_142e33f00
    
    int64_t var_88 = 0
    int32_t var_80_1 = 0
    
    if (rax_4 != 0)
        (*(*rax_4 + 0x40))(rax_4, &var_88)
    
    void var_78
    sub_140d3a3a0(&var_78, nullptr)
    int64_t var_70_1 = 0
    int64_t var_68_1 = 0
    void* var_58_1 = nullptr
    sub_1423e6200(rsi_1, &var_a8, &var_88, zmm6, 0, 0xbf800000)
    
    if (var_68_1 != 0)
        void var_48
        void* rcx_6 = &var_48
        
        if (var_58_1 != 0)
            rcx_6 = var_58_1
        
        (*(*rcx_6 + 0x10))(rcx_6)
    
    result = sub_140745b20(&var_88)
    
    if (rax_4 != 0)
        (*(*rax_4 + 0x38))(rax_4, 0)
        result = sub_140a84c80(rax_4, 0, 0)
        
        if (result != 0)
            result = sub_140a74f90(result)
    
    int64_t* rcx_11 = arg1[0xc]
    
    if (*(rcx_11 + 0x39) != 3)
        result = sub_14263c6d0(rcx_11)
else
    result = sub_14263a2c0(arg1)

__security_check_cookie(rax_1 ^ &var_d8)
return result
