// 函数: sub_141ea7ab0
// 地址: 0x141ea7ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx_1 = arg1[0x66].d & 0xffffff7f
void* rax = arg1[0x26]
arg1[0x66].d = rcx_1
int64_t var_38
float var_30
float zmm1[0x4]

if (rax == 0)
    var_38 = data_143dbb1f8.q
    var_30 = data_143dbb200
else
    zmm1 = *(rax + 0x1d0)
    var_38.d = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_30 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_38:4.d = temp0_1[0]

float zmm0[0x4] = zx.o(var_38)
int64_t rdi

if (zmm0[0] != *arg2 || zmm0.q:4.d[0] != arg2[1] || var_30[0] != arg2[2])
    rdi.b = 1
else
    rdi.b = 0

if (test_bit(rcx_1, 8))
    void* rax_3 = arg1[0x51]
    zmm0 = zx.o(0)
    
    if (not(zmm0[0] f!= *(rax_3 + 0xc4)) && not(zmm0[0] f!= *(rax_3 + 0xc8))
            && not(zmm0[0] f!= *(rax_3 + 0xcc)))
        if (rdi.b == 0)
            zmm0 = *((*(*arg1 + 0x150))(arg1) + 0x520)
        
        if (rdi.b != 0 || not(zmm0[0] f!= *(arg1 + 0x9c)))
            void* rcx_4 = arg1[0x26]
            float var_28[0x4]
            int64_t var_18
            int32_t rax_9
            
            if (rcx_4 == 0)
                zmm0 = zx.o(data_143dbb208)
                rax_9 = data_143dbb210
            else
                zmm1 = *(rcx_4 + 0x1c0)
                void* rsi_1 = rcx_4 + 0x180
                uint32_t temp0_4 = _mm_movemask_ps(_mm_cmpeq_ps(*rsi_1, zmm1, 4))
                var_28 = zmm1
                
                if (temp0_4 != 0)
                    *rsi_1 = zmm1
                    int32_t* rax_7 = sub_140adf5d0(&var_28, &var_18)
                    *(rsi_1 + 0x10) = *rax_7
                    *(rsi_1 + 0x18) = rax_7[2]
                    rcx_4 = arg1[0x26]
                
                zmm0 = zx.o(*(rsi_1 + 0x10))
                rax_9 = *(rsi_1 + 0x18)
            
            var_28[0].q = zmm0.q
            var_28[2] = rax_9
            int64_t var_38_2
            float var_30_3
            
            if (rcx_4 == 0)
                var_38_2 = data_143dbb1f8.q
                var_30_3 = data_143dbb200
            else
                zmm1 = *(rcx_4 + 0x1d0)
                var_38_2.d = zmm1[0]
                float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                var_30_3 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                var_38_2:4.d = temp0_5[0]
            
            float var_10_1 = var_30_3
            int64_t rax_13 = *arg1
            var_18 = var_38_2
            
            if (sub_1420e1940((*(rax_13 + 0x150))(arg1), arg1, &var_18, &var_28, nullptr) != 0)
                arg1[0x66].d |= 0x80

void* rax_16 = arg1[0x51]
rdi.b <<= 5
*(rax_16 + 0x387) |= rdi.b
void* result = arg1[0x51]
*(result + 0x387) |= 0x40
return result
