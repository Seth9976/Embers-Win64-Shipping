// 函数: sub_142a1efa0
// 地址: 0x142a1efa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1e64) != 0)
    int64_t rax_4
    
    if (*(arg1 + 0x1e88) != 0)
        *(arg1 + 0xf98) = sub_1403ae0fc
        *(arg1 + 0xfa0) = sub_1403adfc4
        *(arg1 + 0xfa8) = data_144021068
        rax_4 = data_144021080
    else
        *(arg1 + 0xf98) = data_144021078
        *(arg1 + 0xfa0) = data_144021070
        *(arg1 + 0xfa8) = data_144021060
        rax_4 = data_144021088
    
    *(arg1 + 0xfb0) = rax_4
    
    if (*(arg1 + 0x3830) != 0 && *(arg1 + 0x3828) != 0 && *(arg1 + 0x382c) == 0)
        *(arg1 + 0x382c) = 1
else
    __builtin_memcpy(arg1 + 0x34b5, 
        "\xa2\x80\xe1\x92\xac\x93\xd6\x27\x9c\x80\x81\x84\x4b\x91\xb2\xce\xef\xfe\xfe\xa4\x80\xcc\xaa\x"
    "77\xeb\x8c\xe6\xe4\x80\x82\x82\x4a\x94\xb4\xcb\xec\xfe\xfe", 
        0x26)
    sub_142a1d270(arg1 + 0x12c0)
    sub_142a2d490(arg1 + 0x12c0)
    *(arg1 + 0xf67) = 0
    *(arg1 + 0xf63) = 0
    *(arg1 + 0xf75) = 0
    *(arg1 + 0xf7d) = 0
    *(arg1 + 0x2bf0) = 1
    *(arg1 + 0x2bf4) = 1
    *(arg1 + 0x2bfc) = 0
    *(arg1 + 0x2c0c) = 0

*(arg1 + 0xf58) = arg1 + 0x2c20
char* rcx_2 = *(arg1 + 0x1eb0)
*(arg1 + 0xf00) = rcx_2
*(arg1 + 0xf0c) = *(arg1 + 0x1e64)
*rcx_2 = 0
*(arg1 + 0xf08) = *(arg1 + 0x1e7c)
*(arg1 + 0xdd8) = 0xffffffff
int32_t result = *(arg1 + 0xdd8)
*(arg1 + 0xfc0) = 0

if (*(arg1 + 0x1e8c) != 0)
    result = -8

*(arg1 + 0xdd8) = result
return result
