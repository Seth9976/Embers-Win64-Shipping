// 函数: sub_140400fe0
// 地址: 0x140400fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t rsi = sx.q(arg3)
void* rdx = 1
int64_t r9_1 = rsi s>> 1
int64_t var_68
__builtin_memset(&var_68, 0, 0x14)
void* r8 = 1
float zmm0
float zmm2

if (r9_1 s> 1)
    if (r9_1 - 1 s>= 4)
        void* rcx = &arg2[3]
        int32_t* rax_4 = *arg1 + 0xc
        int64_t i_3 = ((r9_1 - 5) u>> 2) + 1
        r8 = (i_3 << 2) + 1
        int64_t i
        
        do
            zmm2 = *rax_4
            float zmm3 = rax_4[2]
            rcx += 0x10
            rax_4 = &rax_4[8]
            zmm0 = zmm2 f+ rax_4[-0xa]
            float zmm1 = zmm3 + zmm2
            zmm2 = rax_4[-4]
            zmm1 = zmm1 * 0.5f f+ rax_4[-7]
            *(rcx - 0x18) = (zmm0 * 0.5f f+ rax_4[-9]) * 0.5f
            zmm0 = zmm2
            zmm2 = (zmm2 f+ rax_4[-2]) * 0.5f
            zmm0 = (zmm0 + zmm3) * 0.5f f+ rax_4[-5]
            *(rcx - 0x14) = zmm1 * 0.5f
            zmm2 = zmm2 f+ rax_4[-3]
            *(rcx - 0x10) = zmm0 * 0.5f
            *(rcx - 0xc) = zmm2 * 0.5f
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    if (r8 s< r9_1)
        void* rcx_1 = *arg1 + (r8 << 3)
        
        do
            zmm0 = *(rcx_1 - 4)
            r8 += 1
            rcx_1 += 8
            arg2[r8 - 1] = ((zmm0 f+ *(rcx_1 - 4)) * 0.5f f+ *(rcx_1 - 8)) * 0.5f
        while (r8 s< r9_1)

float* rax_6 = *arg1
*arg2 = (rax_6[1] * 0.5f + *rax_6) * 0.5f

if (arg4 == 2)
    if (r9_1 s> 1)
        if (r9_1 - 1 s>= 4)
            void* rcx_2 = &arg2[3]
            float* rax_9 = arg1[1] + 0xc
            int64_t i_2 = ((r9_1 - 5) u>> 2) + 1
            rdx = (i_2 << 2) + 1
            int64_t i_1
            
            do
                zmm2 = *rax_9
                rcx_2 += 0x10
                rax_9 = &rax_9[8]
                zmm0 = ((zmm2 + rax_9[-0xa]) * 0.5f + rax_9[-9]) * 0.5f f+ *(rcx_2 - 0x18)
                *(rcx_2 - 0x14) = ((zmm2 + rax_9[-6]) * 0.5f + rax_9[-7]) * 0.5f f+ *(rcx_2 - 0x14)
                zmm2 = rax_9[-4]
                *(rcx_2 - 0x18) = zmm0
                zmm0 = zmm2 + rax_9[-6]
                zmm2 = ((zmm2 + rax_9[-2]) * 0.5f + rax_9[-3]) * 0.5f f+ *(rcx_2 - 0xc)
                *(rcx_2 - 0x10) = (zmm0 * 0.5f + rax_9[-5]) * 0.5f f+ *(rcx_2 - 0x10)
                *(rcx_2 - 0xc) = zmm2
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        if (rdx s< r9_1)
            void* rcx_3 = arg1[1] + (rdx << 3)
            
            do
                zmm0 = *(rcx_3 - 4)
                rdx += 1
                rcx_3 += 8
                arg2[rdx - 1] =
                    ((zmm0 f+ *(rcx_3 - 4)) * 0.5f f+ *(rcx_3 - 8)) * 0.5f + arg2[rdx - 1]
            while (rdx s< r9_1)
    
    float* rax_11 = arg1[1]
    *arg2 = (rax_11[1] * 0.5f + *rax_11) * 0.5f + *arg2

int32_t rsi_1 = rsi.d s>> 1
int32_t var_78 = arg5
float var_50
sub_140409b10(arg2, &var_50, nullptr, 0, 4, rsi_1)
var_50 = var_50 * 1.00010002f
float var_4c
float var_4c_1 = var_4c - var_4c * 0.00800000038f * 0.00800000038f
float var_48
float var_48_1 = var_48 - var_48 * 0.0160000008f * 0.0160000008f
float var_44
float var_44_1 = var_44 - var_44 * 0.0240000002f * 0.0240000002f
float var_40
float var_40_1 = var_40 - var_40 * 0.0320000015f * 0.0320000015f
float var_38
sub_140409ea0(&var_38, &var_50, 4)
int32_t var_88
var_88.q = &var_68
float zmm2_2 = var_38 * 0.899999976f
float var_34
float zmm3_2 = var_34 * 0.809999943f
float var_30
float zmm4 = var_30 * 0.728999913f
var_50 = zmm2_2 + 0.800000012f
float var_2c
float zmm5 = var_2c * 0.656099916f
float var_4c_2 = zmm2_2 * 0.800000012f + zmm3_2
float var_48_2 = zmm3_2 * 0.800000012f + zmm4
float var_40_2 = zmm5 * 0.800000012f
float var_44_2 = zmm4 * 0.800000012f + zmm5
void** result = sub_140400390(arg2, &var_50, arg2, rsi_1, var_88)
__security_check_cookie(rax_1 ^ &var_a8)
return result
