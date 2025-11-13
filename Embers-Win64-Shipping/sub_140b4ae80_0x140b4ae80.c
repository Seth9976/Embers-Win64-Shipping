// 函数: sub_140b4ae80
// 地址: 0x140b4ae80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != 0)
    int16_t* r8_1 = *arg1
    
    for (int16_t i = *r8_1; i != 0; i = *r8_1)
        int16_t rdx_1
        
        if (i u>= 0x80)
            int32_t rcx_2
            rcx_2.w = sbb.w(i - 0x61, i - 0x61, zx.d(i) - 0x61 u< 0x1a)
            rcx_2.w &= 0x20
            rdx_1 = i - rcx_2.w
        else
            rdx_1 = *(&data_142e77ee0 + (zx.q(i) << 2)) + i
        
        *r8_1 = rdx_1
        r8_1 = &r8_1[1]

arg1[3].d = 0

if (*(arg1 + 0x1c) s<= 0xffffffff)
    sub_1405c5510(&arg1[2], 0)

int32_t rdx_2 = arg1[1].d
uint32_t result

if (rdx_2 == 0)
    result = -1
else
    int16_t* rcx_4 = *arg1
    result = zx.d(*rcx_4)
    
    while (result.w != 0)
        if (result.w u> 0x7f)
            return result
        
        result = zx.d(rcx_4[1])
        rcx_4 = &rcx_4[1]
    
    result = rdx_2 - 1

uint32_t result_1 = result

if (rdx_2 == 0)
    result = 0

if (result s<= 0)
    return result

if (rdx_2 == 0)
    result_1 = 0

int32_t rdx_4 = arg1[3].d + 1 + result_1
arg1[3].d = rdx_4

if (rdx_4 s> *(arg1 + 0x1c))
    sub_1405daba0(&arg1[2])
    rdx_4 = arg1[3].d

int32_t r9_1 = arg1[1].d
int16_t* r8_2

if (r9_1 == 0)
    r8_2 = &data_142d40450
else
    r8_2 = *arg1

if (r9_1 == 0)
    r9_1 = 1

return sub_14060abb0(arg1[2], rdx_4, r8_2, r9_1, 0x3f)
