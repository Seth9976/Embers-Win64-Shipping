// 函数: sub_141f809b0
// 地址: 0x141f809b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = data_143f3bc60 == 0
int128_t zmm6
zmm6.d = arg3.d f* __maxss_xmmss_memss((*data_143f5a0e8).d, *data_143f5a100).d

if (not(cond:0))
    data_143f3bc60 = 0
    bool cond:2_1 = data_143f3c534 == 0
    data_143f3c530 = 0
    
    if (not(cond:2_1))
        sub_1405c5660(&data_143f3c528, 0)
    
    bool cond:3_1 = data_143f3c554 == 0
    data_143f3c550 = 0
    
    if (not(cond:3_1))
        sub_1405a5130(&data_143f3c548, 0)

int64_t rbx = sx.q(data_143f3c550)
int32_t rax_2 = (rbx + 1).d
bool cond:1 = rax_2 s<= data_143f3c554
data_143f3c550 = rax_2

if (not(cond:1))
    sub_1405a4df0(&data_143f3c548)

uint64_t result = data_143f3c548
int64_t* rdx_1 = result + rbx * 0x18

if (rdx_1 != 0)
    *rdx_1 = *arg2
    result = zx.q(arg2[1].d)
    rdx_1[2].d = arg5.d
    *(rdx_1 + 0xc) = zmm6.d
    rdx_1[1].d = result.d
    *(rdx_1 + 0x14) = arg4

return result
