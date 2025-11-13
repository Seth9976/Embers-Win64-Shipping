// 函数: sub_14221e490
// 地址: 0x14221e490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_141dd27f0(arg1, arg2)

if (arg1[0x1e].b == 3)
    int64_t* rcx = arg1[0x4b]
    
    if (rcx != 0)
        void var_18
        float zmm0_2 = sub_140a454f0(*(*(*rcx + 0x660))(rcx, &var_18), 0x43b40000)
        
        if (not(zmm0_2 >= 0f))
            zmm0_2 = zmm0_2 + 360f
        
        result = (int.d(zmm0_2 * 0.708333313f)).b
        *(arg1 + 0x232) = result

return result
