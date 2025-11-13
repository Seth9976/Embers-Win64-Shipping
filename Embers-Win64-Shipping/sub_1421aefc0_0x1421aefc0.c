// 函数: sub_1421aefc0
// 地址: 0x1421aefc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143f0f180
int64_t rbp = sx.q(arg4)
int64_t i = sx.q(arg3)
int64_t rax_1 = (*(*rcx + 0x130))(rcx, &data_143f02b98, arg1, 0, (rbp << 3).d, 1)

if (i s> 0)
    int64_t rsi_1 = 0
    int128_t zmm6
    int128_t var_28_1 = zmm6
    int128_t zmm7
    int128_t var_38_1 = zmm7
    
    do
        int128_t zmm0
        zmm0.d = float.s(data_143f4d87c)
        zmm7.d = float.s(zx.q(*(arg2 + (rsi_1 << 2))))
        zmm6.d = zmm7.d f/ zmm0.d
        truncf(zmm6.d)
        zmm6.d = zmm6.d f- zmm6.d
        *(rax_1 + (rsi_1 << 3)) = zmm6.d
        zmm7.d = zmm7.d f/ float.s(data_143f4d87c)
        truncf(zmm7.d)
        zmm6.d = zmm7.d f/ float.s(data_143f4d880)
        truncf(zmm6.d)
        zmm6.d = zmm6.d f- zmm6.d
        *(rax_1 + (rsi_1 << 3) + 4) = zmm6.d
        rsi_1 += 1
    while (rsi_1 s< i)

for (; i s< rbp; i += 1)
    *(rax_1 + (i << 3)) = 0x42c80000
    *(rax_1 + (i << 3) + 4) = 0x42c80000

jump(*(*data_143f0f180 + 0x138))
