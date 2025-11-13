// 函数: sub_1410e0570
// 地址: 0x1410e0570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_1419cae50(arg2, data_143ec50b0) == 0)
    return 1

int64_t var_18 = 0
int64_t var_10 = 0
sub_1405947f0(&var_18, 0x3c)
int32_t rsi = var_10:4.d
int32_t rbx = var_10.d + 0x3c
var_10.d = rbx

if (rbx s> rsi)
    sub_140594770(&var_18)
    rsi = var_10:4.d
    rbx = var_10.d

int64_t r14 = var_18
UnDecorator::getReferenceType(r14, Base pass shaders cannot read from the SceneTexturesStruct.", 
    0x78)
int64_t rbp = sx.q(arg3[1].d)
int32_t rax_1 = (rbp + 1).d
arg3[1].d = rax_1

if (rax_1 s> *(arg3 + 0xc))
    sub_1405a4f90(arg3)

int64_t* result = (rbp << 4) + *arg3
*result = r14
result[1].d = rbx
*(result + 0xc) = rsi
result.b = 0
return result
