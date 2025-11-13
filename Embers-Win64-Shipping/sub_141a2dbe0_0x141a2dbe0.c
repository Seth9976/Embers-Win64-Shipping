// 函数: sub_141a2dbe0
// 地址: 0x141a2dbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int32_t r8 = 0
int64_t i_3 = 1
int32_t rax_3 = arg1[1].d & 1

if (rax_3 != 0)
    if (0f f== arg1[2].d)
        goto label_141a2dc44
    
    goto label_141a2dc1a

int32_t var_58
double var_48
uint128_t zmm0
double zmm1

if ((arg1[4].b & 1) == 0)
label_141a2dc1a:
    
    if (rax_3 == 0)
        zmm1 = var_48
    else
        r8 = 1
        zmm1 = *arg1 f/ _mm_cvtps_pd(arg1[2].d.q).q
else
label_141a2dc44:
    
    if (arg1[7].b == 0)
        arg1[6].d = 0
        int32_t r9_1 = -1
        arg1[7].b = 1
        void* rdx = arg2[2]
        var_58 = 0xffffffff
        int32_t var_54_1 = 0
        int64_t rbx_1
        
        if (rdx == 0)
            rbx_1 = var_58.q
        else
            int64_t var_50
            sub_140d3a3a0(&var_50, rdx)
            rbx_1 = var_50
            var_58.q = rbx_1
            r8 = var_54_1
            r9_1 = var_58
        
        int64_t* r10_1 = *arg2
        int32_t* rdx_1 = r10_1[3]
        void* rax_5 = &rdx_1[sx.q(r10_1[4].d) * 3]
        int32_t rbp_1
        
        if (rdx_1 == rax_5)
        label_141a2dcf1:
            rbp_1 = (*(*r10_1 + 0x28))(r10_1, arg2[2], arg2[3], r9_1)
            
            if (arg2[3] != 0)
                void* r14_1 = *arg2
                int64_t r15_1 = sx.q(*(r14_1 + 0x20))
                int32_t rcx_3 = (r15_1 + 1).d
                *(r14_1 + 0x20) = rcx_3
                
                if (rcx_3 s> *(r14_1 + 0x24))
                    sub_14083a7e0(r14_1 + 0x18)
                
                int64_t rax_8 = *(r14_1 + 0x18)
                int64_t rcx_5 = r15_1 * 3
                *(rax_8 + (rcx_5 << 2)) = rbx_1
                *(rax_8 + (rcx_5 << 2) + 8) = rbp_1
        else
            while (*rdx_1 != r9_1 || rdx_1[1] != r8)
                rdx_1 = &rdx_1[3]
                
                if (rdx_1 == rax_5)
                    goto label_141a2dcf1
            
            rbp_1 = rdx_1[2]
        
        void* rax_9 = &var_48
        var_58 = rbp_1
        int32_t* rcx_6 = &var_58
        int64_t i_2 = 1
        int32_t var_40_1 = 1
        int64_t i
        
        do
            zmm0 = zx.o(*rcx_6)
            rax_9 += 8
            rcx_6 = &rcx_6[1]
            *(rax_9 - 8) = (_mm_cvtepi32_pd(zmm0.q)).q
            i = i_2
            i_2 -= 1
        while (i != 1)
        *(arg1 + 0x28) = var_48.o
    
    zmm1 = arg1[5]
    r8 = 1

if ((arg1[4].b & 1) != 0)
    zmm0 = zx.o(arg1[3])
    
    if (r8 == 0)
        zmm1 = zmm0.q
    else
        zmm1 = zmm1 f+ zmm0.q
    
    r8 = 1

uint64_t result

if (r8 != 0)
    result = zx.q(int.d(zmm1))
else
    int64_t* rcx_7 = *arg2
    var_58 = (*(*rcx_7 + 0x28))(rcx_7, zmm1, arg2[3])
    int32_t* rcx_8 = &var_58
    int64_t* rax_12 = &var_48
    int64_t i_1
    
    do
        zmm0 = zx.o(*rcx_8)
        rax_12 = &rax_12[1]
        rcx_8 = &rcx_8[1]
        rax_12[-1] = (_mm_cvtepi32_pd(zmm0.q)).q
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    result = zx.q(int.d(fconvert.t(var_48)))

__security_check_cookie(rax_1 ^ &var_78)
return result
