// 函数: sub_142415360
// 地址: 0x142415360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = zx.q(arg2)
TEB* gsbase

if (data_143f5d834 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f5d834)
    
    if (data_143f5d834 == 0xffffffff)
        sub_140af2b60()
        data_143f5d830 = sub_140b21a10(&data_143dbb3f0, u"DisableTouch")
        _Init_thread_footer(&data_143f5d834)

int32_t result

if (data_143f5d830 == 0)
    if (rbx.d u>= 0xb)
        result.b = 0
        return result
    
    uint64_t rcx = rbx * 3
    int32_t zmm0 = (zx.o(0)).d
    *(&arg1[5] + (rcx << 2)) = *arg4
    int64_t* r15_2 = &arg1[5] + (rcx << 2)
    *(arg1 + (rcx << 2) + 0x2c) = arg4[1]
    
    if (arg3 != 5)
        zmm0 = arg5
    
    *(arg1 + rbx * 0xc + 0x30) = zmm0
    uint64_t rax_4 = rbx * 3
    int64_t rax_5 = *(&data_143e1eef0 + (rax_4 << 3))
    void* rax_8 = sub_1423f7090(&arg1[0x4c], sub_140b5ead0(rax_5.d) + rax_5:4.d, 
        &data_143e1eef0 + (rax_4 << 3))
    int32_t rax_9 = arg1[0x74].d
    
    if (arg3 == 0)
        arg1[0x74].d = rax_9 + 1
        int64_t rbp_2 = sx.q(*(rax_8 + 0x78))
        int32_t rax_14 = (rbp_2 + 1).d
        *(rax_8 + 0x78) = rax_14
        
        if (rax_14 s> *(rax_8 + 0x7c))
            sub_1405a4cf0(rax_8 + 0x70)
        
        *(*(rax_8 + 0x70) + (rbp_2 << 2)) = arg1[0x74].d
        sub_1423f6510(&arg1[0x16], &arg1[0x74], r15_2)
        
        if ((*(rax_8 + 0x1c) & 2) == 0)
            int128_t zmm7 = *((*(*arg1 + 0x150))(arg1) + 0x528)
            int128_t zmm6
            zmm6.d = zmm7.d f- *(rax_8 + 0x18)
            
            if (not(zmm6.d f>= *(sub_1423f7290() + 0x78)))
                arg1[0x74].d += 1
                int64_t rbp_3 = sx.q(*(rax_8 + 0xa8))
                int32_t rax_19 = (rbp_3 + 1).d
                *(rax_8 + 0xa8) = rax_19
                
                if (rax_19 s> *(rax_8 + 0xac))
                    sub_1405a4cf0(rax_8 + 0xa0)
                
                *(*(rax_8 + 0xa0) + (rbp_3 << 2)) = arg1[0x74].d
                sub_1423f6510(&arg1[0x16], &arg1[0x74], r15_2)
            
            *(rax_8 + 0x18) = zmm7.d
    else
        arg1[0x74].d = rax_9 + 1
        int64_t rcx_5
        int64_t rbp_1
        
        if (arg3 == 5)
            rbp_1 = sx.q(*(rax_8 + 0x88))
            int32_t rax_12 = (rbp_1 + 1).d
            *(rax_8 + 0x88) = rax_12
            
            if (rax_12 s> *(rax_8 + 0x8c))
                sub_1405a4cf0(rax_8 + 0x80)
            
            rcx_5 = *(rax_8 + 0x80)
        else
            rbp_1 = sx.q(*(rax_8 + 0x98))
            int32_t rax_10 = (rbp_1 + 1).d
            *(rax_8 + 0x98) = rax_10
            
            if (rax_10 s> *(rax_8 + 0x9c))
                sub_1405a4cf0(rax_8 + 0x90)
            
            rcx_5 = *(rax_8 + 0x90)
        
        *(rcx_5 + (rbp_1 << 2)) = arg1[0x74].d
        sub_1423f6510(&arg1[0x16], &arg1[0x74], r15_2)
    
    *(rax_8 + 0x1d) += 1
    float temp0_1[0x4] = _mm_unpacklo_ps(*arg4, arg4[1])
    int32_t var_40_1 = 0
    *rax_8 = temp0_1.q
    *(rax_8 + 0xc) = temp0_1.q
    *(rax_8 + 0xc0) = temp0_1.q
    *(rax_8 + 8) = 0
    *(rax_8 + 0x14) = 0
    *(rax_8 + 0xc8) = 0

result.b = 1
return result
