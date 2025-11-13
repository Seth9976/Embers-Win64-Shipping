// 函数: sub_141ad6280
// 地址: 0x141ad6280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e04a30(*arg2, arg1 + 0x20, arg1 + 0x30, arg1 + 0x2c, arg1 + 0x34)
void* result
float zmm6[0x4]
result, zmm6 = sub_141e10070(*arg2, arg1 + 0x20, *(arg1 + 0x30), arg2[2].d)

if (*(arg1 + 0x28) != 0 || not(9.99999975e-06f f>= *(arg1 + 0x2c)))
    float var_18_1[0x4] = zmm6
    zmm6 = *(arg1 + 0x2c)
    void var_38
    public: __cdecl std::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0>::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0><class <lambda_508dc996854572947a45292d62928d80> &>(class <lambda_508dc996854572947a45292d62928d80> &)(
        &var_38, arg2)
    int64_t rax_1 = arg2[1]
    int32_t zmm0_1 = *(arg2 + 0x14)
    int32_t zmm1 = arg2[3].d
    float temp0_1[0x4] = __maxss_xmmss_memss(zmm6[0], 0x37a7c5ac)
    int32_t var_24_1 = zmm0_1
    int32_t var_20_1 = zmm1
    int64_t var_30_1 = rax_1
    temp0_1[0] = temp0_1[0] f* arg2[2].d
    float var_28_1 = temp0_1[0]
    result = sub_141e32270(arg1 + 0x10, &var_38)

return result
