// 函数: sub_141ea8300
// 地址: 0x141ea8300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *(arg1 + 0x2c)
uint128_t zmm9 = arg3
arg1[0x18] = arg2
arg1[0x29].d = zmm9.d
uint128_t zmm7
uint128_t var_38 = zmm7
uint128_t zmm1

if (not(zmm0.d f== 0f))
    if (0f f>= *(arg1 + 0x14c))
        if (arg1[8].b != 0)
            zmm0 = zx.o(0)
        else
            zmm0.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 0.000191753454f
        
        *(arg1 + 0xd4) = zmm0.d
        
        if (*(arg1 + 0x4c) != 0)
            zmm0 = zx.o(0)
        else
            zmm0.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 0.000191753454f
        
        arg1[0x1b].d = zmm0.d
        
        if (arg1[0xb].b != 0)
            zmm0 = zx.o(0)
        else
            zmm0.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 0.000191753454f
        
        *(arg1 + 0xdc) = zmm0.d
        
        if (*(arg1 + 0x64) != 0)
            zmm0 = zx.o(0)
        else
            zmm0.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 0.000191753454f
        
        arg1[0x19].d = zmm0.d
        
        if (arg1[0xe].b != 0)
            zmm0 = zx.o(0)
        else
            zmm0.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 0.000191753454f
        
        *(arg1 + 0xcc) = zmm0.d
        
        if (*(arg1 + 0x7c) != 0)
            zmm0 = zx.o(0)
        else
            zmm0.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 0.000191753454f
        
        arg1[0x1a].d = zmm0.d
        
        if (arg1[0x11].b != 0)
            zmm1 = zx.o(0)
        else
            zmm1.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 0.000191753454f
        
        bool cond:3_1 = 0f f>= arg1[6].d
        int32_t rax_9 = arg1[0x1a].d
        *(arg1 + 0xe4) = arg1[0x19]
        zmm0 = zx.o(*(arg1 + 0xd4))
        *(arg1 + 0xec) = rax_9
        int32_t rax_10 = *(arg1 + 0xdc)
        arg1[0x1e] = zmm0.q
        arg1[0x1f].d = rax_10
        *(arg1 + 0x14c) = *(arg1 + 0x2c)
        arg1[0x1c].d = zmm1.d
        *(arg1 + 0xfc) = zmm1.d
        
        if (not(cond:3_1))
            *(arg1 + 0xac) |= 1
            *(arg1 + 0xb4) = 0
    else
        int16_t rax_1 = *(arg1 + 0xac)
        *(arg1 + 0x14c) = zmm0.d
        
        if ((rax_1.b & 2) != 0)
            zmm0 = arg1[6].d
            rax_1 &= 0xfffd
            arg1[0x17].d = 0
            
            if (zmm0.d f<= 0f)
                *(arg1 + 0xac) = rax_1 & 0xfffe
                *(arg1 + 0xb4) = 0
            else
                *(arg1 + 0xb4) = zmm0.d
                *(arg1 + 0xac) = rax_1 | 1

float var_98[0x10]

if (arg1[0x14] != 0)
    void* rax_12 = arg1[0x2a]
    int32_t rdi_2 = arg1[0x15].d & 1
    
    if (rax_12 == 0)
        int128_t zmm8 = zx.o(0)
        
        if (rdi_2 != 0)
            zmm8 = *(arg1 + 0x9c)
        
        zmm7.d = zmm9.d f* arg1[0x12].d
        
        if (not(zmm7.d f<= 0f))
            int64_t* rcx_3 = arg1[0x18]
            uint64_t var_e8
            
            if (rcx_3 == 0)
                sub_140d19010(arg1, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
                int64_t arg_8 = 0
                char var_118_2 = 0
                void* rax_17
                int32_t zmm8_1
                rax_17, zmm7, zmm8_1, zmm9 =
                    sub_140d2dfc0(sub_142484ee0(), arg1, 0, 0, 0, 0, 0, 0, 0)
                arg1[0x2a] = rax_17
                
                if (rax_17 != 0)
                    var_118_2.d = arg1[0x13].d
                    sub_141ea7d40(rax_17, arg1[0x14], arg1[0x28], *(arg1 + 0x8c), zmm7.d, 0, 0, 0, 
                        rdi_2.b, zmm8_1)
                    void* rdi_3 = arg1[0x2a]
                    int32_t rax_18 = *(arg5 + 8)
                    var_e8 = *arg5
                    *(rdi_3 + 0x78) = arg4.b
                    int32_t var_e0_2 = rax_18
                    uint128_t var_d8_1
                    uint128_t var_c8_1
                    uint128_t zmm0_2
                    
                    if (arg4.b != 2)
                        var_d8_1 = data_14399f6e0
                        zmm0_2 = data_14399f700
                        var_c8_1 = data_14399f6f0
                        zmm1 = data_14399f710
                    else
                        float* rax_19
                        rax_19, zmm9 = sub_14077e760(&var_98, &var_e8)
                        var_d8_1 = *rax_19
                        zmm0_2 = *(rax_19 + 0x20)
                        var_c8_1 = *(rax_19 + 0x10)
                        zmm1 = *(rax_19 + 0x30)
                    
                    *(rdi_3 + 0x80) = var_d8_1
                    *(rdi_3 + 0x90) = var_c8_1
                    *(rdi_3 + 0xa0) = zmm0_2
                    *(rdi_3 + 0xb0) = zmm1
            else
                zmm1 = *(arg1 + 0x94)
                arg3 = *(arg1 + 0x8c)
                char var_108
                var_108.d = zmm8.d
                int64_t var_110
                var_110.b = rdi_2.b
                int32_t var_e0_1 = *(arg5 + 8)
                int64_t rax_14 = *rcx_3
                var_e8 = *arg5
                int64_t var_120
                var_120.d = arg1[0x13].d.d
                arg1[0x2a] = (*(rax_14 + 0x7d0))(rcx_3, zmm1, arg3, zmm7.d, zmm1.d, var_120, 
                    rdi_2.b, var_110, var_108, arg4, &var_e8)
    else
        if (rdi_2 == 0)
            zmm0 = zx.o(0)
        else
            zmm0 = *(arg1 + 0x9c)
        
        int32_t rcx = *(rax_12 + 0x3c)
        arg3.d = zmm9.d f* arg1[0x12].d
        zmm1 = arg1[0x13].d
        int32_t zmm3 = *(arg1 + 0x94)
        int32_t zmm4 = *(arg1 + 0x8c)
        
        if ((rcx.b & 1) == 0)
            if ((rcx.b & 0x10) != 0)
                *(rax_12 + 0x48) = zmm3
                *(rax_12 + 0x4c) = 0
                *(rax_12 + 0x3c) = (rcx & 0xffffffef) | 8
            
            *(rax_12 + 0x50) = zmm4
            *(rax_12 + 0x54) = arg3.d
            *(rax_12 + 0x40) = zmm3
            *(rax_12 + 0x44) = zmm1.d
            
            if (zmm0.d f<= 0f)
                *(rax_12 + 0x60) = 0
            else
                zmm0.d = zmm0.d f- zmm1.d
                *(rax_12 + 0x60) = zmm0.d

arg1[0x16].d = arg4

if (arg4 == 2)
    float* rax_20
    rax_20, zmm9 = sub_14077e760(&var_98, arg5)
    *(arg1 + 0x100) = *rax_20
    *(arg1 + 0x110) = *(rax_20 + 0x10)
    *(arg1 + 0x120) = *(rax_20 + 0x20)
    *(arg1 + 0x130) = *(rax_20 + 0x30)

return sub_1424866d0(arg1, zmm9.d) __tailcall
