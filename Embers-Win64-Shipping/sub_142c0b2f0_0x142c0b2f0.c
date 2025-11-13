// 函数: sub_142c0b2f0
// 地址: 0x142c0b2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double _X_2
int32_t result
uint128_t zmm6
result, zmm6 = sub_142c0a4a0(arg1, arg2, &_X_2)

if (result.b == 0)
    return result

double _X_1 = _X_2
uint128_t var_18 = zmm6
int64_t var_28
zmm6 = zx.o(var_28)

if (zmm6.q f> _X_1)
    int32_t rbx_1 = int.d(floor(_X_1))
    *arg3 = rbx_1
    arg3[2] = int.d(ceil(zmm6.q)) - rbx_1
else
    arg3[2] = 0
    *arg3 = 0

int64_t var_30
zmm6 = zx.o(var_30)
double _X

if (_X f> zmm6.q)
    int32_t rbx_2 = int.d(ceil(_X))
    arg3[1] = rbx_2
    arg3[3] = int.d(floor(zmm6.q)) - rbx_2
else
    arg3[3] = 0
    arg3[1] = 0

result.b = 1
return result
