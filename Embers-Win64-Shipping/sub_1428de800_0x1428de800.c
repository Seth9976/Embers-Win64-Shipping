// 函数: sub_1428de800
// 地址: 0x1428de800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg2 != 0)
    if (arg4 != 0x40)
        *arg2 = nullptr
        return 0
    
    *arg2 = sub_1428deba0()
    return 1

if (data_143fecca4 != arg2.d)
    uint64_t result = zx.q(data_143fecca0)
    *arg3 = &data_143fecc98
    return result

int32_t* rax = sub_1428deba0()
int32_t rdx_1

if (rax == 0)
    rdx_1 = data_143fecca0
else
    int32_t rax_1 = sub_1406938b0(rax)
    int64_t rdx = sx.q(data_143fecca0)
    *(&data_143fecc98 + (rdx << 2)) = rax_1
    rdx_1 = rdx.d + 1
    data_143fecca0 = rdx_1

data_143fecca4 = 1
*(&data_143fecc98 + (sx.q(rdx_1) << 2)) = 0
*arg3 = &data_143fecc98
return zx.q(rdx_1)
