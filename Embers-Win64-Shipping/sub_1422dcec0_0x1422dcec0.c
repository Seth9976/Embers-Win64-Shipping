// 函数: sub_1422dcec0
// 地址: 0x1422dcec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
CRITICAL_SECTION* lpCriticalSection = arg1 + 0x70
EnterCriticalSection(lpCriticalSection)

if (arg2[1].d != 0)
    int64_t* rcx_1 = **arg2
    void* rax_4 = (*(*rcx_1 + 0x10))(rcx_1)
    int32_t rsi_1 = arg2[1].d
    int64_t* rax_6
    int64_t* rdi_1
    int32_t r8
    
    if (rax_4 == 0)
        void var_70
        rdi_1 = sub_140596d10(&var_70, arg6)
        void var_60
        rax_6 = sub_140596d10(&var_60, arg5)
        r8 = 0x31
    else
        int32_t rbp_3 = *(rax_4 + 0x28) u>> 4 & 0x7f
        void var_90
        rdi_1 = sub_140596d10(&var_90, arg6)
        void var_80
        rax_6 = sub_140596d10(&var_80, arg5)
        r8 = rbp_3
    
    sub_1422f0bc0(data_143f56340, rsi_1, r8, rax_6, rdi_1)

int32_t i_2 = 0

if (arg3 == 0)
    int32_t i_4 = arg2[1].d
    
    if (i_4 != 0)
        int32_t rax_21 = *(arg1 + 0x10)
        int32_t rdx_11 = rax_21 + i_4
        
        if (rdx_11 s> *(arg1 + 0x14))
            sub_1405a5410(arg1 + 8, rdx_11)
            rax_21 = *(arg1 + 0x10)
        
        int64_t* rdx_12 = *arg2
        int32_t i_3 = i_4
        int64_t* rcx_24 = (sx.q(rax_21) << 4) + *(arg1 + 8)
        int32_t i
        
        do
            *rcx_24 = *rdx_12
            void* rax_23 = rdx_12[1]
            rcx_24[1] = rax_23
            
            if (rax_23 != 0)
                *(rax_23 + 8) += 1
            
            rcx_24 = &rcx_24[2]
            rdx_12 = &rdx_12[2]
            i = i_3
            i_3 -= 1
        while (i != 1)
        *(arg1 + 0x10) += i_4
else
    int64_t rax_8 = sx.q(*(arg1 + 0x10))
    int32_t r15_1 = 0
    
    if (rax_8.d s> 0)
        int64_t* rcx_7 = *(arg1 + 8)
        int64_t rdx_4 = 0
        
        while (*(*rcx_7 + 0xe) != 0)
            r15_1 += 1
            rdx_4 += 1
            rcx_7 = &rcx_7[2]
            
            if (rdx_4 s>= rax_8)
                break
    
    int64_t rdi_2 = sx.q(arg2[1].d)
    int32_t r12_1 = *(arg1 + 0x10)
    int32_t rax_10 = r12_1 + rdi_2.d
    *(arg1 + 0x10) = rax_10
    
    if (rax_10 s> *(arg1 + 0x14))
        sub_1405a4f90(arg1 + 8)
    
    int64_t rsi_3 = sx.q(r15_1) << 4
    int64_t rdx_7 = *(arg1 + 8) + rsi_3
    int64_t count = rdi_2 << 4
    memmove(count + rdx_7, rdx_7, (r12_1 - r15_1) << 4)
    memset(*(arg1 + 8) + rsi_3, 0, count)
    int32_t i_1 = 0
    
    if (arg2[1].d s> 0)
        int64_t r12_3 = 0
        
        do
            int64_t* rcx_12 = *arg2
            int128_t* r8_7 = (sx.q(i_1 + r15_1) << 4) + *(arg1 + 8)
            int64_t* rdx_8 = *(rcx_12 + r12_3 + 8)
            int64_t var_c0 = *(rcx_12 + r12_3)
            int64_t* var_b8_1 = rdx_8
            
            if (rdx_8 != 0)
                rdx_8[1].d += 1
                rdx_8 = var_b8_1
            
            if (&var_c0 != r8_7)
                int128_t zmm1 = var_c0.o
                int128_t var_50_1 = zmm1
                var_c0.o = *r8_7
                rdx_8 = var_b8_1
                *r8_7 = zmm1
            
            if (rdx_8 != 0)
                rdx_8[1].d -= 1
                
                if (rdx_8[1].d == 1)
                    (**var_b8_1)(var_b8_1, rdx_8)
                    int32_t rax_15 = *(var_b8_1 + 0xc)
                    *(var_b8_1 + 0xc) -= 1
                    
                    if (rax_15 == 1)
                        (*(*var_b8_1 + 8))(var_b8_1, 1)
            
            i_1 += 1
            r12_3 += 0x10
        while (i_1 s< arg2[1].d)

uint64_t result = zx.q(*(arg1 + 0x68))
*(arg1 + 0x68) += arg2[1].d

if (arg2[1].d s> 0)
    int64_t* rsi_4 = nullptr
    
    do
        *(*(rsi_4 + *arg2) + 0xe) = arg3
        int32_t rdx_9 = *(*(rsi_4 + *arg2) + 8)
        int32_t var_b0 = rdx_9
        void* rax_20 = sub_1422d52d0(arg1 + 0x18, rdx_9, &var_b0)
        *(rax_20 + 5) = arg4
        *(rax_20 + 0x18) = arg7
        int64_t* rcx_19 = *(rsi_4 + *arg2)
        int64_t rdx_10 = *rcx_19
        result = (*(rdx_10 + 0x20))(rcx_19, rdx_10)
        
        if (result == 0)
            *rax_20 += 1
        else
            *rax_20 += *(result + 0x18)
        
        i_2 += 1
        rsi_4 = &rsi_4[2]
    while (i_2 s< arg2[1].d)
    
    lpCriticalSection = arg1 + 0x70

if (lpCriticalSection != 0)
    result = LeaveCriticalSection(lpCriticalSection)

int64_t rcx_27 = *arg5

if (rcx_27 != 0)
    result = sub_140a74f90(rcx_27)

int64_t rcx_29 = *arg6

if (rcx_29 != 0)
    result = sub_140a74f90(rcx_29)

__security_check_cookie(rax_1 ^ &var_f8)
return result
