// 函数: sub_141f67ee0
// 地址: 0x141f67ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t rcx
rcx.b = sub_140b5b8a0(arg3.d, 0) == 0
rcx.b |= arg3:4.d != 0

if (rcx.b == 0)
    sub_141f3d4e0(arg1, arg2, arg3, arg4)
else
    void* rcx_1 = *(arg1 + 0x440)
    
    if (rcx_1 == 0)
        sub_141f3d4e0(arg1, arg2, arg3, arg4)
    else
        void* rax_3 = sub_142361cb0(rcx_1, arg3)
        
        if (rax_3 == 0)
            sub_141f3d4e0(arg1, arg2, arg3, arg4)
        else
            uint32_t zmm3[0x4] = data_143f3b870
            float zmm1[0x4] = zmm3
            uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm3, data_143f3b880)
            zmm1[0].q = zx.o(0) u>> 0x40
            float var_68[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
            int128_t var_58_1 = zx.o(0)
            
            if (sub_142367180(rax_3, &var_68, arg1) == 0)
                sub_141f3d4e0(arg1, arg2, arg3, arg4)
            else if (arg4 == 0)
                *arg2 = var_68
                arg2[1] = var_58_1
                arg2[2] = temp0_1
            else if (arg4 == 1)
                void* rax_5 = *(arg1 + 0xa0)
                
                if (rax_5 == 0)
                    sub_141f3d4e0(arg1, arg2, arg3, arg4)
                else
                    void* rax_6 = *(rax_5 + 0x130)
                    int128_t* r8_2 = rax_6 + 0x1c0
                    
                    if (rax_6 == 0)
                        r8_2 = &data_143dbb0c0
                    
                    sub_140ad7d70(&var_68, arg2, r8_2)
            else if (arg4 != 2)
                sub_141f3d4e0(arg1, arg2, arg3, arg4)
            else
                sub_140ad7d70(&var_68, arg2, arg1 + 0x1c0)

__security_check_cookie(rax_1 ^ &var_88)
return arg2
