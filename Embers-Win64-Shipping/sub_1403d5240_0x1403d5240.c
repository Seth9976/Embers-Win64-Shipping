// 函数: sub_1403d5240
// 地址: 0x1403d5240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg14[0].o
int128_t var_68 = arg13[0].o
int128_t var_78 = arg12[0].o
int128_t var_88 = arg11[0].o
int128_t var_98 = arg10[0].o
int128_t var_a8 = arg9[0].o
int128_t var_b8 = arg8[0].o
int128_t var_c8 = arg7[0].o
uint128_t var_d8 = arg6[0]
int128_t var_e8 = arg5[0].o
void* r12 = arg1
uint64_t r9 = zx.q(*(arg1 + 0x25d))
int64_t rbx_1 = zx.q(*(arg2 + 0x13)) + 7
int32_t var_1a8 = rbx_1.d
uint64_t rbx_2 = rbx_1 u>> 3
int64_t r15 = *(arg2 + 8)
uint64_t result_1 = zx.q(*(arg1 + 0x3b1))
void* r11 = *(arg1 + 0x1f8)
void* r14 = *(arg1 + 0x200)
int32_t r10 = 0x7fffffff
uint64_t var_198 = rbx_2
int16_t zmm0[0x10]
int32_t zmm1[0x8]
int32_t zmm4[0x8]
int32_t zmm5[0x8]

if (r9.d != 8 && (r9.d & 8) != 0)
    int32_t rax_3
    
    if (r15 == 0)
        rax_3 = 0
        
        if (*(r12 + 0x3b0) == 2)
        label_1403d54fb:
            uint32_t rcx_2 = zx.d(rax_3.w)
            uint32_t rax_7 = rax_3 u>> 0xa & 0xffffffc0
            
            if (result_1.b != 0)
                char* rbp_6 = *(r12 + 0x3b8)
                uint64_t rdi_3 = zx.q(result_1.d) & 1
                int64_t i
                
                if (result_1.b != 1)
                    i = 0
                    
                    do
                        if (rbp_6[i] == 0)
                            uint32_t rdx_5 = zx.d(*(*(r12 + 0x3c0) + (i << 1)))
                            rcx_2 = (rcx_2 * rdx_5) u>> 8
                            rax_7 = (rax_7 * rdx_5) u>> 8
                            
                            if (rbp_6[i + 1] == 0)
                            label_1403d5587:
                                uint32_t rdx_7 = zx.d(*(*(r12 + 0x3c0) + (i << 1) + 2))
                                rcx_2 = (rcx_2 * rdx_7) u>> 8
                                rax_7 = (rax_7 * rdx_7) u>> 8
                        else if (rbp_6[i + 1] == 0)
                            goto label_1403d5587
                        
                        i += 2
                    while (result_1 - rdi_3 != i)
                    
                    if (rdi_3 != 0)
                        goto label_1403d552c
                else
                    i = 0
                    
                    if (rdi_3 != 0)
                    label_1403d552c:
                        
                        if (rbp_6[i] == 0)
                            uint32_t rdx_3 = zx.d(*(*(r12 + 0x3c0) + (i << 1)))
                            rcx_2 = (rcx_2 * rdx_3) u>> 8
                            rax_7 = (rax_7 * rdx_3) u>> 8
            
            arg2 = zx.q(**(r12 + 0x3d0))
            int32_t rax_11 = rax_7 * arg2.d
            rbx_2 = var_198
            
            if (rax_11 u<= 0x1fffe07)
                r10 = ((rcx_2 * arg2.d) u>> 3) + ((rax_11 & 0xfffffff8) << 7)
        else
            r10 = rax_3
            rbx_2 = var_198
    else
        int64_t rcx
        
        if (r15 u>= 0x10)
            rcx = r15 & 0xfffffffffffffff0
            uint64_t rax_5 = zx.q((((rcx - 0x10) u>> 4) + 1).d) & 1
            int64_t rbp_3
            
            if (rcx == 0x10)
                zmm0[0].o = zx.o(0)
                rbp_3 = 0
                zmm1[0].o = zx.o(0)
                
                if (rax_5 != 0)
                label_1403d543f:
                    arg3[0].o = __vpmovsxbw_xmmdq_memq(*(r14 + rbp_3 + 1))
                    arg4[0].o = __vpmovsxbw_xmmdq_memq(*(r14 + rbp_3 + 9))
                    zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm0[0].o)
                    zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm0[0].o)
                    zmm5 = _mm256_cvtepu8_epi32(zmm5[0].q)
                    arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    arg4[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(arg4[0].o, arg5[0].o)
                    arg6 = __vpbroadcastd_ymmqq_memd(0x100)
                    arg4 = _mm256_cvtepi16_epi32(arg4[0].o)
                    arg7 = _mm256_sub_epi32(arg6, zmm5)
                    arg4 = _mm256_blendv_ps(arg7, zmm5, arg4)
                    zmm4 = _mm256_cvtepu8_epi32(zmm4[0].q)
                    zmm1 = _mm256_add_epi32(arg4, zmm1)
                    arg3[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(arg3[0].o, arg5[0].o)
                    arg3 = _mm256_cvtepi16_epi32(arg3[0].o)
                    arg4 = _mm256_sub_epi32(arg6, zmm4)
                    arg3 = _mm256_blendv_ps(arg4, zmm4, arg3)
                    zmm0 = _mm256_add_epi32(arg3, zmm0)
            else
                int64_t i_31 = rax_5 + 0 - ((rcx - 0x10) u>> 4) - 1
                zmm0[0].o = zx.o(0)
                rbp_3 = 0
                arg3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
                arg4 = __vpbroadcastd_ymmqq_memd(0x100)
                zmm1[0].o = zx.o(0)
                int64_t i_1
                
                do
                    zmm4[0].o = __vpmovsxbw_xmmdq_memq(*(r14 + rbp_3 + 1))
                    zmm5[0].o = __vpmovsxbw_xmmdq_memq(*(r14 + rbp_3 + 9))
                    arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    arg5 = _mm256_cvtepu8_epi32(arg5[0].q)
                    arg6[0] = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    arg6 = _mm256_cvtepu8_epi32(arg6[0].q)
                    zmm4[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg3[0].o)
                    zmm4 = _mm256_cvtepi16_epi32(zmm4[0].o)
                    zmm5[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg3[0].o)
                    zmm5 = _mm256_cvtepi16_epi32(zmm5[0].o)
                    arg7 = _mm256_sub_epi32(arg4, arg5)
                    arg8 = _mm256_sub_epi32(arg4, arg6)
                    zmm4 = _mm256_blendv_ps(arg7, arg5, zmm4)
                    zmm5 = _mm256_blendv_ps(arg8, arg6, zmm5)
                    zmm0 = _mm256_add_epi32(zmm4, zmm0)
                    zmm1 = _mm256_add_epi32(zmm5, zmm1)
                    zmm4[0].o = __vpmovsxbw_xmmdq_memq(*(r14 + rbp_3 + 0x11))
                    zmm5[0].o = __vpmovsxbw_xmmdq_memq(*(r14 + rbp_3 + 0x19))
                    arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    arg5 = _mm256_cvtepu8_epi32(arg5[0].q)
                    arg6[0] = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    arg6 = _mm256_cvtepu8_epi32(arg6[0].q)
                    zmm4[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg3[0].o)
                    zmm4 = _mm256_cvtepi16_epi32(zmm4[0].o)
                    zmm5[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg3[0].o)
                    zmm5 = _mm256_cvtepi16_epi32(zmm5[0].o)
                    arg7 = _mm256_sub_epi32(arg4, arg5)
                    arg8 = _mm256_sub_epi32(arg4, arg6)
                    zmm4 = _mm256_blendv_ps(arg7, arg5, zmm4)
                    zmm5 = _mm256_blendv_ps(arg8, arg6, zmm5)
                    zmm0 = _mm256_add_epi32(zmm4, zmm0)
                    zmm1 = _mm256_add_epi32(zmm5, zmm1)
                    rbp_3 += 0x20
                    i_1 = i_31
                    i_31 += 2
                while (i_1 != -2)
                
                if (rax_5 != 0)
                    goto label_1403d543f
            zmm0 = _mm256_add_epi32(zmm1, zmm0)
            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm0 = _mm256_add_epi32(zmm0, zmm1)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            zmm0 = _mm256_add_epi32(zmm0, zmm1)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xe5)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            rax_3 = zmm0[0].d
            
            if (r15 != rcx)
                arg2 = r14 + rcx
                goto label_1403d54cd
        else
            rax_3 = 0
            arg2 = r14
            rcx = 0
        label_1403d54cd:
            int64_t i_2 = 0
            
            do
                uint32_t rbx_4 = zx.d(*(arg2 + i_2 + 1))
                uint32_t rdi_1 = 0x100 - rbx_4
                
                if (rbx_4.b s>= 0)
                    rdi_1 = rbx_4
                
                rax_3 += rdi_1
                i_2 += 1
            while (r15 - rcx != i_2)
        
        if (*(r12 + 0x3b0) == 2)
            goto label_1403d54fb
        
        r10 = rax_3
        rbx_2 = var_198

int64_t var_1b8 = r15
int32_t var_158 = r9.d
uint64_t result_2 = result_1
uint64_t rdi_4
uint64_t r8

if (r9.b == 0x10)
    void* r15_1 = r14 + 1
    char* rcx_10 = *(r12 + 0x208) + 1
    void* rax_15
    
    if (rbx_2.d == 0)
        rax_15 = r15_1
    else
        uint64_t rbp_8 = zx.q(rbx_2.d) & 7
        
        if (rbx_2 - 1 u>= 7)
            arg2 = rbp_8 - rbx_2
            rax_15 = r15_1
            uint64_t i_3
            
            do
                *rcx_10 = *rax_15
                rcx_10[1] = *(rax_15 + 1)
                rcx_10[2] = *(rax_15 + 2)
                rcx_10[3] = *(rax_15 + 3)
                rcx_10[4] = *(rax_15 + 4)
                rcx_10[5] = *(rax_15 + 5)
                rcx_10[6] = *(rax_15 + 6)
                rcx_10[7] = *(rax_15 + 7)
                rax_15 += 8
                rcx_10 = &rcx_10[8]
                i_3 = arg2
                arg2 += 8
            while (i_3 != -8)
            rbx_2 = var_198
            
            if (rbp_8 != 0)
                goto label_1403d572e
        else
            rax_15 = r15_1
            
            if (rbp_8 != 0)
            label_1403d572e:
                int64_t i_33 = neg.q(rbp_8)
                int64_t i_4
                
                do
                    *rcx_10 = *rax_15
                    rax_15 += 1
                    rcx_10 = &rcx_10[1]
                    i_4 = i_33
                    i_33 += 1
                while (i_4 != -1)
    
    int64_t r9_3 = var_1b8 - rbx_2
    
    if (var_1b8 u> rbx_2)
        void* rbp_11
        char* rdi_5
        
        if (r9_3 u> 0x7f)
            void* r13 = r11
            int32_t rsi_3 = r10
            void* rbp_12 = &rcx_10[r9_3]
            r10.b = rcx_10 u< var_1b8 + 1 - rbx_2 + r14
            r11.b = r15_1 u< rbp_12
            arg2.b = rcx_10 u< rax_15 + r9_3
            r8.b = rax_15 u< rbp_12
            
            if ((r10.b & r11.b) != 0)
                rbp_11 = rax_15
                rdi_5 = rcx_10
                r8 = var_198
                r10 = rsi_3
                r11 = r13
                rbx_2 = var_198
            label_1403d637a:
                result_1 = result_2
                goto label_1403d638f
            
            arg2.b &= r8.b
            r10 = rsi_3
            r11 = r13
            
            if (arg2.b != 0)
                rbp_11 = rax_15
                rdi_5 = rcx_10
                rbx_2 = var_198
                r8 = rbx_2
                goto label_1403d637a
            
            arg2 = r9_3 & 0xffffffffffffff80
            rbp_11 = rax_15 + arg2
            r15_1 += arg2
            rdi_5 = &rcx_10[arg2]
            rbx_2 = var_198
            r8 = rbx_2 | arg2
            int64_t rsi_4 = 0
            
            do
                zmm1 = *(rax_15 + rsi_4 + 0x20)
                arg3 = *(rax_15 + rsi_4 + 0x40)
                arg4 = *(rax_15 + rsi_4 + 0x60)
                zmm0 = __vpsubb_ymmqq_ymmqq_memqq(*(rax_15 + rsi_4), *(r14 + rsi_4 + 1))
                zmm1 = __vpsubb_ymmqq_ymmqq_memqq(zmm1, *(r14 + rsi_4 + 0x21))
                arg3 = __vpsubb_ymmqq_ymmqq_memqq(arg3, *(r14 + rsi_4 + 0x41))
                arg4 = __vpsubb_ymmqq_ymmqq_memqq(arg4, *(r14 + rsi_4 + 0x61))
                *(rcx_10 + rsi_4) = zmm0
                *(rcx_10 + rsi_4 + 0x20) = zmm1
                *(rcx_10 + rsi_4 + 0x40) = arg3
                *(rcx_10 + rsi_4 + 0x60) = arg4
                rsi_4 -= -0x80
            while (arg2 != rsi_4)
            
            result_1 = result_2
            
            if (r9_3 != arg2)
                goto label_1403d638f
        else
            rbp_11 = rax_15
            rdi_5 = rcx_10
            r8 = rbx_2
        label_1403d638f:
            int64_t rsi_33 = not.q(r8) + var_1b8
            int64_t rcx_52 = zx.q(var_1b8.d - r8.d) & 3
            
            if (rcx_52 != 0)
                arg2 = 0
                
                do
                    *rdi_5 = *rbp_11 - *r15_1
                    rbp_11 += 1
                    r15_1 += 1
                    rdi_5 = &rdi_5[1]
                    arg2 -= 1
                while (neg.q(rcx_52) != arg2)
                
                r8 -= arg2
            
            if (rsi_33 u>= 3)
                int64_t i_5 = 0
                
                do
                    rdi_5[i_5] = *(rbp_11 + i_5) - *(r15_1 + i_5)
                    rdi_5[i_5 + 1] = *(rbp_11 + i_5 + 1) - *(r15_1 + i_5 + 1)
                    rdi_5[i_5 + 2] = *(rbp_11 + i_5 + 2) - *(r15_1 + i_5 + 2)
                    arg2.b = *(rbp_11 + i_5 + 3) - *(r15_1 + i_5 + 3)
                    rdi_5[i_5 + 3] = arg2.b
                    i_5 += 4
                while (var_1b8 - r8 != i_5)
    
    rdi_4 = *(r12 + 0x208)
    r15 = var_1b8
    r9 = zx.q(var_158)
    goto label_1403d6434

if ((r9.b & 0x10) != 0)
    void* r11_1 = r14 + 1
    void* rbp_10 = *(r12 + 0x208)
    char* r15_2 = rbp_10 + 1
    r8 = zx.q(rbx_2.d)
    int32_t rax_16
    void* rbx_14
    int32_t rbp_13
    
    if (rbx_2.d == 0)
        rax_16 = r10
        rbp_13 = 0
        rbx_14 = r11_1
    else
        uint64_t r10_2
        
        if (var_1a8 u> 0x7f)
            rax_16 = r10
            
            if (r15_2 u< r14 + r8 + 1 && r11_1 u< r8 + rbp_10 + 1)
                goto label_1403d5a4e
            
            r10_2 = zx.q(r8.d) & 0xfffffff0
            uint64_t r9_9 = zx.q((((r10_2 - 0x10) u>> 4) + 1).d) & 1
            int64_t rsi_30
            
            if (r10_2 == 0x10)
                zmm0[0].o = zx.o(0)
                rsi_30 = 0
                zmm1[0].o = zx.o(0)
            else
                int64_t i_32 = r9_9 + 0 - ((r10_2 - 0x10) u>> 4) - 1
                zmm0[0].o = zx.o(0)
                rsi_30 = 0
                arg3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
                arg4 = __vpbroadcastd_ymmqq_memd(0x100)
                zmm1[0].o = zx.o(0)
                int64_t i_6
                
                do
                    zmm4[0].o = __vpmovsxbw_xmmdq_memq(*(r14 + rsi_30 + 1))
                    zmm5[0].o = __vpmovsxbw_xmmdq_memq(*(r14 + rsi_30 + 9))
                    arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                    *(rbp_10 + rsi_30 + 1) = arg5[0].o
                    arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    arg6[0] = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    arg5 = _mm256_cvtepu8_epi32(arg5[0].q)
                    arg6 = _mm256_cvtepu8_epi32(arg6[0].q)
                    zmm4[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg3[0].o)
                    zmm4 = _mm256_cvtepi16_epi32(zmm4[0].o)
                    zmm5[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg3[0].o)
                    zmm5 = _mm256_cvtepi16_epi32(zmm5[0].o)
                    arg7 = _mm256_sub_epi32(arg4, arg5)
                    arg8 = _mm256_sub_epi32(arg4, arg6)
                    zmm0 = _mm256_add_epi32(_mm256_blendv_ps(arg7, arg5, zmm4), zmm0)
                    zmm4 = _mm256_blendv_ps(arg8, arg6, zmm5)
                    zmm1 = _mm256_add_epi32(zmm4, zmm1)
                    zmm4[0].o = __vpmovsxbw_xmmdq_memq(*(r14 + rsi_30 + 0x11))
                    zmm5[0].o = __vpmovsxbw_xmmdq_memq(*(r14 + rsi_30 + 0x19))
                    arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                    *(rbp_10 + rsi_30 + 0x11) = arg5[0].o
                    arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                    arg6[0] = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    arg5 = _mm256_cvtepu8_epi32(arg5[0].q)
                    arg6 = _mm256_cvtepu8_epi32(arg6[0].q)
                    zmm4[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg3[0].o)
                    zmm4 = _mm256_cvtepi16_epi32(zmm4[0].o)
                    zmm5[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg3[0].o)
                    zmm5 = _mm256_cvtepi16_epi32(zmm5[0].o)
                    arg7 = _mm256_sub_epi32(arg4, arg5)
                    arg8 = _mm256_sub_epi32(arg4, arg6)
                    zmm4 = _mm256_blendv_ps(arg7, arg5, zmm4)
                    zmm5 = _mm256_blendv_ps(arg8, arg6, zmm5)
                    zmm0 = _mm256_add_epi32(zmm4, zmm0)
                    zmm1 = _mm256_add_epi32(zmm5, zmm1)
                    rsi_30 += 0x20
                    i_6 = i_32
                    i_32 += 2
                while (i_6 != -2)
            
            if (r9_9 != 0)
                arg3[0].o = __vpmovsxbw_xmmdq_memq(*(r11_1 + rsi_30))
                arg4[0].o = __vpmovsxbw_xmmdq_memq(*(r11_1 + rsi_30 + 8))
                zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4[0].o)
                *(r15_2 + rsi_30) = zmm4[0].o
                zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm0[0].o)
                zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm0[0].o)
                zmm5 = _mm256_cvtepu8_epi32(zmm5[0].q)
                arg5[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                arg4[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(arg4[0].o, arg5[0].o)
                arg6 = __vpbroadcastd_ymmqq_memd(0x100)
                arg4 = _mm256_cvtepi16_epi32(arg4[0].o)
                arg7 = _mm256_sub_epi32(arg6, zmm5)
                arg4 = _mm256_blendv_ps(arg7, zmm5, arg4)
                zmm4 = _mm256_cvtepu8_epi32(zmm4[0].q)
                zmm1 = _mm256_add_epi32(arg4, zmm1)
                arg3[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(arg3[0].o, arg5[0].o)
                arg3 = _mm256_cvtepi16_epi32(arg3[0].o)
                arg4 = _mm256_sub_epi32(arg6, zmm4)
                arg3 = _mm256_blendv_ps(arg4, zmm4, arg3)
                zmm0 = _mm256_add_epi32(arg3, zmm0)
            
            zmm0 = _mm256_add_epi32(zmm1, zmm0)
            r15_2 = &r15_2[r10_2]
            rbx_14 = r11_1 + r10_2
            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm0 = _mm256_add_epi32(zmm0, zmm1)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
            zmm0 = _mm256_add_epi32(zmm0, zmm1)
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xe5)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            rbp_13 = zmm0[0].d
            r9 = zx.q(var_158)
            
            if (r10_2 != r8)
                goto label_1403d5a59
        else
            rax_16 = r10
        label_1403d5a4e:
            r10_2 = 0
            rbp_13 = 0
            rbx_14 = r11_1
        label_1403d5a59:
            int64_t rcx_19 = not.q(r10_2)
            
            if ((r8.b & 1) != 0)
                arg2 = zx.q(*rbx_14)
                *r15_2 = arg2.b
                int32_t rsi_9 = 0x100 - arg2.d
                
                if (arg2.b s>= 0)
                    rsi_9 = arg2.d
                
                rbp_13 += rsi_9
                r10_2 |= 1
                rbx_14 += 1
                r15_2 = &r15_2[1]
            
            if (rcx_19 != neg.q(r8))
                uint64_t i_28 = r8 - r10_2
                uint64_t i_7
                
                do
                    uint32_t rdx_15 = zx.d(*rbx_14)
                    *r15_2 = rdx_15.b
                    uint32_t rsi_10 = 0x100 - rdx_15
                    
                    if (rdx_15.b s>= 0)
                        rsi_10 = rdx_15
                    
                    arg2 = zx.q(*(rbx_14 + 1))
                    r15_2[1] = arg2.b
                    int32_t rbp_15 = 0x100 - arg2.d
                    
                    if (arg2.b s>= 0)
                        rbp_15 = arg2.d
                    
                    rbp_13 = rbp_15 + rsi_10 + rbp_13
                    rbx_14 += 2
                    r15_2 = &r15_2[2]
                    i_7 = i_28
                    i_28 -= 2
                while (i_7 != 2)
    
    int64_t rcx_89 = var_1b8 - r8
    
    if (var_1b8 u<= r8)
        r10 = rax_16
        
        if (*(r12 + 0x3b0) == 2)
        label_1403d7746:
            uint32_t rax_66 = zx.d(rbp_13.w)
            uint32_t rcx_93 = rbp_13 u>> 0xa & 0xffffffc0
            
            if (result_1.b == 0)
                r15 = var_1b8
            else
                char* rbp_46 = *(r12 + 0x3b8)
                uint64_t rdi_39 = zx.q(result_1.d) & 1
                int64_t i_8
                
                if (result_1.b != 1)
                    i_8 = 0
                    r15 = var_1b8
                    
                    do
                        if (rbp_46[i_8] == 1)
                            uint32_t rdx_93 = zx.d(*(*(r12 + 0x3c8) + (i_8 << 1)))
                            rax_66 = (rax_66 * rdx_93) u>> 8
                            rcx_93 = (rcx_93 * rdx_93) u>> 8
                        
                        if (rbp_46[i_8 + 1] == 1)
                            uint32_t rdx_95 = zx.d(*(*(r12 + 0x3c8) + (i_8 << 1) + 2))
                            rax_66 = (rax_66 * rdx_95) u>> 8
                            rcx_93 = (rcx_93 * rdx_95) u>> 8
                        
                        i_8 += 2
                    while (result_1 - rdi_39 != i_8)
                    
                    if (rdi_39 != 0)
                        goto label_1403d77fd
                else
                    i_8 = 0
                    r15 = var_1b8
                    
                    if (rdi_39 != 0)
                    label_1403d77fd:
                        
                        if (rbp_46[i_8] == 1)
                            uint32_t rdx_97 = zx.d(*(*(r12 + 0x3c8) + (i_8 << 1)))
                            rax_66 = (rax_66 * rdx_97) u>> 8
                            rcx_93 = (rcx_93 * rdx_97) u>> 8
            
            arg2 = zx.q(*(*(r12 + 0x3d8) + 2))
            int32_t rcx_97 = rcx_93 * arg2.d
            rbp_13 = 0x7fffffff
            rbx_2 = var_198
            
            if (rcx_97 u<= 0x1fffe07)
                rbp_13 = ((rax_66 * arg2.d) u>> 3) + ((rcx_97 & 0xfffffff8) << 7)
        else
            r15 = var_1b8
            rbx_2 = var_198
    else if (rcx_89 u> 7)
        int64_t r9_22 = rcx_89 & 0xfffffffffffffff8
        zmm0[0].o = zx.o(rbp_13)
        uint64_t r10_13 = zx.q((((r9_22 - 8) u>> 3) + 1).d) & 1
        int64_t rsi_58
        
        if (r9_22 == 8)
            rsi_58 = 0
            
            if (r10_13 != 0)
            label_1403d7659:
                zmm1[0].o = __vpmovzxbw_xmmdq_memq(*(rbx_14 + rsi_58))
                arg3[0].o = __vpmovzxbw_xmmdq_memq(*(r11_1 + rsi_58))
                zmm1[0].o = __vpsubw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
                arg3[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 8)
                zmm1[0].o = __vpshufb_xmmdq_xmmdq_memdq(zmm1[0].o, data_1436ae7d0)
                arg3[0].o = __vpsraw_xmmdq_xmmdq_immb(arg3[0].o, 8)
                *(r15_2 + rsi_58) = zmm1[0].q
                zmm1 = _mm256_cvtepu8_epi32(zmm1[0].q)
                arg4[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg4[0].o, arg4[0].o)
                arg3[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4[0].o)
                arg3 = _mm256_cvtepi16_epi32(arg3[0].o)
                zmm1 = _mm256_blendv_ps(_mm256_sub_epi32(__vpbroadcastd_ymmqq_memd(0x100), zmm1), 
                    zmm1, arg3)
                zmm0 = _mm256_add_epi32(zmm1, zmm0)
        else
            int64_t i_35 = 0 - ((r9_22 - 8) u>> 3) + r10_13 - 1
            rsi_58 = 0
            zmm1[0].o = data_1436ae7d0
            arg3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
            arg4 = __vpbroadcastd_ymmqq_memd(0x100)
            int64_t i_9
            
            do
                zmm4[0].o = __vpmovzxbw_xmmdq_memq(*(rbx_14 + rsi_58))
                zmm5[0].o = __vpmovzxbw_xmmdq_memq(*(r14 + rsi_58 + 1))
                zmm4[0].o = __vpsubw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                zmm5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm4[0].o, 8)
                zmm5[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm5[0].o, 8)
                zmm4[0].o = __vpshufb_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                *(r15_2 + rsi_58) = zmm4[0].q
                zmm4 = _mm256_cvtepu8_epi32(zmm4[0].q)
                zmm5[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg3[0].o)
                zmm5 = _mm256_cvtepi16_epi32(zmm5[0].o)
                arg5 = _mm256_sub_epi32(arg4, zmm4)
                zmm4 = _mm256_blendv_ps(arg5, zmm4, zmm5)
                zmm5[0].o = __vpmovzxbw_xmmdq_memq(*(rbx_14 + rsi_58 + 8))
                arg5[0].o = __vpmovzxbw_xmmdq_memq(*(r14 + rsi_58 + 9))
                zmm5[0].o = __vpsubw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                arg5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 8)
                arg5[0].o = __vpsraw_xmmdq_xmmdq_immb(arg5[0].o, 8)
                zmm5[0].o = __vpshufb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                arg6 = _mm256_cvtepu8_epi32(zmm5[0].q)
                arg5[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg3[0].o)
                arg5 = _mm256_cvtepi16_epi32(arg5[0].o)
                arg7 = _mm256_sub_epi32(arg4, arg6)
                arg5 = _mm256_blendv_ps(arg7, arg6, arg5)
                zmm0 = _mm256_add_epi32(zmm4, zmm0)
                *(r15_2 + rsi_58 + 8) = zmm5[0].q
                zmm0 = _mm256_add_epi32(arg5, zmm0)
                rsi_58 += 0x10
                i_9 = i_35
                i_35 += 2
            while (i_9 != -2)
            
            if (r10_13 != 0)
                goto label_1403d7659
        zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
        zmm0 = _mm256_add_epi32(zmm0, zmm1)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
        zmm0 = _mm256_add_epi32(zmm0, zmm1)
        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xe5)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        rbp_13 = zmm0[0].d
        r10 = rax_16
        
        if (rcx_89 != r9_22)
            r8 += r9_22
            r11_1 += r9_22
            r15_2 = &r15_2[r9_22]
            rbx_14 += r9_22
            r9 = zx.q(var_158)
            goto label_1403d7707
        
        r9 = zx.q(var_158)
        
        if (*(r12 + 0x3b0) == 2)
            goto label_1403d7746
        
        r15 = var_1b8
        rbx_2 = var_198
    else
        r10 = rax_16
    label_1403d7707:
        arg2 = 0
        
        do
            char rax_65 = *(rbx_14 + arg2) - *(r11_1 + arg2)
            uint32_t rsi_59 = zx.d(rax_65)
            uint32_t rdi_37 = 0x100 - rsi_59
            
            if (rsi_59.b s>= 0)
                rdi_37 = rsi_59
            
            r15_2[arg2] = rax_65
            rbp_13 += rdi_37
            arg2 += 1
        while (var_1b8 - r8 != arg2)
        
        if (*(r12 + 0x3b0) == 2)
            goto label_1403d7746
        
        r15 = var_1b8
        rbx_2 = var_198
    
    rdi_4 = r14
    
    if (rbp_13 u>= r10)
    label_1403d6434:
        
        if (r9.b != 0x20)
            goto label_1403d5656
        
        goto label_1403d643e
    
    rdi_4 = *(r12 + 0x208)
    r10 = rbp_13
    
    if (r9.b == 0x20)
        goto label_1403d643e
    
    goto label_1403d5656

rdi_4 = r14

if (r9.b == 0x20)
label_1403d643e:
    arg2 = *(r12 + 0x210)
    
    if (r15 != 0)
        void* rax_37
        void* rcx_54
        uint64_t rbp_19
        int64_t rdi_13
        
        if (r15 u>= 0x80)
            int64_t rax_38 = arg2 + 1
            uint64_t rsi_34 = arg2
            int64_t rcx_56 = arg2 + r15 + 1
            r8.b = rax_38 u< r14 + r15 + 1
            arg2.b = r14 + 1 u< rcx_56
            rax_38.b = rax_38 u< r11 + r15 + 1
            rcx_56.b = r11 + 1 u< rcx_56
            rdi_13 = 0
            
            if ((r8.b & arg2.b) == 0)
                rax_38.b &= rcx_56.b
            
            if ((r8.b & arg2.b) != 0 || rax_38.b != 0)
                rax_37 = r14
                rcx_54 = r11
                rbp_19 = rsi_34
                goto label_1403d6542
            
            rdi_13 = r15 & 0xffffffffffffff80
            rax_37 = r14 + rdi_13
            rcx_54 = r11 + rdi_13
            rbp_19 = rsi_34 + rdi_13
            arg2 = 0
            
            do
                zmm1 = *(r14 + arg2 + 0x21)
                arg3 = *(r14 + arg2 + 0x41)
                arg4 = *(r14 + arg2 + 0x61)
                zmm0 = __vpsubb_ymmqq_ymmqq_memqq(*(r14 + arg2 + 1), *(r11 + arg2 + 1))
                zmm1 = __vpsubb_ymmqq_ymmqq_memqq(zmm1, *(r11 + arg2 + 0x21))
                arg3 = __vpsubb_ymmqq_ymmqq_memqq(arg3, *(r11 + arg2 + 0x41))
                arg4 = __vpsubb_ymmqq_ymmqq_memqq(arg4, *(r11 + arg2 + 0x61))
                *(rsi_34 + arg2 + 1) = zmm0
                *(rsi_34 + arg2 + 0x21) = zmm1
                *(rsi_34 + arg2 + 0x41) = arg3
                *(rsi_34 + arg2 + 0x61) = arg4
                arg2 -= -0x80
            while (rdi_13 != arg2)
            
            if (r15 != rdi_13)
                goto label_1403d6542
        else
            rdi_13 = 0
            rax_37 = r14
            rcx_54 = r11
            rbp_19 = arg2
        label_1403d6542:
            r8 = not.q(rdi_13) + r15
            int64_t rsi_36 = r15 & 3
            
            if (rsi_36 != 0)
                arg2 = 0
                
                do
                    *(rbp_19 + arg2 + 1) = *(rax_37 + arg2 + 1) - *(rcx_54 + arg2 + 1)
                    arg2 += 1
                while (rsi_36 != arg2)
                
                rax_37 += arg2
                rcx_54 += arg2
                rbp_19 += arg2
                rdi_13 += arg2
            
            if (r8 u>= 3)
                int64_t i_10 = 0
                
                do
                    *(rbp_19 + i_10 + 1) = *(rax_37 + i_10 + 1) - *(rcx_54 + i_10 + 1)
                    *(rbp_19 + i_10 + 2) = *(rax_37 + i_10 + 2) - *(rcx_54 + i_10 + 2)
                    *(rbp_19 + i_10 + 3) = *(rax_37 + i_10 + 3) - *(rcx_54 + i_10 + 3)
                    arg2.b = *(rax_37 + i_10 + 4) - *(rcx_54 + i_10 + 4)
                    *(rbp_19 + i_10 + 4) = arg2.b
                    i_10 += 4
                while (r15 - rdi_13 != i_10)
        rdi_4 = *(r12 + 0x210)
        rbx_2 = var_198
        
        if (r9.b == 0x40)
            goto label_1403d5bea
        
        goto label_1403d65d4
else
label_1403d5656:
    
    if ((r9.b & 0x20) != 0)
        int32_t rcx_12
        
        if (r15 != 0)
            int64_t rcx_11 = *(r12 + 0x210)
            int64_t rbx_5
            int64_t rbp_9
            void* r9_1
            
            if (r15 u>= 0x10)
                rbx_5 = r15 & 0xfffffffffffffff0
                r8 = r14 + rbx_5
                r9_1 = r11 + rbx_5
                rbp_9 = rcx_11 + rbx_5
                zmm0[0].o = zx.o(0)
                int64_t rsi_5 = 0
                arg7[0].o = data_1436ae7d0
                arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                arg4 = __vpbroadcastd_ymmqq_memd(0x100)
                zmm4[0].o = zx.o(0)
                
                do
                    zmm5[0].o = __vpmovzxbw_xmmdq_memq(*(r14 + rsi_5 + 1))
                    arg5[0].o = __vpmovzxbw_xmmdq_memq(*(r14 + rsi_5 + 9))
                    arg6[0] = __vpmovzxbw_xmmdq_memq(*(r11 + rsi_5 + 1))
                    zmm5[0].o = __vpsubw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0])
                    arg6[0] = __vpmovzxbw_xmmdq_memq(*(r11 + rsi_5 + 9))
                    arg5[0].o = __vpsubw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0])
                    arg6[0] = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 8)
                    arg6[0] = __vpsraw_xmmdq_xmmdq_immb(arg6[0], 8)
                    zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 8)
                    zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 8)
                    zmm5[0].o = __vpshufb_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
                    arg5[0].o = __vpshufb_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                    arg3[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                    *(rcx_11 + rsi_5 + 1) = arg3[0].o
                    arg3 = _mm256_cvtepu8_epi32(zmm5[0].q)
                    zmm5 = _mm256_cvtepu8_epi32(arg5[0].q)
                    arg5[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(arg6[0], arg8[0].o)
                    arg5 = _mm256_cvtepi16_epi32(arg5[0].o)
                    zmm1[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
                    zmm1 = _mm256_cvtepi16_epi32(zmm1[0].o)
                    arg6 = _mm256_sub_epi32(arg4, arg3)
                    arg9 = _mm256_sub_epi32(arg4, zmm5)
                    arg3 = _mm256_blendv_ps(arg6, arg3, arg5)
                    zmm1 = _mm256_blendv_ps(arg9, zmm5, zmm1)
                    zmm0 = _mm256_add_epi32(arg3, zmm0)
                    zmm4 = _mm256_add_epi32(zmm1, zmm4)
                    rsi_5 += 0x10
                while (rbx_5 != rsi_5)
                
                zmm0 = _mm256_add_epi32(zmm4, zmm0)
                zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                zmm0 = _mm256_add_epi32(zmm0, zmm1)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                zmm0 = _mm256_add_epi32(zmm0, zmm1)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xe5)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                rcx_12 = zmm0[0].d
                
                if (r15 != rbx_5)
                    goto label_1403d5992
            else
                rbx_5 = 0
                r8 = r14
                r9_1 = r11
                rbp_9 = rcx_11
                rcx_12 = 0
            label_1403d5992:
                int64_t i_11 = 0
                
                do
                    char rax_17 = *(r8 + i_11 + 1) - *(r9_1 + i_11 + 1)
                    uint32_t rsi_6 = zx.d(rax_17)
                    uint32_t rdi_7 = 0x100 - rsi_6
                    
                    if (rsi_6.b s>= 0)
                        rdi_7 = rsi_6
                    
                    *(rbp_9 + i_11 + 1) = rax_17
                    rcx_12 += rdi_7
                    i_11 += 1
                while (r15 - rbx_5 != i_11)
            
            if (*(r12 + 0x3b0) != 2)
                goto label_1403d5867
            
            goto label_1403d59d9
        
        rcx_12 = 0
        
        if (*(r12 + 0x3b0) == 2)
        label_1403d59d9:
            uint32_t rax_18 = zx.d(rcx_12.w)
            uint32_t rsi_8 = rcx_12 u>> 0xa & 0xffffffc0
            
            if (result_1.b == 0)
                r9 = zx.q(var_158)
            else
                char* rbp_14 = *(r12 + 0x3b8)
                r8 = zx.q(result_1.d) & 1
                int64_t i_12
                
                if (result_1.b != 1)
                    i_12 = 0
                    r9 = zx.q(var_158)
                    
                    do
                        if (rbp_14[i_12] == 2)
                            uint32_t rdx_17 = zx.d(*(*(r12 + 0x3c0) + (i_12 << 1)))
                            rax_18 = (rax_18 * rdx_17) u>> 8
                            rsi_8 = (rsi_8 * rdx_17) u>> 8
                        
                        if (rbp_14[i_12 + 1] == 2)
                            uint32_t rdx_19 = zx.d(*(*(r12 + 0x3c0) + (i_12 << 1) + 2))
                            rax_18 = (rax_18 * rdx_19) u>> 8
                            rsi_8 = (rsi_8 * rdx_19) u>> 8
                        
                        i_12 += 2
                    while (result_1 - r8 != i_12)
                    
                    if (r8 != 0)
                        goto label_1403d5b7d
                else
                    i_12 = 0
                    r9 = zx.q(var_158)
                    
                    if (r8 != 0)
                    label_1403d5b7d:
                        
                        if (rbp_14[i_12] == 2)
                            uint32_t rcx_25 = zx.d(*(*(r12 + 0x3c0) + (i_12 << 1)))
                            rax_18 = (rax_18 * rcx_25) u>> 8
                            rsi_8 = (rsi_8 * rcx_25) u>> 8
            
            arg2 = zx.q(*(*(r12 + 0x3d0) + 4))
            int32_t rsi_15 = rsi_8 * arg2.d
            rcx_12 = 0x7fffffff
            rbx_2 = var_198
            
            if (rsi_15 u<= 0x1fffe07)
                rcx_12 = ((rax_18 * arg2.d) u>> 3) + ((rsi_15 & 0xfffffff8) << 7)
            
            if (rcx_12 u< r10)
                rdi_4 = *(r12 + 0x210)
                r10 = rcx_12
        else
        label_1403d5867:
            rbx_2 = var_198
            r9 = zx.q(var_158)
            
            if (rcx_12 u< r10)
                rdi_4 = *(r12 + 0x210)
                r10 = rcx_12
    
    uint64_t var_120_1
    
    if (r9.b == 0x40)
    label_1403d5bea:
        void* r11_2 = r14 + 1
        void* rsi_18 = *(r12 + 0x218)
        int16_t (* rbp_16)[0x10] = rsi_18 + 1
        void* rax_26 = r11 + 1
        void* rdi_8
        
        if (rbx_2.d == 0)
            rdi_8 = r11_2
        else
            uint64_t rcx_27 = zx.q((rbx_2 - 1).d)
            
            if (rcx_27 + 1 u<= 0x7f)
            label_1403d5c24:
                r9 = 0
                rdi_8 = r11_2
                goto label_1403d5c35
            
            r8.b = rbp_16 u< r14 + rcx_27 + 2
            void* rbx_22
            rbx_22.b = r11_2 u< rsi_18 + rcx_27 + 2
            void* rcx_42
            rcx_42.b = rbp_16 u< rcx_27 + r11 + 2
            void* rdx_39
            rdx_39.b = rax_26 u< rsi_18 + rcx_27 + 2
            
            if ((r8.b & rbx_22.b) != 0)
                r9 = 0
                rdi_8 = r11_2
                rbx_2 = var_198
            label_1403d5c35:
                r8 = zx.q(not.d(r9.d) + rbx_2.d)
                int32_t rsi_21 = (rbx_2.d - r9.d) & 3
                
                if (rsi_21 != 0)
                    int32_t i_13 = 0
                    
                    do
                        char rcx_28 = *rdi_8
                        rdi_8 += 1
                        *rbp_16 = rcx_28 - (*rax_26 u>> 1)
                        rbp_16 += 1
                        rax_26 += 1
                        i_13 -= 1
                    while (neg.d(rsi_21) != i_13)
                    
                    r9 = zx.q(r9.d - i_13)
                    rbx_2 = var_198
                
                if (r8.d u>= 3)
                    int32_t i_36 = rbx_2.d - r9.d
                    int32_t i_14
                    
                    do
                        *rbp_16 = *rdi_8 - (*rax_26 u>> 1)
                        *(rbp_16 + 1) = *(rdi_8 + 1) - (*(rax_26 + 1) u>> 1)
                        (*rbp_16)[1].b = *(rdi_8 + 2) - (*(rax_26 + 2) u>> 1)
                        char rcx_32 = *(rdi_8 + 3)
                        rdi_8 += 4
                        *(rbp_16 + 3) = rcx_32 - (*(rax_26 + 3) u>> 1)
                        rbp_16 = &(*rbp_16)[2]
                        rax_26 += 4
                        i_14 = i_36
                        i_36 -= 4
                    while (i_14 != 4)
            else
                rcx_42.b &= rdx_39.b
                rbx_2 = var_198
                
                if (rcx_42.b != 0)
                    goto label_1403d5c24
                
                r9 = rcx_27 + 1 - zx.q(rbx_2.d)
                rax_26 += r9
                rbp_16 += r9
                rdi_8 = r11_2 + r9
                int64_t rcx_44 = 0
                zmm0 = data_1436ae820
                
                do
                    arg3 = *(r14 + rcx_44 + 0x21)
                    arg4 = *(r14 + rcx_44 + 0x41)
                    zmm4 = *(r14 + rcx_44 + 0x61)
                    arg5 = *(r11 + rcx_44 + 0x21)
                    arg6 = *(r11 + rcx_44 + 0x41)
                    arg7 = *(r11 + rcx_44 + 0x61)
                    zmm1 = _mm256_sub_epi8(*(r14 + rcx_44 + 1), 
                        _mm256_srli_epi16(*(r11 + rcx_44 + 1), 1) & zmm0)
                    arg3 = _mm256_sub_epi8(arg3, _mm256_srli_epi16(arg5, 1) & zmm0)
                    arg4 = _mm256_sub_epi8(arg4, _mm256_srli_epi16(arg6, 1) & zmm0)
                    zmm5 = _mm256_srli_epi16(arg7, 1) & zmm0
                    zmm4 = _mm256_sub_epi8(zmm4, zmm5)
                    *(rsi_18 + rcx_44 + 1) = zmm1
                    *(rsi_18 + rcx_44 + 0x21) = arg3
                    *(rsi_18 + rcx_44 + 0x41) = arg4
                    *(rsi_18 + rcx_44 + 0x61) = zmm4
                    rcx_44 -= -0x80
                while (r9 != rcx_44)
                
                if (rbx_2.d != 0)
                    goto label_1403d5c35
        
        uint64_t rcx_33 = zx.q(rbx_2.d)
        void* r10_4 = r15 - rcx_33
        
        if (r15 u> rcx_33)
            int32_t r9_23
            
            if (r10_4 u<= 0x1f)
            label_1403d5ed9:
                r9_23 = var_198.d
            label_1403d5ee2:
                int64_t rcx_39 = 0
                uint64_t rdx_36
                
                do
                    *(rbp_16 + rcx_39) = *(rdi_8 + rcx_39)
                        - ((zx.d(*(r11_2 + rcx_39)) + zx.d(*(rax_26 + rcx_39))) u>> 1).b
                    rdx_36 = zx.q(r9_23 + 1 + rcx_39.d)
                    rcx_39 += 1
                while (r15 u> rdx_36)
            else
                int64_t rdx_26 = not.q(rcx_33) + r15
                
                if (0xfffffffe - var_198.d u< rdx_26.d || rdx_26 u>> 0x20 != 0)
                    goto label_1403d5ed9
                
                void* rbx_18 = r10_4 + rbp_16
                r15.b = rbp_16 u< r15 + 1 - rcx_33 + r14
                r9.b = r11_2 u< rbx_18
                int64_t rcx_34
                rcx_34.b = rbp_16 u< rdi_8 + r10_4
                r8.b = rdi_8 u< rbx_18
                void* rdx_30
                rdx_30.b = rbp_16 u< rax_26 + r10_4
                rbx_18.b = rax_26 u< rbx_18
                
                if ((r15.b & r9.b) != 0)
                    r9_23 = var_198.d
                    r15 = var_1b8
                    goto label_1403d5ee2
                
                rcx_34.b &= r8.b
                r15 = var_1b8
                
                if (rcx_34.b != 0)
                    goto label_1403d5ed9
                
                rdx_30.b &= rbx_18.b
                
                if (rdx_30.b != 0)
                    goto label_1403d5ed9
                
                r8 = r10_4 & 0xffffffffffffffe0
                uint64_t r9_6 = zx.q((((r8 - 0x20) u>> 5) + 1).d) & 1
                int64_t rsi_25
                
                if (r8 == 0x20)
                    rsi_25 = 0
                else
                    int64_t i_29 = r9_6 + 0 - ((r8 - 0x20) u>> 5) - 1
                    rsi_25 = 0
                    int64_t i_15
                    
                    do
                        zmm0 = __vpmovzxbd_ymmqq_memq(*(rax_26 + rsi_25 + 8))
                        zmm1 = __vpmovzxbd_ymmqq_memq(*(rax_26 + rsi_25))
                        arg3 = __vpmovzxbd_ymmqq_memq(*(rax_26 + rsi_25 + 0x18))
                        arg4 = __vpmovzxbd_ymmqq_memq(*(rax_26 + rsi_25 + 0x10))
                        zmm0 = _mm256_add_epi32(__vpmovzxbd_ymmqq_memq(*(r14 + rsi_25 + 9)), zmm0)
                        zmm4 = __vpmovzxbd_ymmqq_memq(*(r14 + rsi_25 + 1))
                        zmm5 = *(rdi_8 + rsi_25)
                        zmm1 = _mm256_add_epi32(zmm4, zmm1)
                        arg3 =
                            _mm256_add_epi32(__vpmovzxbd_ymmqq_memq(*(r14 + rsi_25 + 0x19)), arg3)
                        arg4 =
                            _mm256_add_epi32(__vpmovzxbd_ymmqq_memq(*(r14 + rsi_25 + 0x11)), arg4)
                        zmm0 = _mm256_srli_epi32(zmm0, 1)
                        zmm0 = _mm256_packus_epi32(_mm256_srli_epi32(zmm1, 1), zmm0)
                        zmm1 = _mm256_srli_epi32(arg3, 1)
                        zmm1 = _mm256_permute4x64_epi64(
                            _mm256_packus_epi32(_mm256_srli_epi32(arg4, 1), zmm1), 0xd8)
                        *(rbp_16 + rsi_25) = _mm256_sub_epi8(zmm5, 
                            _mm256_permute4x64_epi64(
                                _mm256_packus_epi16(_mm256_permute4x64_epi64(zmm0, 0xd8), zmm1), 
                                0xd8))
                        zmm0 = __vpmovzxbd_ymmqq_memq(*(rax_26 + rsi_25 + 0x28))
                        zmm1 = __vpmovzxbd_ymmqq_memq(*(rax_26 + rsi_25 + 0x20))
                        arg3 = __vpmovzxbd_ymmqq_memq(*(rax_26 + rsi_25 + 0x38))
                        arg4 = __vpmovzxbd_ymmqq_memq(*(rax_26 + rsi_25 + 0x30))
                        zmm0 =
                            _mm256_add_epi32(__vpmovzxbd_ymmqq_memq(*(r14 + rsi_25 + 0x29)), zmm0)
                        zmm4 = __vpmovzxbd_ymmqq_memq(*(r14 + rsi_25 + 0x21))
                        zmm5 = __vpmovzxbd_ymmqq_memq(*(r14 + rsi_25 + 0x39))
                        zmm1 = _mm256_add_epi32(zmm4, zmm1)
                        arg3 = _mm256_add_epi32(zmm5, arg3)
                        zmm4 = __vpmovzxbd_ymmqq_memq(*(r14 + rsi_25 + 0x31))
                        zmm5 = *(rdi_8 + rsi_25 + 0x20)
                        arg4 = _mm256_add_epi32(zmm4, arg4)
                        zmm0 = _mm256_srli_epi32(zmm0, 1)
                        zmm0 = _mm256_packus_epi32(_mm256_srli_epi32(zmm1, 1), zmm0)
                        zmm1 = _mm256_srli_epi32(arg3, 1)
                        arg3 = _mm256_srli_epi32(arg4, 1)
                        zmm1 = _mm256_permute4x64_epi64(_mm256_packus_epi32(arg3, zmm1), 0xd8)
                        zmm0 = _mm256_sub_epi8(zmm5, 
                            _mm256_permute4x64_epi64(
                                _mm256_packus_epi16(_mm256_permute4x64_epi64(zmm0, 0xd8), zmm1), 
                                0xd8))
                        *(rbp_16 + rsi_25 + 0x20) = zmm0
                        rsi_25 += 0x40
                        i_15 = i_29
                        i_29 += 2
                    while (i_15 != -2)
                
                if (r9_6 != 0)
                    zmm0 = __vpmovzxbd_ymmqq_memq(*(rax_26 + rsi_25 + 8))
                    zmm1 = __vpmovzxbd_ymmqq_memq(*(rax_26 + rsi_25))
                    arg3 = __vpmovzxbd_ymmqq_memq(*(rax_26 + rsi_25 + 0x18))
                    arg4 = __vpmovzxbd_ymmqq_memq(*(rax_26 + rsi_25 + 0x10))
                    zmm0 = _mm256_add_epi32(__vpmovzxbd_ymmqq_memq(*(r11_2 + rsi_25 + 8)), zmm0)
                    zmm4 = __vpmovzxbd_ymmqq_memq(*(r11_2 + rsi_25))
                    zmm5 = *(rdi_8 + rsi_25)
                    zmm1 = _mm256_add_epi32(zmm4, zmm1)
                    arg3 = _mm256_add_epi32(__vpmovzxbd_ymmqq_memq(*(r11_2 + rsi_25 + 0x18)), arg3)
                    zmm4 = __vpmovzxbd_ymmqq_memq(*(r11_2 + rsi_25 + 0x10))
                    arg4 = _mm256_add_epi32(zmm4, arg4)
                    zmm0 = _mm256_srli_epi32(zmm0, 1)
                    zmm0 = _mm256_packus_epi32(_mm256_srli_epi32(zmm1, 1), zmm0)
                    zmm1 = _mm256_srli_epi32(arg3, 1)
                    arg3 = _mm256_srli_epi32(arg4, 1)
                    zmm1 = _mm256_permute4x64_epi64(_mm256_packus_epi32(arg3, zmm1), 0xd8)
                    zmm0 = _mm256_sub_epi8(zmm5, 
                        _mm256_permute4x64_epi64(
                            _mm256_packus_epi16(_mm256_permute4x64_epi64(zmm0, 0xd8), zmm1), 0xd8))
                    *(rbp_16 + rsi_25) = zmm0
                
                if (r10_4 != r8)
                    r9_23 = var_198.d + r8.d
                    r11_2 += r8
                    rax_26 += r8
                    rbp_16 += r8
                    rdi_8 += r8
                    goto label_1403d5ee2
        
        var_120_1 = *(r12 + 0x218)
        rbx_2 = var_198
        r9 = zx.q(var_158)
        
        if (r9.b == 0x80)
            goto label_1403d6ae0
        
        goto label_1403d5f48
    
label_1403d65d4:
    var_120_1 = rdi_4
    
    if ((r9.b & 0x40) != 0)
        void* rcx_57 = *(r12 + 0x218)
        char* r10_6 = rcx_57 + 1
        char* rsi_39 = r11 + 1
        uint64_t r9_10 = zx.q(rbx_2.d)
        void* rbp_22
        
        if (rbx_2.d == 0)
            r8 = 0
            rbp_22 = r14 + 1
        else
            uint64_t rax_40
            
            if (var_1a8 u> 0x7f)
                void* rbp_24 = rcx_57 + r9_10 + 1
                uint64_t r13_2 = r9_10
                void* rdi_18 = r11 + r9_10 + 1
                r9_10.b = r10_6 u< r14 + r9_10 + 1
                rbx_2.b = r14 + 1 u< rbp_24
                arg2.b = r10_6 u< rdi_18
                r8.b = rsi_39 u< rbp_24
                rax_40 = 0
                
                if ((r9_10.b & rbx_2.b) == 0)
                    arg2.b &= r8.b
                
                if ((r9_10.b & rbx_2.b) != 0 || arg2.b != 0)
                    r8 = 0
                    rbp_22 = r14 + 1
                    r9_10 = r13_2
                    goto label_1403d678a
                
                r9_10 = r13_2
                rax_40 = zx.q(r9_10.d) & 0xfffffff0
                rsi_39 = &rsi_39[rax_40]
                r10_6 = &r10_6[rax_40]
                rbp_22 = r14 + 1 + rax_40
                zmm0[0].o = zx.o(0)
                int64_t rdi_19 = 0
                arg7[0].o = data_1436ae7d0
                arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                arg4 = __vpbroadcastd_ymmqq_memd(0x100)
                zmm4[0].o = zx.o(0)
                
                do
                    zmm5[0].o = __vpmovzxbw_xmmdq_memq(*(r14 + rdi_19 + 1))
                    arg5[0].o = __vpmovzxbw_xmmdq_memq(*(r14 + rdi_19 + 9))
                    arg6[0] = __vpmovzxbw_xmmdq_memq(*(r11 + rdi_19 + 1))
                    zmm1[0].o = __vpmovzxbw_xmmdq_memq(*(r11 + rdi_19 + 9))
                    arg6[0] = __vpsrlw_xmmdq_xmmdq_immb(arg6[0], 1)
                    zmm5[0].o = __vpsubw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0])
                    zmm1[0].o = __vpsrlw_xmmdq_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = __vpsubw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
                    arg5[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 8)
                    arg5[0].o = __vpsraw_xmmdq_xmmdq_immb(arg5[0].o, 8)
                    arg6[0] = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 8)
                    arg6[0] = __vpsraw_xmmdq_xmmdq_immb(arg6[0], 8)
                    zmm5[0].o = __vpshufb_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
                    zmm1[0].o = __vpshufb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
                    arg3[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                    *(rcx_57 + rdi_19 + 1) = arg3[0].o
                    arg3 = _mm256_cvtepu8_epi32(zmm5[0].q)
                    zmm1 = _mm256_cvtepu8_epi32(zmm1[0].q)
                    zmm5[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
                    zmm5 = _mm256_cvtepi16_epi32(zmm5[0].o)
                    arg5[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(arg6[0], arg8[0].o)
                    arg5 = _mm256_cvtepi16_epi32(arg5[0].o)
                    arg6 = _mm256_sub_epi32(arg4, arg3)
                    arg9 = _mm256_sub_epi32(arg4, zmm1)
                    arg3 = _mm256_blendv_ps(arg6, arg3, zmm5)
                    zmm1 = _mm256_blendv_ps(arg9, zmm1, arg5)
                    zmm0 = _mm256_add_epi32(arg3, zmm0)
                    zmm4 = _mm256_add_epi32(zmm1, zmm4)
                    rdi_19 += 0x10
                while (rax_40 != rdi_19)
                
                zmm0 = _mm256_add_epi32(zmm4, zmm0)
                zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                zmm0 = _mm256_add_epi32(zmm0, zmm1)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                zmm0 = _mm256_add_epi32(zmm0, zmm1)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xe5)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                r8 = zx.q(zmm0[0].d)
                
                if (rax_40 != r9_10)
                    goto label_1403d678a
            else
                rbp_22 = r14 + 1
                rax_40 = 0
                r8 = 0
            label_1403d678a:
                int64_t rdi_21 = not.q(rax_40)
                
                if ((r9_10.b & 1) != 0)
                    arg2.b = *rbp_22
                    rbp_22 += 1
                    rcx_57.b = *rsi_39
                    rcx_57.b u>>= 1
                    arg2.b -= rcx_57.b
                    *r10_6 = arg2.b
                    uint32_t rcx_58 = zx.d(arg2.b)
                    uint32_t rdx_50 = 0x100 - rcx_58
                    
                    if (rcx_58.b s>= 0)
                        rdx_50 = rcx_58
                    
                    r8 = zx.q(r8.d + rdx_50)
                    rax_40 |= 1
                    r10_6 = &r10_6[1]
                    rsi_39 = &rsi_39[1]
                
                if (rdi_21 != neg.q(r9_10))
                    uint64_t i_30 = r9_10 - rax_40
                    uint64_t i_16
                    
                    do
                        char rdx_51 = *rbp_22 - (*rsi_39 u>> 1)
                        *r10_6 = rdx_51
                        uint32_t rdx_52 = zx.d(rdx_51)
                        uint32_t rbx_27 = 0x100 - rdx_52
                        
                        if (rdx_52.b s>= 0)
                            rbx_27 = rdx_52
                        
                        char rdx_53 = *(rbp_22 + 1)
                        rbp_22 += 2
                        rdx_53 -= rsi_39[1] u>> 1
                        r10_6[1] = rdx_53
                        uint32_t rax_43 = zx.d(rdx_53)
                        uint32_t r8_8 = 0x100 - rax_43
                        
                        if (rax_43.b s>= 0)
                            r8_8 = rax_43
                        
                        r8 = zx.q(r8_8 + rbx_27 + r8.d)
                        r10_6 = &r10_6[2]
                        rsi_39 = &rsi_39[2]
                        i_16 = i_30
                        i_30 -= 2
                    while (i_16 != 2)
        
        void* r13_3 = r12
        int64_t r11_4 = r15 - r9_10
        
        if (r15 u> r9_10)
            uint64_t rcx_60
            char* rbx_29
            char* rdi_23
            void* r9_11
            void* r12_1
            
            if (r11_4 u> 7)
                void* r15_4 = r11_4 & 0xfffffffffffffff8
                rcx_60 = r9_10 + r15_4
                r12_1 = r14 + 1 + r15_4
                rbx_29 = rsi_39 + r15_4
                rdi_23 = r10_6 + r15_4
                r9_11 = r15_4 + rbp_22
                zmm0[0].o = zx.o(r8.d)
                int64_t rdx_54 = 0
                zmm1[0].o = data_1436ae7d0
                arg3 = data_1436ae7e0
                arg4 = __vpbroadcastd_ymmqq_memd(0x80)
                zmm4 = __vpbroadcastd_ymmqq_memd(0x100)
                
                do
                    zmm5 = __vpmovzxbd_ymmqq_memq(*(rbp_22 + rdx_54))
                    arg5 = __vpmovzxbd_ymmqq_memq(*(rsi_39 + rdx_54))
                    zmm5 = _mm256_sub_epi32(zmm5, 
                        _mm256_srli_epi32(
                            _mm256_add_epi32(__vpmovzxbd_ymmqq_memq(*(r14 + 1 + rdx_54)), arg5), 1))
                    arg5 = zmm5 & arg3
                    arg6 = _mm256_cmpgt_epi32(arg4, arg5)
                    arg7 = _mm256_sub_epi32(zmm4, arg5)
                    arg5 = _mm256_blendv_ps(arg7, arg5, arg6)
                    arg6[0] = _mm256_extracti128_si256(zmm5, 1)
                    zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0])
                    zmm5[0].o = __vpshufb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
                    *(r10_6 + rdx_54) = zmm5[0].q
                    zmm0 = _mm256_add_epi32(arg5, zmm0)
                    rdx_54 += 8
                while (r15_4 != rdx_54)
                
                zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                zmm0 = _mm256_add_epi32(zmm0, zmm1)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                zmm0 = _mm256_add_epi32(zmm0, zmm1)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xe5)
                zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                r8 = zx.q(zmm0[0].d)
                r15 = var_1b8
                
                if (r11_4 != r15_4)
                    goto label_1403d6935
            else
                rcx_60 = r9_10
                r12_1 = r14 + 1
                rbx_29 = rsi_39
                rdi_23 = r10_6
                r9_11 = rbp_22
            label_1403d6935:
                int64_t i_17 = 0
                
                do
                    char rbp_26 =
                        *(r9_11 + i_17) - ((zx.d(*(r12_1 + i_17)) + zx.d(rbx_29[i_17])) u>> 1).b
                    uint32_t rcx_64 = zx.d(rbp_26)
                    uint32_t rsi_41 = 0x100 - rcx_64
                    
                    if (rcx_64 u< 0x80)
                        rsi_41 = rcx_64
                    
                    rdi_23[i_17] = rbp_26
                    r8 = zx.q(r8.d + rsi_41)
                    i_17 += 1
                while (r15 - rcx_60 != i_17)
        
        r12 = r13_3
        
        if (*(r13_3 + 0x3b0) != 2)
            result_1 = result_2
            r9 = zx.q(var_158)
        else
            uint32_t rax_47 = zx.d(r8.w)
            uint32_t rcx_66 = r8.d u>> 0xa & 0xffffffc0
            result_1 = result_2
            r9 = zx.q(var_158)
            
            if (result_1.b != 0)
                char* rbp_27 = *(r12 + 0x3b8)
                uint64_t rdi_25 = zx.q(result_1.d) & 1
                int64_t i_18
                
                if (result_1.b != 1)
                    i_18 = 0
                    
                    do
                        if (rbp_27[i_18] == 0)
                            uint32_t rdx_56 = zx.d(*(*(r12 + 0x3c0) + (i_18 << 1)))
                            rax_47 = (rax_47 * rdx_56) u>> 8
                            rcx_66 = (rcx_66 * rdx_56) u>> 8
                            
                            if (rbp_27[i_18 + 1] == 0)
                            label_1403d6a27:
                                uint32_t rdx_58 = zx.d(*(*(r12 + 0x3c0) + (i_18 << 1) + 2))
                                rax_47 = (rax_47 * rdx_58) u>> 8
                                rcx_66 = (rcx_66 * rdx_58) u>> 8
                        else if (rbp_27[i_18 + 1] == 0)
                            goto label_1403d6a27
                        
                        i_18 += 2
                    while (result_1 - rdi_25 != i_18)
                    
                    if (rdi_25 != 0)
                        goto label_1403d6a5c
                else
                    i_18 = 0
                    
                    if (rdi_25 != 0)
                    label_1403d6a5c:
                        
                        if (rbp_27[i_18] == 0)
                            uint32_t rdx_60 = zx.d(*(*(r12 + 0x3c0) + (i_18 << 1)))
                            rax_47 = (rax_47 * rdx_60) u>> 8
                            rcx_66 = (rcx_66 * rdx_60) u>> 8
            
            uint32_t rdx_62 = zx.d(*(*(r12 + 0x3d0) + 6))
            int32_t rcx_70 = rcx_66 * rdx_62
            r8 = 0x7fffffff
            
            if (rcx_70 u<= 0x1fffe07)
                r8 = zx.q(((rax_47 * rdx_62) u>> 3) + ((rcx_70 & 0xfffffff8) << 7))
        
        rbx_2 = var_198
        
        if (r8.d u< r10)
            var_120_1 = *(r12 + 0x218)
            r10 = r8.d
    
    if (r9.b != 0x80)
    label_1403d5f48:
        
        if (r9.b s< 0)
            void* rbp_17 = *(r12 + 0x220)
            char* r13_1 = rbp_17 + 1
            void* rdx_37 = zx.q(rbx_2.d)
            char* rax_28
            void* rcx_40
            uint8_t (* rbx_20)[0x8]
            void* rbp_18
            int32_t r14_1
            
            if (rbx_2.d == 0)
                r14_1 = 0
                rcx_40 = r14 + 1
                rax_28 = r11 + 1
                rbx_20 = r14 + 1
                rbp_18 = r11 + 1
            else
                var_158.q = r14 + 1
                uint64_t rsi_28
                
                if (var_1a8 u> 0x7f)
                    r8.b = r13_1 u< r14 + rdx_37 + 1
                    rbx_20 = var_158.q
                    r9.b = rbx_20 u< rdx_37 + rbp_17 + 1
                    void* rax_30
                    rax_30.b = r13_1 u< rdx_37 + r11 + 1
                    int64_t rcx_46
                    rcx_46.b = r11 + 1 u< rdx_37 + rbp_17 + 1
                    rsi_28 = 0
                    
                    if ((r8.b & r9.b) == 0)
                        rax_30.b &= rcx_46.b
                    
                    if ((r8.b & r9.b) != 0 || rax_30.b != 0)
                        r14_1 = 0
                        rbp_18 = r11 + 1
                        rax_28 = rbp_18
                        rcx_40 = rbx_20
                        goto label_1403d709b
                    
                    rsi_28 = zx.q(rdx_37.d) & 0xfffffff0
                    r13_1 = &r13_1[rsi_28]
                    rax_28 = r11 + 1 + rsi_28
                    rcx_40 = &(*rbx_20)[rsi_28]
                    zmm0[0].o = zx.o(0)
                    int64_t rdi_12 = 0
                    arg7[0].o = data_1436ae7d0
                    arg8[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                    arg4 = __vpbroadcastd_ymmqq_memd(0x100)
                    zmm4[0].o = zx.o(0)
                    
                    do
                        zmm5[0].o = __vpmovzxbw_xmmdq_memq(*(r14 + rdi_12 + 1))
                        arg5[0].o = __vpmovzxbw_xmmdq_memq(*(r14 + rdi_12 + 9))
                        arg6[0] = __vpmovzxbw_xmmdq_memq(*(r11 + rdi_12 + 1))
                        zmm5[0].o = __vpsubw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0])
                        arg6[0] = __vpmovzxbw_xmmdq_memq(*(r11 + rdi_12 + 9))
                        arg5[0].o = __vpsubw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0])
                        arg6[0] = __vpsllw_xmmdq_xmmdq_immb(zmm5[0].o, 8)
                        arg6[0] = __vpsraw_xmmdq_xmmdq_immb(arg6[0], 8)
                        zmm1[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 8)
                        zmm1[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm1[0].o, 8)
                        zmm5[0].o = __vpshufb_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
                        arg5[0].o = __vpshufb_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
                        arg3[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                        *(rbp_17 + rdi_12 + 1) = arg3[0].o
                        arg3 = _mm256_cvtepu8_epi32(zmm5[0].q)
                        zmm5 = _mm256_cvtepu8_epi32(arg5[0].q)
                        arg5[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(arg6[0], arg8[0].o)
                        arg5 = _mm256_cvtepi16_epi32(arg5[0].o)
                        zmm1[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
                        zmm1 = _mm256_cvtepi16_epi32(zmm1[0].o)
                        arg6 = _mm256_sub_epi32(arg4, arg3)
                        arg9 = _mm256_sub_epi32(arg4, zmm5)
                        arg3 = _mm256_blendv_ps(arg6, arg3, arg5)
                        zmm1 = _mm256_blendv_ps(arg9, zmm5, zmm1)
                        zmm0 = _mm256_add_epi32(arg3, zmm0)
                        zmm4 = _mm256_add_epi32(zmm1, zmm4)
                        rdi_12 += 0x10
                    while (rsi_28 != rdi_12)
                    
                    zmm0 = _mm256_add_epi32(zmm4, zmm0)
                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                    zmm0 = _mm256_add_epi32(zmm0, zmm1)
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    zmm0 = _mm256_add_epi32(zmm0, zmm1)
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xe5)
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    r14_1 = zmm0[0].d
                    rbp_18 = r11 + 1
                    
                    if (rsi_28 != rdx_37)
                        goto label_1403d709b
                else
                    rsi_28 = 0
                    r14_1 = 0
                    rbp_18 = r11 + 1
                    rax_28 = rbp_18
                    rbx_20 = var_158.q
                    rcx_40 = rbx_20
                label_1403d709b:
                    int64_t r9_16 = not.q(rsi_28)
                    
                    if ((rdx_37.b & 1) != 0)
                        r8.b = *rcx_40
                        r8.b -= *rax_28
                        rcx_40 += 1
                        rax_28 = &rax_28[1]
                        uint32_t rdi_30 = zx.d(r8.b)
                        uint32_t rbp_36 = 0x100 - rdi_30
                        
                        if (rdi_30.b s>= 0)
                            rbp_36 = rdi_30
                        
                        *r13_1 = r8.b
                        r14_1 += rbp_36
                        rbp_18 = r11 + 1
                        rsi_28 |= 1
                        r13_1 = &r13_1[1]
                    
                    if (r9_16 != neg.q(rdx_37))
                        void* i_34 = rdx_37 - rsi_28
                        void* i_19
                        
                        do
                            char rbx_44 = *rcx_40 - *rax_28
                            *r13_1 = rbx_44
                            uint32_t rbx_45 = zx.d(rbx_44)
                            uint32_t rdi_31 = 0x100 - rbx_45
                            
                            if (rbx_45.b s>= 0)
                                rdi_31 = rbx_45
                            
                            char rbx_46 = *(rcx_40 + 1) - rax_28[1]
                            rcx_40 += 2
                            rax_28 = &rax_28[2]
                            uint32_t rsi_49 = zx.d(rbx_46)
                            uint32_t r14_3 = 0x100 - rsi_49
                            
                            if (rsi_49.b s>= 0)
                                r14_3 = rsi_49
                            
                            r13_1[1] = rbx_46
                            r14_1 = r14_3 + rdi_31 + r14_1
                            r13_1 = &r13_1[2]
                            i_19 = i_34
                            i_34 -= 2
                        while (i_19 != 2)
                        rbx_20 = var_158.q
                        rbp_18 = r11 + 1
            
            void* r9_19 = r15 - rdx_37
            
            if (r15 u<= rdx_37)
                result_1 = result_2
            else
                uint8_t (* var_198_2)[0x8]
                void* r8_14
                char* r11_7
                void* r12_4
                char* r15_7
                
                if (r9_19 u> 7)
                    void* r10_9 = r9_19 & 0xfffffffffffffff8
                    var_198_2 = rbx_20 + r10_9
                    r12_4 = r10_9 + rbp_18
                    r15_7 = rax_28 + r10_9
                    r11_7 = r10_9 + r13_1
                    r8_14 = rcx_40 + r10_9
                    zmm0[0].o = zx.o(r14_1)
                    int64_t rdx_81 = 0
                    arg8[0].o = data_1436ae7d0
                    arg10[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                    arg4 = __vpbroadcastd_ymmqq_memd(0x100)
                    
                    do
                        zmm4 = __vpmovzxbd_ymmqq_memq(*(rax_28 + rdx_81))
                        zmm5[0].o = _mm256_extracti128_si256(zmm4, 1)
                        zmm5[0].o = __vpackusdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                        arg5 = __vpmovzxbd_ymmqq_memq(*(rbp_18 + rdx_81))
                        arg6[0] = _mm256_extracti128_si256(arg5, 1)
                        arg6[0] = __vpackusdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0])
                        arg7 = __vpmovzxbd_ymmqq_memq(*(rbx_20 + rdx_81))
                        zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                        zmm1[0].o = __vpackusdw_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
                        zmm4 = _mm256_sub_epi32(zmm4, arg5)
                        arg5 = _mm256_sub_epi32(arg7, arg5)
                        arg7 = _mm256_abs_epi32(zmm4)
                        arg9 = _mm256_abs_epi32(arg5)
                        zmm4 = _mm256_abs_epi32(_mm256_add_epi32(arg5, zmm4))
                        arg5 = _mm256_cmpgt_epi32(arg7, arg9) | _mm256_cmpgt_epi32(arg7, zmm4)
                        arg3[0].o = _mm256_extracti128_si256(arg5, 1)
                        arg3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg3[0].o)
                        zmm4 = _mm256_cmpgt_epi32(arg9, zmm4)
                        arg5[0].o = _mm256_extracti128_si256(zmm4, 1)
                        zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                        zmm4[0].o =
                            __vpblendvb_xmmdq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0], zmm4[0].o)
                        zmm1[0].o =
                            __vpblendvb_xmmdq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o, arg3[0].o)
                        arg3[0].o = __vpmovzxbw_xmmdq_memq(*(rcx_40 + rdx_81))
                        zmm1[0].o = __vpsubw_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
                        arg3[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm1[0].o, 8)
                        arg3[0].o = __vpsraw_xmmdq_xmmdq_immb(arg3[0].o, 8)
                        arg3[0].o = __vpcmpgtw_xmmdq_xmmdq_xmmdq(arg3[0].o, arg10[0].o)
                        zmm1[0].o = __vpshufb_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg8[0].o)
                        zmm4 = _mm256_cvtepu8_epi32(zmm1[0].q)
                        arg3 = _mm256_cvtepi16_epi32(arg3[0].o)
                        zmm5 = _mm256_sub_epi32(arg4, zmm4)
                        arg3 = _mm256_blendv_ps(zmm5, zmm4, arg3)
                        *(r13_1 + rdx_81) = zmm1[0].q
                        zmm0 = _mm256_add_epi32(arg3, zmm0)
                        rdx_81 += 8
                    while (r10_9 != rdx_81)
                    
                    zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                    zmm0 = _mm256_add_epi32(zmm0, zmm1)
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                    zmm0 = _mm256_add_epi32(zmm0, zmm1)
                    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xe5)
                    zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                    r14_1 = zmm0[0].d
                    result_1 = result_2
                    rdx_37 += r10_9
                    
                    if (r9_19 != r10_9)
                        goto label_1403d72d2
                else
                    var_198_2 = rbx_20
                    r12_4 = rbp_18
                    r15_7 = rax_28
                    r11_7 = r13_1
                    r8_14 = rcx_40
                    result_1 = result_2
                label_1403d72d2:
                    int64_t i_20 = 0
                    
                    do
                        uint32_t r10_10 = zx.d(r15_7[i_20])
                        uint32_t rcx_78 = zx.d(*(r12_4 + i_20))
                        uint32_t r9_20 = zx.d((*var_198_2)[i_20])
                        uint32_t rbp_39 = r10_10 - rcx_78
                        int32_t rdi_34 = neg.d(rbp_39)
                        
                        if (neg.d(rbp_39) s< 0 != neg.d(rbp_39) == 0x80000000)
                            rdi_34 = rbp_39
                        
                        uint32_t rsi_52 = r9_20 - rcx_78
                        uint32_t rdx_84 = neg.d(rsi_52)
                        
                        if (neg.d(rsi_52) s< 0 != neg.d(rsi_52) == 0x80000000)
                            rdx_84 = rsi_52
                        
                        uint32_t rsi_53 = rsi_52 + rbp_39
                        int32_t rbx_48 = neg.d(rsi_53)
                        
                        if (neg.d(rsi_53) s< 0 != neg.d(rsi_53) == 0x80000000)
                            rbx_48 = rsi_53
                        
                        if (rdx_84 s<= rbx_48)
                            rcx_78 = r10_10
                        
                        uint32_t r10_11 = rcx_78
                        
                        if (rdi_34 s<= rbx_48)
                            r10_11 = r9_20
                        
                        if (rdi_34 s<= rdx_84)
                            rcx_78 = r10_11
                        
                        char rdx_85 = *(r8_14 + i_20) - rcx_78.b
                        uint32_t rcx_79 = zx.d(rdx_85)
                        uint32_t rbp_40 = 0x100 - rcx_79
                        
                        if (rcx_79.b s>= 0)
                            rbp_40 = rcx_79
                        
                        r11_7[i_20] = rdx_85
                        r14_1 += rbp_40
                        i_20 += 1
                    while (var_1b8 - rdx_37 != i_20)
            
            int32_t r8_15
            
            if (*(r12 + 0x3b0) != 2)
                r8_15 = r10
            else
                uint32_t rax_58 = zx.d(r14_1.w)
                uint32_t rcx_81 = r14_1 u>> 0xa & 0xffffffc0
                r8_15 = r10
                
                if (result_1.b != 0)
                    char* rdx_86 = *(r12 + 0x3b8)
                    uint64_t rbx_50 = zx.q(result_1.d) & 1
                    int64_t i_21
                    
                    if (result_1.b != 1)
                        i_21 = 0
                        
                        do
                            if (rdx_86[i_21] == 4)
                                uint32_t rsi_55 = zx.d(*(*(r12 + 0x3c0) + (i_21 << 1)))
                                rax_58 = (rax_58 * rsi_55) u>> 8
                                rcx_81 = (rcx_81 * rsi_55) u>> 8
                            
                            if (rdx_86[i_21 + 1] == 4)
                                uint32_t rsi_57 = zx.d(*(*(r12 + 0x3c0) + (i_21 << 1) + 2))
                                rax_58 = (rax_58 * rsi_57) u>> 8
                                rcx_81 = (rcx_81 * rsi_57) u>> 8
                            
                            i_21 += 2
                        while (result_1 - rbx_50 != i_21)
                        
                        if (rbx_50 != 0)
                            goto label_1403d740c
                    else
                        i_21 = 0
                        
                        if (rbx_50 != 0)
                        label_1403d740c:
                            
                            if (rdx_86[i_21] == 4)
                                uint32_t rdx_88 = zx.d(*(*(r12 + 0x3c0) + (i_21 << 1)))
                                rax_58 = (rax_58 * rdx_88) u>> 8
                                rcx_81 = (rcx_81 * rdx_88) u>> 8
                
                uint32_t rbp_41 = zx.d(*(*(r12 + 0x3d0) + 8))
                int32_t rcx_85 = rcx_81 * rbp_41
                r14_1 = 0x7fffffff
                
                if (rcx_85 u<= 0x1fffe07)
                    r14_1 = ((rax_58 * rbp_41) u>> 3) + ((rcx_85 & 0xfffffff8) << 7)
            
            arg2 = var_120_1
            
            if (r14_1 u< r8_15)
                arg2 = *(r12 + 0x220)
        else
            arg2 = var_120_1
    else
    label_1403d6ae0:
        int16_t (* rcx_74)[0x10] = *(r12 + 0x220) + 1
        uint64_t r8_10 = zx.q(rbx_2.d)
        void* rbx_30
        void* rdi_26
        int64_t r15_5
        
        if (rbx_2.d == 0)
            rdi_26 = r14 + 1
            rbx_30 = r11 + 1
            r15_5 = r15 - r8_10
            
            if (r15 u> r8_10)
            label_1403d6b1e:
                void* r9_13
                void* r10_7
                void* r11_5
                char* r13_4
                void* r15_6
                
                if (r15_5 u> 0x1f)
                    void* var_1b0_4 = r12
                    void* rsi_46 = rcx_74 + r15_5
                    int64_t rdx_69 = var_1b8 + 1 - r8_10
                    void* r14_2 = r14 + rdx_69
                    r12.b = rcx_74 u< r11 + rdx_69
                    void* r11_6
                    r11_6.b = r11 + 1 u< rsi_46
                    rdx_69.b = rcx_74 u< rbx_30 + r15_5
                    r10.b = rbx_30 u< rsi_46
                    void* r8_11
                    r8_11.b = rcx_74 u< rdi_26 + r15_5
                    result_1.b = rdi_26 u< rsi_46
                    void* r9_14
                    r9_14.b = rcx_74 u< r14_2
                    rsi_46.b = r14 + 1 u< rsi_46
                    
                    if ((r12.b & r11_6.b) != 0)
                        r9_13 = r14 + 1
                        r10_7 = r11 + 1
                        r11_5 = rbx_30
                        r13_4 = rcx_74
                        r15_6 = rdi_26
                        r12 = var_1b0_4
                        goto label_1403d6ec9
                    
                    rdx_69.b &= r10.b
                    r12 = var_1b0_4
                    
                    if (rdx_69.b != 0)
                    label_1403d6eb0:
                        r9_13 = r14 + 1
                        r10_7 = r11 + 1
                        r11_5 = rbx_30
                        r13_4 = rcx_74
                        r15_6 = rdi_26
                        goto label_1403d6ec9
                    
                    r8_11.b &= result_1.b
                    
                    if (r8_11.b != 0)
                        goto label_1403d6eb0
                    
                    r9_14.b &= rsi_46.b
                    
                    if (r9_14.b != 0)
                        goto label_1403d6eb0
                    
                    void* r12_3 = r15_5 & 0xffffffffffffffe0
                    r9_13 = r12_3 + r14 + 1
                    r10_7 = r11 + 1 + r12_3
                    r11_5 = rbx_30 + r12_3
                    r13_4 = rcx_74 + r12_3
                    r15_6 = rdi_26 + r12_3
                    int64_t r8_12 = 0
                    
                    do
                        zmm0 = *(rbx_30 + r8_12)
                        var_198.32 = zmm0
                        zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                        var_158.32 = _mm256_cvtepu8_epi32(zmm1[0].q)
                        zmm1 = _mm256_permute4x64_epi64(zmm0, 0xe7)
                        zmm4 = __vpmovzxbd_ymmqq_memq(*(rbx_30 + r8_12))
                        arg4 = _mm256_cvtepu8_epi32(zmm1[0].q)
                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                        zmm5 = _mm256_cvtepu8_epi32(zmm1[0].q)
                        arg3 = *(r11 + 1 + r8_12)
                        zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                        arg7 = _mm256_cvtepu8_epi32(zmm1[0].q)
                        zmm1 = _mm256_permute4x64_epi64(arg3, 0xe7)
                        arg9 = _mm256_cvtepu8_epi32(zmm1[0].q)
                        arg10 = __vpmovzxbd_ymmqq_memq(*(r11 + 1 + r8_12))
                        zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg3[0].o, 0x4e)
                        arg8 = _mm256_cvtepu8_epi32(zmm1[0].q)
                        arg6 = *(r14 + 1 + r8_12)
                        arg5[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg12 = _mm256_cvtepu8_epi32(arg5[0].q)
                        arg5 = _mm256_permute4x64_epi64(arg6, 0xe7)
                        arg13 = _mm256_cvtepu8_epi32(arg5[0].q)
                        arg11 = __vpmovzxbd_ymmqq_memq(*(r14 + 1 + r8_12))
                        arg5[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6[0], 0x4e)
                        arg14 = _mm256_cvtepu8_epi32(arg5[0].q)
                        arg5 = _mm256_sub_epi32(zmm5, arg8)
                        zmm5 = _mm256_sub_epi32(zmm4, arg10)
                        zmm1 = _mm256_sub_epi32(arg4, arg9)
                        int32_t var_118
                        var_118.32 = zmm1
                        zmm0 = _mm256_sub_epi32(var_158.32, arg7)
                        var_158.32 = zmm0
                        arg8 = _mm256_sub_epi32(arg14, arg8)
                        arg11 = _mm256_sub_epi32(arg11, arg10)
                        arg9 = _mm256_sub_epi32(arg13, arg9)
                        arg10 = _mm256_sub_epi32(arg12, arg7)
                        arg14 = _mm256_abs_epi32(arg10)
                        arg7 = _mm256_abs_epi32(arg9)
                        arg12 = _mm256_add_epi32(arg9, zmm1)
                        arg9 = _mm256_abs_epi32(_mm256_add_epi32(arg10, zmm0))
                        arg10 = _mm256_abs_epi32(arg12)
                        arg12 = _mm256_cmpgt_epi32(arg14, arg9)
                        arg4[0].o = _mm256_extracti128_si256(arg12, 1)
                        arg4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, arg4[0].o)
                        arg12 = _mm256_cmpgt_epi32(arg7, arg10)
                        zmm4[0].o = _mm256_extracti128_si256(arg12, 1)
                        zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm4[0].o)
                        arg12 = _mm256_abs_epi32(arg11)
                        zmm1 = zmm5
                        arg11 = _mm256_abs_epi32(_mm256_add_epi32(arg11, zmm5))
                        arg4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm4[0].o)
                        zmm4 = _mm256_cmpgt_epi32(arg12, arg11)
                        zmm5[0].o = _mm256_extracti128_si256(zmm4, 1)
                        zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                        zmm5 = _mm256_abs_epi32(arg8)
                        arg8 = _mm256_abs_epi32(_mm256_add_epi32(arg8, arg5))
                        arg13 = _mm256_cmpgt_epi32(zmm5, arg8)
                        arg5[0].o = _mm256_extracti128_si256(arg13, 1)
                        arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg13[0].o, arg5[0].o)
                        zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                        arg13 = _mm256_blendv_epi8(var_198.32, arg3, 
                            _mm256_inserti128_si256(zmm4, arg4[0].o, 1))
                        arg3 = _mm256_abs_epi32(arg5)
                        arg3 = _mm256_cmpgt_epi32(arg3, zmm5) | _mm256_cmpgt_epi32(arg3, arg8)
                        arg4 = _mm256_abs_epi32(zmm1)
                        arg4 = _mm256_cmpgt_epi32(arg4, arg12) | _mm256_cmpgt_epi32(arg4, arg11)
                        zmm4 = __vpabsd_ymmqq_memqq(var_118.32)
                        zmm4 = _mm256_cmpgt_epi32(zmm4, arg7) | _mm256_cmpgt_epi32(zmm4, arg10)
                        zmm5 = __vpabsd_ymmqq_memqq(var_158.32)
                        arg5 = _mm256_cmpgt_epi32(zmm5, arg14)
                        zmm5 = arg5 | _mm256_cmpgt_epi32(zmm5, arg9)
                        arg5[0].o = _mm256_extracti128_si256(zmm5, 1)
                        zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                        arg5[0].o = _mm256_extracti128_si256(zmm4, 1)
                        zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                        zmm4[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                        zmm5[0].o = _mm256_extracti128_si256(arg4, 1)
                        arg4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm5[0].o)
                        zmm5[0].o = _mm256_extracti128_si256(arg3, 1)
                        arg3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm5[0].o)
                        arg3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg4[0].o, arg3[0].o)
                        zmm0 = _mm256_blendv_epi8(arg6, arg13, 
                            _mm256_inserti128_si256(arg3, zmm4[0].o, 1))
                        zmm1 = *(rdi_26 + r8_12)
                        *(rcx_74 + r8_12) = _mm256_sub_epi8(zmm1, zmm0)
                        r8_12 += 0x20
                    while (r12_3 != r8_12)
                    
                    r12 = var_1b0_4
                    r8_10 += r12_3
                    
                    if (r15_5 != r12_3)
                        goto label_1403d6ec9
                else
                    r9_13 = r14 + 1
                    r10_7 = r11 + 1
                    r11_5 = rbx_30
                    r13_4 = rcx_74
                    r15_6 = rdi_26
                label_1403d6ec9:
                    int64_t i_22 = 0
                    
                    do
                        uint32_t rcx_75 = zx.d(*(r11_5 + i_22))
                        uint32_t rdx_71 = zx.d(*(r10_7 + i_22))
                        uint32_t r8_13 = zx.d(*(r9_13 + i_22))
                        uint32_t rbx_36 = rcx_75 - rdx_71
                        uint32_t rsi_48 = neg.d(rbx_36)
                        
                        if (neg.d(rbx_36) s< 0 != neg.d(rbx_36) == 0x80000000)
                            rsi_48 = rbx_36
                        
                        uint32_t rbp_30 = r8_13 - rdx_71
                        int32_t rdi_28 = neg.d(rbp_30)
                        
                        if (neg.d(rbp_30) s< 0 != neg.d(rbp_30) == 0x80000000)
                            rdi_28 = rbp_30
                        
                        uint32_t rbp_31 = rbp_30 + rbx_36
                        int32_t rbx_38 = neg.d(rbp_31)
                        
                        if (neg.d(rbp_31) s< 0 != neg.d(rbp_31) == 0x80000000)
                            rbx_38 = rbp_31
                        
                        if (rdi_28 s> rbx_38)
                            rcx_75 = rdx_71
                        
                        uint32_t rdx_72 = rcx_75
                        
                        if (rsi_48 s<= rbx_38)
                            rdx_72 = r8_13
                        
                        if (rsi_48 s<= rdi_28)
                            rcx_75 = rdx_72
                        
                        r13_4[i_22] = *(r15_6 + i_22) - rcx_75.b
                        i_22 += 1
                    while (var_1b8 - r8_10 != i_22)
        else
            uint64_t rsi_45 = zx.q(r8_10.d) & 3
            
            if (r8_10 - 1 u>= 3)
                void* i_23 = nullptr
                
                do
                    *(rcx_74 + i_23) = *(r14 + 1 + i_23) - *(r11 + 1 + i_23)
                    *(rcx_74 + i_23 + 1) = *(r14 + 1 + i_23 + 1) - *(r11 + 1 + i_23 + 1)
                    *(rcx_74 + i_23 + 2) = *(r14 + 1 + i_23 + 2) - *(r11 + 1 + i_23 + 2)
                    *(rcx_74 + i_23 + 3) = *(r14 + 1 + i_23 + 3) - *(r11 + 1 + i_23 + 3)
                    i_23 += 4
                while (r8_10 - rsi_45 != i_23)
                
                rcx_74 += i_23
                rbx_30 = r11 + 1 + i_23
                rdi_26 = i_23 + r14 + 1
                
                if (rsi_45 != 0)
                    goto label_1403d6b9a
            else
                rbx_30 = r11 + 1
                rdi_26 = r14 + 1
                
                if (rsi_45 != 0)
                label_1403d6b9a:
                    int64_t i_37 = neg.q(rsi_45)
                    int64_t i_24
                    
                    do
                        char rdx_66 = *rdi_26
                        rdi_26 += 1
                        rdx_66 -= *rbx_30
                        rbx_30 += 1
                        *rcx_74 = rdx_66
                        rcx_74 += 1
                        i_24 = i_37
                        i_37 += 1
                    while (i_24 != -1)
            
            r15_5 = r15 - r8_10
            
            if (r15 u> r8_10)
                goto label_1403d6b1e
        arg2 = *(r12 + 0x220)
        result_1 = result_2

_mm256_zeroupper()
uint64_t result
int64_t rcx_77
int512_t zmm6
int512_t zmm7
int512_t zmm8
int512_t zmm9
result, rcx_77, zmm6, zmm7, zmm8, zmm9 = sub_1403d2510(r12, arg2)

if (*(r12 + 0x3b1) != 0)
    result = 1
    
    if (result_1.b u>= 2)
        uint64_t rax_57 = zx.q((result_1 - 1).b) & 3
        rcx_77 = 1
        
        if (result_1 - 2 u>= 3)
            int64_t i_25 = 0
            
            do
                char* rbp_32 = *(r12 + 0x3b8)
                rbp_32[i_25 + 1] = rbp_32[i_25]
                int64_t rbp_33 = *(r12 + 0x3b8)
                *(rbp_33 + i_25 + 2) = *(rbp_33 + i_25 + 1)
                int64_t rbp_34 = *(r12 + 0x3b8)
                *(rbp_34 + i_25 + 3) = *(rbp_34 + i_25 + 2)
                int64_t rbp_35 = *(r12 + 0x3b8)
                *(rbp_35 + i_25 + 4) = *(rbp_35 + i_25 + 3)
                i_25 += 4
            while (result_1 - 1 - rax_57 != i_25)
            
            rcx_77 = i_25 + 1
        
        if (rax_57.b != 0)
            int64_t i_27 = neg.q(rax_57)
            int64_t i_26
            
            do
                char* rdx_77 = *(r12 + 0x3b8)
                rdx_77[rcx_77] = rdx_77[rcx_77 - 1]
                rcx_77 += 1
                i_26 = i_27
                i_27 += 1
            while (i_26 != -1)
        
        result = result_1
    
    rcx_77.b = *arg2
    *(*(r12 + 0x3b8) + result) = rcx_77.b

zmm6.o = var_e8
zmm7.o = var_d8
zmm8.o = var_c8
zmm9.o = var_b8
arg9[0].o = var_a8
arg10[0].o = var_98
arg11[0].o = var_88
arg12[0].o = var_78
arg13[0].o = var_68
arg14[0].o = var_58
return result
