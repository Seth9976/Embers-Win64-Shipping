// 函数: sub_140a6deb0
// 地址: 0x140a6deb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_18
sub_140a2e390(&var_18, u"PoolThread %d", zx.q(data_143db95d4))
data_143db95d4 += 1
arg1[4] = arg2
void*** rax = sub_140a491d0(0)
int16_t* const rdx = &data_142d40450
int32_t var_10

if (var_10 != 0)
    rdx = var_18

arg1[1] = rax
void*** result = sub_140a6e140(arg1, rdx, arg3, arg4, -1, 0)
int16_t* rbx_1 = var_18
arg1[5] = result

if (rbx_1 != 0)
    int64_t* rcx_2 = data_143ddb3f0
    
    if (rcx_2 == 0)
        sub_140a750a0()
        rcx_2 = data_143ddb3f0
    
    (*(*rcx_2 + 0x30))(rcx_2, rbx_1)

result.b = 1
return result
