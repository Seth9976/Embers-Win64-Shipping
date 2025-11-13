// 函数: sub_142649f70
// 地址: 0x142649f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t var_a8 = 0
int64_t var_a0 = 0
int64_t result = sub_14264c0b0(arg1, &var_a8)

if (*(arg1 + 0x160) != 0)
    int64_t* rcx = *(arg1 + 0x158)
    
    if (rcx != 0)
        result = (*(*rcx + 0x28))(rcx)
        
        if (result.b != 0)
            int64_t* rcx_1
            
            if (*(arg1 + 0x160) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(arg1 + 0x158)
            
            result = (*(*rcx_1 + 0x50))(rcx_1, arg1, &var_a8)

int128_t zmm6 = *(arg1 + 0x14c)

if (not(zmm6.d f<= 0f))
    int64_t (* var_98_1)() = sub_142649f70
    void* rax_4 = *(arg1 + 0xa8)
    int32_t var_90_1 = 0
    
    if (rax_4 == 0)
        rax_4 = sub_141ee69e0(arg1)
        zmm6 = *(arg1 + 0x14c)
    
    void* rcx_3 = *(rax_4 + 0x188)
    void* rsi_1
    
    if (rcx_3 == 0)
        rsi_1 = *(rax_4 + 0x300)
    else
        rsi_1 = *(rcx_3 + 0xc0)
    
    int64_t* rax_5 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_5 != 0)
        *rax_5 = &data_142e33ea8
        sub_140d3a3a0(&rax_5[1], arg1)
        *(rax_5 + 0x10) = var_98_1.o
        rax_5[5] = sub_140a387b0()
        *rax_5 = &data_142e33f00
    
    int64_t var_88 = 0
    int32_t var_80_1 = 0
    
    if (rax_5 != 0)
        (*(*rax_5 + 0x40))(rax_5, &var_88)
    
    void var_78
    sub_140d3a3a0(&var_78, nullptr)
    int64_t var_70_1 = 0
    int64_t var_68_1 = 0
    void* var_58_1 = nullptr
    sub_1423e6200(rsi_1, arg1 + 0x188, &var_88, zmm6, 0, 0xbf800000)
    
    if (var_68_1 != 0)
        void var_48
        void* rcx_8 = &var_48
        
        if (var_58_1 != 0)
            rcx_8 = var_58_1
        
        (*(*rcx_8 + 0x10))(rcx_8)
    
    result = sub_140745b20(&var_88)
    
    if (rax_5 != 0)
        (*(*rax_5 + 0x38))(rax_5, 0)
        result = sub_140a84c80(rax_5, 0, 0)
        
        if (result != 0)
            result = sub_140a74f90(result)

int64_t rcx_13 = var_a8

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

__security_check_cookie(rax_1 ^ &var_d8)
return result
