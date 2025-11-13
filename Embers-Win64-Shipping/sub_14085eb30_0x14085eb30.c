// 函数: sub_14085eb30
// 地址: 0x14085eb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

if (data_143ce4578 s> result)
    int64_t r8_7
    result, r8_7 = _Init_thread_header(&data_143ce4578)
    
    if (data_143ce4578 == 0xffffffff)
        int64_t* rcx_10 = data_143db18d0
        
        if (rcx_10 == 0)
            sub_140a53c40()
            rcx_10 = data_143db18d0
        
        r8_7.b = 1
        data_143ce4570 = (*(*rcx_10 + 0xb0))(rcx_10, u"sg.EffectsQuality", r8_7)
        result = _Init_thread_footer(&data_143ce4578)

if (*(arg1 + 0x28) != 0)
    int64_t* rcx = data_143ce4570
    (*(*rcx + 0x90))(rcx)
    uint32_t (* rcx_2)[0x4] = *(arg1 + 0x28) + 0x1c0
    uint32_t zmm4_1[0x4] = data_143ce4440
    float temp0_1[0x4] = __subps_xmmps_memps(*(arg1 + 0x740), rcx_2[1])
    float temp0_2[0x4] = _mm_shuffle_ps(0x38d1b717, 0x38d1b717, 0)
    int32_t rax_7
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_2, _mm_and_ps(temp0_1, zmm4_1), 1)) != 0)
    label_14085ec3a:
        rax_7 = 0
        *(arg1 + 0x730) = *rcx_2
        *(arg1 + 0x740) = rcx_2[1]
        *(arg1 + 0x750) = rcx_2[2]
    else
        float zmm5_1[0x4] = *(arg1 + 0x730)
        uint32_t zmm3[0x4] = *rcx_2
        uint32_t temp0_9 =
            _mm_movemask_ps(_mm_cmpeq_ps(temp0_2, _mm_and_ps(_mm_sub_ps(zmm5_1, zmm3), zmm4_1), 1))
        uint32_t temp0_13
        
        if (temp0_9 != 0)
            temp0_13 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_2, 
                _mm_and_ps(_mm_add_ps(zmm3, zmm5_1), zmm4_1), 1))
        
        if (temp0_9 != 0 && temp0_13 != 0)
            goto label_14085ec3a
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_2, 
                _mm_and_ps(__subps_xmmps_memps(*(arg1 + 0x750), rcx_2[2]), zmm4_1), 1)) != 0)
            goto label_14085ec3a
        
        rax_7 = *(arg1 + 0x774) + 1
        
        if (rax_7 s>= 3)
            rax_7 = 3
    
    *(arg1 + 0x774) = rax_7
    int32_t rax_8 = *(arg1 + 0xa8)
    void* rcx_3 = *(arg1 + 0x28)
    *(arg1 + 0x760) = arg2[0]
    *(arg1 + 0x76c) = rax_8
    *(arg1 + 0x770) = 0
    void* rax_9 = *(rcx_3 + 0xa8)
    float zmm0[0x4]
    
    if (rax_9 != 0)
        *(arg1 + 0x764) = *(rax_9 + 0x520)
        zmm0 = *(rax_9 + 0x528)
    else
        rax_9 = sub_141ee69e0(rcx_3)
        
        if (rax_9 == 0)
            zmm0 = *(arg1 + 0x3c)
            *(arg1 + 0x764) = zmm0[0]
        else
            *(arg1 + 0x764) = *(rax_9 + 0x520)
            zmm0 = *(rax_9 + 0x528)
    
    *(arg1 + 0x768) = zmm0[0]
    int32_t rax_10 = *(arg1 + 0x660)
    int32_t r8_5 = ((not.d(rax_10) ^ rax_10) & 1) ^ rax_10
    *(arg1 + 0x660) = r8_5
    
    if ((r8_5.b & 1) != 0)
        r8_5 |= 2
        *(arg1 + 0x660) = r8_5
    
    int32_t i = 0
    
    if (*(arg1 + 0x76c) s> 0)
        int64_t* r9_1 = nullptr
        int32_t r11_1 = 0
        
        do
            int64_t rbx_1 = *(arg1 + 0xa0)
            void* rax_14 = *(r9_1 + rbx_1)
            int32_t* rdx_4 = (sx.q((*(arg1 + 0x660) & 1) + r11_1) << 5) + *(arg1 + 0x650)
            
            if (*(rax_14 + 0x24) == 4)
                *rdx_4 = 0
            else
                void* rcx_5 = *(*(rax_14 + 0x778) + 0x98)
                int32_t rax_16
                
                if (rcx_5 == 0)
                    rax_16 = 0
                else
                    rax_16 = *(rcx_5 + 0xb0)
                
                *rdx_4 = rax_16
                rdx_4[1] = *(*(r9_1 + rbx_1) + 0x18)
                void* rcx_7 = *(*(r9_1 + rbx_1) + 0x788)
                
                if ((*(rcx_7 + 0x2a8) & 1) == 0)
                    rdx_4[2] = 0x3f800000
                    *(arg1 + 0x770) += 1
                else
                    rdx_4[2] = (*(rcx_7 + 0x2ac))[0]
                    *(arg1 + 0x770) += 1
            
            i += 1
            r11_1 += 2
            r9_1 = &r9_1[2]
        while (i s< *(arg1 + 0x76c))
    
    uint64_t rbx_3 = (zx.q(r8_5) & 1) << 5
    *(rbx_3 + arg1 + 0x23c) = *(arg1 + 0x3c)
    *(rbx_3 + arg1 + 0x244) = *(arg1 + 0x40)
    arg2 = *(arg1 + 0x764)
    arg2[0] = arg2[0] f- *(*(arg1 + 0x28) + 0x26c)
    arg2[0] = arg2[0] f- data_14396fef4
    *(rbx_3 + arg1 + 0x230) = _mm_max_ss(arg2[0], 0)[0]
    *(rbx_3 + arg1 + 0x240) = *(arg1 + 0x6e4)
    float zmm0_1 = sub_140851ea0(arg1)
    *(rbx_3 + arg1 + 0x234) = zmm0_1
    *(rbx_3 + arg1 + 0x238) = zmm0_1 f/ *(arg1 + 0x48)
    void* rbx_5 = *(arg1 + 0x28) + 0x418
    result = *(rbx_5 + 0x58) - *(rbx_5 + 0x84)
    
    if (result s> 0 && (*(rbx_5 + 0xb0) & 7) != 0)
        result = sub_14083f210(rbx_5)
    
    *(rbx_5 + 0xb0) &= 0xfffffff8

return result
