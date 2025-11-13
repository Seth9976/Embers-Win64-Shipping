// 函数: sub_1410208f0
// 地址: 0x1410208f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t* r13 = arg1
int64_t var_a0
__builtin_memset(&var_a0, 0, 0x20)
int64_t* rcx = arg1[0x1a]
int64_t* r15 = arg2
(*(*rcx + 0x70))(rcx, zx.q(r13[0x19].d), 0, &var_a0)
int64_t* rcx_1 = r13[0x1a]
uint64_t rdx_1 = zx.q(r13[0x19].d)
int64_t var_80
__builtin_memset(&var_80, 0, 0x20)
(*(*rcx_1 + 0x70))(rcx_1, rdx_1, 1, &var_80)
uint64_t i_4 = zx.q(arg5)
enum WIN32_ERROR result_2 = NO_ERROR
int64_t var_d0 = 0
int64_t r14 = 0
int32_t rdi = 0
int32_t rdx_2 = 0
enum WIN32_ERROR result

if (i_4.d == 0)
label_1410209cc:
    int32_t* rax_5 = j_sub_140a82f30(0x28)
    int64_t rax_8
    
    if (rax_5 != 0)
        *(rax_5 + 0x20) = 0
        *rax_5 = 0xffffffff
        __builtin_memset(&rax_5[2], 0, 0x12)
        *(rax_5 + 0x20) = r13[0x30]
        rax_5[4] = rdi
        
        if (rdi != 0)
            int64_t rcx_3 = sx.q(rdi)
            int64_t rax_7 = 8 * rcx_3
            
            if (mulu.dp.q(8, rcx_3) u>> 0x40 != zx.o(0))
                rax_7 = -1
            
            rax_8 = j_sub_140a82f30(rax_7)
            *(rax_5 + 8) = rax_8
    
    if (rax_5 == 0 || (rdi != 0 && rax_8 == 0))
        result = 0x8007000e
    else
        result = sub_141027ab0(rax_5)
        
        if (result s>= NO_ERROR)
            uint64_t i_3
            
            if (i_4.d != 0)
                int64_t* r15_1 = arg4
                uint64_t i_2 = i_4
                int64_t r13_1 = 0
                i_3 = i_2
                uint64_t i
                
                do
                    void* rdx_3 = *r15_1
                    
                    if (rdx_3 != 0)
                        int32_t j = 0
                        
                        if (*(rdx_3 + 0x14) s> 0)
                            int64_t* r14_1 = nullptr
                            void* rcx_6 = rdx_3
                            
                            do
                                int64_t rsi = *(r14_1 + *(rdx_3 + 8))
                                uint64_t rax_10 = zx.q(*rax_5)
                                
                                if (*(rax_10 + rsi + 0x28) != 0)
                                    rdx_3 = rcx_6
                                else
                                    *(rax_10 + rsi + 0x28) = 1
                                    int64_t rdi_1 = *(rax_5 + 8)
                                    
                                    if (rdi_1 == 0 || rax_5[5] s> rax_5[4])
                                        int32_t rax_12 = rax_5[4]
                                        int32_t rax_13
                                        
                                        if (rax_12 != 0)
                                            uint128_t zmm0_1
                                            zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_12)).d f* 1.5f
                                            rax_13 = int.d(zmm0_1.d)
                                        else
                                            rax_13 = 0x1000
                                        
                                        int64_t rcx_7 = sx.q(rax_13)
                                        rax_5[4] = rax_13
                                        int64_t rax_14 = 8 * rcx_7
                                        
                                        if (mulu.dp.q(8, rcx_7) u>> 0x40 != zx.o(0))
                                            rax_14 = -1
                                        
                                        int64_t rax_15 = j_sub_140a82f30(rax_14)
                                        int64_t rdx_4 = *(rax_5 + 8)
                                        rdi_1 = rax_15
                                        
                                        if (rdx_4 != 0 && rax_15 != 0)
                                            memcpy(rax_15, rdx_4, rax_5[5] << 3)
                                            j_sub_140a74f90(*(rax_5 + 8))
                                        
                                        *(rax_5 + 8) = rdi_1
                                    
                                    if (rdi_1 != 0)
                                        *(rdi_1 + (sx.q(rax_5[5]) << 3)) = rsi
                                        rax_5[5] += 1
                                        rdx_3 = *r15_1
                                        r13_1 += *(*(*(rdx_3 + 8) + r14_1) + 0x10)
                                    else
                                        *(rax_5 + 0x19) = 1
                                        rdx_3 = *r15_1
                                
                                j += 1
                                r14_1 = &r14_1[1]
                                rcx_6 = rdx_3
                            while (j s< *(rdx_3 + 0x14))
                            
                            i_2 = i_3
                            result_2 = NO_ERROR
                            var_d0 = r13_1
                    
                    r15_1 = &r15_1[1]
                    i = i_2
                    i_2 -= 1
                    i_3 = i_2
                while (i != 1)
                r13 = arg1
                r14 = var_d0
                r15 = arg2
                i_4 = zx.q(arg5)
            
            result = sub_141017a90(rax_5)
            
            if (result s>= NO_ERROR)
                if (i_4.d u<= 1 || r14 u<= var_a0 + var_80)
                    int64_t rax_20 = *r15
                    int32_t var_b0 = 0xf0
                    int32_t var_ac_1 = 0xd0000
                    int64_t var_a8_1 = rax_20
                    int64_t* var_e8 = nullptr
                    i_3.d = 8
                    int32_t var_f8
                    
                    if ((*(rax_20 + 0x18))(r15, &var_b0, &i_3, &var_e8) s< 0)
                        int64_t* rax_22 = j_sub_140a82f30(0x20)
                        int64_t* rdx_9 = rax_22
                        
                        if (rax_22 == 0)
                            rdx_9 = nullptr
                        else
                            *rax_22 = 0
                            rax_22[1] = 1
                            rax_22[3] = &rax_22[2]
                            rax_22[2] = &rax_22[2]
                        
                        int64_t* rcx_22 = r13[0x18]
                        var_e8 = rdx_9
                        var_f8.q = rdx_9
                        int32_t rax_24 = (*(*rcx_22 + 0x120))(rcx_22, 0, 0, &data_142efcb18, var_f8)
                        void** r8_6 = &var_e8[2]
                        *r8_6 = &r13[0xc]
                        r8_6[1] = r13[0xd]
                        *r13[0xd] = r8_6
                        r13[0xd] = r8_6
                        r13[0xe].d += 1
                        
                        if (rax_24 s>= 0)
                            (*(*r15 + 0x20))(r15, &var_b0, 8, &var_e8)
                    
                    if (r13 != -0x130)
                        EnterCriticalSection(&r13[0x26])
                    
                    int64_t rsi_1 = r13[0x15]
                    int64_t r14_3 = r13[0x10]
                    
                    while (r13[0xb] - r13[0xa] u>= zx.q(*(r13 + 0x17c)))
                        WaitForSingleObject(r13[0x17], 0xffffffff)
                    
                    uint64_t rcx_32 = modu.dp.q(0:(r13[0xb]), *r13) * 3
                    *(r13[1] + (rcx_32 << 3) + 8) = rax_5
                    *(r13[1] + (rcx_32 << 3) + 0x10) = r14_3
                    *(r13[1] + (rcx_32 << 3)) = rsi_1
                    HANDLE hEvent = r13[2]
                    r13[0xb] += 1
                    BOOL rax_36 = SetEvent(hEvent)
                    enum WIN32_ERROR result_1
                    
                    if (rax_36 == 0)
                        enum WIN32_ERROR result_3 = GetLastError()
                        result_1 = result_3
                        
                        if (result_3 s> NO_ERROR)
                            result_1 = zx.d(result_3.w) | 0x80070000
                    
                    if (rax_36 != 0 || result_1 s>= NO_ERROR)
                        enum WIN32_ERROR result_4 = (*(*r15 + 0x78))(r15, r13[0xf], r13[0x10])
                        r13[0x10] += 1
                        result_1 = result_4
                    
                    int64_t r9_6 = *r15
                    (*(r9_6 + 0x50))(r15, zx.q(i_4.d), arg3, r9_6, var_f8)
                    
                    if (result_1 s>= NO_ERROR)
                        int64_t* rdx_16 = var_e8
                        result_1 = (*(*r15 + 0x70))(r15, *rdx_16, rdx_16[1])
                        int64_t* rax_40 = var_e8
                        rax_40[1] += 1
                        
                        if (result_1 s>= NO_ERROR)
                            if (r13 != -0x20)
                                EnterCriticalSection(&r13[4])
                            
                            int32_t r14_4 = r13[0xe].d
                            int64_t r15_2 = r13[0x15]
                            int64_t rsi_4 = (zx.q(r14_4 - 1) + 3) << 4
                            int64_t* rax_41 = j_sub_140a82f30(rsi_4)
                            
                            if (rax_41 == 0 || rsi_4 u< 0x30)
                                if (r13 != -0x20)
                                    LeaveCriticalSection(&r13[4])
                                
                                result_1 = 0x8007000e
                            else
                                *rax_41 = r15_2
                                rax_41[1].d = r14_4
                                rax_41[4] = 0
                                int32_t r10_1 = 0
                                rax_41[5] = 0
                                int64_t* i_1 = r13[0xc]
                                
                                while (i_1 != &r13[0xc])
                                    uint64_t rdx_18 = zx.q(r10_1)
                                    void* rcx_38 = &i_1[-2]
                                    i_1 = *i_1
                                    r10_1 += 1
                                    rax_41[(rdx_18 + 2) * 2] = rcx_38
                                    rax_41[rdx_18 * 2 + 5] = *(rcx_38 + 8) - 1
                                
                                rax_41[2] = &r13[0x13]
                                rax_41[3] = r13[0x14]
                                *r13[0x14] = &rax_41[2]
                                r13[0x14] = &rax_41[2]
                                
                                if (r13 != -0x20)
                                    LeaveCriticalSection(&r13[4])
                                
                                result_1 = NO_ERROR
                    
                    r13[0x15] += 1
                    
                    if (r13 != -0x130)
                        LeaveCriticalSection(&r13[0x26])
                    
                    result = result_1
                else
                    j_sub_140a74f90(*(rax_5 + 8))
                    j_sub_140a74f90(rax_5)
                    uint64_t rdi_3 = zx.q(i_4.d u>> 1)
                    
                    if (sub_1410208f0(r13, r15, arg3, arg4, rdi_3.d) != 0 || sub_1410208f0(r13, 
                            r15, arg3 + (rdi_3 << 3), &arg4[rdi_3], i_4.d - rdi_3.d) != 0)
                        result_2 = 0x80004005
                    
                    result = result_2
else
    int64_t* rcx_2 = arg4
    
    while (true)
        void* rax_4 = *rcx_2
        
        if (rax_4 != 0)
            if (*(rax_4 + 0x18) != 0)
                result = 0x80070057
                break
            
            rdi += *(rax_4 + 0x14)
        
        rdx_2 += 1
        rcx_2 = &rcx_2[1]
        
        if (rdx_2 u>= i_4.d)
            goto label_1410209cc

__security_check_cookie(rax_1 ^ &var_118)
return result
