// 函数: sub_141298f00
// 地址: 0x141298f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 0
int128_t var_98

if (&arg4[1] != &var_98:8)
    int64_t* rcx = arg4[1]
    arg4[1] = 0
    
    if (rcx != 0)
        sub_1419d6470(rcx)

int128_t var_88

if (&arg4[2] != &var_88)
    int64_t* rcx_1 = arg4[2]
    arg4[2] = 0
    
    if (rcx_1 != 0)
        sub_1419d6470(rcx_1)

if (&arg4[3] != &var_88:8)
    int64_t* rcx_2 = arg4[3]
    arg4[3] = 0
    
    if (rcx_2 != 0)
        sub_1419d6470(rcx_2)

int128_t var_78

if (&arg4[4] != &var_78)
    int64_t* rcx_3 = arg4[4]
    arg4[4] = 0
    
    if (rcx_3 != 0)
        sub_1419d6470(rcx_3)

if (&arg4[5] != &var_78:8)
    int64_t* rcx_4 = arg4[5]
    arg4[5] = 0
    
    if (rcx_4 != 0)
        sub_1419d6470(rcx_4)

__builtin_memset(&arg4[6], 0xff, 0x14)
*arg4 = arg2

if (*arg3 != 0)
    int64_t* r13_1 = arg4[1]
    void* rcx_5 = *(arg3[1] + 0x10)
    arg4[1] = rcx_5
    
    if (rcx_5 != 0)
        sub_1419c5510(rcx_5)
    
    if (r13_1 != 0)
        sub_1419d6470(r13_1)
    
    arg4[6].d = *(*arg3 + 0x10c)

if (arg3[6] != 0)
    int64_t* rsi_1 = arg4[4]
    void* rcx_8 = *(arg3[7] + 0x10)
    arg4[4] = rcx_8
    
    if (rcx_8 != 0)
        sub_1419c5510(rcx_8)
    
    if (rsi_1 != 0)
        sub_1419d6470(rsi_1)
    
    *(arg4 + 0x3c) = *(arg3[6] + 0x10c)

if (arg3[8] != 0)
    int64_t* rsi_2 = arg4[5]
    void* rcx_11 = *(arg3[9] + 0x10)
    arg4[5] = rcx_11
    
    if (rcx_11 != 0)
        sub_1419c5510(rcx_11)
    
    if (rsi_2 != 0)
        sub_1419d6470(rsi_2)
    
    arg4[8].d = *(arg3[8] + 0x10c)

if (arg3[2] != 0)
    int64_t* rsi_3 = arg4[2]
    void* rcx_14 = *(arg3[3] + 0x10)
    arg4[2] = rcx_14
    
    if (rcx_14 != 0)
        sub_1419c5510(rcx_14)
    
    if (rsi_3 != 0)
        sub_1419d6470(rsi_3)
    
    *(arg4 + 0x34) = *(arg3[2] + 0x10c)

if (arg3[4] != 0)
    int64_t* rsi_4 = arg4[3]
    void* rcx_17 = *(arg3[5] + 0x10)
    arg4[3] = rcx_17
    
    if (rcx_17 != 0)
        sub_1419c5510(rcx_17)
    
    if (rsi_4 != 0)
        sub_1419d6470(rsi_4)
    
    arg4[7].d = *(arg3[4] + 0x10c)

int128_t zmm1 = *(arg3 + 0x10)
var_98 = *arg3
int128_t zmm0 = *(arg3 + 0x20)
var_88 = zmm1
zmm1 = *(arg3 + 0x30)
var_78 = zmm0
int128_t var_68 = zmm1
int128_t var_58 = *(arg3 + 0x40)
int128_t var_48 = *(arg3 + 0x50)
int128_t var_38 = *(arg3 + 0x60)
return sub_1412709a0(arg1, &var_98)
