// 函数: sub_14037bdd0
// 地址: 0x14037bdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t r8 = *(arg1 + 0x2c)
int64_t rdi = *arg1
void* rsi = arg1[1]
int64_t rdx = *(arg1 + 0x24)

if (arg1[8].d != 0)
    r8 = 1

float var_48
float zmm1
float var_38_1

if (r8 - 1 u<= 5)
    switch (r8)
        case 1
            float* rax_6 = arg1[3]
            var_68 = *arg1[2]
            
            if (rax_6 != 0)
                var_48 = *rax_6
        case 2
            float* rax_7 = arg1[2]
            zmm1 = rax_7[3]
            float* rax_8 = arg1[3]
            var_68 = *rax_7
            float var_64_1 = zmm1
            
            if (rax_8 != 0)
                zmm1 = rax_8[3]
                var_48 = *rax_8
                float var_44_1 = zmm1
        case 3
            float* rax_9 = arg1[2]
            zmm1 = rax_9[4]
            var_68 = *rax_9
            float var_64_2 = zmm1
            float* rax_10 = arg1[3]
            float var_60_1 = rax_9[8]
            
            if (rax_10 != 0)
                zmm1 = rax_10[4]
                var_48 = *rax_10
                float var_44_2 = zmm1
                float var_40_1 = rax_10[8]
        case 4
            float* rax_11 = arg1[2]
            zmm1 = rax_11[5]
            var_68 = *rax_11
            float var_64_3 = zmm1
            float var_60_2 = rax_11[0xa]
            float* rax_12 = arg1[3]
            float var_5c_1 = rax_11[0xf]
            
            if (rax_12 != 0)
                zmm1 = rax_12[5]
                var_48 = *rax_12
                float var_44_3 = zmm1
                float var_40_2 = rax_12[0xa]
                float var_3c_1 = rax_12[0xf]
        case 5
            float* rax_13 = arg1[2]
            zmm1 = rax_13[6]
            var_68 = *rax_13
            float var_64_4 = zmm1
            float var_60_3 = rax_13[0xc]
            float* rax_14 = arg1[3]
            float var_5c_2 = rax_13[0x12]
            float var_58_1 = rax_13[0x18]
            
            if (rax_14 != 0)
                zmm1 = rax_14[6]
                var_48 = *rax_14
                float var_44_4 = zmm1
                float var_40_3 = rax_14[0xc]
                float var_3c_2 = rax_14[0x12]
                var_38_1 = rax_14[0x18]
        case 6
            int32_t* rax_15 = arg1[2]
            zmm1 = rax_15[7]
            var_68 = *rax_15
            float var_64_5 = zmm1
            float var_60_4 = rax_15[0xe]
            float var_5c_3 = rax_15[0x15]
            float var_58_2 = rax_15[0x1c]
            int32_t* rax_16 = arg1[3]
            float var_54_1 = rax_15[0x23]
            
            if (rax_16 != 0)
                float var_44_5 = rax_16[7]
                zmm1 = rax_16[0x15]
                var_48 = *rax_16
                float var_3c_3 = zmm1
                float var_40_4 = rax_16[0xe]
                float var_34_1 = rax_16[0x23]
                var_38_1 = rax_16[0x1c]
int64_t r9 = sx.q(*(arg1 + 0x3c))
int64_t result = 0
int64_t rbx = 0
float zmm0

if (arg1[3] != 0)
    if (rdx s>= 4)
        void* rcx_2 = rsi + 4
        void* r11_4 = rdi - rsi
        int64_t i_6 = ((rdx - 4) u>> 2) + 1
        rbx = i_6 << 2
        int64_t i
        
        do
            zmm0 = (&var_68)[result]
            zmm1 = zmm0 f* *(rcx_2 + r11_4 - 4)
            (&var_68)[result] = zmm0 + (&var_48)[result]
            
            if (r9 != 0)
                zmm1 = zmm1 f+ *(rcx_2 - 4)
            
            int64_t rax_20 = result + 1
            *(rcx_2 - 4) = zmm1
            
            if (rax_20 u>= r8)
                rax_20 = 0
            
            zmm0 = (&var_68)[rax_20]
            zmm1 = zmm0 f* *(rcx_2 + r11_4)
            (&var_68)[rax_20] = zmm0 + (&var_48)[rax_20]
            
            if (r9 != 0)
                zmm1 = zmm1 f+ *rcx_2
            
            int64_t rax_21 = rax_20 + 1
            *rcx_2 = zmm1
            
            if (rax_21 u>= r8)
                rax_21 = 0
            
            zmm0 = (&var_68)[rax_21]
            zmm1 = zmm0 f* *(rcx_2 + r11_4 + 4)
            (&var_68)[rax_21] = zmm0 + (&var_48)[rax_21]
            
            if (r9 != 0)
                zmm1 = zmm1 f+ *(rcx_2 + 4)
            
            int64_t rax_22 = rax_21 + 1
            *(rcx_2 + 4) = zmm1
            
            if (rax_22 u>= r8)
                rax_22 = 0
            
            zmm0 = (&var_68)[rax_22]
            zmm1 = zmm0 f* *(rcx_2 + r11_4 + 8)
            (&var_68)[rax_22] = zmm0 + (&var_48)[rax_22]
            
            if (r9 != 0)
                zmm1 = zmm1 f+ *(rcx_2 + 8)
            
            result = rax_22 + 1
            *(rcx_2 + 8) = zmm1
            
            if (result u>= r8)
                result = 0
            
            rcx_2 += 0x10
            i = i_6
            i_6 -= 1
        while (i != 1)
    
    if (rbx u< rdx)
        void* rcx_3 = rsi + (rbx << 2)
        int64_t i_5 = rdx - rbx
        int64_t i_1
        
        do
            zmm0 = (&var_68)[result]
            zmm1 = zmm0 f* *(rcx_3 + rdi - rsi)
            (&var_68)[result] = zmm0 + (&var_48)[result]
            
            if (r9 != 0)
                zmm1 = zmm1 f+ *rcx_3
            
            result += 1
            *rcx_3 = zmm1
            
            if (result u>= r8)
                result = 0
            
            rcx_3 += 4
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
else
    if (rdx s>= 4)
        void* rcx = rsi + 4
        float* r10_2 = rdi - rsi
        int64_t i_7 = ((rdx - 4) u>> 2) + 1
        rbx = i_7 << 2
        int64_t i_2
        
        do
            zmm0 = (&var_68)[result] f* *(r10_2 + rcx - 4)
            
            if (r9 != 0)
                zmm0 = zmm0 f+ *(rcx - 4)
            
            int64_t rax_17 = result + 1
            *(rcx - 4) = zmm0
            
            if (rax_17 u>= r8)
                rax_17 = 0
            
            zmm0 = (&var_68)[rax_17] f* *(r10_2 + rcx)
            
            if (r9 != 0)
                zmm0 = zmm0 f+ *rcx
            
            int64_t rax_18 = rax_17 + 1
            *rcx = zmm0
            
            if (rax_18 u>= r8)
                rax_18 = 0
            
            zmm0 = (&var_68)[rax_18] f* *(r10_2 + rcx + 4)
            
            if (r9 != 0)
                zmm0 = zmm0 f+ *(rcx + 4)
            
            int64_t rax_19 = rax_18 + 1
            *(rcx + 4) = zmm0
            
            if (rax_19 u>= r8)
                rax_19 = 0
            
            zmm0 = (&var_68)[rax_19] f* *(r10_2 + rcx + 8)
            
            if (r9 != 0)
                zmm0 = zmm0 f+ *(rcx + 8)
            
            result = rax_19 + 1
            *(rcx + 8) = zmm0
            
            if (result u>= r8)
                result = 0
            
            rcx += 0x10
            i_2 = i_7
            i_7 -= 1
        while (i_2 != 1)
    
    if (rbx u< rdx)
        void* rcx_1 = rsi + (rbx << 2)
        int64_t i_4 = rdx - rbx
        int64_t i_3
        
        do
            zmm0 = (&var_68)[result] f* *(rcx_1 + rdi - rsi)
            
            if (r9 != 0)
                zmm0 = zmm0 f+ *rcx_1
            
            result += 1
            *rcx_1 = zmm0
            
            if (result u>= r8)
                result = 0
            
            rcx_1 += 4
            i_3 = i_4
            i_4 -= 1
        while (i_3 != 1)
__security_check_cookie(rax_1 ^ &var_68)
return result
