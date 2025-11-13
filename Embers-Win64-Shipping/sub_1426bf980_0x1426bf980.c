// 函数: sub_1426bf980
// 地址: 0x1426bf980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
uint64_t var_28 = __security_cookie ^ &var_b8
arg1[0x12].d &= 0xfffffffe
int512_t zmm0
zmm0.o = zx.o(0)
bool cond:0 = 0f f> arg1[0x13].d
*(arg1 + 0x84) = 1
arg1[0x11].d = 1
uint64_t result

if (cond:0)
    result.b = 1
else
    void* rax_2 = (*(*arg1 + 0x150))(zmm0)
    void* rcx = *(rax_2 + 0x188)
    void* rsi_1
    
    if (rcx == 0)
        rsi_1 = *(rax_2 + 0x300)
    else
        rsi_1 = *(rcx + 0xc0)
    
    int128_t zmm6 = arg1[0x13].d
    void*** rax_3 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_3 != 0)
        *rax_3 = &data_142d57800
        sub_140d3a3a0(&rax_3[1], arg1)
        rax_3[2] = sub_1426c0ff0
        rax_3[4] = sub_140a387b0()
        *rax_3 = &data_142d57858
    
    int64_t var_88 = 0
    int32_t var_80_1 = 0
    
    if (rax_3 != 0)
        (*rax_3)[8](rax_3, &var_88)
    
    void var_78
    sub_140d3a3a0(&var_78, nullptr)
    int64_t var_70_1 = 0
    int64_t var_68_1 = 0
    void* var_58_1 = nullptr
    sub_1423e6200(rsi_1, &arg1[0x14], &var_88, zmm6, 0, 0xbf800000)
    
    if (var_68_1 != 0)
        void var_48
        void* rcx_5 = &var_48
        
        if (var_58_1 != 0)
            rcx_5 = var_58_1
        
        (*(*rcx_5 + 0x10))(rcx_5)
    
    sub_140745b20(&var_88)
    
    if (rax_3 != 0)
        (*rax_3)[7](rax_3, 0)
        result = sub_140a84c80(rax_3, 0, 0)
        
        if (result != 0)
            sub_140a74f90(result)
    
    result.b = 1

__security_check_cookie(var_28 ^ &var_b8)
return result
