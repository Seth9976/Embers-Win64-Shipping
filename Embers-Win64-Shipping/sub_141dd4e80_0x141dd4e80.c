// 函数: sub_141dd4e80
// 地址: 0x141dd4e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* const rbx = *(arg1 + 0x20)
void* rax_2
int64_t rax_3
void* rdx_1

if (rbx != 0)
    rax_2 = sub_1425be5e0()
    rdx_1 = *(rbx + 0x10)
    rax_3 = sx.q(*(rax_2 + 0x38))

if (rbx == 0 || rax_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    rbx = nullptr

uint64_t result = zx.q(*(arg1 + 0xd8))

if ((result.b & 1) == 0 && rbx != 0)
    *(arg1 + 0xd8) = result.d | 1
    uint64_t (* var_98_1)(void* arg1) = sub_141dd4770
    void* rax_6 = *(rbx + 0x188)
    int32_t var_90_1 = 0
    void* rsi_1
    
    if (rax_6 == 0)
        rsi_1 = *(rbx + 0x300)
    else
        rsi_1 = *(rax_6 + 0xc0)
    
    int128_t zmm6
    zmm6.d = (*(arg1 + 0x30)).d f* 0.5f
    void*** rax_7 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_7 != 0)
        *rax_7 = &data_142e33ea8
        sub_140d3a3a0(&rax_7[1], arg1)
        *(rax_7 + 0x10) = var_98_1.o
        rax_7[5] = sub_140a387b0()
        *rax_7 = &data_142e33f00
    
    int64_t var_88 = 0
    int32_t var_80_1 = 0
    
    if (rax_7 != 0)
        (*rax_7)[8](rax_7, &var_88)
    
    void var_78
    sub_140d3a3a0(&var_78, nullptr)
    int64_t var_70_1 = 0
    int64_t var_68_1 = 0
    void* var_58_1 = nullptr
    sub_1423e6200(rsi_1, arg1 + 0x50, &var_88, zmm6, 0, 0xbf800000)
    
    if (var_68_1 != 0)
        void var_48
        void* rcx_5 = &var_48
        
        if (var_58_1 != 0)
            rcx_5 = var_58_1
        
        (*(*rcx_5 + 0x10))(rcx_5)
    
    result = sub_140745b20(&var_88)
    
    if (rax_7 != 0)
        (*rax_7)[7](rax_7, 0)
        result = sub_140a84c80(rax_7, 0, 0)
        
        if (result != 0)
            result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_c8)
return result
