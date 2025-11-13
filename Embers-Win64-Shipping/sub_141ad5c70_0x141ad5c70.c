// 函数: sub_141ad5c70
// 地址: 0x141ad5c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e1eab0(sub_141e23160(arg1), arg2)
uint64_t result
int128_t zmm6
int128_t zmm7
result, zmm6, zmm7 = sub_141ad1b90(arg1)
int32_t i = 0

if (*(arg1 + 0x18) s> 0)
    int64_t rdi_1 = 0
    int128_t var_18_1 = zmm6
    int128_t var_28_1 = zmm7
    
    do
        result = *(arg1 + 0x30)
        zmm6 = *(rdi_1 + result)
        
        if (not(zmm6.d f<= 9.99999975e-06f))
            void var_48
            public: __cdecl std::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0>::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0><class <lambda_508dc996854572947a45292d62928d80> &>(class <lambda_508dc996854572947a45292d62928d80> &)(
                &var_48, arg2)
            zmm6.d = zmm6.d f* arg2[2].d
            int32_t var_34_1 = *(arg2 + 0x14)
            int32_t var_30_1 = arg2[3].d
            int32_t var_38_1 = zmm6.d
            int64_t var_40_1 = arg2[1]
            result = sub_141e32270((sx.q(i) << 4) + *(arg1 + 0x10), &var_48)
        
        i += 1
        rdi_1 += 4
    while (i s< *(arg1 + 0x18))

return result
