// 函数: sub_140b662c0
// 地址: 0x140b662c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result

if (sub_140a54810() == 0)
    void*** result_2 = j_sub_140a82f30(0x18)
    result = result_2
    
    if (result_2 == 0)
        result = nullptr
    else
        result[1].d = 0
        *result = &data_142e5bfb0
        *(result + 0xc) = 0
        result[2].w = 0
        *result = &data_142e7e6e8
else
    void*** result_1 = j_sub_140a82f30(0x20)
    result = result_1
    
    if (result_1 == 0)
        result = nullptr
    else
        result[1].d = 0
        *result = &data_142e5bfb0
        *(result + 0xc) = 0
        result[2] = 0
        *result = &data_142e7ea38

void** r8 = *result

if ((*r8)(result, zx.q(arg1), r8) != 0)
    return result

void** r8_1 = *result
r8_1[5](result, 1, r8_1)
return 0
