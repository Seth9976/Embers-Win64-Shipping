// 函数: sub_14106d5f0
// 地址: 0x14106d5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
uint64_t result = __security_cookie ^ &var_b8
uint64_t result_1 = result
int64_t rdx = *(arg1 + 0x30)

if (rdx != 0)
    int64_t rax_1 = *(arg1 + 0x40)
    *(arg1 + 0x40) = 0
    int128_t zmm1 = *(arg1 + 0x60)
    int128_t var_38 = *(arg1 + 0x50)
    
    if (rdx != 0)
        *(arg1 + 0x30) = 0
    
    void*** rax_2 = sub_140a82f30(0x50, 0x10)
    *rax_2 = &data_142f045c8
    rax_2[2] = rdx
    rax_2[4] = rax_1
    int128_t* var_48_2 = nullptr
    *(rax_2 + 0x30) = var_38
    *(rax_2 + 0x40) = zmm1
    int64_t rax_3 = rdx
    
    if (rax_2[2] != 0)
        rax_3 = 0
    
    *rax_2 = &data_142f045e8
    int64_t (* var_98)(void* arg1)
    int64_t (* rax_4)(void* arg1) = var_98
    
    if (rax_2 != -0x10)
        rax_4 = sub_14106bb60
    
    void*** var_88_1 = rax_2
    var_98 = rax_4
    result = sub_140a20e40(2, &var_98)
    
    if (rax_3 != 0)
        int128_t* rcx_2 = &var_38
        
        if (var_48_2 != 0)
            rcx_2 = var_48_2
        
        result = (*(*rcx_2 + 0x10))(rcx_2)

__security_check_cookie(result_1 ^ &var_b8)
return result
