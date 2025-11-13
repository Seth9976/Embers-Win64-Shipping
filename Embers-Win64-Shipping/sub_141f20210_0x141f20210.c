// 函数: sub_141f20210
// 地址: 0x141f20210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
sub_141ee9830(arg1)
int32_t* result = sub_14221b2f0(&arg1[0x55])

if (result.b == 0)
    if (data_143f3ad94 s> 0)
        TEB* gsbase
        
        if (data_143f3b1f0
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f3b1f0)
            
            if (data_143f3b1f0 == 0xffffffff)
                sub_142259be0(&data_143f3b1d0, 0)
                _Init_thread_footer(&data_143f3b1f0)
        
        int32_t rax_4 = sub_142216be0(&arg1[0x55])
        
        if (rax_4 == 1 && memcmp(&arg1[0x5a], &data_143f3b1d0, zx.q(rax_4 + 0x1f)) == 0)
            arg1[0x41].b |= 0x80
            sub_1422216c0(&arg1[0x55], 0, 1)
    
    result = (*(*arg1 + 0x690))(arg1)
    
    if (result != 0)
        int128_t zmm1 = *(arg1 + 0x1d0)
        uint32_t var_48[0x4] = *(arg1 + 0x1c0)
        uint32_t zmm0[0x4] = *(arg1 + 0x1e0)
        int128_t var_38_1 = zmm1
        uint32_t var_28_1[0x4] = zmm0
        uint32_t var_58[0x4] = zmm0
        
        if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f)
                && not(_mm_and_ps(var_58[1], 0x7fffffff)[0] f> 9.99999975e-05f)
                && not(_mm_and_ps(var_58[2], 0x7fffffff)[0] f> 9.99999975e-05f))
            uint32_t var_28_2[0x4] = data_143271ec0
        
        void* rax_7 = arg1[0x15]
        
        if (rax_7 == 0)
            rax_7 = sub_141ee69e0(arg1)
        
        result = sub_142219250(&arg1[0x55], result, &var_48, arg1, *(rax_7 + 0x1f8), 
            sub_14220af60(&var_58, arg1))

__security_check_cookie(rax_1 ^ &var_88)
return result
