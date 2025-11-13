// 函数: sub_1428de690
// 地址: 0x1428de690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg2 != 0)
    if (arg4 == 5)
        *arg2 = sub_1428dea00()
        return 1
    
    if (arg4 != 0x61)
        *arg2 = nullptr
        return 0
    
    *arg2 = sub_1428de950()
    return 1

if (data_143fecc8c != arg2.d)
    uint64_t result = zx.q(data_143fecc88)
    *arg3 = &data_143fecc78
    return result

int32_t* rax = sub_1428dea00()

if (rax != 0)
    int32_t rax_1 = sub_1406938b0(rax)
    int64_t rdx = sx.q(data_143fecc88)
    *(&data_143fecc78 + (rdx << 2)) = rax_1
    data_143fecc88 = rdx.d + 1

int32_t* rax_2 = sub_1428de950()
int32_t rdx_3

if (rax_2 == 0)
    rdx_3 = data_143fecc88
else
    int32_t rax_3 = sub_1406938b0(rax_2)
    int64_t rdx_2 = sx.q(data_143fecc88)
    *(&data_143fecc78 + (rdx_2 << 2)) = rax_3
    rdx_3 = rdx_2.d + 1
    data_143fecc88 = rdx_3

data_143fecc8c = 1
*(&data_143fecc78 + (sx.q(rdx_3) << 2)) = 0
*arg3 = &data_143fecc78
return zx.q(rdx_3)
