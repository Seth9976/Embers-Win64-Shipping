// 函数: sub_1408be2b0
// 地址: 0x1408be2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0

if (arg1[0xa] != 0)
    uint32_t zmm2[0x4] = *(arg1 + 0x14)
    zmm2[0] = zmm2[0] f* 0.5f
    uint32_t zmm3[0x4] = arg1[3].d
    zmm3[0] = zmm3[0] f* 0.5f
    uint128_t zmm0
    zmm0.d = zmm2.d f* arg1[6].d
    zmm2[0] = zmm2[0] f* *(arg1 + 0x34)
    zmm3[0] = zmm3[0] f* arg1[7].d
    zmm3[0] = zmm3[0] f* *(arg1 + 0x3c)
    zmm3[0] = zmm3[0] f+ zmm0.d
    uint64_t var_58_1 = arg1[8]
    zmm3[0] = zmm3[0] f+ zmm2[0]
    zmm2 = *(arg1 + 0x30)
    zmm3[0] = zmm3[0] f+ arg1[8].d
    uint32_t var_68_1[0x4] = zmm2
    zmm3[0] = zmm3[0] f+ *(arg1 + 0x44)
    uint32_t arg_8 = zmm3[0]
    zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    uint32_t arg_c = zmm3[0]
    int128_t zmm0_1
    uint128_t zmm6_1
    zmm0_1, zmm6_1 = sub_140a3f4a0(zmm0, zmm2)
    int32_t rax_1 = arg1[0xb].d * 0x64
    int128_t zmm7 = zmm0_1
    int32_t i = rax_1 + 0xc8
    
    if (i s< rax_1 + 0x12c)
        uint128_t var_38_1 = zmm6_1
        zmm6_1 = zx.o(arg_8.q)
        
        do
            if (i s>= 0)
                int64_t* rdx = arg1[0xa]
                
                if (i s< rdx[3].d - *(rdx + 0x14))
                    int64_t rcx = sx.q(rdx[1].d)
                    int32_t i_1 = i
                    int64_t r8 = 0
                    
                    if (rcx.d s> 0)
                        int64_t* rdx_1 = *rdx
                        
                        do
                            int64_t* rcx_1 = *rdx_1
                            
                            if (rcx_1 != 0)
                                int32_t r9_1 = rcx_1[1].d
                                
                                if (i_1 s< r9_1)
                                    if (i_1 s>= 0)
                                        int64_t rdx_2 = sx.q(i_1) * 0x2a8
                                        
                                        if (rdx_2 != neg.q(*rcx_1))
                                            zmm0_1 = arg1[0xc].d
                                            zmm6_1, zmm7 = sub_1408c4a00(rdx_2 + *rcx_1, arg1[2].d, 
                                                arg1 + 0x14, zmm6_1.q, zmm0_1.d, zmm7.d, 
                                                (*(arg1 + 0x5c))[0], zmm0_1.d)
                                    
                                    break
                                
                                i_1 -= r9_1
                            
                            r8 += 1
                            rdx_1 = &rdx_1[1]
                        while (r8 s< rcx)
            
            i += 1
        while (i s< rax_1 + 0x12c)

arg1[0xd].b = 0
sub_140a22e70(arg1[0xe], arg2, arg3)
*arg1 = &data_142e04a40
int64_t* rcx_4 = arg1[0xe]

if (rcx_4 != 0)
    rcx_4[9].d -= 1
    
    if (rcx_4[9].d == 1)
        sub_140a2f6e0(rcx_4)

*arg1 = &data_142d40498
int64_t* result = TlsGetValue(data_143cf0950)
int64_t* lpTlsValue = result

if (result == 0)
    int64_t* lpTlsValue_1 = j_sub_140a82f30(zx.q((&result[3]).d))
    lpTlsValue = lpTlsValue_1
    
    if (lpTlsValue_1 == 0)
        lpTlsValue = nullptr
    else
        __builtin_memset(lpTlsValue_1, 0, 0x14)
    
    result = TlsSetValue(data_143cf0950, lpTlsValue)

if (lpTlsValue[2].d s< 0x20)
    rsi = lpTlsValue[1]
else
    int64_t rdx_6 = *lpTlsValue
    
    if (rdx_6 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_6)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rsi
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
