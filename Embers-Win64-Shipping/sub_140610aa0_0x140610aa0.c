// 函数: sub_140610aa0
// 地址: 0x140610aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141efce60(arg1, arg2)

while (true)
    uint64_t result = zx.q(arg1[0x32].d)
    
    if (result.d s< 0 || result.d s>= arg1[0x31].d)
        if (arg1[0x1a].b == 0)
            return result
        
        sub_140615620(arg1)
        int64_t rdx_3
        rdx_3.b = 1
        return (*(arg1[0x16] + 0x10))(&arg1[0x16], rdx_3)
    
    int64_t rdi_1 = sx.q(result.d)
    result = arg1[0x15]
    int32_t* rdi_3 = (rdi_1 << 4) + arg1[0x30]
    
    if (result == 0)
        result = sub_141ee69e0(arg1)
    
    int32_t zmm1 = *rdi_3
    
    if (zmm1 f> *(result + 0x520) f+ *(arg1 + 0x194))
        return result
    
    char rcx_1 = rdi_3[3].b
    char rdx_1 = *(rdi_3 + 0xd)
    char r8_1 = *(rdi_3 + 0xe)
    char var_18 = rdi_3[1].b
    char var_17_1 = rcx_1
    char var_16_1 = rdx_1
    int32_t var_10_1 = rdi_3[2]
    int32_t var_c_1 = zmm1
    char var_15_1 = r8_1
    int32_t var_14_1 = 0
    sub_1405a9f90(&arg1[0x39], &var_18)
    arg1[0x32].d += 1
