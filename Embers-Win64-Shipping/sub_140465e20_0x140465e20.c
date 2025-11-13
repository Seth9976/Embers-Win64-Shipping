// 函数: sub_140465e20
// 地址: 0x140465e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t (* i)(int64_t arg1, int64_t* arg2) = sub_1410e06f0
int128_t* var_18 = nullptr
int32_t var_10 = 0

do
    i = i(zx.q(arg1), &var_18)
while (i != 0)

int128_t* r9 = var_18
int32_t r8 = var_10 - 1
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(var_10)
int32_t i_3 = (temp1 - temp0) s>> 1

if (i_3 s> 0)
    uint64_t i_2 = zx.q(i_3)
    int128_t* rcx_2 = r9
    uint64_t i_1
    
    do
        int128_t* rax_6 = &r9[sx.q(r8) * 3]
        
        if (rcx_2 != rax_6)
            int128_t zmm2 = *rcx_2
            int128_t zmm3 = rcx_2[1]
            int128_t zmm4_1 = rcx_2[2]
            *rcx_2 = *rax_6
            rcx_2[1] = rax_6[1]
            rcx_2[2] = rax_6[2]
            *rax_6 = zmm2
            rax_6[1] = zmm3
            rax_6[2] = zmm4_1
        
        rcx_2 = &rcx_2[3]
        r8 -= 1
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

int128_t** var_20 = &var_18
int32_t var_28 = 0x20
sub_1419c2220(&data_143e2d990, 1, u"FBlueNoise", u"FBlueNoise", 0x42f058f0, nullptr)
int128_t* rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return atexit(sub_142cce1d0) __tailcall
