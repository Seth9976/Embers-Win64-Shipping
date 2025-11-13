// 函数: sub_141f205e0
// 地址: 0x141f205e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = *(arg1 + 0xe9)
*(arg1 + 0xe9) = 1
void* const rdi = arg1[0x16]
void* rax_1
int64_t rax_2
void* rdx_1

if (rdi != 0)
    rax_1, arg2 = sub_142577430()
    rdx_1 = *(rdi + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rdi == 0 || rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rdi = nullptr

arg1[0x17] = rdi
sub_141ee9b30(arg1, arg2)
char rdx_2 = *(arg1 + 0xeb)

if (rdx_2 != 0)
    (*(*arg1 + 0x4b8))(arg1, rdx_2)

void* result = arg1[0x15]

if (result != 0)
label_141f2067c:
    result = sub_14243ade0(result)
    
    if (result.b != 0)
        int128_t __saved_zmm6_1 = arg3
        arg3 = arg1[0x1a].d
        int128_t __saved_zmm7_1 = arg4
        arg4 = *(arg1 + 0xd4)
        int128_t zmm2
        zmm2.d = arg3.d f* arg3.d
        arg2.o = arg4
        arg2.d = arg2.d f* arg4.d
        float __saved_zmm8_1[0x4] = arg5
        arg5 = arg1[0x1b].d
        float zmm1[0x4] = arg5
        zmm2.d = zmm2.d f+ arg2.d
        zmm1[0] = zmm1[0] * arg5[0]
        zmm2.d = zmm2.d f+ zmm1[0]
        float var_40
        float rax_5
        float entry_zmm3[0x4]
        
        if (zmm2.d f!= 1f)
            int64_t var_48
            
            if (zmm2.d f>= 9.99999994e-09f)
                arg2.o = 0x3f000000
                arg2.o = zmm2
                entry_zmm3 = arg2.o
                float temp0_3[0x4] = _mm_rsqrt_ss(arg2.o[0], entry_zmm3[0])
                entry_zmm3[0] = entry_zmm3[0] * 0.5f
                arg2.o = temp0_3
                arg2.d = arg2.d f* temp0_3[0]
                entry_zmm3[0] = entry_zmm3[0] f* arg2.d
                arg2.o = temp0_3
                zmm2.d = 0.5f - entry_zmm3[0]
                arg2.d = arg2.d f* zmm2.d
                temp0_3[0] = temp0_3[0] f+ arg2.d
                arg2.o = temp0_3
                temp0_3[0] = temp0_3[0] * temp0_3[0]
                entry_zmm3[0] = entry_zmm3[0] * temp0_3[0]
                arg2.d = arg2.d f* (0.5f - entry_zmm3[0])
                temp0_3[0] = temp0_3[0] f+ arg2.d
                arg2.o = zx.o(var_48)
                arg3.d = arg3.d f* temp0_3[0]
                arg4.d = arg4.d f* temp0_3[0]
                arg2.d = arg3.d
                arg5[0] = arg5[0] * temp0_3[0]
                zmm1 = arg2.o
                float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
                temp0_4[0] = arg4.d
                var_40 = arg5[0]
                zmm1 = _mm_shuffle_ps(temp0_4, temp0_4, 0xe1)
                arg2.o = zmm1
            else
                arg2.o = data_143dbb200
                zmm2 = data_143dbb1f8
                entry_zmm3 = data_143dbb1fc
                var_40 = arg2.d
                arg2.o = zx.o(var_48)
                arg2.d = zmm2.d
                arg2.o = _mm_shuffle_ps(arg2.o, arg2.o, 0xe1)
                arg2.d = entry_zmm3[0]
                arg2.o = _mm_shuffle_ps(arg2.o, arg2.o, 0xe1)
            rax_5 = var_40
        else
            arg2.o = zx.o(arg1[0x1a])
            rax_5 = arg1[0x1b].d
        
        int64_t rdx_3 = arg1[0x16]
        arg1[0x1a] = (arg2.o).q
        arg1[0x1b].d = rax_5
        
        if (rdx_3 == 0 && (arg1[0x1d].b & 8) != 0)
            void* rax_6 = arg1[0x14]
            
            if (rax_6 != 0)
                rdx_3 = *(rax_6 + 0x130)
        
        result = (*(*arg1 + 0x440))(arg1, rdx_3, zmm1, zmm2, entry_zmm3, var_40, __saved_zmm8_1, 
            __saved_zmm7_1, __saved_zmm6_1)
else
    result, arg2 = sub_141ee69e0(arg1)
    
    if (result != 0)
        goto label_141f2067c

*(arg1 + 0xe9) = rsi
return result
