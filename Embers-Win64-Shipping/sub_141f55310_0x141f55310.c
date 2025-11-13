// 函数: sub_141f55310
// 地址: 0x141f55310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1[0x88]

if (result != *(arg2 + 0xf0))
    return result

int64_t i_2 = sx.q(*(arg2 + 0x110))
void* rdi_1 = nullptr

if (sub_141f1d600(arg1) != 0 && i_2.d s> 0)
    uint32_t zmm5_1[0x4] = data_143f3b860
    float temp0_1[0x4] = __subps_xmmps_memps(*(arg2 + 0xc0), *(arg1 + 0x1d0))
    float temp0_2[0x4] = _mm_shuffle_ps(0x3a83126f, 0x3a83126f, 0)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_2, _mm_and_ps(zmm5_1, temp0_1), 1)) != 0)
    label_141f55470:
        TEB* gsbase
        
        if (data_143f3bc38
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f3bc38)
            
            if (data_143f3bc38 == 0xffffffff)
                int64_t* rcx_25 = data_143db18d0
                
                if (rcx_25 == 0)
                    sub_140a53c40()
                    rcx_25 = data_143db18d0
                
                int64_t r8_3
                r8_3.b = 1
                int64_t* rax_27 = (*(*rcx_25 + 0xb0))(rcx_25, u"r.AllowStaticLighting", r8_3)
                int64_t rax_25
                
                if (rax_27 == 0)
                    rax_25 = 0
                else
                    int64_t rdx_9 = *rax_27
                    rax_25 = (*(rdx_9 + 0x58))(rax_27, rdx_9)
                
                data_143f3bc30 = rax_25
                _Init_thread_footer(&data_143f3bc38)
        
        if (data_143f3bc30 != 0 && data_143de5480 != 0)
            GetCurrentThreadId()
    else
        uint32_t zmm1[0x4] = *(arg1 + 0x1c0)
        float zmm3[0x4] = *(arg2 + 0xb0)
        float temp0_6[0x4] = _mm_add_ps(zmm3, zmm1)
        float temp0_7[0x4] = _mm_sub_ps(zmm3, zmm1)
        uint32_t temp0_8[0x4] = _mm_and_ps(zmm5_1, temp0_6)
        uint32_t temp0_11 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_2, _mm_and_ps(zmm5_1, temp0_7), 1))
        uint32_t temp0_13
        
        if (temp0_11 != 0)
            temp0_13 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_2, temp0_8, 1))
        
        if (temp0_11 != 0 && temp0_13 != 0)
            goto label_141f55470
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_2, 
                _mm_and_ps(__subps_xmmps_memps(*(arg2 + 0xd0), *(arg1 + 0x1e0)), zmm5_1), 1)) != 0)
            goto label_141f55470
        
        sub_142397ac0(arg1, i_2.d, i_2.d)
        int64_t i_1 = i_2
        
        if (i_2.d s> 0)
            int64_t rdx_1 = 0
            int64_t r8_2 = 0
            int64_t i
            
            do
                rdx_1 += 0x90
                r8_2 += 0x10
                *(rdx_1 + arg1[0x8c] - 0x90) = *(r8_2 + *(arg2 + 0x108) - 0x10)
                i = i_1
                i_1 -= 1
            while (i != 1)

if ((*(arg1 + 0x44c) & 0x20) == 0)
    int64_t var_38_1 = 0
    int32_t var_30 = 0xffffffff
    int32_t var_2c_1 = 0
    void var_28
    sub_140d3a3a0(&var_28, nullptr)
    void* r14_1 = nullptr
    char var_3f
    
    if ((arg1[0x11].b & 1) != 0)
        void* rax_9
        
        if (arg1[0x15] == 0)
            rax_9 = sub_141ee69e0(arg1)
        
        if (arg1[0x15] != 0 || rax_9 != 0)
            if ((arg1[0x11].b & 2) != 0)
                sub_141efe1c0(arg1, nullptr)
            
            r14_1 = arg1[0x15]
            
            if (r14_1 == 0)
                r14_1 = sub_141ee69e0(arg1)
            
            void* var_48_1 = r14_1
            char var_40_1 = 1
            var_3f = (var_3f & 0xfd) | 1
            sub_141ee0b60(arg1)
            arg1[0x15] = 0
    
    sub_140d3a3a0(&var_28, r14_1)
    int64_t* rdx_3 = nullptr
    
    if (sub_140d3e110(&var_28) != 0)
        rdx_3 = arg1
    
    sub_140d3a3a0(&var_30, rdx_3)
    sub_141f55a20(arg2, arg1)
    
    if (sub_140d3e110(&var_30) != 0)
        int64_t rax_13 = sub_140d3c6e0(&var_28)
        int64_t* rax_14 = sub_140d3c6e0(&var_30)
        int32_t rax_15 = *(rax_14 + 0xc)
        
        if (rax_15 s< data_143e1d9b4)
            int16_t temp0_18
            int32_t temp1_1
            temp0_18:temp1_1 = sx.q(rax_15)
            uint32_t rdx_6 = zx.d(temp0_18)
            int32_t rax_17 = temp1_1 + rdx_6
            rdi_1 = *(data_143e1d9a0 + (sx.q(rax_17 s>> 0x10) << 3))
                + sx.q(zx.d(rax_17.w) - rdx_6) * 0x18
        
        if (((*(rdi_1 + 8) u>> 0x1d).b & 1) == 0)
            if ((rax_14[0x11].b & 1) != 0)
                sub_141ee0b60(rax_14)
            
            rax_14[0x15] = rax_13
            int64_t var_48_2 = rax_13
            char var_3f_1 = (var_3f & 0xfd) | 1
            char var_40_2 = 1
            sub_141ee0740(rax_14, 0)
            sub_141efe1c0(rax_14, nullptr)

return sub_140780bc0(&arg1[0x8e], arg2 + 0x118)
