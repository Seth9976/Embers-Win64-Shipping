// 函数: sub_1420feb10
// 地址: 0x1420feb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_6c8
int64_t rax_1 = __security_cookie ^ &var_6c8
EnterCriticalSection(&arg1[0x15])
int128_t zmm6 = 0x42b40000
float var_688[0x4]
int32_t var_668
int128_t* rcx_1
float zmm0[0x4]
uint128_t zmm1
float zmm2[0x4]

if (arg2 != arg1[0x1a])
    arg1[0x1a] = arg2
    sub_141a0a300(&arg1[0xb], &var_668, arg2)
    int64_t rax_2 = sx.q(var_668)
    void* const rax_5
    
    if (rax_2.d == 0xffffffff)
        rax_5 = nullptr
    else
        rax_5 = rax_2 * 0x30 + arg1[0xb]
    
    rcx_1 = rax_5 + 8
    
    if (rax_5 == 0)
        rcx_1 = nullptr
    
    if (rcx_1 == 0)
        zmm1 = zx.o(data_143dbb1f8.q)
        zmm2 = zx.o(data_143dbb208)
        var_688[2] = data_143dbb200
        int32_t rax_7 = data_143dbb210
        var_688[3] = 0x42b40000
        zmm0 = var_688
        uint128_t var_678
        var_678:8.d = rax_7
        var_678:0xc.b = 0
        zmm0[0].q = zmm1.q
        var_688 = zmm0
        zmm1.q = zmm2.q
        uint128_t var_678_1 = zmm1
        *(arg1 + 0xd8) = zmm0
    else
        *(arg1 + 0xd8) = *rcx_1
        zmm1 = rcx_1[1]
    
    *(arg1 + 0xe8) = zmm1

zmm0 = *(arg1 + 0xd8)
zmm1 = *(arg1 + 0xe8)
var_688 = zmm0

if (arg1 != -0xa8)
    LeaveCriticalSection(&arg1[0x15])

int16_t* const r13 = &data_142d40450
uint64_t result

if (arg3[1].d == 1)
    int64_t* rax_8 = *arg3
    int16_t* const rcx_4
    
    if (rax_8[1].d == 0)
        rcx_4 = &data_142d40450
    else
        rcx_4 = *rax_8
    
    result, rcx_1 = sub_140a54510(rcx_4, &data_142e5f8f8)

if (arg3[1].d != 1 || result.d != 0)
    result = zx.q(arg3[1].d)
    uint128_t var_678_2
    int128_t var_628
    float zmm1_1[0x4]
    
    if (result.d != 0)
        int16_t* var_660
        int64_t** var_650
        
        if (result.d == 1)
            int16_t** rax_13 = *arg3
            int16_t* rdx_4
            
            if (rax_13[1].d == 0)
                rdx_4 = &data_142d40450
            else
                rdx_4 = *rax_13
            
            zmm6 = sub_140b58260(&var_668, rdx_4, 1)
            int16_t* rbx_1 = var_668.q
            
            if (arg1[1].d == *(arg1 + 0x34))
            label_1420fee00:
                sub_1420f3820(&var_628)
                (*(*arg2 + 0x268))(arg2, &var_628, 0)
                int32_t zmm1_2 = var_628:4.d
                var_688[0] = var_628.d
                var_688[2] = var_628:8.d
                var_688[1] = zmm1_2
                int96_t var_618
                var_678_2:4.d = var_618.d
                var_678_2.d = var_628:0xc.d
                var_688[3] = var_618:8.d
                var_678_2:8.d = var_618:4.d
                sub_1420f2880(arg1, &var_668, &var_688)
                goto label_1420fed57
            
            var_660 = rbx_1
            int32_t rax_16 = sub_140b5ead0(rbx_1.d) + var_660:4.d
            void* r15_1 = &arg1[7]
            void* rdx_5 = *(r15_1 + 8)
            void* rax_18 = r15_1
            
            if (rdx_5 != 0)
                rax_18 = rdx_5
            
            int32_t rax_19 = *(rax_18 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_16)) << 2))
            
            if (rax_19 == 0xffffffff)
                goto label_1420fee00
            
            int64_t r8_1 = *arg1
            
            while (true)
                int64_t* rdx_6 = sx.q(rax_19) * 0x2c
                
                if (*(rdx_6 + r8_1) == rbx_1)
                    break
                
                rax_19 = *(rdx_6 + r8_1 + 0x24)
                
                if (rax_19 == 0xffffffff)
                    goto label_1420fee00
            
            if (rax_19 == 0xffffffff)
                goto label_1420fee00
            
            int16_t* rbx_2 = var_668.q
            
            if (arg1[1].d == *(arg1 + 0x34))
            label_1420feee8:
                var_650 = nullptr
                int64_t var_648_1 = 0
                var_688 = var_650.o
                var_678_2:8.d = 0
                var_678_2.q = 0
            else
                var_660 = rbx_2
                int32_t rax_23 = sub_140b5ead0(rbx_2.d) + var_660:4.d
                void* rcx_19 = *(r15_1 + 8)
                
                if (rcx_19 != 0)
                    r15_1 = rcx_19
                
                int32_t rax_25 = *(r15_1 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_23)) << 2))
                
                if (rax_25 == 0xffffffff)
                    goto label_1420feee8
                
                int64_t rdx_12 = *arg1
                int64_t r8_3
                
                while (true)
                    r8_3 = sx.q(rax_25)
                    int64_t* rcx_20 = r8_3 * 0x2c
                    
                    if (*(rcx_20 + rdx_12) == rbx_2)
                        break
                    
                    rax_25 = *(rcx_20 + rdx_12 + 0x24)
                    
                    if (rax_25 == 0xffffffff)
                        goto label_1420feee8
                
                if (rax_25 == 0xffffffff)
                    goto label_1420feee8
                
                void* rax_26 = r8_3 * 0x2c
                void* rax_27 = rax_26 + rdx_12
                
                if (rax_26 == neg.q(rdx_12))
                    goto label_1420feee8
                
                zmm1_1 = zx.o(*(rax_27 + 0x18))
                int32_t rax_28 = *(rax_27 + 0x20)
                var_688 = *(rax_27 + 8)
                var_678_2:8.d = rax_28
                var_678_2.q = zmm1_1.q
            
            goto label_1420ff0cf
        
        uint128_t zmm3
        
        if (result.d == 6)
            int64_t* rdx_13 = *arg3
            char r9_1 = 0
            int32_t rax_29 = rdx_13[1].d
            int32_t rcx_21 = rax_29 - 1
            result = 6
            
            if (rax_29 == 0)
                rcx_21 = 0
            
            rcx_21.b = rcx_21 == 0
            uint64_t i
            
            do
                r9_1 |= rcx_21.b
                i = result
                result -= 1
            while (i != 1)
            
            if (r9_1 == 0)
                int32_t* rax_30 = sub_1420fc850(&var_650, rdx_13, (result + 6).d, zmm0[0].q)
                zmm2 = *rax_30
                zmm3 = zx.o(*(rax_30 + 0x10))
                int32_t rax_31 = rax_30[6]
                var_688[1] = _mm_shuffle_ps(zmm2, zmm2, 0x55)[0]
                zmm0 = zmm3
                zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                zmm1_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                var_678_2:4.d = zmm0[0]
                var_688[0] = zmm2[0]
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                var_678_2:8.d = rax_31[0]
                var_688[2] = zmm1_1[0]
                var_688[3] = zmm2[0]
                var_678_2.d = zmm3.d
                uint64_t var_640_1 = zmm3.q
            label_1420ff0cf:
                zmm1_1 = var_678_2:4.d
                float zmm4_1[0x2] = var_678_2.d
                zmm3 = var_688[1]
                zmm2 = var_688[0]
                float zmm5_1[0x2] = var_688[2]
                zmm0 = _mm_cvtps_pd(var_678_2:8.d[0].q)
                var_678_2:0xc.b = 1
                int64_t var_690_1 = zmm0.q
                int64_t var_698_1 = (_mm_cvtps_pd(zmm1_1[0].q)).q
                zmm4_1 = _mm_cvtps_pd(zmm4_1)
                _mm_cvtps_pd(zmm3.q)
                zmm2 = _mm_cvtps_pd(zmm2[0].q)
                float var_6a0_1[0x2] = zmm4_1
                float var_6a8_1[0x2] = _mm_cvtps_pd(zmm5_1)
                sub_140a2e390(&var_660, u"%f %f %f %f %f %f", zmm2[0].q)
                int32_t var_658
                
                if (var_658 != 0)
                    r13 = var_660
                
                sub_140d77020(r13)
                EnterCriticalSection(&arg1[0x15])
                *(arg1 + 0xd8) = var_688
                arg1[0x1a] = arg2
                *(arg1 + 0xe8) = var_678_2
                
                if (*(arg1 + 0xf4) != 0 || data_143dbb1f8[0] f!= arg1[0x1b].d
                        || data_143dbb1fc[0] f!= *(arg1 + 0xdc)
                        || data_143dbb200[0] f!= arg1[0x1c].d || zmm6.d f!= *(arg1 + 0xe4)
                        || data_143dbb208.d[0] f!= arg1[0x1d].d
                        || data_143dbb208:4.d[0] f!= *(arg1 + 0xec)
                        || data_143dbb210[0] f!= arg1[0x1e].d)
                    if (arg1[0xc].d == *(arg1 + 0x8c))
                        sub_140d186f0(&data_143e1d990, &arg1[0xa])
                    
                    var_650 = &arg1[0x1a]
                    void* var_648_2 = &arg1[0x1b]
                    result = sub_1420f2b90(&arg1[0xb], &var_668, &var_650, nullptr)
                else
                    result = sub_142101960(&arg1[0xa], arg2)
                
                if (arg1 != -0xa8)
                    result = LeaveCriticalSection(&arg1[0x15])
                
                int16_t* rcx_32 = var_660
                
                if (rcx_32 != 0)
                    result = sub_140a74f90(rcx_32)
        else if (result.d == 7)
            int16_t** r9_2 = *arg3
            rcx_1.b = 0
            int32_t r8_5 = r9_2[1].d
            int32_t rax_32 = r8_5 - 1
            
            if (r8_5 == 0)
                rax_32 = 0
            
            result = 7
            uint64_t i_1
            
            do
                rcx_1.b |= rax_32 == 0
                i_1 = result
                result -= 1
            while (i_1 != 1)
            
            if (rcx_1.b == 0)
                int16_t* rdx_14
                
                if (r8_5 == 0)
                    rdx_14 = &data_142d40450
                else
                    rdx_14 = *r9_2
                
                uint128_t zmm0_2
                zmm0_2, zmm6 = sub_140b58260(&var_660, rdx_14, 1)
                int32_t* rax_33 = sub_1420fc850(&var_650, *arg3 + 0x10, arg3[1].d - 1, zmm0_2.q)
                zmm2 = *rax_33
                zmm3 = zx.o(*(rax_33 + 0x10))
                int32_t rax_34 = rax_33[6]
                var_688[1] = _mm_shuffle_ps(zmm2, zmm2, 0x55).d
                zmm0_2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                float zmm1_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                var_678_2:4.d = zmm0_2.d
                var_688[0] = zmm2[0]
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                var_678_2:8.d = rax_34.d
                var_688[2] = zmm1_3[0]
                var_688[3] = zmm2[0]
                var_678_2.d = zmm3.d
                uint64_t var_640_2 = zmm3.q
                sub_1420f2880(arg1, &var_660, &var_688)
                goto label_1420ff0cf
    else
        if (zmm1:0xc.b == result.b)
            zmm1 = data_142d4cca0
            var_628 = zx.o(0)
            int32_t var_5f8
            int32_t var_5f8_1 = (var_5f8 & 0xfffffffe) | 2
            int96_t var_618_1 = zmm1.12
            float var_608_1[0x4] = data_142d4cc90
            char var_5f4_1 = 0
            int32_t var_5f0_1 = 0
            void var_5e8
            sub_1422d7fd0(&var_5e8)
            int64_t var_a8_1 = 0
            char var_68_1 = 0
            (*(*arg2 + 0x268))(arg2, &var_628, 0)
            zmm1_1 = var_628:4.d
            var_688[0] = var_628.d[0]
            var_688[2] = var_628:8.d[0]
            var_688[1] = zmm1_1[0]
            var_678_2:4.d = var_618_1.d[0]
            var_678_2.d = var_628:0xc.d[0]
            var_688[3] = var_618_1:8.d[0]
            var_678_2:8.d = var_618_1:4.d[0]
        label_1420fed57:
            char var_68_2 = 0
            int64_t var_b8
            
            if (var_b8 != 0)
                sub_140a74f90(var_b8)
            
            goto label_1420ff0cf
        
        result = sub_142101960(&arg1[0xa], arg2)

__security_check_cookie(rax_1 ^ &var_6c8)
return result
