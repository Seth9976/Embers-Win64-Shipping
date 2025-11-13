// 函数: sub_141ad6110
// 地址: 0x141ad6110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0xd8))()
*(arg1 + 0x24) = 0
int64_t result = sub_141e2ae10(arg1, *arg2)

if (result.b != 0)
    int128_t zmm6_1
    result, zmm6_1 = sub_141e1eab0(sub_141e23160(arg1), arg2)
    uint32_t rcx_3 = zx.d(arg1[5].b)
    int128_t var_18
    int32_t zmm0_1
    
    if (rcx_3 == 0)
        *(arg1 + 0x24) =
            sub_141e3b510(&arg1[6], sub_141e3b530(&arg1[0x11], *(arg1 + 0x2c), arg2[3].d))
    else if (rcx_3 == 1)
        zmm0_1, result = sub_141e3b430(&arg1[7], *(arg1 + 0x29), arg2[3].d)
        *(arg1 + 0x24) = zmm0_1
    else if (rcx_3 == 2)
        result = *arg2
        int64_t* rsi_1 = *(result + 0xa0)
        
        if (rsi_1 != 0)
            void* rax_2 = sub_14245f6d0()
            void* rcx_5 = rsi_1[2]
            result = sx.q(*(rax_2 + 0x38))
            
            if (result.d s<= *(rcx_5 + 0x38))
                int64_t result_1 = result
                result = *(rcx_5 + 0x30)
                
                if (*(result + (result_1 << 3)) == rax_2 + 0x30)
                    var_18 = zmm6_1
                    arg2[3].d
                    uint32_t zmm0_2[0x4]
                    float zmm6_2[0x4]
                    zmm0_2, result, zmm6_2 = sub_141e01880(rsi_1, arg1[0x10])
                    int512_t zmm6_3
                    zmm0_1, zmm6_3 = sub_141e3b530(&arg1[0x11], zmm0_2, zmm6_2)
                    zmm6_3.o = var_18
                    *(arg1 + 0x24) = zmm0_1
    
    uint32_t zmm1_1[0x4] = *(arg1 + 0x24)
    zmm0_1 = (zx.o(0)).d
    
    if (not(zmm1_1[0] f< zmm0_1))
        zmm0_1 = __minss_xmmss_memss(zmm1_1[0], 0x3f800000)[0]
    
    *(arg1 + 0x24) = zmm0_1
    
    if (not(zmm0_1 f<= 9.99999975e-06f))
        void* rax_3 = *arg2
        int64_t r9_1 = *arg1
        result = (*(r9_1 + 0x100))(arg1, *(rax_3 + 0xb0), rax_3 + 0x4a0, r9_1, var_18)
        
        if (result.b != 0)
            return (*(*arg1 + 0xd0))(arg1, arg2)

return result
