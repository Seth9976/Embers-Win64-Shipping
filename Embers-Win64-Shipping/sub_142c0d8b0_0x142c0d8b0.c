// 函数: sub_142c0d8b0
// 地址: 0x142c0d8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x24) u< 2)
    return 

int32_t rdi_1 = 1

do
    uint128_t var_18 = *(arg1 + 0xb0)
    
    if (rdi_1 u>= *(arg1 + 0x24))
        *(arg1 + 0x20) = 1
    
    int128_t* rdx
    
    if (rdi_1 u< *(arg1 + 0x28))
        rdx = *(arg1 + 0x30) + (zx.q(rdi_1) << 3)
    else
        data_144017550.q = 0
        rdx = &data_144017550
    
    uint64_t rcx_1 = zx.q(rdi_1 - 1)
    
    if (rcx_1.d u>= *(arg1 + 0x24))
        *(arg1 + 0x20) = 1
    
    int64_t* rax_1
    
    if (rcx_1.d u< *(arg1 + 0x28))
        rax_1 = *(arg1 + 0x30) + (rcx_1 << 3)
    else
        data_144017550.q = 0
        rax_1 = &data_144017550
    
    uint128_t zmm0
    zmm0.q = var_18.q f+ *rax_1
    var_18:8.q = var_18:8.q f+ *rdx
    var_18.q = zmm0.q
    sub_142c0c760(arg1, arg2, &var_18)
    rdi_1 += 2
while (rdi_1 + 1 u<= *(arg1 + 0x24))
