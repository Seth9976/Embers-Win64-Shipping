// 函数: sub_1406bef90
// 地址: 0x1406bef90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
int64_t var_18 = r13
uint128_t zmm6
uint128_t var_38 = zmm6
void var_338
int64_t rax_1 = __security_cookie ^ &var_338
int64_t* rax_2 = sub_1406c8bf0()
void* r15 = rax_2[0x23]
void* var_2f8 = r15

if (r15 == 0)
    int64_t rdx_1 = *rax_2
    (*(rdx_1 + 0x390))(rax_2, rdx_1)
    r15 = *(rax_2 + 0x118)
    var_2f8 = r15

void* var_2f0 = r15
CRITICAL_SECTION criticalSection
InitializeCriticalSection(&criticalSection)
SetCriticalSectionSpinCount(&criticalSection, 0xfa0)
uint64_t rbx
rbx.b = 0
char var_308 = 0
uint128_t zmm8 = 0x3eb0c6f7a0b5ed8d
uint128_t zmm9 = -0x8000000000000
uint128_t zmm7 = 0x3ff0000000000000
int64_t result

while (true)
    if (arg1[0xd3].b == 0)
        if (*(arg1 + 0x7b4) s>= arg1[0xf6].d)
            int32_t rax_5 = arg1[0x38].d
            
            if (rax_5 == 2 || rax_5 == 5)
                r13.b = 1
            else
                r13.b = 0
            
            if (r13.b != rbx.b)
                var_308 = r13.b
                int64_t rcx_8 = arg1[0x1d]
                
                if (r13.b == 0)
                    av_read_play(rcx_8)
                else
                    av_read_pause(rcx_8)
            
            int64_t* var_300
            
            if (*(arg1 + 0x6a1) != 0)
                int64_t r14_1 = arg1[0xd5]
                int64_t rcx_9 = arg1[0xd6]
                int64_t rax_7 = r14_1 - rcx_9
                int64_t rcx_10
                int64_t r8_1
                
                if (rcx_9 s<= 0)
                    r8_1 = -0x8000000000000000
                    rcx_10 = rax_7 - 2
                    
                    if (rcx_9 s>= 0)
                        rcx_10 = 0x7fffffffffffffff
                else
                    r8_1 = rax_7 + 2
                    rcx_10 = 0x7fffffffffffffff
                
                if (avformat_seek_file(arg1[0x1d], 0xffffffff, r8_1, r14_1, rcx_10, arg1[0xd7].d, 
                        var_308, var_300, var_2f8, var_2f0, arg1) s>= 0)
                    if (arg1[0x28].d != 0xffffffff)
                        sub_1406bbec0(&arg1[0x98])
                        sub_1406be8f0(&arg1[0x98], sub_1406bbf50())
                    
                    if (*(arg1 + 0x144) != 0xffffffff)
                        sub_1406bbec0(&arg1[0xae])
                        sub_1406be8f0(&arg1[0xae], sub_1406bbf50())
                    
                    if (*(arg1 + 0x14c) != 0xffffffff)
                        sub_1406bbec0(&arg1[0xa3])
                        sub_1406be8f0(&arg1[0xa3], sub_1406bbf50())
                    
                    int64_t rax_13
                    double zmm1
                    
                    if ((arg1[0xd7].b & 2) == 0)
                        zmm6.q = float.d(r14_1)
                        zmm6.q = zmm6.q f* zmm8.q
                        rax_13 = av_gettime_relative()
                        zmm1 = zmm6.q
                    else
                        rax_13 = av_gettime_relative()
                        zmm1 = zmm9.q
                        zmm6 = zmm9
                    
                    double zmm0_2 = float.d(rax_13) f* zmm8.q
                    arg1[0xc5] = zmm6.q
                    arg1[0xc7] = zmm0_2
                    arg1[0xc6] = zmm1 - zmm0_2
                    arg1[0xc9].d = 0
                    (*(*arg1 + 0x28))(arg1)
                    int64_t* rax_15 = j_sub_140a82f30(0x10)
                    var_300 = rax_15
                    
                    if (rax_15 != 0)
                        *rax_15 = 0
                        rax_15[1].d = 8
                        int64_t** rcx_22 = arg1[0x36]
                        arg1[0x36] = rax_15
                        *rcx_22 = rax_15
                
                *(arg1 + 0x6a1) = 0
                *(arg1 + 0x6bc) = 1
                *(arg1 + 0x69c) = 0
                
                if (arg1[0x38].d == 2)
                    (*(arg1[2] + 0x50))(&arg1[2], 1f)
                    sub_1406c1bb0(arg1)
                    arg1[0xd4].b = 1
            
            if (*(arg1 + 0x6bc) != 0)
                void* rdx_5 = arg1[0x45]
                
                if (rdx_5 != 0 && (*(rdx_5 + 0x38) & 0x400) != 0)
                    int128_t var_2d8
                    __builtin_memset(&var_2d8, 0, 0x58)
                    
                    if (av_packet_ref(&var_2d8, rdx_5 + 0x58) s< 0)
                        DeleteCriticalSection(&criticalSection)
                        result = 0xffffffff
                        break
                    
                    EnterCriticalSection(&arg1[0xa8])
                    int32_t rax_18 = sub_1406be960(&arg1[0xa3], &var_2d8)
                    LeaveCriticalSection(&arg1[0xa8])
                    
                    if (&var_2d8 != sub_1406bbf50() && rax_18 s< 0)
                        av_packet_unref(&var_2d8)
                    
                    int32_t rbx_1 = *(arg1 + 0x6c4)
                    void var_218
                    av_init_packet(&var_218)
                    int64_t var_200_1 = 0
                    int32_t var_1f8_1 = 0
                    int32_t var_1f4_1 = rbx_1
                    sub_1406be8f0(&arg1[0xa3], &var_218)
                    r15 = var_2f8
                
                *(arg1 + 0x6bc) = 0
            
            if (*(r15 + 0x28) == 0)
                if (*(arg1 + 0x584) + *(arg1 + 0x52c) + *(arg1 + 0x4d4) s> 0xf00000)
                label_1406bf578:
                    EnterCriticalSection(&criticalSection)
                    LeaveCriticalSection(&criticalSection)
                    int64_t* rcx_39 = arg1[0xcc]
                    (*(*rcx_39 + 0x20))(rcx_39, 0, 0)
                    EnterCriticalSection(&criticalSection)
                    LeaveCriticalSection(&criticalSection)
                    rbx = zx.q(var_308)
                    continue
                else
                    void* rax_23 = arg1[0x44]
                    
                    if (arg1[0xd9].d s< 0 || arg1[0x9c].b != 0 || (*(rax_23 + 0x38) & 0x400) != 0)
                    label_1406bf49e:
                        void* rax_26 = arg1[0x45]
                        
                        if (*(arg1 + 0x6c4) s< 0 || arg1[0xa7].b != 0
                            || (*(rax_26 + 0x38) & 0x400) != 0)
                        label_1406bf509:
                            void* rax_29 = arg1[0x46]
                            
                            if (*(arg1 + 0x6cc) s< 0 || arg1[0xb2].b != 0
                                    || (*(rax_29 + 0x38) & 0x400) != 0)
                                goto label_1406bf578
                            
                            if (arg1[0xb0].d s> 0x1e)
                                int32_t rcx_36 = arg1[0xb1].d
                                
                                if (rcx_36 == 0)
                                    goto label_1406bf578
                                
                                int64_t rax_30 = *(rax_29 + 0x18)
                                
                                if (not(_mm_cvtepi32_pd(zx.q(rax_30.d))
                                        f/ _mm_cvtepi32_pd(zx.q((rax_30 u>> 0x20).d)).q
                                        * _mm_cvtepi32_pd(zx.q(rcx_36)) f<= zmm7.q))
                                    goto label_1406bf578
                        else if (arg1[0xa5].d s> 0x1e)
                            int32_t rcx_35 = arg1[0xa6].d
                            
                            if (rcx_35 == 0)
                                goto label_1406bf509
                            
                            int64_t rax_27 = *(rax_26 + 0x18)
                            
                            if (not(_mm_cvtepi32_pd(zx.q(rax_27.d))
                                    f/ _mm_cvtepi32_pd(zx.q((rax_27 u>> 0x20).d)).q
                                    * _mm_cvtepi32_pd(zx.q(rcx_35)) f<= zmm7.q))
                                goto label_1406bf509
                    else if (arg1[0x9a].d s> 0x1e)
                        int32_t rcx_34 = arg1[0x9b].d
                        
                        if (rcx_34 == 0)
                            goto label_1406bf49e
                        
                        int64_t rax_24 = *(rax_23 + 0x18)
                        
                        if (not(_mm_cvtepi32_pd(zx.q(rax_24.d))
                                f/ _mm_cvtepi32_pd(zx.q((rax_24 u>> 0x20).d)).q
                                * _mm_cvtepi32_pd(zx.q(rcx_34)) f<= zmm7.q))
                            goto label_1406bf49e
            
            if (r13.b == 0)
                if (arg1[0x44] == 0)
                label_1406bf5ff:
                    
                    if (arg1[0x45] == 0)
                    label_1406bf637:
                        (*(*arg1 + 0x28))(arg1)
                        
                        if (arg1[0x3c].b == 0)
                            arg1[0x38].d = 5
                            int64_t* rax_40 = j_sub_140a82f30(0x10)
                            int64_t* var_300_2 = rax_40
                            
                            if (rax_40 != 0)
                                *rax_40 = 0
                                rax_40[1].d = 5
                                int64_t** rcx_47 = arg1[0x36]
                                arg1[0x36] = rax_40
                                *rcx_47 = rax_40
                            
                            int64_t* rax_41 = j_sub_140a82f30(0x10)
                            int64_t* var_300_3 = rax_41
                            
                            if (rax_41 != 0)
                                *rax_41 = 0
                                rax_41[1].d = 7
                                int64_t** rcx_48 = arg1[0x36]
                                arg1[0x36] = rax_41
                                *rcx_48 = rax_41
                            
                            *(arg1 + 0x1e1) = 0
                        else
                            int64_t* rax_38 = j_sub_140a82f30(0x10)
                            int64_t* var_300_1 = rax_38
                            
                            if (rax_38 != 0)
                                *rax_38 = 0
                                rax_38[1].d = 5
                                int64_t** rcx_45 = arg1[0x36]
                                arg1[0x36] = rax_38
                                *rcx_45 = rax_38
                            
                            if (*(arg1 + 0x6a1) == 0)
                                arg1[0xd5] = 0
                                arg1[0xd6] = 0
                                arg1[0xd7].d &= 0xfffffffd
                                *(arg1 + 0x6a1) = 1
                                int64_t* rcx_46 = arg1[0xcc]
                                
                                if (rcx_46 != 0)
                                    (*(*rcx_46 + 0x10))(rcx_46)
                    else if (*(arg1[0xcf] + 0x1c) == *(arg1 + 0x53c)
                            && arg1[0x5b].d == *(arg1 + 0x2e4))
                        goto label_1406bf637
                else if (*(arg1[0xcd] + 0x1c) == *(arg1 + 0x4e4) && arg1[0x8f].d == *(arg1 + 0x484))
                    goto label_1406bf5ff
            
            var_300 = &arg1[0x1d]
            void var_278
            int32_t rax_42 = av_read_frame(arg1[0x1d], &var_278)
            
            if (rax_42 s>= 0)
                *(arg1 + 0x69c) = 0
                int32_t var_254
                
                if (var_254 != arg1[0xd9].d)
                    if (var_254 == *(arg1 + 0x6c4) && (*(arg1[0x45] + 0x38) & 0x400) == 0)
                        sub_1406be8f0(&arg1[0xa3], &var_278)
                        rbx = zx.q(var_308)
                        continue
                    
                    if (var_254 != *(arg1 + 0x6cc))
                        av_packet_unref(&var_278)
                        rbx = zx.q(var_308)
                        continue
                    else
                        sub_1406be8f0(&arg1[0xae], &var_278)
                        rbx = zx.q(var_308)
                        continue
                else
                    sub_1406be8f0(&arg1[0x98], &var_278)
                    rbx = zx.q(var_308)
                    continue
            else
                int32_t rax_44
                
                if (rax_42 != 0xdfb9b0bb)
                    rax_44 = avio_feof(*(arg1[0x1d] + 0x20))
                
                if ((rax_42 == 0xdfb9b0bb || rax_44 != 0) && *(arg1 + 0x69c) == 0)
                    int32_t r15_2 = *(arg1 + 0x6c4)
                    
                    if (r15_2 s>= 0)
                        void var_1b8
                        av_init_packet(&var_1b8)
                        int64_t var_1a0_1 = 0
                        int32_t var_198_1 = 0
                        int32_t var_194_1 = r15_2
                        sub_1406be8f0(&arg1[0xa3], &var_1b8)
                    
                    int32_t r15_3 = arg1[0xd9].d
                    
                    if (r15_3 s>= 0)
                        void var_158
                        av_init_packet(&var_158)
                        int64_t var_140_1 = 0
                        int32_t var_138_1 = 0
                        int32_t var_134_1 = r15_3
                        sub_1406be8f0(&arg1[0x98], &var_158)
                    
                    int32_t r15_4 = *(arg1 + 0x6cc)
                    
                    if (r15_4 s>= 0)
                        void var_f8
                        av_init_packet(&var_f8)
                        int64_t var_e0_1 = 0
                        int32_t var_d8_1 = 0
                        int32_t var_d4_1 = r15_4
                        sub_1406be8f0(&arg1[0xae], &var_f8)
                    
                    *(arg1 + 0x69c) = 1
                
                void* rcx_63 = *(arg1[0x1d] + 0x20)
                
                if (rcx_63 == 0 || *(rcx_63 + 0x70) == 0)
                    EnterCriticalSection(&criticalSection)
                    LeaveCriticalSection(&criticalSection)
                    int64_t* rcx_66 = arg1[0xcc]
                    (*(*rcx_66 + 0x20))(rcx_66, 0, 0)
                    EnterCriticalSection(&criticalSection)
                    LeaveCriticalSection(&criticalSection)
                    rbx = zx.q(var_308)
                    r15 = var_2f8
                    continue
        else
            EnterCriticalSection(&criticalSection)
            LeaveCriticalSection(&criticalSection)
            int64_t* rcx_5 = arg1[0xcc]
            (*(*rcx_5 + 0x20))(rcx_5, 0, 0)
            EnterCriticalSection(&criticalSection)
            LeaveCriticalSection(&criticalSection)
            continue
    
    DeleteCriticalSection(&criticalSection)
    result = 0
    break

__security_check_cookie(rax_1 ^ &var_338)
return result
