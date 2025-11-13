// 函数: sub_141d3cff0
// 地址: 0x141d3cff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_1 = *(arg1 + 0x3e0)
int64_t result

if (r8_1 == r8_1 + (sx.q(*(arg1 + 0x3e8)) << 3))
    int64_t r8 = *(arg1 + 0x3f0)
    
    if (r8 == r8 + (sx.q(*(arg1 + 0x3f8)) << 3))
        int64_t rdx_2 = *(arg1 + 0x400)
        
        if (rdx_2 == rdx_2 + (sx.q(*(arg1 + 0x408)) << 3))
            for (int64_t* i = *(arg1 + 0x410); i != &i[sx.q(*(arg1 + 0x418))]; i = &i[1])
                if (*(*i + 0x2d8) != 0)
                    goto label_141d3d0ec
            
            for (int64_t* i_1 = *(arg1 + 0x420); i_1 != &i_1[sx.q(*(arg1 + 0x428))]; i_1 = &i_1[1])
                if (*(*i_1 + 0xea) != 0)
                    goto label_141d3d0ec
            
            for (int64_t* i_2 = *(arg1 + 0x430); i_2 != &i_2[sx.q(*(arg1 + 0x438))]; i_2 = &i_2[1])
                if (*(*i_2 + 0x51) != 0)
                    goto label_141d3d0ec
            
            int64_t rdx_6 = *(arg1 + 0x440)
            
            if (rdx_6 == rdx_6 + (sx.q(*(arg1 + 0x448)) << 3))
                result.b = 0
                return result

label_141d3d0ec:
result.b = 1
return result
