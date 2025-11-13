// 函数: sub_141312650
// 地址: 0x141312650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
void* rax = arg1
*arg2 = 0
int32_t* r9 = arg3
*arg3 = 0
int32_t result = 1
int64_t rdi = sx.q(*(arg1 + 0x698))
int32_t rbx = 0
float zmm1[0x4] = zx.o(0)

if (rdi s> 0)
    void* rdx = rax + 0x610
    int64_t rcx = 0
    void* rax_1 = *(rdx + 0x80)
    
    if (rax_1 != 0)
        rdx = rax_1
    
    int64_t rax_2 = 0
    
    do
        if (*(rax_2 + rdx + 8) == 0)
            zmm1 = *(rdx + sx.q(rbx) * 0x10)
            *arg3 = zmm1[0]
            break
        
        rbx += 1
        rcx += 1
        rax_2 += 0x10
    while (rcx s< rdi)
    
    rax = arg1

float zmm0[0x4]

if (arg4 u> 1)
    void* r12_1 = &arg3[1]
    void* r13_1 = &arg2[1]
    
    do
        int32_t i_8 = *(rax + 0x698)
        int64_t r9_1 = -1
        int64_t rdi_1 = 0
        
        if (i_8 s<= 0)
            break
        
        void* r14_1 = rax + 0x610
        int64_t r8 = 0
        void* rax_5 = *(r14_1 + 0x80)
        int64_t rsi_1 = -0x10
        void* rbx_1 = r14_1
        uint64_t i_7 = zx.q(i_8)
        
        if (rax_5 != 0)
            rbx_1 = rax_5
        
        uint64_t i
        
        do
            void* rdx_1 = *(rbx_1 + r8 + 8)
            int64_t rdx_2
            
            if (rdx_1 == 0)
                rdx_2 = 0
            else
                rdx_2 = *(rdx_1 + 0x78)
            
            int32_t rcx_1 = 0
            
            if (result != 0)
                int64_t* rax_6 = arg2
                
                do
                    if (rdx_2 == *rax_6)
                        goto label_1413127a8
                    
                    rcx_1 += 1
                    rax_6 = &rax_6[1]
                while (rcx_1 u< result)
            
            if (r9_1 == -1 || not((*(rbx_1 + r8))[0] f< *(rbx_1 + rsi_1)))
                r9_1 = rdi_1
                rsi_1 = r8
            
        label_1413127a8:
            rdi_1 += 1
            r8 += 0x10
            i = i_7
            i_7 -= 1
        while (i != 1)
        
        if (r9_1 == -1)
            break
        
        void* rax_8 = *(arg1 + 0x690)
        
        if (rax_8 != 0)
            r14_1 = rax_8
        
        int64_t r9_2 = r9_1 * 2
        zmm0 = *(r14_1 + (r9_2 << 3))
        
        if (zmm0[0] < 0.001953125f)
            break
        
        void* rax_9 = *(r14_1 + (r9_2 << 3) + 8)
        int64_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0
        else
            rax_10 = *(rax_9 + 0x78)
        
        *r13_1 = rax_10
        zmm1[0] = zmm1[0] + zmm0[0]
        rax = arg1
        r13_1 += 8
        *r12_1 = zmm0[0]
        result += 1
        r12_1 += 4
    while (result u< arg4)
    
    r9 = arg3

if (zmm1[0] <= 0.00100000005f)
    *r9 = 0x3f800000
    return 1

float zmm2[0x4] = 0x3f800000
zmm2[0] = 1f / zmm1[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0)

if (result != 0)
    if (result u>= 0x10)
        int32_t r8_1 = 8
        
        do
            uint64_t i_4 = zx.q(i_1)
            i_1 += 0x10
            *(r9 + (i_4 << 2)) = _mm_mul_ps(*(r9 + (i_4 << 2)), temp0_2)
            uint64_t rax_11 = zx.q(r8_1 - 4)
            *(r9 + (rax_11 << 2)) = _mm_mul_ps(*(r9 + (rax_11 << 2)), temp0_2)
            uint64_t rax_12 = zx.q(r8_1)
            *(r9 + (rax_12 << 2)) = _mm_mul_ps(temp0_2, *(r9 + (rax_12 << 2)))
            uint64_t rax_13 = zx.q(r8_1 + 4)
            r8_1 += 0x10
            *(r9 + (rax_13 << 2)) = _mm_mul_ps(*(r9 + (rax_13 << 2)), temp0_2)
        while (i_1 u< (result & 0xfffffff0))
    
    if (i_1 u>= result)
        return result
    
    if (result - i_1 u>= 4)
        uint64_t rax_19 = zx.q(((result - i_1 - 4) u>> 2) + 1)
        void* rcx_4 = &r9[zx.q(i_1) + 2]
        uint64_t i_6 = zx.q(rax_19.d)
        i_1 += (rax_19 << 2).d
        uint64_t i_2
        
        do
            zmm0 = *(rcx_4 - 8)
            rcx_4 += 0x10
            *(rcx_4 - 0x18) = _mm_mul_ps(zmm0, temp0_1)
            i_2 = i_6
            i_6 -= 1
        while (i_2 != 1)
    
    if (i_1 u< result)
        void* rdx_5 = &r9[zx.q(i_1)]
        uint64_t i_5 = zx.q(result - i_1)
        uint64_t i_3
        
        do
            rdx_5 += 4
            temp0_1[0] = temp0_1[0] f* *(rdx_5 - 4)
            *(rdx_5 - 4) = temp0_1[0]
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)

return zx.q(result)
