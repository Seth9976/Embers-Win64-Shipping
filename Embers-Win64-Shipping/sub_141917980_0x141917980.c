// 函数: sub_141917980
// 地址: 0x141917980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x168)

if (*(arg2 + 0x20) != rdx)
    data_143effad0(0x408, rdx)
    *(arg2 + 0x20) = *(arg1 + 0x168)

int32_t result = *(arg2 + 0x24)
int32_t rcx = *(arg1 + 0x16c)

if (result != rcx)
    if (rcx == 0)
        data_143eff9e8(0xb44)
    else
        if (result == 0)
            data_143effa08(0xb44)
            rcx = *(arg1 + 0x16c)
        
        data_143eff9c0(rcx)
    
    result = *(arg1 + 0x16c)
    *(arg2 + 0x24) = result

int128_t zmm0 = *(arg1 + 0x170)
float zmm1 = *(arg2 + 0x28)
int128_t zmm6
zmm6.d = zmm0.d f* 16777215f

if (zmm1 f!= zmm0.d || not((*(arg1 + 0x174)).d f== *(arg2 + 0x2c)))
    if (zmm6.d f!= 0f || 0f f!= *(arg1 + 0x174))
        if (not(zmm1 != 0f) && not(0f f!= *(arg2 + 0x2c)))
            data_143effa08(0x8037)
            data_143effa08(0x2a02)
            data_143effa08(0x2a01)
        
        data_143effad8(*(arg1 + 0x174), zmm6.d)
    else
        data_143eff9e8(0x8037)
        data_143eff9e8(0x2a02)
        data_143eff9e8(0x2a01)
    
    *(arg2 + 0x28) = *(arg1 + 0x170)
    result = *(arg1 + 0x174)
    *(arg2 + 0x2c) = result

return result
