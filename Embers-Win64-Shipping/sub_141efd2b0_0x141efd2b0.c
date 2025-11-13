// 函数: sub_141efd2b0
// 地址: 0x141efd2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x768))(arg1, 0)
int64_t* rsi = arg1[0x29]
uint64_t rdi
rdi.b = 1

if (rsi != 0)
    void* rdi_1 = arg1[0x16]
    float zmm1[0x4] = *(rdi_1 + 0x1d0)
    float var_38 = zmm1[0]
    float var_34_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
    float var_30_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    float zmm2[0x4] = *(rdi_1 + 0x1c0)
    uint32_t temp0_4 = _mm_movemask_ps(_mm_cmpeq_ps(*(rdi_1 + 0x180), zmm2, 4))
    float var_18[0x4] = zmm2
    int64_t var_28
    
    if (temp0_4 != 0)
        *(rdi_1 + 0x180) = zmm2
        int32_t* rax_2 = sub_140adf5d0(&var_18, &var_28)
        *(rdi_1 + 0x190) = *rax_2
        *(rdi_1 + 0x198) = rax_2[2]
        rsi = arg1[0x29]
    
    int32_t rax_4 = *(rdi_1 + 0x198)
    var_28 = *(rdi_1 + 0x190)
    int32_t var_20_1 = rax_4
    char rax_6
    int64_t rdx_3
    rax_6, rdx_3 = sub_1420e3b00(sub_1405be820(arg1), rsi, &var_38, &var_28)
    rdi = zx.q(rax_6)
    
    if (rax_6 == 0)
        rdx_3.b = 1
        (*(*arg1 + 0x768))(arg1, rdx_3)
    else
        sub_141dd67f0(arg1[0x29], &var_38, 0, nullptr, 0)

if (arg1[0x2d].b != 2)
    if (rdi.b == 0)
        (*(*arg1 + 0x590))(arg1, 2, 0)
else if (rdi.b != 0)
    char rax_8 = *(arg1 + 0x384)
    uint64_t rdx_5 = zx.q(rax_8)
    
    if (rax_8 == 2)
        rdx_5 = 1
    
    (*(*arg1 + 0x590))(arg1, rdx_5, 0)

*(arg1 + 0x389) &= 0xf7
*(arg1 + 0x389) |= (rdi.b ^ 1) << 3
return zx.q(rdi.b)
