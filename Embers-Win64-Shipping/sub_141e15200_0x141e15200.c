// 函数: sub_141e15200
// 地址: 0x141e15200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10 = arg2
int128_t* rbp = arg5
char r9 = arg2
float zmm9[0x4] = arg3
float zmm1[0x4] = *rbp
int128_t zmm7 = zx.o(0)
int64_t result
result.b = arg3[0] > 0f
arg2 = 0
char arg_18 = 0
uint128_t zmm0

if (zmm1[0] >= 0f)
    zmm0 = _mm_min_ss((*(arg1 + 0x90)).d, zmm1[0])
else
    zmm0 = zx.o(0)

float zmm6[0x4]
float var_48[0x4] = zmm6
int128_t zmm8
int128_t var_68 = zmm8
*rbp = zmm0.d
int32_t* rbx
int32_t* r12

if (result.b != 0)
    rbx = arg7
    r12 = arg6
    int32_t r10 = *rbx
    
    if (r10 == 0xffffffff)
    label_141e1544a:
        arg3 = *rbp
        arg3[0] = arg3[0] + zmm9[0]
        float temp0_2[0x4] = __minss_xmmss_memss(arg3[0], *(arg1 + 0x90))
        *rbp = temp0_2[0]
        zmm0.d = (*(arg1 + 0x90)).d f- temp0_2[0]
        goto label_141e15676
    
    int64_t* r15_1 = arg8
    
    while (true)
        int64_t r14_1 = *(arg1 + 0x178)
        int64_t rsi_1 = sx.q(r10) * 3
        
        if (arg2 == 0)
            arg_18 = 1
            
            if (not((*rbp).d f<= *(r14_1 + (rsi_1 << 2) + 8)))
                zmm7 = *(arg1 + 0x90)
        
        zmm1 = *(r14_1 + (rsi_1 << 2) + 8)
        zmm0 = *rbp
        zmm1[0] = zmm1[0] f+ zmm7.d
        zmm1[0] = zmm1[0] f- zmm0.d
        
        if (zmm9[0] <= zmm1[0])
            break
        
        *rbp = zmm1[0]
        zmm9[0] = zmm9[0] - zmm1[0]
        *r12 = *rbx
        r12[1] = (zmm9 ^ 0x80000000).d
        int64_t rbp_1 = sx.q(r15_1[1].d)
        int32_t rax_2 = (rbp_1 + 1).d
        r15_1[1].d = rax_2
        
        if (rax_2 s> *(r15_1 + 0xc))
            sub_14083a7e0(r15_1)
            r9 = arg_10
        
        int64_t rax_3 = *r15_1
        int64_t rdx_2 = rbp_1 * 3
        *(rax_3 + (rdx_2 << 2)) = 0
        *(rax_3 + (rdx_2 << 2) + 8) = 0
        *(*r15_1 + (rdx_2 << 2)) = *(r14_1 + (rsi_1 << 2))
        result = *r15_1
        *(result + (rdx_2 << 2) + 8) = zmm9[0]
        
        while (true)
            int32_t rcx_3 = *rbx + 1
            *rbx = rcx_3
            
            if (rcx_3 s>= *(arg1 + 0x180))
                if (r9 == 0)
                    break
                
                *rbx = 0
                rcx_3 = 0
                zmm7.d = zmm7.d f+ *(arg1 + 0x90)
            
            int64_t* rdx_3 = *arg4
            result = sx.q(arg4[1].d)
            r10 = *rbx
            void* r8_1 = &rdx_3[result]
            
            if (rdx_3 != r8_1)
                result = *(arg1 + 0x178)
                
                do
                    if (*rdx_3 == *(result + sx.q(rcx_3) * 0xc))
                        r9 = arg_10
                        goto label_141e15430
                    
                    rdx_3 = &rdx_3[1]
                while (rdx_3 != r8_1)
                
                r9 = arg_10
        
        *rbx = 0xffffffff
        r10 = -1
    label_141e15430:
        rbp = arg5
        arg2 = arg_18
        
        if (r10 == 0xffffffff)
            goto label_141e1544a
    
    goto label_141e1547d

rbx = arg6
r12 = arg7
int32_t r10_1 = *rbx

if (r10_1 == 0xffffffff)
label_141e1565f:
    arg3 = *rbp
    zmm0.d = arg3.d f+ zmm9[0]
    zmm0 = _mm_max_ss(zmm0.d, 0)
    *rbp = zmm0.d
label_141e15676:
    rbx[1] = zmm0.d
    zmm1 = *rbp
    zmm0 = r12[1]
    zmm1[0] = zmm1[0] - arg3[0]
    zmm0.d = zmm0.d f- zmm1[0]
else
    while (true)
        int64_t r14_2 = *(arg1 + 0x178)
        int64_t rsi_2 = sx.q(r10_1) * 3
        
        if (arg2 == 0)
            arg_18 = 1
            
            if (not((*rbp).d f>= *(r14_2 + (rsi_2 << 2) + 8)))
                zmm7 = *(arg1 + 0x90) ^ 0x80000000
        
        zmm1 = *(r14_2 + (rsi_2 << 2) + 8)
        zmm0 = *rbp
        zmm1[0] = zmm1[0] f+ zmm7.d
        zmm1[0] = zmm1[0] f- zmm0.d
        
        if (zmm9[0] >= zmm1[0])
            break
        
        *rbp = zmm1[0]
        zmm9[0] = zmm9[0] - zmm1[0]
        *r12 = *rbx
        r12[1] = (zmm9 ^ 0x80000000).d
        int64_t rbp_2 = sx.q(arg8[1].d)
        int32_t rax_8 = (rbp_2 + 1).d
        arg8[1].d = rax_8
        
        if (rax_8 s> *(arg8 + 0xc))
            sub_14083a7e0(arg8)
            r9 = arg_10
        
        int64_t rax_9 = *arg8
        int64_t rdx_6 = rbp_2 * 3
        *(rax_9 + (rdx_6 << 2)) = 0
        *(rax_9 + (rdx_6 << 2) + 8) = 0
        *(*arg8 + (rdx_6 << 2)) = *(r14_2 + (rsi_2 << 2))
        result = *arg8
        *(result + (rdx_6 << 2) + 8) = zmm9[0]
        
        while (true)
            int32_t rcx_7 = *rbx
            int32_t rcx_8 = rcx_7 - 1
            *rbx = rcx_8
            
            if (rcx_7 - 1 s< 0)
                if (r9 == 0)
                    break
                
                rcx_8 = *(arg1 + 0x180) - 1
                *rbx = rcx_8
                zmm7.d = zmm7.d f- *(arg1 + 0x90)
            
            int64_t* rdx_7 = *arg4
            result = sx.q(arg4[1].d)
            r10_1 = *rbx
            void* r8_2 = &rdx_7[result]
            
            if (rdx_7 != r8_2)
                result = *(arg1 + 0x178)
                
                do
                    if (*rdx_7 == *(result + sx.q(rcx_8) * 0xc))
                        r9 = arg_10
                        goto label_141e15640
                    
                    rdx_7 = &rdx_7[1]
                while (rdx_7 != r8_2)
                
                r9 = arg_10
        
        *rbx = 0xffffffff
        r10_1 = -1
    label_141e15640:
        rbp = arg5
        arg2 = arg_18
        
        if (r10_1 == 0xffffffff)
            goto label_141e1565f
    
label_141e1547d:
    zmm0.d = zmm0.d f+ zmm9[0]
    int32_t zmm9_1
    zmm0, result, zmm6, zmm9_1 = sub_140a454f0(zmm0, *(arg1 + 0x90))
    *rbp = zmm0.d
    
    if (not(zmm0.d f>= 0f))
        zmm0.d = zmm0.d f+ *(arg1 + 0x90)
        *rbp = zmm0.d
    
    zmm6[0] = zmm6[0] f- zmm9_1
    rbx[1] = zmm6[0]
    zmm0.d = r12[1].d f- zmm9_1

r12[1] = zmm0.d
return result
