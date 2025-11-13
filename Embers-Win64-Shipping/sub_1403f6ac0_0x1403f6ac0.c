// 函数: sub_1403f6ac0
// 地址: 0x1403f6ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
int32_t r15 = arg5
float* r12 = arg7
float zmm3 = *arg6
int32_t rbx = 0
int64_t rbp = 0
int64_t r11 = sx.q(arg3)
int64_t r10 = sx.q(arg4)
int32_t arg_18 = 0
uint64_t result = zx.q(divs.dp.d(sx.q(arg3), r15))
void* rsi_1 = arg2 - r12
int64_t var_48 = 0
void* arg_10 = rsi_1
int32_t* rdi = sx.q(result.d)
arg6 = rdi

do
    float zmm1 = *r12
    void* r8 = *(arg1 + (rbp << 3))
    void* r14_1 = rsi_1 + r12
    float zmm0
    
    if (r15 s<= 1)
        uint64_t rcx_3 = 0
        
        if (r11 s>= 4)
            result = ((r11 - 4) u>> 2) + 1
            void* rdx_4 = r8 + 8
            float* r9_1 = r14_1 + (r10 << 3)
            rcx_3 = result << 2
            uint64_t i
            
            do
                zmm1 = zmm1 f+ *(rdx_4 - 8)
                rdx_4 += 0x10
                zmm1 = zmm1 + 1e-30f
                zmm0 = zmm1
                zmm1 = zmm1 * zmm3 f+ *(rdx_4 - 0x14) + 1e-30f
                r9_1[neg.q(r10) * 2] = zmm0 * 3.05175781e-05f
                zmm0 = zmm1
                zmm1 = zmm1 * zmm3 f+ *(rdx_4 - 0x10)
                r9_1[neg.q(r10)] = zmm0 * 3.05175781e-05f
                zmm1 = zmm1 + 1e-30f
                zmm0 = zmm1
                zmm1 = zmm1 * zmm3 f+ *(rdx_4 - 0xc)
                *r9_1 = zmm0 * 3.05175781e-05f
                zmm1 = zmm1 + 1e-30f
                zmm0 = zmm1
                zmm1 = zmm1 * zmm3
                r9_1[r10] = zmm0 * 3.05175781e-05f
                r9_1 = &r9_1[r10 * 4]
                i = result
                result -= 1
            while (i != 1)
            rbx = arg_18
            rdi = arg6
        
        if (rcx_3 s< r11)
            result = r10 * rcx_3
            float* rdx_5 = r14_1 + (result << 2)
            
            do
                zmm1 = zmm1 f+ *(r8 + (rcx_3 << 2))
                rcx_3 += 1
                zmm1 = zmm1 + 1e-30f
                zmm0 = zmm1
                zmm1 = zmm1 * zmm3
                *rdx_5 = zmm0 * 3.05175781e-05f
                rdx_5 = &rdx_5[r10]
            while (rcx_3 s< r11)
    else
        int64_t r9 = 0
        
        if (r11 s>= 4)
            result = arg8 + 4
            void* rcx_1 = r8 - arg8
            int64_t i_7 = ((r11 - 4) u>> 2) + 1
            r9 = i_7 << 2
            int64_t i_1
            
            do
                zmm1 = zmm1 f+ *(rcx_1 + result - 4)
                result += 0x10
                zmm1 = zmm1 + 1e-30f
                *(result - 0x14) = zmm1
                zmm1 = zmm1 * zmm3 f+ *(rcx_1 + result - 0x10) + 1e-30f
                *(result - 0x10) = zmm1
                zmm1 = zmm1 * zmm3 f+ *(rcx_1 + result - 0xc) + 1e-30f
                *(result - 0xc) = zmm1
                zmm1 = zmm1 * zmm3 f+ *(rcx_1 + result - 8) + 1e-30f
                zmm0 = zmm1
                zmm1 = zmm1 * zmm3
                *(result - 8) = zmm0
                i_1 = i_7
                i_7 -= 1
            while (i_1 != 1)
        
        if (r9 s< r11)
            result = (r9 << 2) + arg8
            int64_t i_5 = r11 - r9
            int64_t i_2
            
            do
                zmm1 = zmm1 f+ *(r8 - arg8 + result)
                result += 4
                zmm1 = zmm1 + 1e-30f
                zmm0 = zmm1
                zmm1 = zmm1 * zmm3
                *(result - 4) = zmm0
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
        
        rbx = 1
        arg_18 = 1
    
    *r12 = zmm1
    
    if (rbx != 0)
        int64_t rbx_3 = 0
        
        if (rdi s>= 4)
            int64_t r8_2 = sx.q(r15)
            result = r14_1 + (r10 << 3)
            float* rcx_5 = (r8_2 << 3) + arg8
            int64_t i_8 = (&arg6[-1] u>> 2) + 1
            rbx_3 = i_8 << 2
            int64_t i_3
            
            do
                zmm1 = rcx_5[neg.q(r8_2)] * 3.05175781e-05f
                *(result + (neg.q(r10) << 3)) = rcx_5[neg.q(r8_2) * 2] * 3.05175781e-05f
                zmm0 = *rcx_5
                *(result + (neg.q(r10) << 2)) = zmm1
                zmm1 = rcx_5[r8_2]
                *result = zmm0 * 3.05175781e-05f
                rcx_5 = &rcx_5[r8_2 * 4]
                *(result + (r10 << 2)) = zmm1 * 3.05175781e-05f
                result += r10 << 4
                i_3 = i_8
                i_8 -= 1
            while (i_3 != 1)
            rbp = var_48
            rdi = arg6
            r15 = arg5
        
        if (rbx_3 s< rdi)
            int64_t rcx_6 = sx.q(r15)
            float* rdx_9 = r14_1 + ((r10 * rbx_3) << 2)
            result = ((rcx_6 * rbx_3) << 2) + arg8
            void* i_6 = rdi - rbx_3
            void* i_4
            
            do
                zmm0 = *result
                result += rcx_6 << 2
                *rdx_9 = zmm0 * 3.05175781e-05f
                rdx_9 = &rdx_9[r10]
                i_4 = i_6
                i_6 -= 1
            while (i_4 != 1)
        
        rbx = arg_18
    
    rsi_1 = arg_10
    arg1 = arg_8
    rbp += 1
    r12 = &r12[1]
    var_48 = rbp
while (rbp s< r10)

return result
