// 函数: sub_140f8f920
// 地址: 0x140f8f920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t r14
r14.b = 0

if (arg5 s> *(arg1 + 0x8c0))
    *(arg1 + 0x8c0) = arg5
    r14.b = 1

char rax_3

if (not(*(arg1 + 0x880) f!= *arg3) && not(*(arg1 + 0x884) f!= arg3[1]))
    rax_3 = sub_140f68540(&arg3[7], arg1 + 0x89c)

if (*(arg1 + 0x880) f!= *arg3 || *(arg1 + 0x884) f!= arg3[1] || rax_3 == 0)
    sub_140d96150(arg1 + 0x880, arg3)
    r14.b = 1

float zmm1[0x4] = arg4[2]
zmm1[0] = zmm1[0] f- *arg4
zmm1[0] = zmm1[0] + 0.5f
int32_t rcx_2 = int.d(zmm1[0])

if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

float zmm2[0x4] = arg4[3]
zmm2[0] = zmm2[0] f- arg4[1]
zmm2[0] = zmm2[0] + 0.5f
int32_t rcx_4 = int.d(zmm2[0])

if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== zmm2[0]))
    zmm2 = _mm_cvtepi32_ps(zx.o(rcx_4 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))

if (zmm1[0] f!= *(arg1 + 0x8b8) || not(zmm2[0] f== *(arg1 + 0x8bc)))
    *(arg1 + 0x8b8) = zmm1[0]
    r14.b = 1
    *(arg1 + 0x8bc) = zmm2[0]

void* var_78
sub_140da4470(arg2, &var_78)
char var_38
char rbp_1 = var_38
char rax_8 = *(arg1 + 0x878)
void* rsi = var_78

if (rax_8 != rbp_1)
label_140f8fb6e:
    
    if (&var_78 != arg1 + 0x838)
        if (*(arg1 + 0x878) != 0)
            *(arg1 + 0x878) = 0
            
            if (*(arg1 + 0x86c) != 0)
                *(arg1 + 0x86c) = 0
            
            int64_t rcx_10 = *(arg1 + 0x838)
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
                rbp_1 = var_38
                rsi = var_78
        
        if (rbp_1 != 0)
            sub_140d92d60(arg1 + 0x838, &var_78)
            rbp_1 = var_38
            rsi = var_78
            *(arg1 + 0x878) = 1
    
    r14.b = 1
else if (rax_8 != 0)
    char var_40
    
    if (*(arg1 + 0x870) != var_40)
        goto label_140f8fb6e
    
    char rax_10 = *(arg1 + 0x86c)
    char var_44
    
    if (rax_10 != var_44)
        goto label_140f8fb6e
    
    char rax_11
    void var_68
    
    if (rax_10 != 0)
        rax_11 = sub_140d96830(arg1 + 0x848, &var_68)
    
    if (rax_10 != 0 && rax_11 == 0)
        goto label_140f8fb6e
    
    int32_t i_1 = *(arg1 + 0x840)
    int32_t var_70
    
    if (i_1 != var_70)
        goto label_140f8fb6e
    
    if (i_1 != 0)
        void* rdx_4 = rsi + 0x14
        void* rcx_9 = *(arg1 + 0x838) + 0x14
        int32_t i
        
        do
            char r8 = *(rdx_4 + 0xc)
            char r9 = *(rcx_9 + 0xc)
            
            if (((r8 ^ r9) & 1) != 0)
                goto label_140f8fb6e
            
            if (((r8 ^ r9) & 2) != 0)
                goto label_140f8fb6e
            
            if (((r8 ^ r9) & 4) != 0)
                goto label_140f8fb6e
            
            if ((*(rdx_4 - 0x14)).d f!= *(rcx_9 - 0x14))
                goto label_140f8fb6e
            
            if ((*(rdx_4 - 0x10)).d f!= *(rcx_9 - 0x10))
                goto label_140f8fb6e
            
            if ((*(rdx_4 - 0xc)).d f!= *(rcx_9 - 0xc))
                goto label_140f8fb6e
            
            if ((*(rdx_4 - 8)).d f!= *(rcx_9 - 8))
                goto label_140f8fb6e
            
            if ((*(rdx_4 - 4)).d f!= *(rcx_9 - 4))
                goto label_140f8fb6e
            
            if ((*rdx_4).d f!= *rcx_9)
                goto label_140f8fb6e
            
            if ((*(rdx_4 + 4)).d f!= *(rcx_9 + 4))
                goto label_140f8fb6e
            
            if ((*(rdx_4 + 8)).d f!= *(rcx_9 + 8))
                goto label_140f8fb6e
            
            rdx_4 += 0x24
            rcx_9 += 0x24
            i = i_1
            i_1 -= 1
        while (i != 1)

if ((*arg6).d f!= *(arg1 + 0x8c4) || (*(arg6 + 4)).d f!= *(arg1 + 0x8c8)
        || (*(arg6 + 8)).d f!= *(arg1 + 0x8cc) || not((*(arg6 + 0xc)).d f== *(arg1 + 0x8d0)))
    r14.b = 1
    *(arg1 + 0x8c4) = *arg6

if (rbp_1 != 0)
    char var_38_1 = 0
    char var_44_1 = 0
    
    if (rsi != 0)
        sub_140a74f90(rsi)

__security_check_cookie(rax_1 ^ &var_98)
return zx.q(r14.b)
