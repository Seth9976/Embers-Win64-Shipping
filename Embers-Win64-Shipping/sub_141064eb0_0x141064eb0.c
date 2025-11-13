// 函数: sub_141064eb0
// 地址: 0x141064eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* r13 = arg1
void* i_1 = sub_1410603b0(arg1)
uint64_t r12 = 0
int32_t var_e0 = 0
int64_t var_c8 = 0
uint64_t r15 = 0
int64_t performanceCount[0x2]
QueryPerformanceCounter(&performanceCount)
CRITICAL_SECTION* lpCriticalSection = r13 + 0x108
CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection

if (lpCriticalSection != 0)
    EnterCriticalSection(lpCriticalSection)

int64_t rbx_1 = -1
int64_t rcx_2 = sx.q(*(arg2[1] + 0x14))
int64_t rax_3 = 8 * rcx_2

if (mulu.dp.q(8, rcx_2) u>> 0x40 != zx.o(0))
    rax_3 = -1

int64_t rax_4 = j_sub_140a82f30(rax_3)
uint64_t rcx_4 = zx.q(*(r13 + 0xf8))
int64_t rax_5 = 8 * rcx_4

if (mulu.dp.q(8, rcx_4) u>> 0x40 != zx.o(0))
    rax_5 = -1

int64_t rax_6 = j_sub_140a82f30(rax_5)
int64_t* r8 = arg2
int32_t i = 0
void* rcx_6 = r8[1]

if (*(rcx_6 + 0x14) s> 0)
    int64_t* r10_1 = nullptr
    int64_t rdi = 0
    
    do
        int64_t r11_1 = *(rcx_6 + 8)
        int32_t* rcx_7 = *(r10_1 + r11_1)
        
        if (*rcx_7 == 1)
            *(rax_4 + (r12 << 3)) = rcx_7
            r12 = zx.q(r12.d + 1)
            int32_t* r8_1 = *(r10_1 + r11_1)
            *r8_1 = 0
            **(r8_1 + 0x50) = *(r8_1 + 0x48)
            *(*(r8_1 + 0x48) + 8) = *(r8_1 + 0x50)
            *(r8_1 + 0x48) = r13 + 0xd8
            *(r8_1 + 0x50) = *(r13 + 0xe0)
            **(r13 + 0xe0) = &r8_1[0x12]
            *(r13 + 0xe0) = &r8_1[0x12]
            *(r13 + 0xfc) -= 1
            *(r13 + 0xf8) += 1
            *(r13 + 0x100) += *(r8_1 + 0x10)
            rcx_7 = *(r10_1 + r11_1)
            r8 = arg2
            rdi += *(rcx_7 + 0x10)
        
        i += 1
        *(rcx_7 + 0x18) = *r8
        *(*(r10_1 + r11_1) + 0x20) = performanceCount[0]
        void* rdx_1 = *(r10_1 + r11_1)
        r10_1 = &r10_1[1]
        **(rdx_1 + 0x50) = *(rdx_1 + 0x48)
        *(*(rdx_1 + 0x48) + 8) = *(rdx_1 + 0x50)
        *(rdx_1 + 0x48) = r13 + 0xd8
        *(rdx_1 + 0x50) = *(r13 + 0xe0)
        **(r13 + 0xe0) = rdx_1 + 0x48
        *(r13 + 0xe0) = rdx_1 + 0x48
        rcx_6 = r8[1]
    while (i s< *(rcx_6 + 0x14))
    
    r13 = arg1
    var_c8 = rdi
    var_e0 = r12.d
    lpCriticalSection = r13 + 0x108

int64_t* rcx_13 = *(r13 + 0xd0)
uint64_t rdx_3 = zx.q(*(r13 + 0xc8))
int64_t var_88
__builtin_memset(&var_88, 0, 0x20)
(*(*rcx_13 + 0x70))(rcx_13, rdx_3, 0, &var_88, arg1, var_e0)
double zmm4 = 1.8446744073709552e+19
int64_t var_80
int64_t zmm2 = float.d(var_80)

if (var_80 s< 0)
    zmm2 = zmm2 f+ zmm4

int64_t rax_20 = var_88
double zmm0 = float.d(rax_20)

if (rax_20 s< 0)
    zmm0 = zmm0 + zmm4

float zmm1[0x2] = *(r13 + 0x178)
double zmm3 = 1.0
zmm2 = zmm2 f/ zmm0
zmm0 = _mm_cvtps_pd(zmm1)
int64_t temp0_1 = _mm_min_sd(zmm2, zmm3)

if (not(temp0_1 f<= zmm0))
    int64_t rcx_14 = *(r13 + 0x160)
    zmm2 = temp0_1 f- zmm0
    int64_t rax_21 = *(r13 + 0x170)
    zmm0.d = 1f - zmm1[0]
    zmm2 = zmm2 f/ _mm_cvtps_pd(zmm0)
    zmm0 = float.d(rax_21 - rcx_14)
    
    if (rax_21 - rcx_14 s< 0)
        zmm0 = zmm0 + zmm4
    
    zmm3 = (zmm3 f- zmm2) * zmm0
    int64_t rax_23 = 0
    zmm0 = 9.2233720368547758e+18
    
    if (not(zmm3 < zmm0))
        zmm3 = zmm3 - zmm0
        
        if (not(zmm3 >= zmm0))
            rax_23 = -0x8000000000000000
    
    rbx_1 = int.q(zmm3) + rax_23 + rcx_14

int64_t r8_2 = performanceCount[0]
void* r13_2 = r13 + 0xd8
void** rdx_4 = *r13_2
void* r14_1

if (rdx_4 == r13_2)
    r14_1 = arg1
else
    while (i_1 == 0 || rdx_4[-6] u< *i_1)
        if (r8_2 - rdx_4[-5] u<= rbx_1)
            break
        
        *(rax_6 + (r15 << 3)) = rdx_4[-8]
        r15 = zx.q(r15.d + 1)
        rdx_4[-9].d = 1
        *rdx_4[1] = *rdx_4
        *(*rdx_4 + 8) = rdx_4[1]
        *rdx_4 = r13_2 + 0x10
        rdx_4[1] = *(r13_2 + 0x18)
        **(r13_2 + 0x18) = rdx_4
        *(r13_2 + 0x18) = rdx_4
        *(r13_2 + 0x20) -= 1
        *(r13_2 + 0x28) -= rdx_4[-7]
        *(r13_2 + 0x24) += 1
        rdx_4 = *r13_2
        
        if (rdx_4 == r13_2)
            break
    
    r14_1 = arg1
    
    if (r15.d != 0)
        int64_t* rcx_18 = *(r14_1 + 0xc0)
        (*(*rcx_18 + 0x118))(rcx_18, zx.q(r15.d), rax_6)

if (r12.d != 0)
    int32_t r15_1 = 0
    int32_t var_dc_1 = 0
    int32_t i_7 = 0
    
    while (true)
        int64_t* rcx_19 = *(r14_1 + 0xd0)
        uint64_t rdx_6 = zx.q(*(r14_1 + 0xc8))
        __builtin_memset(&var_88, 0, 0x20)
        (*(*rcx_19 + 0x70))(rcx_19, rdx_6, 0, &var_88)
        int64_t* rcx_20 = *(r14_1 + 0xd0)
        uint64_t rdx_7 = zx.q(*(r14_1 + 0xc8))
        int64_t var_68
        __builtin_memset(&var_68, 0, 0x20)
        (*(*rcx_20 + 0x70))(rcx_20, rdx_7, 1, &var_68)
        int64_t rbx_4 = 0
        int64_t rax_37 = var_68 + var_88
        int32_t r10_2 = 0
        int64_t var_80_1
        int64_t var_60
        int64_t rdx_9 = var_60 + var_80_1
        int64_t r11_3 = rax_37 - rdx_9
        uint64_t i_10 = zx.q(i_7)
        
        if (r11_3 s<= 0)
            goto label_141065317
        
        int32_t i_2 = i_10.d
        
        if (i_10.d u< r12.d)
            int64_t* rcx_22 = rax_4 + (i_10 << 3)
            
            do
                void* r8_4 = *rcx_22
                int64_t r9_7 = *(r8_4 + 0x10) + rbx_4
                
                if (r9_7 u> r11_3)
                    i_7 = i_2
                    break
                
                r15_1 += 1
                *rcx_22 = *(r8_4 + 8)
                r10_2 += 1
                rcx_22 = &rcx_22[1]
                var_dc_1 = r15_1
                i_2 += 1
                rbx_4 = r9_7
            while (i_2 u< r12.d)
        
        int64_t* rcx_23 = *(r14_1 + 0xc0)
        int64_t r9_8 = *rcx_23
        
        if ((*(r9_8 + 0x110))(rcx_23, zx.q(r10_2), rax_4 + (zx.q(i_10.d) << 3), r9_8) s>= 0)
            var_c8 -= rbx_4
        label_141065317:
            
            if (r15_1 == r12.d)
                break
        
        void* rcx_24 = *r13_2
        void* r12_1 = nullptr
        
        if (rcx_24 != r13_2)
            r12_1 = rcx_24 - 0x48
        
        if (r14_1 != -0x20)
            EnterCriticalSection(r14_1 + 0x20)
        
        int64_t* r15_2
        
        for (void* i_3 = *(r14_1 + 0x98); i_3 != r14_1 + 0x98; i_3 = *(r14_1 + 0x98))
            r15_2 = i_3 - 0x10
            int32_t r14_2 = 0
            
            if (r15_2[1].d u> 0)
                while (true)
                    int64_t rsi_3 = (zx.q(r14_2) + 2) * 2
                    int64_t* rcx_26 = *r15_2[rsi_3]
                    int64_t rax_43 = (*(*rcx_26 + 0x40))(rcx_26)
                    
                    if (r15_2[rsi_3 + 1] u> rax_43)
                        if (r14_1 != -0x20)
                            LeaveCriticalSection(r14_1 + 0x20)
                        
                        break
                    
                    r14_2 += 1
                    
                    if (r14_2 u>= r15_2[1].d)
                        goto label_14106539b
                
                goto label_1410653db
            
        label_14106539b:
            int64_t* r8_6 = *(r14_1 + 0x98)
            *r8_6[1] = *r8_6
            *(*r8_6 + 8) = r8_6[1]
            j_sub_140a74f90(r15_2)
        
        if (r14_1 != -0x20)
            LeaveCriticalSection(r14_1 + 0x20)
        
        r15_2 = nullptr
    label_1410653db:
        
        if (r12_1 != 0)
            int64_t rcx_29 = *arg2
            
            if (*(r12_1 + 0x18) u< rcx_29 && r15_2 != 0)
                int64_t i_8 = *r15_2
                int64_t i_5 = i_8 - 1
                
                if (i_8 != rcx_29)
                    i_5 = i_8
                
                if (r14_1 != -0x20)
                    EnterCriticalSection(r14_1 + 0x20)
                
                if (*(r14_1 + 0x98) != r14_1 + 0x98)
                    while (true)
                        int64_t* r8_8 = *(r14_1 + 0x98)
                        int64_t temp4_1 = r8_8[-2]
                        void* rsi_4 = &r8_8[-2]
                        
                        if (temp4_1 u> i_5)
                            break
                        
                        if (temp4_1 u>= i_5)
                            int32_t i_4 = 0
                            HANDLE hHandle = *(arg1 + 0xb0)
                            
                            if (*(rsi_4 + 8) u> 0)
                                do
                                    int64_t r14_5 = (zx.q(i_4) + 2) * 2
                                    int64_t r13_4 = *(rsi_4 + (r14_5 << 3) + 8)
                                    int64_t* rcx_33 = **(rsi_4 + (r14_5 << 3))
                                    
                                    if (r13_4 u> (*(*rcx_33 + 0x40))(rcx_33))
                                        int64_t* rcx_34 = **(rsi_4 + (r14_5 << 3))
                                        (*(*rcx_34 + 0x48))(rcx_34, r13_4, hHandle)
                                        WaitForSingleObject(hHandle, 0xffffffff)
                                    
                                    i_4 += 1
                                while (i_4 u< *(rsi_4 + 8))
                                
                                lpCriticalSection = lpCriticalSection_1
                                r8_8 = *(arg1 + 0x98)
                            
                            *r8_8[1] = *r8_8
                            *(*r8_8 + 8) = r8_8[1]
                            j_sub_140a74f90(rsi_4)
                            break
                        
                        *r8_8[1] = *r8_8
                        *(*r8_8 + 8) = r8_8[1]
                        j_sub_140a74f90(rsi_4)
                
                if (r14_1 != -0x20)
                    LeaveCriticalSection(r14_1 + 0x20)
                
                r14_1 = arg1
                uint64_t rdx_20 = 0
                int64_t r9_10 = rdx_9 + var_c8
                r13_2 = r14_1 + 0xd8
                void** r8_9 = *r13_2
                
                if (r8_9 != r13_2)
                    while (r8_9[-6] u<= i_5)
                        if (r9_10 s< rax_37)
                            break
                        
                        *(rax_6 + (rdx_20 << 3)) = r8_9[-8]
                        rdx_20 = zx.q(rdx_20.d + 1)
                        r8_9[-9].d = 1
                        *r8_9[1] = *r8_9
                        *(*r8_9 + 8) = r8_9[1]
                        *r8_9 = r13_2 + 0x10
                        r8_9[1] = *(r13_2 + 0x18)
                        **(r13_2 + 0x18) = r8_9
                        *(r13_2 + 0x18) = r8_9
                        *(r13_2 + 0x20) -= 1
                        *(r13_2 + 0x28) -= r8_9[-7]
                        *(r13_2 + 0x24) += 1
                        r9_10 -= r8_9[-7]
                        r8_9 = *r13_2
                        
                        if (r8_9 == r13_2)
                            break
                
                int64_t* rcx_43 = *(r14_1 + 0xc0)
                (*(*rcx_43 + 0x118))(rcx_43)
                r15_1 = var_dc_1
                r12 = zx.q(var_e0)
                continue
        
        uint64_t i_11 = zx.q(i_7)
        
        if (i_11.d u< var_e0)
            int64_t* r8_10 = rax_4 + (i_11 << 3)
            uint64_t i_9 = zx.q(var_e0 - i_11.d)
            uint64_t i_6
            
            do
                void* rax_65 = *r8_10
                r8_10 = &r8_10[1]
                r8_10[-1] = *(rax_65 + 8)
                i_6 = i_9
                i_9 -= 1
            while (i_6 != 1)
        
        r14_1 = arg1
        int64_t* rcx_47 = *(r14_1 + 0xc0)
        int64_t r9_11 = *rcx_47
        (*(r9_11 + 0x110))(rcx_47, zx.q(var_e0 - var_dc_1), rax_4 + (i_11 << 3), r9_11)
        break

j_sub_140a74f90(rax_4)
j_sub_140a74f90(rax_6)

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

int64_t* rcx_51 = *(r14_1 + 0x78)
int64_t result = (*(*rcx_51 + 0x50))(rcx_51, arg2[2])
void* rbx_6 = arg2[1]

if (rbx_6 != 0)
    j_sub_140a74f90(*(rbx_6 + 8))
    result = j_sub_140a74f90(rbx_6)

arg2[1] = 0
__security_check_cookie(rax_1 ^ &var_108)
return result
