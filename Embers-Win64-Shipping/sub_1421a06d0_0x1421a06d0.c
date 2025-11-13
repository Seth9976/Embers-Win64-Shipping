// 函数: sub_1421a06d0
// 地址: 0x1421a06d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg5.d

if (arg1[3] == 0)
    return 

void* rsi_1 = arg1[5]
(*(*arg1 + 0x28))(arg4, arg2, rsi_1)

if ((arg1[0x1c].b & 1) == 0)
    sub_1421b34f0(arg1)
else
    uint128_t zmm6
    uint128_t var_28_1 = zmm6
    int128_t zmm7
    int128_t var_38_1 = zmm7
    uint128_t zmm10
    uint128_t var_68_1 = zmm10
    (*(*arg1 + 0xe0))(arg1)
    int32_t rax_3 = arg1[0x1c].d
    
    if ((rax_3.b & 0x30) == 0 && arg3 == 0)
        arg5 = *(arg1 + 0x12c)
    
    uint128_t zmm2
    
    if ((rax_3.b & 0x30) == 0 && arg3 == 0 && not(arg5.d f< 0f))
        int32_t rcx_1 = *(*(rsi_1 + 0x30) + 0xe4)
        
        if (rcx_1 != 0 && arg1[0x2e].d s>= rcx_1)
            arg4.d = _mm_cvtepi32_ps(zx.o(rcx_1)).d f* arg1[0x2f].d
        
        if (rcx_1 != 0 && arg1[0x2e].d s>= rcx_1 && arg4.d f<= arg1[0x25].d)
            zmm2 = arg_10
        else
            arg4, zmm7 = sub_141fe5610(*(rsi_1 + 0x50) + 0x38, arg5, arg1[3], nullptr)
            int64_t rax_5 = *arg1
            int32_t arg_8 = 0
            (*(rax_5 + 0x98))(arg1, &arg_10, &arg_8)
            zmm2 = arg_10
            zmm6.d = arg4.d f+ arg4.d
            uint128_t zmm3_1 = arg4
            
            if (zmm2.d f<= zmm7.d)
                arg4 = zx.o(0)
            else
                arg4.d = 1f f/ zmm2.d
            
            int32_t r8_3 = arg1[0x23].d
            int32_t rdx_1 = arg1[0x46].d
            
            if (r8_3 s< rdx_1 && not(zmm6.d f> zmm7.d))
                zmm6 = arg4
            
            int32_t r9_1
            
            if (r8_3 s>= rdx_1 || (*(arg1[0x3a] + 0x4c) & 1) == 0)
                r9_1 = arg_8
            else
                r9_1 = rdx_1
                arg_8 = rdx_1
                
                if (not(zmm2.d f<= 9.99999975e-05f))
                    zmm3_1.d = _mm_cvtepi32_ps(zx.o(rdx_1)).d f* arg4.d
                    zmm6.d = zmm6.d f+ zmm3_1.d
            
            if (not(zmm6.d f<= zmm7.d))
                zmm10.d = 1f f/ zmm6.d
                int32_t rcx_5 = r9_1
                int128_t zmm9 = *(arg1 + 0x124)
                uint128_t zmm8
                zmm8.d = zmm6.d f* zmm2.d
                zmm6.d = zmm10.d f* zmm9.d
                zmm8.d = zmm8.d f+ zmm9.d
                zmm6.d = zmm6.d f+ zmm2.d
                arg5.d = zmm8.d f+ zmm8.d
                zmm6.d = zmm6.d f- zmm10.d
                arg5.d = arg5.d f- 0.5f
                int32_t rax_8 = int.d(arg5.d) s>> 1
                
                if (rax_8 s>= r9_1)
                    rcx_5 = rax_8
                
                arg4.d = float.s(rax_8)
                zmm8.d = zmm8.d f- arg4.d
                
                if (not(zmm3_1.d f<= 9.99999975e-05f))
                    zmm3_1.d = zmm3_1.d f/ _mm_cvtepi32_ps(zx.o(r9_1)).d
                    zmm8.d = zmm8.d f- zmm3_1.d
                    _mm_max_ss(zmm8.d, zmm7.d)
                
                if (r8_3 == 0 && rcx_5 == 0)
                    rcx_5 = 1
                
                int32_t rdi_2 = rdx_1 - r8_3
                
                if (r8_3 + rcx_5 s<= rdx_1)
                    rdi_2 = rcx_5
                
                int32_t rcx_6 = r8_3 + rdi_2
                char rax_11
                
                if (rcx_6 s>= arg1[0x24].d)
                    void* rax_10 = *arg1
                    arg4 = _mm_cvtepi32_ps(zx.o(rcx_6))
                    int64_t r9_2 = *(rax_10 + 0x18)
                    _mm_sqrt_ss(0, arg4.d)
                    rax_11 = r9_2()
                
                if (rcx_6 s< arg1[0x24].d || rax_11 == 1)
                    int64_t var_78_1 = 0
                    int128_t zmm8_1 =
                        sub_1421c8020(arg1, rdi_2, zmm6.d, zmm10.d, &arg1[0xa], &data_143dbb1f8)
                    
                    if (*(arg1 + 0x214) s> 0)
                        *(arg1 + 0x214) = 0
                    
                    zmm9 = zmm8_1
                
                *(arg1 + 0x124) = zmm9.d
                zmm2 = arg_10
    else if (not(test_bit(rax_3, 0xa)))
        zmm2 = arg_10
    else
        sub_1421b34f0(arg1)
        zmm2 = arg_10
    
    (*(*arg1 + 0xa0))(arg1, zmm2)
    arg5 = arg_10
    int64_t rax_15 = *arg1
    arg1[0x34] = *(*(rsi_1 + 0x30) + 0x30)
    (*(rax_15 + 0x38))(arg1, arg5, rsi_1)
    (*(*arg1 + 0x40))(arg1, arg_10, rsi_1)
    (*(*arg1 + 0x68))(arg1, arg_10)
    
    if (arg3 == 0)
        *(arg1 + 0x20c) = arg3
    
    arg1[0x42].d += 1
    *(arg1 + 0x174) = 1

arg4.d = arg1[0x32].d.d f+ *(arg1 + 0x12c)
*(arg1 + 0x12c) = arg4.d
arg1[0x35] = data_143dbb1f8.q
arg1[0x36].d = data_143dbb200
