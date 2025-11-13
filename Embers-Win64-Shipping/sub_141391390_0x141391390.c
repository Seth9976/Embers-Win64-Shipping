// 函数: sub_141391390
// 地址: 0x141391390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* rax_2 = sub_14139d540(arg1)
int64_t* rcx = *rax_2
int128_t var_98

if (rcx != 0)
    void* rdx = rcx[1]
    
    if (*(rdx + 0x20) != 0)
        int128_t zmm0 = *(rdx + 0x20)
        int32_t rax_3 = *(rdx + 0x30)
        int32_t rax_4 = zmm0.d
        var_98 = zmm0
        
        if (rax_4 != *(arg1 + 0x3e0))
        label_14139144e:
            *rax_2 = 0
            
            if (rcx != 0)
                (*(*rcx + 0x38))(zmm0)
        else if (rax_4 == 1)
            zmm0 = var_98:4.d
            
            if (zmm0.d f!= *(arg1 + 0x3e4))
                goto label_14139144e
            
            zmm0 = var_98:8.d
            
            if (zmm0.d f!= *(arg1 + 0x3e8))
                goto label_14139144e
            
            zmm0 = var_98:0xc.d
            
            if (zmm0.d f!= *(arg1 + 0x3ec))
                goto label_14139144e
            
            zmm0 = rax_3
            
            if (zmm0.d f!= *(arg1 + 0x3f0))
                goto label_14139144e
        else if (rax_4 == 2)
            zmm0 = var_98:4.d
            
            if (zmm0.d f!= *(arg1 + 0x3e4) || var_98:8.d != *(arg1 + 0x3e8))
                goto label_14139144e

uint64_t result = sub_14139d540(arg1)

if (*result == 0)
    int32_t rax_7 = sub_14139d5b0(arg1, *(arg1 + 0x3d0))
    int32_t rbx_1
    
    if (sub_1422eb610() == 0)
        rbx_1 = 0
    else
        int64_t rdx_2 = sx.q((*U"1111")[sx.q(*(arg1 + 0x3d0))])
        
        if (rdx_2.d u> 0x1e)
            if ((*(rdx_2 * 0x14 + &data_143f025fc) & 1) == 0)
                rbx_1 = 0
            else
                rbx_1 = 0x10
        else if (test_bit(0x6562c800, rdx_2.d) || (*(rdx_2 * 0x14 + &data_143f025fc) & 1) != 0)
            rbx_1 = 0x10
        else
            rbx_1 = 0
    
    int64_t rax_9 = *(arg1 + 0x37c)
    var_98.q = rax_9
    int32_t var_64_1 = rax_9.d
    int32_t var_60_1 = var_98:4.d
    int32_t var_58_1 = 1
    int16_t var_50_1 = 1
    wchar16 const* const var_38_1 = u"UnknownTexture2D"
    int32_t rax_11 = data_143ed3384
    int32_t var_68_1 = *(arg1 + 0x3f0)
    int32_t rcx_6 = *(arg1 + 0x3d0)
    int16_t var_40_1 = 0
    int128_t var_78 = *(arg1 + 0x3e0)
    int32_t var_5c_1 = 0
    int32_t var_54_1 = 0x10000
    int32_t var_4c_1 = rax_7
    int32_t var_44_1 = 9
    int16_t var_30_1 = 1
    char var_2e_1 = 0
    int16_t rax_12 = sub_14139cf50(rcx_6)
    int16_t var_50_2 = rax_12
    
    if (*(arg1 + 0x3d0) s>= 3 && rax_12 == 1)
        int32_t var_44_2 = var_44_1 | 0x10000
    
    int32_t var_48_2 = rax_11 | rbx_1
    var_98.q = u"SceneColorMobile"
    var_98:8.q = u"SceneColorDeferred"
    result = sub_1419a0ce0(&data_1439c9260, arg2, &var_78, sub_14139d540(arg1), 
        *(&var_98 + (zx.q(*(arg1 + 0x3d4)) << 3)), 1, 1, 0)

__security_check_cookie(rax_1 ^ &var_d8)
return result
