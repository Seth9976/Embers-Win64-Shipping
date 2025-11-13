// 函数: sub_142657860
// 地址: 0x142657860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_7
uint64_t var_2c

if (j_sub_140d3e110(arg1 + 0x40) == 0)
    int64_t* rcx_6
    
    if (*(arg1 + 0x30) s<= 0)
        rcx_6 = &data_143b51510
    else
        rcx_6 = (sx.q(*(arg1 + 0x30) - 1) << 5) + *(arg1 + 0x28)
    
    int32_t var_24_2 = rcx_6[1].d
    rax_7 = &var_2c
    var_2c = *rcx_6
else
    int64_t* rcx_1 = *(arg1 + 0x48)
    uint64_t var_38
    int64_t* rax_2
    void var_20
    
    if (rcx_1 == 0)
        void* rcx_3 = *(sub_140d3c6e0(arg1 + 0x40) + 0x130)
        int32_t var_30_1
        
        if (rcx_3 == 0)
            int32_t rax_4 = data_143dbb200
            var_38 = data_143dbb1f8.q
            var_30_1 = rax_4
        else
            uint128_t zmm1 = *(rcx_3 + 0x1d0)
            var_38.d = zmm1.d
            uint128_t zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            var_30_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
            var_38:4.d = zmm0.d
        
        int32_t var_24_1 = var_30_1
        rax_2 = &var_2c
        var_2c = var_38
    else
        rax_2 = (*(*rcx_1 + 0x18))(rcx_1, &var_20)
    int32_t var_30_2 = rax_2[1].d
    rax_7 = &var_38
    var_38 = *rax_2
int32_t rax_11 = rax_7[1].d
*arg2 = *rax_7
arg2[1].d = rax_11
return arg2
