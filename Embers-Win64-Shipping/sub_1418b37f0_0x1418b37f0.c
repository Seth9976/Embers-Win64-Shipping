// 函数: sub_1418b37f0
// 地址: 0x1418b37f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x30))

if (result.d s>= 0 && result.d s< *(arg1 + 0x28))
    int64_t result_1 = result
    result = *(arg1 + 0x20)
    arg2 = result_1 * 2
    int64_t* rbx_1 = *(result + (arg2 << 3))
    
    if (rbx_1 != 0)
        double zmm6[0x2]
        double var_18_1[0x2] = zmm6
        (*(*rbx_1 + 0x18))(rbx_1, arg2)
        
        if (not(arg3[0].d f<= 0f))
            sub_140b73230(arg3)
        
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        arg3 = zx.o(0)
        arg3[0] = float.d(performanceCount)
        arg3[0] = arg3[0] f* data_143d796f8
        arg3[0] = arg3[0] + 16777216.0
        arg3[0] = arg3[0] f- *(arg1 + 0x38)
        *(arg1 + 0x38) = arg3.q
        int64_t* rax_1 = sub_140a242a0()
        int64_t r8_1 = *rax_1
        (*(r8_1 + 0x30))(rax_1, 2, r8_1)
        zmm6 = _mm_cvtpd_ps(__minsd_xmmsd_memsd(arg3[0], 0x4014000000000000))
        int128_t zmm6_1 = sub_140a35180(sub_140b18f30(), zmm6)
        sub_140a755d0()
        sub_140a8e400(&data_143db7b50)
        int512_t zmm1_1
        zmm1_1.o = zmm6_1
        (*(*rbx_1 + 0x10))(rbx_1, zmm1_1)
        sub_140d84150(true)
        sub_140e78f60(data_143e29f28)
        int512_t zmm1_2
        double zmm6_2[0x2]
        zmm1_2, zmm6_2 = sub_140e642c0(data_143e29f28)
        int64_t* rbx_2 = data_143e20d20
        int64_t* rcx_8 = data_143e20d18
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        zmm1_2.o = zmm6_2
        result = (*(*rcx_8 + 0x30))(rcx_8, zmm1_2)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp1_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
        
        data_143de5458 += 1

return result
