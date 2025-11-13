// 函数: sub_140406830
// 地址: 0x140406830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float rbx = arg5
int32_t i_2 = arg1[7]
int32_t i_4 = 0
int64_t r13 = sx.q(arg3)
int32_t r8 = *arg1
int32_t i_16 = 0
int32_t rax
rax.b = r8 == 0
int32_t var_60 = r8
int32_t rax_1
rax_1.b = rbx == 1
int32_t i_7 = i_2
int32_t temp0 = divs.dp.d(sx.q(r13.d), rbx)
int32_t rdi = temp0

if (r13.d == 1)
    arg5.q = arg8
    return sub_140406d70(arg1, arg2, nullptr, arg4) __tailcall

int64_t* rbp = arg6
int32_t i_14 = 0

if (i_2 s> 0)
    i_14 = i_2

if (arg10 != 0 && rbp != 0 && (i_14 != 0 || ((temp0.b & 1) == 0 && i_2 s< 0) || rbx s> 1))
    int64_t r14_1 = 0
    
    if (r13 s>= 4)
        void* rcx_1 = arg10 + 4
        int64_t r8_3 = rbp - arg10
        int64_t i_12 = ((r13 - 4) u>> 2) + 1
        r14_1 = i_12 << 2
        int64_t i
        
        do
            int32_t rax_7 = *(r8_3 + rcx_1 - 4)
            rcx_1 += 0x10
            *(rcx_1 - 0x14) = rax_7
            *(rcx_1 - 0x10) = *(r8_3 + rcx_1 - 0x10)
            *(rcx_1 - 0xc) = *(r8_3 + rcx_1 - 0xc)
            *(rcx_1 - 8) = *(r8_3 + rcx_1 - 8)
            i = i_12
            i_12 -= 1
        while (i != 1)
        r8 = var_60
    
    if (r14_1 s< r13)
        void* rcx_2 = arg10 + (r14_1 << 2)
        int64_t i_10 = r13 - r14_1
        int64_t i_1
        
        do
            int32_t rax_11 = *(rcx_2 + rbp - arg10)
            rcx_2 += 4
            *(rcx_2 - 4) = rax_11
            i_1 = i_10
            i_10 -= 1
        while (i_1 != 1)
    
    rbp = arg10

uint32_t r14_2 = arg11
int64_t rax_12 = sx.q(r8)
int32_t var_5c = 1

if (i_14 s> 0)
    int32_t rbx_1 = 1
    
    do
        if (rax_12 != 0)
            sub_140405650(arg2, r13.d s>> i_4.b, rbx_1)
        
        if (rbp != 0)
            sub_140405650(rbp, r13.d s>> i_4.b, rbx_1)
        
        rbx_1 = rol.d(rbx_1, 1)
        int64_t rcx_7 = sx.q(r14_2)
        i_4 += 1
        r14_2 =
            zx.d(*((rcx_7 s>> 4) + 0x143700628)) << 2 | zx.d(*((zx.q(rcx_7.d) & 0xf) + 0x143700628))
    while (i_4 s< i_14)
    
    rbx = arg5
    rdi = temp0
    i_2 = i_7
    i_4 = 0

char rcx_9 = i_14.b
int32_t rdi_2 = rdi << rcx_9
int32_t rbx_2 = rbx s>> rcx_9

if ((rdi_2.b & 1) == 0)
    while (i_2 s< 0)
        if (rax_12 != 0)
            sub_140405650(arg2, rdi_2, rbx_2)
            i_2 = i_7
        
        if (rbp != 0)
            sub_140405650(rbp, rdi_2, rbx_2)
            i_2 = i_7
        
        i_16 += 1
        i_2 += 1
        rdi_2 s>>= 1
        r14_2 |= r14_2 << rbx_2.b
        rbx_2 *= 2
        i_7 = i_2
        
        if ((rdi_2.b & 1) != 0)
            break
    
    i_4 = 0

if (rbx_2 s> 1)
    if (var_60 != 0)
        char rcx_13 = i_14.b
        sub_140405130(arg2, rdi_2 s>> rcx_13, rbx_2 << rcx_13, rax_1)
    
    if (rbp != 0)
        char rcx_15 = i_14.b
        sub_140405130(rbp, rdi_2 s>> rcx_15, rbx_2 << rcx_15, rax_1)

uint32_t var_78 = r14_2
uint32_t rbp_2 = sub_1404074d0(arg1, arg2, r13.d, arg4.d, rbx_2, rbp, arg7, arg9)

if (rax != 0)
    if (rbx_2 s> 1)
        char rcx_18 = i_14.b
        sub_140405b20(arg2, rdi_2 s>> rcx_18, rbx_2 << rcx_18, rax_1)
    
    if (i_16 s> 0)
        uint64_t i_15 = zx.q(i_16)
        uint64_t i_3
        
        do
            rbx_2 s>>= 1
            rdi_2 *= 2
            rbp_2 |= rbp_2 u>> rbx_2.b
            sub_140405650(arg2, rdi_2, rbx_2)
            i_3 = i_15
            i_15 -= 1
        while (i_3 != 1)
    
    int32_t r14_5 = 0
    int32_t rdi_3 = 1
    
    if (i_14 s> 0)
        do
            rbp_2 = zx.d(*(zx.q(rbp_2) + 0x143700638))
            sub_140405650(arg2, r13.d s>> r14_5.b, rdi_3)
            r14_5 += 1
            rdi_3 = rol.d(rdi_3, 1)
        while (r14_5 s< i_14)
        
        i_4 = 0
    
    if (arg8 != 0)
        float zmm2_1[0x4] = zx.o(0)
        zmm2_1[0] = fconvert.s(sqrt(_mm_cvtepi32_pd(zx.q(r13.d)).q)[0].q)
        
        if (r13.d s> 0 && r13.d u>= 8)
            float zmm1_1[0x4] = zmm2_1[0]
            int64_t rcx_25 = sx.q((r13 - 1).d)
            zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0)
            
            if (arg8 u> &arg2[rcx_25] || arg8 + (rcx_25 << 2) u< arg2)
                int32_t rax_27 = r13.d & 0x80000007
                
                if (rax_27 s< 0)
                    rax_27 = ((rax_27 - 1) | 0xfffffff8) + 1
                
                do
                    int64_t i_8 = sx.q(i_4)
                    *(arg8 + (i_8 << 2)) = _mm_mul_ps(*(arg2 + (i_8 << 2)), zmm1_1)
                    int32_t rax_30 = i_4 + 4
                    i_4 += 8
                    int64_t rcx_26 = sx.q(rax_30)
                    *(arg8 + (rcx_26 << 2)) = _mm_mul_ps(*(arg2 + (rcx_26 << 2)), zmm1_1)
                while (i_4 s< r13.d - rax_27)
        
        int64_t i_13 = sx.q(i_4)
        
        if (i_13 s< r13)
            if (r13 - i_13 s>= 4)
                void* rdx_25 = arg2 - arg8
                void* rax_34 = arg8 + 4 + (i_13 << 2)
                int64_t i_11 = ((r13 - i_13 - 4) u>> 2) + 1
                i_13 += i_11 << 2
                int64_t i_5
                
                do
                    rax_34 += 0x10
                    zmm2_1[0] = zmm2_1[0] f* *(rdx_25 + rax_34 - 0x14)
                    *(rax_34 - 0x14) = zmm2_1[0]
                    zmm2_1[0] = zmm2_1[0] f* *(rdx_25 + rax_34 - 0x10)
                    *(rax_34 - 0x10) = zmm2_1[0]
                    zmm2_1[0] = zmm2_1[0] f* *(rdx_25 + rax_34 - 0xc)
                    *(rax_34 - 0xc) = zmm2_1[0]
                    zmm2_1[0] = zmm2_1[0] f* *(rdx_25 + rax_34 - 8)
                    *(rax_34 - 8) = zmm2_1[0]
                    i_5 = i_11
                    i_11 -= 1
                while (i_5 != 1)
            
            if (i_13 s< r13)
                void* rax_35 = arg8 + (i_13 << 2)
                int64_t i_9 = r13 - i_13
                int64_t i_6
                
                do
                    rax_35 += 4
                    zmm2_1[0] = zmm2_1[0] f* *(rax_35 + arg2 - arg8 - 4)
                    *(rax_35 - 4) = zmm2_1[0]
                    i_6 = i_9
                    i_9 -= 1
                while (i_6 != 1)
    
    rbp_2 &= (1 << (rbx_2 << i_14.b).b) - 1

return zx.q(rbp_2)
