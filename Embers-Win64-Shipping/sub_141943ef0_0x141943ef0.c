// 函数: sub_141943ef0
// 地址: 0x141943ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = data_143f01c92 == 0
int32_t var_f0 = arg3[1].d
int128_t var_108 = (*arg3).o
char rax_2

if (not(cond:0))
    rax_2 = sub_140a80f10()

void*** rdi
int128_t* var_118

if (cond:0 || rax_2 != 0)
    void*** rax_8 = j_sub_140a82f30(0x48)
    rdi = nullptr
    
    if (rax_8 != 0)
        int128_t* var_110_1 = arg4
        var_118 = &var_108
        int128_t zmm0_1 = var_118.o
        int64_t var_d8_1 = 0
        void** const var_c8_1 = &data_142d42ed8
        int32_t* (* var_e8)(int64_t* arg1, int64_t* arg2, int512_t arg3 @ zmm1) = sub_141932430
        int128_t var_c0_1 = zmm0_1
        rdi = sub_141927c50(rax_8, &var_e8)
else
    int64_t rbx_1 = var_108.q
    rdi = nullptr
    int128_t* rsi_1 = nullptr
    uint32_t count = var_108:8.d
    var_118 = nullptr
    int64_t var_110
    var_110.d = count
    int32_t r12_1
    
    if (count != 0)
        sub_1405da9e0(&var_118, count, 0)
        rsi_1 = var_118
        memcpy(rsi_1, rbx_1, count)
        r12_1 = var_110:4.d
        count = var_110.d
    else
        r12_1 = 0
        var_110:4.d = 0
    
    void*** rax_3 = j_sub_140a82f30(0x48)
    
    if (rax_3 != 0)
        int128_t* rbx_2 = rsi_1
        rsi_1 = nullptr
        var_118 = nullptr
        int128_t zmm6 = *arg4
        int32_t rdi_1 = arg4[1].d
        int32_t var_48_1 = rdi_1
        int128_t var_58_1 = zmm6
        void*** rax_5 = sub_140a82f30(0x30, 8)
        rax_5[1] = rbx_2
        rax_5[2].d = count
        *(rax_5 + 0x14) = r12_1
        *(rax_5 + 0x18) = zmm6
        rax_5[5].d = rdi_1
        *rax_5 = &data_142ff8888
        void*** var_98_1 = rax_5
        int32_t* (* var_a8)(int64_t* arg1, int64_t* arg2, int512_t arg3 @ zmm1)
        int32_t* (* rax_6)(int64_t* arg1, int64_t* arg2, int512_t arg3 @ zmm1) = var_a8
        
        if (rax_5 != -8)
            rax_6 = sub_141932010
        
        var_a8 = rax_6
        rdi = sub_141927c50(rax_3, &var_a8)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
*arg2 = rdi

if (rdi != 0)
    rdi[1].d += 1

return arg2
