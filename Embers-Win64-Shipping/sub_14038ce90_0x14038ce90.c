// 函数: sub_14038ce90
// 地址: 0x14038ce90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_28 = zmm6
int128_t zmm7
int128_t var_18 = zmm7
int128_t* rsi = arg1
int128_t* rdi = arg3
int64_t result = sx.q(arg2)
int64_t rdx = sx.q(arg4)
int64_t i = sx.q(arg5)
int128_t zmm0
int128_t zmm1

do
    zmm0 = *rsi
    zmm1 = rsi[1]
    int128_t zmm2 = *(rsi + result)
    int128_t zmm3 = *(rsi + result + 0x10)
    void* rsi_1 = rsi + (result << 1)
    int128_t zmm4 = *rsi_1
    int128_t zmm5 = *(rsi_1 + 0x10)
    zmm6 = *(rsi_1 + result)
    zmm7 = *(rsi_1 + result + 0x10)
    rsi = rsi_1 + (result << 1)
    *rdi = zmm0
    rdi[1] = zmm1
    *(rdi + rdx) = zmm2
    *(rdi + rdx + 0x10) = zmm3
    void* rdi_1 = rdi + (rdx << 1)
    *rdi_1 = zmm4
    *(rdi_1 + 0x10) = zmm5
    *(rdi_1 + rdx) = zmm6
    *(rdi_1 + rdx + 0x10) = zmm7
    rdi = rdi_1 + (rdx << 1)
    i -= 4
while (i s>= 4)

if (i != 0)
    int64_t i_1
    
    do
        zmm0 = *rsi
        zmm1 = rsi[1]
        rsi += result
        *rdi = zmm0
        rdi[1] = zmm1
        rdi += rdx
        i_1 = i
        i -= 1
    while (i_1 != 1)

return result
