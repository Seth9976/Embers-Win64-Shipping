// 函数: sub_141bea5c0
// 地址: 0x141bea5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x68)
int128_t var_38
char var_28
int64_t var_20

if (rcx != 0)
    int128_t zmm0 = *(arg1 + 0x38)
    var_28 = 1
    var_20 = 0
    int32_t var_18_1 = 0
    var_38 = zmm0
    sub_141b780e0(rcx, rcx + 0x20, &var_38, 1)
    sub_140745b20(&var_20)
    rcx = *(arg1 + 0x68)
    
    if (rcx != 0)
        zmm0 = *(arg1 + 0x48)
        var_28 = 1
        var_20 = 0
        int32_t var_18_2 = 0
        var_38 = zmm0
        sub_141b77f70(rcx, rcx + 0x48, &var_38, 1)
        sub_140745b20(&var_20)
        rcx = *(arg1 + 0x68)

if (rcx != 0)
    var_38.d = (*(arg1 + 0x58)).d
    var_38:4.d = *(arg1 + 0x5c)
    var_38:8.b = 1
    var_28.q = 0
    var_20.d = 0
    sub_141b91c60(rcx, &var_38)
    sub_140745b20(&var_28)
    rcx = *(arg1 + 0x68)

char result = *(arg1 + 0x60)

if (rcx != 0)
    var_38.b = result
    var_38:1.b = 1
    var_38:8.q = 0
    var_28.d = 0
    sub_141b92620(rcx, &var_38)
    result = sub_140745b20(&var_38:8)
    void* rcx_5 = *(arg1 + 0x68)
    
    if (rcx_5 != 0)
        uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x64)))
        var_38:4.b = 1
        var_38:8.q = 0
        var_28.d = 0
        var_38.d = zmm0_1.d
        sub_141b77cb0(rcx_5, rcx_5 + 0xa8, &var_38, 1)
        return sub_140745b20(&var_38:8)

return result
