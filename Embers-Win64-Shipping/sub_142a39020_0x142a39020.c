// 函数: sub_142a39020
// 地址: 0x142a39020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x14] != 0 || arg1[0x16].d != 0 || arg1[0x15].d != 0)
    return 0xffffffff

int64_t result
int512_t zmm1
result, zmm1 = sub_142a3d240(arg1, arg2)

if (result s>= 0)
    if (result s> 0)
        return 0xfffffffd
    
    if (arg1[0xf] == 0 || arg1[0x10] == 0)
        return 0xfffffffe
    
    int512_t zmm1_1
    result, zmm1_1 = sub_142a390c0(arg1, zmm1)
    
    if (result.d s>= 0)
        do
            if (result.d s>= 1)
                return 0
            
            result, zmm1_1 = sub_142a390c0(arg1, zmm1_1)
        while (result.d s>= 0)

return result
