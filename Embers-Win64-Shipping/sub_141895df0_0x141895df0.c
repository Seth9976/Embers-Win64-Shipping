// 函数: sub_141895df0
// 地址: 0x141895df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* r14 = arg1
data_143efabdc += 1
int32_t r12 = 0
CRITICAL_SECTION* lpCriticalSection = arg1 + 0x58
*arg2 = 0
arg2[1] = 0
EnterCriticalSection(lpCriticalSection)

if (lpCriticalSection->__offset(0x38).b == 0)
    lpCriticalSection->__offset(0x38).b = 1
    
    if (lpCriticalSection->__offset(0x39).b == 0)
        lpCriticalSection->__offset(0x28).q = _Query_perf_frequency()

LeaveCriticalSection(lpCriticalSection)
int64_t* rax_3 = *(r14 + 8)
int32_t* rcx_2 = *rax_3
int32_t* var_d8 = rcx_2
void* rax_5 = &rcx_2[sx.q(rax_3[1].d)]

if (rcx_2 != rax_5)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    
    while (true)
        int32_t rcx_3 = *rcx_2
        void var_a8
        sub_141821410(&var_a8, rcx_3)
        int64_t var_f8
        __builtin_memset(&var_f8, 0, 0x18)
        int64_t var_70
        __builtin_memset(&var_70, 0, 0x14)
        int32_t r13_1 = 0
        int64_t* rax_6 = *(r14 + 0x10)
        int32_t rbx = rax_6[1].d
        int64_t rdi_1 = *rax_6
        int32_t rax_7 = sub_14183ecc0(&var_a8)
        int32_t var_104 = rax_7
        
        if (rax_7 != 0 && rax_7 u<= rbx)
            sub_141830610(&var_a8, rdi_1, &var_104)
            r12 = var_104
        
        void var_c8
        sub_141828370(&var_c8)
        int64_t* rbx_1 = *(r14 + 0xe0)
        int64_t* rdi_2 = *(r14 + 0xc8)
        int64_t rax_8 = *rdi_2
        *rdi_2 += 1
        
        if (rax_8 == 0)
            int64_t rax_9 = _Query_perf_frequency()
            data_143efabf0
            data_143efabf0 = rax_9
        
        while (true)
            bool z_1
            
            if (0 == *(r14 + 0x44))
                *(r14 + 0x44) = 0
                z_1 = true
            else
                *(r14 + 0x44)
                z_1 = false
            
            if (not(z_1))
                break
            
            uint64_t rdi_3 = zx.q(rcx_3)
            uint64_t var_e8_1
            uint64_t rax_13 = var_e8_1 + rdi_3
            uint64_t rsi_2 = zx.q(r12 - rdi_3.d)
            int128_t* var_118_1 = &var_70
            int32_t var_fc = rsi_2.d
            char rax_14
            int64_t r8_3
            rax_14, r8_3 = sub_141883e30(r14, &var_a8, &var_fc, &var_f8, var_118_1)
            
            if (rax_14 != 0)
                int64_t r14_1 = sx.q(arg2[1].d)
                r8_3 = rdi_3 - 1 + rsi_2
                var_e8_1 = rsi_2
                int32_t rdi_4 = r13_1
                int32_t rdi_5
                
                if (r13_1 s>= r14_1.d)
                label_141895fea:
                    int32_t rax_16 = (r14_1 + 1).d
                    r13_1 = r14_1.d
                    arg2[1].d = rax_16
                    
                    if (rax_16 s> *(arg2 + 0xc))
                        r8_3 = sub_1405c4e40(arg2)
                    
                    rdi_5 = rcx_3
                    uint64_t* rax_19 = (r14_1 << 5) + *arg2
                    *rax_19 = rsi_2
                    rax_19[3].d = rdi_5
                    *(rax_19 + 8) = var_f8.o
                else
                    int64_t* rdx_5 = (sx.q(r13_1) << 5) + *arg2
                    
                    while (true)
                        int64_t rcx_9 = *rdx_5
                        
                        if (rsi_2 u>= rcx_9)
                            if (rsi_2 != rcx_9 && r8_3 u> rcx_9 - 1 + zx.q(rdx_5[3].d))
                                rdi_4 += 1
                                rdx_5 = &rdx_5[4]
                                
                                if (rdi_4 s>= r14_1.d)
                                    goto label_141895fea
                                
                                continue
                            
                            r13_1 = rdi_4
                        else if (r8_3 u< rcx_9)
                            int32_t rax_23 = (r14_1 + 1).d
                            arg2[1].d = rax_23
                            
                            if (rax_23 s> *(arg2 + 0xc))
                                sub_1405c4e40(arg2)
                            
                            uint64_t* rbx_6 = sx.q(rdi_4) << 5
                            void* rdx_11 = *arg2 + rbx_6
                            r8_3 = memmove(rdx_11 + 0x20, rdx_11, (r14_1.d - rdi_4) << 5)
                            int64_t rax_24 = *arg2
                            r13_1 = rdi_4
                            rdi_5 = rcx_3
                            *(rbx_6 + rax_24) = rsi_2
                            int128_t zmm0_2 = var_f8.o
                            *(rbx_6 + rax_24 + 0x18) = rcx_3
                            *(rbx_6 + rax_24 + 8) = zmm0_2
                            break
                        
                        rdi_5 = rcx_3
                        break
                
                if (rsi_2 u< rax_13)
                    r14 = arg1
                else
                    sub_14182f4d0(&var_a8)
                    r14 = arg1
                    int64_t* rcx_14 = *(r14 + 0x10)
                    int32_t rbx_2 = rcx_14[1].d
                    
                    if (rdi_5 - 1 + r12 u>= rbx_2)
                        break
                    
                    int64_t rdi_6 = *rcx_14
                    int32_t rax_22 = sub_14183ecc0(&var_a8)
                    int32_t var_100 = rax_22
                    int32_t rbx_4
                    
                    if (rax_22 == 0 || rax_22 u> rbx_2 - r12)
                        rbx_4 = 0
                    else
                        sub_141830610(&var_a8, sx.q(r12) + rdi_6, &var_100)
                        rbx_4 = var_100
                    
                    sub_141828360(*(r14 + 0xf8), zx.q(rbx_4))
                    r12 += rbx_4
                    continue
            
            void* rax_25 = *(r14 + 0x10)
            
            if (r12 u>= *(rax_25 + 8))
                break
            
            sub_141846cc0(&var_a8, sx.q(r12) + *rax_25, r8_3.b)
            r12 += 1
        
        sub_1418283a0(*(r14 + 0xd8), &var_c8)
        sub_141828360(*(r14 + 0xf0), sx.q(*(*(r14 + 0x10) + 8)))
        int64_t rdx_18
        
        if (*rdi_2 s<= 0)
            rdx_18 = 0
        else
            rdx_18 = _Query_perf_frequency() - data_143efabf0
        
        zmm6.q = float.d(**(r14 + 0xf0))
        zmm6.q = zmm6.q f/ sub_141831760(*rbx_1 + rdx_18)
        sub_1418508e0(*(r14 + 0x100), int.q(zmm6.q))
        int64_t rbx_7 = data_143efabf0
        int64_t rax_30 = *rdi_2
        *rdi_2 -= 1
        
        if (rax_30 == 1)
            int64_t rax_32 = _Query_perf_frequency() - rbx_7
            *rbx_1
            *rbx_1 += rax_32
        
        int64_t var_88
        j_sub_140a74f90(var_88)
        r12 = 0
        rcx_2 = &var_d8[1]
        var_d8 = rcx_2
        
        if (rcx_2 == rax_5)
            break
    
    lpCriticalSection = r14 + 0x58

EnterCriticalSection(lpCriticalSection)

if (lpCriticalSection->__offset(0x38).b != 0)
    bool cond:1_1 = lpCriticalSection->__offset(0x39).b != 0
    lpCriticalSection->__offset(0x38).b = 0
    
    if (not(cond:1_1))
        int64_t rax_35 = _Query_perf_frequency() - lpCriticalSection->__offset(0x28).q
        lpCriticalSection->__offset(0x30).q += rax_35

LeaveCriticalSection(lpCriticalSection)
data_143efabdc -= 1
*(r14 + 0x40)
*(r14 + 0x40) = 1
__security_check_cookie(rax_1 ^ &var_138)
return arg2
