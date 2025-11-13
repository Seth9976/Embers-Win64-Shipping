// 函数: sub_140f00910
// 地址: 0x140f00910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
int128_t zmm0
float zmm1

if ((*(*arg1 + 0x250))() == 0)
    if (arg1[0x9b].d != 0)
        int64_t* rcx_2 = arg1[0x9a]
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            int64_t* rcx_3
            
            if (arg1[0x9b].d == 0)
                rcx_3 = nullptr
            else
                rcx_3 = arg1[0x9a]
            
            (*(*rcx_3 + 0x48))(rcx_3, &var_18)
            *(arg1 + 0x4b8) = var_18.o
    
    zmm0.d = arg1[0x97].d.d f+ arg1[0x9c].d
    zmm1 = *(arg1 + 0x4e4) f+ *(arg1 + 0x4bc)
    var_18 = zmm0.d
    zmm0 = arg1[0x9d].d
    float var_14_1 = zmm1
    zmm1 = *(arg1 + 0x4ec)
else
    if (arg1[0x9b].d != 0)
        int64_t* rcx = arg1[0x9a]
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (arg1[0x9b].d == 0)
                rcx_1 = nullptr
            else
                rcx_1 = arg1[0x9a]
            
            (*(*rcx_1 + 0x48))(rcx_1, &var_18)
            *(arg1 + 0x4b8) = var_18.o
    
    zmm0.d = arg1[0x9e].d.d f+ arg1[0x97].d
    zmm1 = *(arg1 + 0x4f4) f+ *(arg1 + 0x4bc)
    var_18 = zmm0.d
    zmm0 = arg1[0x9f].d
    float var_14 = zmm1
    zmm1 = *(arg1 + 0x4fc)

zmm0.d = zmm0.d f+ arg1[0x98].d
int32_t var_10 = zmm0.d
float var_c = zmm1 f+ *(arg1 + 0x4c4)
*arg2 = var_18.o
return arg2
