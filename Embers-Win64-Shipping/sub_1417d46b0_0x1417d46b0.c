// 函数: sub_1417d46b0
// 地址: 0x1417d46b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
float zmm6_1
result, zmm6_1 = sub_141efce60(arg1, arg2.d)
void* rcx = arg1[0x48]

if (rcx != 0)
    result = (*(*(rcx + 0x408) + 0x10))(rcx + 0x408, &data_143dbb0c0)
    bool cond:0_1 = arg1[0x40].b == 0
    zmm6_1 = zmm6_1 f+ *(arg1 + 0x254)
    *(arg1 + 0x254) = zmm6_1
    
    if (not(cond:0_1) && not(zmm6_1 <= arg1[0x47].d f+ arg1[0x4a].d))
        int32_t rbp_1 = arg1[0x4b].d
        arg1[0x4a].d = zmm6_1
        arg1[0x4b].d = rbp_1 + 1
        
        if (data_143ef8860 != 0)
            sub_1417d47e0(arg1, 0)
            sub_1417d47e0(arg1, 1)
            sub_1417d47e0(arg1, 2)
            result = sub_1417d47e0(arg1, 3)
        else
            int32_t rbx_1 = *(arg1 + 0x25c)
            sub_1417d47e0(arg1, mods.dp.d(sx.q(rbp_1 + 1), rbx_1))
            sub_1417d47e0(arg1, mods.dp.d(sx.q(rbp_1), rbx_1))
            result = sub_1417d24a0(arg1, mods.dp.d(sx.q(rbp_1 + 1 - rbx_1 + 1), rbx_1))
        
        if (data_143ef8864 != 0)
            arg1[0x40].b = 0

return result
