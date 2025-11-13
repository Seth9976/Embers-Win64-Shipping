// 函数: sub_141e35b20
// 地址: 0x141e35b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm6[0x4]
uint32_t var_48[0x4] = zmm6
void var_208
int64_t rax_1 = __security_cookie ^ &var_208
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r13 = result.d
int128_t zmm0

if (result.d s>= 0)
    result = zx.q(((result << 1) + 1).d)
    int32_t result_1 = result.d
    int32_t temp2_1
    
    do
        int32_t r15_1 = r13
        
        if (result.d s< arg2)
            uint64_t rbx_1
            
            do
                int32_t r14_1 = r15_1 * 2
                rbx_1 = zx.q(r14_1 + 1)
                
                if ((rbx_1 + 1).d s< arg2)
                    void* rdi_2 = (sx.q(r14_1) + 2) * 0xb8 + arg1
                    void* rsi_2 = sx.q(rbx_1.d) * 0xb8 + arg1
                    uint32_t zmm0_1[0x4] = sub_141e24dc0(rdi_2, 0)
                    zmm0_1[0] = zmm0_1[0] f+ *(rdi_2 + 0x34)
                    float zmm0_2 = sub_141e24dc0(rsi_2, 0) f+ *(rsi_2 + 0x34)
                    zmm0_1[0] = zmm0_1[0] f- zmm0_2
                    int64_t rax_8
                    
                    if (_mm_and_ps(zmm0_1, 0x7fffffff)[0] f> 9.99999994e-09f)
                        rax_8.b = zmm0_2 f> zmm0_1[0]
                    else
                        rax_8.b = *(rdi_2 + 0xa4) s< *(rsi_2 + 0xa4)
                    
                    if (rax_8.b != 0)
                        rbx_1 = zx.q(r14_1)
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                
                int128_t* rsi_4 = sx.q(r15_1) * 0xb8 + arg1
                int128_t* rdi_4 = sx.q(rbx_1.d) * 0xb8 + arg1
                uint32_t zmm0_3[0x4] = sub_141e24dc0(rsi_4, 0)
                zmm0_3[0] = zmm0_3[0] f+ *(rsi_4 + 0x34)
                zmm0.d = sub_141e24dc0(rdi_4, 0).d f+ *(rdi_4 + 0x34)
                zmm0_3[0] = zmm0_3[0] f- zmm0.d
                int64_t rax_10
                
                if (_mm_and_ps(zmm0_3, 0x7fffffff)[0] f> 9.99999994e-09f)
                    rax_10.b = zmm0.d f> zmm0_3[0]
                else
                    rax_10.b = *(rsi_4 + 0xa4) s< *(rdi_4 + 0xa4)
                
                if (rax_10.b == 0)
                    break
                
                if (rsi_4 != rdi_4)
                    int64_t rax_11 = rsi_4[0xb].q
                    int128_t var_1e0_1 = *rsi_4
                    uint32_t var_1d0_1[0x4] = rsi_4[1]
                    int128_t var_1c0_1 = rsi_4[2]
                    uint32_t var_1b0_1[0x4] = rsi_4[3]
                    int128_t var_1a0_1 = rsi_4[4]
                    uint32_t var_190_1[0x4] = rsi_4[5]
                    int128_t var_180_1 = rsi_4[6]
                    uint32_t var_170_1[0x4] = rsi_4[7]
                    int128_t var_160_1 = rsi_4[8]
                    uint32_t var_150_1[0x4] = rsi_4[9]
                    int128_t var_140_1 = rsi_4[0xa]
                    *rsi_4 = *rdi_4
                    rsi_4[1] = rdi_4[1]
                    rsi_4[2] = rdi_4[2]
                    rsi_4[3] = rdi_4[3]
                    rsi_4[4] = rdi_4[4]
                    rsi_4[5] = rdi_4[5]
                    rsi_4[6] = rdi_4[6]
                    rsi_4[7] = rdi_4[7]
                    rsi_4[8] = rdi_4[8]
                    rsi_4[9] = rdi_4[9]
                    rsi_4[0xa] = rdi_4[0xa]
                    rsi_4[0xb].q = rdi_4[0xb].q
                    *rdi_4 = var_1e0_1
                    rdi_4[1] = var_1d0_1
                    rdi_4[2] = var_1c0_1
                    rdi_4[3] = var_1b0_1
                    rdi_4[4] = var_1a0_1
                    rdi_4[5] = var_190_1
                    rdi_4[6] = var_180_1
                    rdi_4[7] = var_170_1
                    rdi_4[8] = var_160_1
                    rdi_4[9] = var_150_1
                    rdi_4[0xa] = var_140_1
                    rdi_4[0xb].q = rax_11
                
                r15_1 = rbx_1.d
            while (((rbx_1 << 1) + 1).d s< arg2)
            result = zx.q(result_1)
        
        result = zx.q(result.d - 2)
        temp2_1 = r13
        r13 -= 1
        result_1 = result.d
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    int128_t* r13_2 = result * 0xb8 + arg1
    
    do
        if (arg1 != r13_2)
            uint64_t result_2 = arg1[0xb].q
            int128_t var_1e0_2 = *arg1
            uint32_t var_1d0_2[0x4] = arg1[1]
            int128_t var_1c0_2 = arg1[2]
            uint32_t var_1b0_2[0x4] = arg1[3]
            int128_t var_1a0_2 = arg1[4]
            uint32_t var_190_2[0x4] = arg1[5]
            int128_t var_180_2 = arg1[6]
            uint32_t var_170_2[0x4] = arg1[7]
            int128_t var_160_2 = arg1[8]
            uint32_t var_150_2[0x4] = arg1[9]
            int128_t var_140_2 = arg1[0xa]
            *arg1 = *r13_2
            arg1[1] = r13_2[1]
            arg1[2] = r13_2[2]
            arg1[3] = r13_2[3]
            arg1[4] = r13_2[4]
            arg1[5] = r13_2[5]
            arg1[6] = r13_2[6]
            arg1[7] = r13_2[7]
            arg1[8] = r13_2[8]
            arg1[9] = r13_2[9]
            arg1[0xa] = r13_2[0xa]
            arg1[0xb].q = r13_2[0xb].q
            *r13_2 = var_1e0_2
            r13_2[1] = var_1d0_2
            r13_2[2] = var_1c0_2
            r13_2[3] = var_1b0_2
            r13_2[4] = var_1a0_2
            r13_2[5] = var_190_2
            r13_2[6] = var_180_2
            r13_2[7] = var_170_2
            r13_2[8] = var_160_2
            result = result_2
            r13_2[9] = var_150_2
            r13_2[0xa] = var_140_2
            r13_2[0xb].q = result
        
        int32_t r15_2 = 0
        
        if (i s> 1)
            do
                int32_t r14_2 = r15_2 * 2
                uint64_t rbx_2 = zx.q(r14_2 + 1)
                
                if ((rbx_2 + 1).d s< i)
                    void* rdi_6 = (sx.q(r14_2) + 2) * 0xb8 + arg1
                    void* rsi_6 = sx.q(rbx_2.d) * 0xb8 + arg1
                    uint32_t zmm0_4[0x4] = sub_141e24dc0(rdi_6, 0)
                    zmm0_4[0] = zmm0_4[0] f+ *(rdi_6 + 0x34)
                    float zmm0_5 = sub_141e24dc0(rsi_6, 0) f+ *(rsi_6 + 0x34)
                    zmm0_4[0] = zmm0_4[0] f- zmm0_5
                    uint64_t rax_19
                    
                    if (_mm_and_ps(zmm0_4, 0x7fffffff)[0] f> 9.99999994e-09f)
                        rax_19.b = zmm0_5 f> zmm0_4[0]
                    else
                        rax_19.b = *(rdi_6 + 0xa4) s< *(rsi_6 + 0xa4)
                    
                    if (rax_19.b != 0)
                        rbx_2 = zx.q(r14_2)
                    
                    rbx_2 = zx.q(rbx_2.d + 1)
                
                int128_t* rsi_8 = sx.q(r15_2) * 0xb8 + arg1
                int128_t* rdi_8 = sx.q(rbx_2.d) * 0xb8 + arg1
                uint32_t zmm0_6[0x4] = sub_141e24dc0(rsi_8, 0)
                zmm0_6[0] = zmm0_6[0] f+ *(rsi_8 + 0x34)
                zmm0.d = sub_141e24dc0(rdi_8, 0).d f+ *(rdi_8 + 0x34)
                zmm0_6[0] = zmm0_6[0] f- zmm0.d
                
                if (_mm_and_ps(zmm0_6, 0x7fffffff)[0] f> 9.99999994e-09f)
                    result.b = zmm0.d f> zmm0_6[0]
                else
                    result.b = *(rsi_8 + 0xa4) s< *(rdi_8 + 0xa4)
                
                if (result.b == 0)
                    break
                
                if (rsi_8 != rdi_8)
                    int64_t rax_21 = rsi_8[0xb].q
                    int128_t var_128_1 = *rsi_8
                    uint32_t var_118_1[0x4] = rsi_8[1]
                    int128_t var_108_1 = rsi_8[2]
                    uint32_t var_f8_1[0x4] = rsi_8[3]
                    int128_t var_e8_1 = rsi_8[4]
                    uint32_t var_d8_1[0x4] = rsi_8[5]
                    int128_t var_c8_1 = rsi_8[6]
                    uint32_t var_b8_1[0x4] = rsi_8[7]
                    int128_t var_a8_1 = rsi_8[8]
                    uint32_t var_98_1[0x4] = rsi_8[9]
                    int128_t var_88_1 = rsi_8[0xa]
                    *rsi_8 = *rdi_8
                    rsi_8[1] = rdi_8[1]
                    rsi_8[2] = rdi_8[2]
                    rsi_8[3] = rdi_8[3]
                    rsi_8[4] = rdi_8[4]
                    rsi_8[5] = rdi_8[5]
                    rsi_8[6] = rdi_8[6]
                    rsi_8[7] = rdi_8[7]
                    rsi_8[8] = rdi_8[8]
                    rsi_8[9] = rdi_8[9]
                    rsi_8[0xa] = rdi_8[0xa]
                    rsi_8[0xb].q = rdi_8[0xb].q
                    *rdi_8 = var_128_1
                    rdi_8[1] = var_118_1
                    rdi_8[2] = var_108_1
                    rdi_8[3] = var_f8_1
                    rdi_8[4] = var_e8_1
                    rdi_8[5] = var_d8_1
                    rdi_8[6] = var_c8_1
                    rdi_8[7] = var_b8_1
                    rdi_8[8] = var_a8_1
                    rdi_8[9] = var_98_1
                    rdi_8[0xa] = var_88_1
                    rdi_8[0xb].q = rax_21
                
                result = zx.q(((rbx_2 << 1) + 1).d)
                r15_2 = rbx_2.d
            while (result.d s< i)
        
        i -= 1
        r13_2 -= 0xb8
    while (i s> 0)

__security_check_cookie(rax_1 ^ &var_208)
return result
