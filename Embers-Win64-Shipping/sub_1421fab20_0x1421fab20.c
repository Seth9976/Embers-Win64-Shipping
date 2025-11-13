// 函数: sub_1421fab20
// 地址: 0x1421fab20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i = 0

if (*(arg1 + 0x3c) s> 0)
    int128_t zmm6 = 0x41a00000
    
    do
        result = sx.q(*(arg1 + 0x124))
        void* rsi_3 = sx.q(i * *(arg1 + 0x40)) + result + *(arg1 + 0x58)
        
        if (*(rsi_3 + 0x58) != 0)
            void var_78
            sub_140acc920(&var_78, &data_14399f63c)
            int128_t zmm6_1 = sub_14229cc60(arg3, rsi_3, zmm6, &var_78, sub_14082c3b0(arg2, arg4))
            void var_68
            sub_140acc920(&var_68, &data_14399f638)
            int32_t zmm7_1
            zmm6, zmm7_1 =
                sub_14229cc60(arg3, rsi_3 + 0x1c, zmm6_1, &var_68, sub_14082c3b0(arg2, arg4))
            void var_58
            sub_140acc920(&var_58, &data_14399f644)
            result = (*(*arg3 + 0x30))(arg3, rsi_3, rsi_3 + 0x1c, &var_58, 
                sub_14082c3b0(arg2, arg4), zmm7_1, zmm7_1, 0)
        
        i += 1
    while (i s< *(arg1 + 0x3c))

return result
