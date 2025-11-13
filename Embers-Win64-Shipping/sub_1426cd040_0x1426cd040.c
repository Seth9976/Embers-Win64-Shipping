// 函数: sub_1426cd040
// 地址: 0x1426cd040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg3 + 0x34)
bool cond:0 = (*(arg1 + 0x208) & 1) == 0
int32_t r9 = data_14399f6a0
*arg2 = data_14399f698.q
arg2[1].d = r9

if (not(cond:0))
    int32_t* var_68
    
    if (rax != 0)
        void* rax_1 = sub_142452380()
        void* rdx = *(rax + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* rcx_2 = *(rax + 0x130)
            float* rax_4
            
            if (rcx_2 == 0)
                int64_t var_60
                var_60.d = data_14399f6a0
                rax_4 = &var_68
                var_68 = data_14399f698.q
            else
                rax_4 = sub_141f133e0(rcx_2, &var_68)
            
            int32_t rax_6 = rax_4[2]
            *arg2 = *rax_4
            arg2[1].d = rax_6
    
    int32_t* var_58 = nullptr
    int32_t var_50_1 = 0
    int32_t* rbx_1
    
    if (*(arg1 + 0x148) != 0)
        void* rdx_4
        
        if (*(arg1 + 0x140) == 0)
            rdx_4 = nullptr
        else
            void* rax_14 = sub_142736ba0()
            
            if (rax_14 == 0)
                rdx_4 = nullptr
            else
                rdx_4 = *(arg1 + 0x140)
                int64_t rax_15 = sx.q(*(rax_14 + 0x38))
                
                if (rax_15.d s> *(rdx_4 + 0x38)
                        || *(*(rdx_4 + 0x30) + (rax_15 << 3)) != rax_14 + 0x30)
                    rdx_4 = nullptr
        
        sub_1426e7540(arg3, rdx_4, &var_58)
        rbx_1 = var_58
        
        if (var_50_1 s> 0)
            int32_t* rax_17 = sub_140ae4210(rbx_1, &var_68)
            int32_t rax_18 = rax_17[2]
            *arg2 = *rax_17
            arg2[1].d = rax_18
    else
        var_68 = nullptr
        int32_t var_60_1 = 0
        void* rdx_2
        
        if (*(arg1 + 0x130) == 0)
            rdx_2 = nullptr
        else
            void* rax_7 = sub_142736ba0()
            
            if (rax_7 == 0)
                rdx_2 = nullptr
            else
                rdx_2 = *(arg1 + 0x130)
                int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                
                if (rax_8.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                    rdx_2 = nullptr
        
        sub_1426e7790(arg3, rdx_2, &var_68)
        void* rdx_3
        
        if (*(arg1 + 0x138) == 0)
            rdx_3 = nullptr
        else
            void* rax_10 = sub_142736ba0()
            
            if (rax_10 == 0)
                rdx_3 = nullptr
            else
                rdx_3 = *(arg1 + 0x138)
                int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                
                if (rax_11.d s> *(rdx_3 + 0x38)
                        || *(*(rdx_3 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
                    rdx_3 = nullptr
        
        uint128_t zmm6_1
        uint128_t zmm7_1
        int128_t zmm8_1
        zmm6_1, zmm7_1, zmm8_1 = sub_1426e7790(arg3, rdx_3, &var_58)
        rbx_1 = var_68
        int128_t* rcx_7 = var_58
        
        if (var_60_1 s> 0 && var_50_1 s> 0)
            uint128_t var_28_1 = zmm6_1
            zmm6_1.d = (*rcx_7).d f- *rbx_1
            uint128_t var_38_1 = zmm7_1
            zmm7_1.d = (*(rcx_7 + 4)).d f- rbx_1[1]
            int128_t var_48_1 = zmm8_1
            zmm8_1.d = (*(rcx_7 + 8)).d f- rbx_1[2]
            uint128_t zmm0_2
            zmm0_2.d = zmm6_1.d f* zmm6_1.d
            uint128_t zmm2_1
            zmm2_1.d = zmm7_1.d f* zmm7_1.d
            zmm2_1.d = zmm2_1.d f+ zmm0_2.d
            zmm2_1.d = zmm2_1.d f+ zmm8_1.d f* zmm8_1.d
            
            if (zmm2_1.d f== 1f)
                goto label_1426cd2a4
            
            if (zmm2_1.d f>= 9.99999994e-09f)
                float zmm3_1 = zmm2_1.d
                float temp0_1[0x4] = _mm_rsqrt_ss(zmm2_1[0], zmm3_1)
                zmm3_1 = zmm3_1 * 0.5f
                zmm0_2.d = temp0_1.d f* temp0_1[0]
                zmm2_1.d = 0.5f - zmm3_1 f* zmm0_2.d
                zmm0_2.d = temp0_1.d f* zmm2_1.d
                temp0_1[0] = temp0_1[0] f+ zmm0_2.d
                zmm0_2.d = temp0_1.d f* (0.5f - zmm3_1 * temp0_1[0] * temp0_1[0])
                temp0_1[0] = temp0_1[0] f+ zmm0_2.d
                zmm6_1.d = zmm6_1.d f* temp0_1[0]
                zmm7_1.d = zmm7_1.d f* temp0_1[0]
                zmm8_1.d = zmm8_1.d f* temp0_1[0]
            label_1426cd2a4:
                var_60_1 = zmm8_1.d
                var_68:4.d = zmm7_1.d
                var_68.d = zmm6_1.d
            else
                var_68.d = data_143dbb1f8.d
                var_60_1 = data_143dbb200.d
                var_68:4.d = data_143dbb1fc
            
            *arg2 = var_68
            arg2[1].d = var_60_1
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)

return arg2
