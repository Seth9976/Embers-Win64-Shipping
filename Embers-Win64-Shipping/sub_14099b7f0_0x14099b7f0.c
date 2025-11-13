// 函数: sub_14099b7f0
// 地址: 0x14099b7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t arg_20 = arg4
int128_t zmm6
int128_t var_48 = zmm6
int128_t var_a8
int64_t arg_18
int32_t arg_28
int32_t arg_30
int128_t zmm0
int128_t zmm1
float zmm2

if ((*(arg3 + 0x10) & 1) == 0)
    zmm0 = *arg5
    zmm1 = *(arg5 + 4)
    zmm2 = *(arg5 + 8)
    bool cond:2_1
    
    if (zmm0.d f<= zmm1.d)
        result = &arg_28
        cond:2_1 = zmm1.d f<= zmm2
    else
        result = &arg_20
        cond:2_1 = zmm0.d f<= zmm2
    
    if (cond:2_1)
        result = &arg_30
    
    int32_t i = 0
    
    if (*(arg3 + 0x20) s> 0)
        int64_t rdx_2 = sx.q(*result)
        int64_t r13_2 = 0
        arg_18 = rdx_2
        
        do
            int64_t r14_1 = sx.q(arg1[1].d)
            zmm6 = data_142d3f660
            int64_t rcx_6 = *(*(arg3 + 0x18) + r13_2)
            result = zx.q((r14_1 + 1).d)
            int32_t var_9c_2 = (*(rcx_6 + (rdx_2 << 3))).d
            int32_t var_98_2 = (*(rcx_6 + (rdx_2 << 3) + 4)).d
            arg1[1].d = result.d
            
            if (result.d s> *(arg1 + 0xc))
                result = sub_14090a6a0(arg1)
                rdx_2 = arg_18
            
            r13_2 += 0x10
            int64_t* rcx_10 = r14_1 * 0x60 + *arg1
            *(rcx_10 + 0x10) = 3.o
            rcx_10[1].d = i
            i += 1
            *(rcx_10 + 0x20) = zmm6
            *rcx_10 = arg2
            *(rcx_10 + 0x30) = var_a8
            *(rcx_10 + 0x40) = var_98_2.o
            *(rcx_10 + 0x50) = 0.o
        while (i s< *(arg3 + 0x20))
else
    int32_t i_1 = 0
    
    if (*(arg3 + 0x20) s> 0)
        int64_t r8 = sx.q(arg_28)
        int64_t* r12_1 = nullptr
        int64_t rdx = sx.q(arg4)
        int64_t r9 = sx.q(arg_30)
        arg_18 = rdx
        int128_t zmm7 = *(arg5 + 8)
        int128_t zmm8 = *(arg5 + 4)
        int128_t zmm9 = *arg5
        
        do
            int64_t r13_1 = sx.q(arg1[1].d)
            zmm6 = data_142d3f660
            int64_t rcx = *(r12_1 + *(arg3 + 0x18))
            result = zx.q((r13_1 + 1).d)
            zmm0.d = zmm8.d f* *(rcx + (r8 << 3))
            zmm1.d = zmm7.d f* *(rcx + (r9 << 3))
            zmm2 = *(rcx + (rdx << 3)) f* zmm9.d f+ zmm0.d
            zmm0.d = zmm8.d f* *(rcx + (r8 << 3) + 4)
            zmm2 = zmm2 f+ zmm1.d
            float zmm3 = *(rcx + (rdx << 3) + 4) f* zmm9.d f+ zmm0.d
            zmm1.d = zmm7.d f* *(rcx + (r9 << 3) + 4)
            arg1[1].d = result.d
            float var_9c_1 = zmm2
            
            if (result.d s> *(arg1 + 0xc))
                result = sub_14090a6a0(arg1)
                rdx = arg_18
                r8 = sx.q(arg_28)
                r9 = sx.q(arg_30)
            
            r12_1 = &r12_1[2]
            int64_t* rcx_5 = r13_1 * 0x60 + *arg1
            *(rcx_5 + 0x10) = 3.o
            rcx_5[1].d = i_1
            i_1 += 1
            *(rcx_5 + 0x20) = zmm6
            *rcx_5 = arg2
            *(rcx_5 + 0x30) = var_a8
            *(rcx_5 + 0x40) = (zmm3 f+ zmm1.d).o
            *(rcx_5 + 0x50) = 0.o
        while (i_1 s< *(arg3 + 0x20))
return result
