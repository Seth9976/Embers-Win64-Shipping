// 函数: sub_1419cb100
// 地址: 0x1419cb100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = j_sub_140a82f30(0xf8)
int16_t* const rsi = &data_142d40450
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    *result = &data_142d3ff08
    result[1].d = 0
    result[3].d = arg1
    *(result + 0xc) = 0
    result[2].w = 0x100
    *result = &data_14300de68
    sub_140596d10(&result[4], arg6)
    int32_t rax = arg6[1].d
    int16_t* rdx_1
    
    if (rax == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *arg6
    
    int32_t rcx_1 = rax - 1
    
    if (rax == 0)
        rcx_1 = 0
    
    result[6].d = sub_1405969c0(rcx_1, rdx_1)
    *result = &data_14300e9a0
    sub_140596d10(&result[7], arg4)
    __builtin_memset(&result[9], 0, 0x76)
    result[0x18].d = 0
    result[0x19] = &data_14399e5d8
    result[0x1a] = 0
    result[0x1b].d = 0
    *(result + 0xdc) = 0
    result[0x1c].d = 0
    result[0x1d] = &data_14399e5d8
    result[0x1e] = 0

sub_1419d74c0(&result[0xb], arg2, arg5)
result[9] = (*(*arg2 + 0x20))(arg2)

if (arg3[1].d != 0)
    rsi = *arg3

result[0xa] = sub_140a38250(rsi)
return result
