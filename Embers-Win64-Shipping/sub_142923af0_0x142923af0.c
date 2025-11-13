// 函数: sub_142923af0
// 地址: 0x142923af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xc8)
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* const r13 = arg7
int32_t result_1 = 0
void* const rdi = arg8
int64_t r12 = 0
int32_t r14 = 0

if (r13 == 0)
    r13 = &data_1434e9110

if (rdi == 0)
    rdi = r13

int64_t rdi_1 = sx.q(sub_1428916c0(r13))
int32_t rax_4 = (rdi_1 * 2).d
int32_t rbp_1 = arg2 - 1 - rax_4
uint64_t result

if (arg4 s> rbp_1 - 1)
    sub_1428a5670(4, 0x9a, 0x6e, "crypto\rsa\rsa_oaep.c", 0x3e)
    result = 0
else if (arg2 - 1 s>= rax_4 + 1)
    void* rcx_3 = &arg1[rdi_1]
    *arg1 = 0
    int32_t var_e8
    var_e8.q = r13
    void var_98
    
    if (sub_142891710(arg5, sx.q(arg6), rcx_3 + 1, nullptr, var_e8, nullptr) != 0)
        memset(rcx_3 + 1 + rdi_1, 0, sx.q(rbp_1 - arg4 - 1))
        int64_t rcx_8 = sx.q(arg4)
        int64_t rbp_4 = sx.q(arg2 - 1)
        *(sx.q(rbp_4.d - rcx_8.d - rdi_1.d) + rcx_3) = 1
        memcpy(rbp_4 - rcx_8 - rdi_1 + rcx_3 + 1, arg3, rcx_8.d)
        
        if (sub_142897af0(&arg1[1], zx.q(rdi_1.d)) s> 0)
            r14 = rbp_4.d - rdi_1.d
            int64_t rbp_5 = sx.q(r14)
            int64_t rax_13 = sub_1428a6730(rbp_5)
            r12 = rax_13
            
            if (rax_13 != 0)
                var_e8.q = rdi
                
                if (sub_142923910(r12, r14, &arg1[1], rdi_1.d, var_e8) s>= 0)
                    int32_t r8_6 = 0
                    int64_t rcx_17
                    
                    if (r14 s> 0 && r14 u>= 0x40)
                        rcx_17 = sx.q(r14 - 1)
                    
                    void* r9_1
                    int128_t zmm1
                    
                    if (r14 s> 0 && r14 u>= 0x40
                            && (rcx_3 + 1 u> rcx_17 + r12 || rcx_17 + rcx_3 + 1 u< r12))
                        int32_t rcx_19 = r14 & 0x8000003f
                        
                        if (rcx_19 s< 0)
                            rcx_19 = ((rcx_19 - 1) | 0xffffffc0) + 1
                        
                        r9_1 = rcx_3
                        int128_t* rdx_9 = r12 - (rcx_3 + 1)
                        int128_t* rcx_22 = rcx_3 + 1
                        
                        do
                            int128_t zmm0_1 = *rcx_22
                            r8_6 += 0x40
                            zmm1 = *(rdx_9 + rcx_22)
                            rcx_22 = &rcx_22[4]
                            rcx_22[-4] = zmm1 ^ zmm0_1
                            rcx_22[-3] ^= *(rdx_9 + rcx_22 - 0x30)
                            rcx_22[-2] ^= *(rdx_9 + rcx_22 - 0x20)
                            rcx_22[-1] ^= *(rdx_9 + rcx_22 - 0x10)
                        while (rcx_22 + not.q(r9_1) s< sx.q(r14 - rcx_19))
                    else
                        r9_1 = rcx_3
                    
                    int64_t rax_21 = sx.q(r8_6)
                    
                    if (rax_21 s< rbp_5)
                        char* rcx_24 = r9_1 + 1 + rax_21
                        int64_t i_3 = rbp_5 - rax_21
                        int64_t i
                        
                        do
                            *rcx_24 ^= *(r12 - (rcx_3 + 1) + rcx_24)
                            rcx_24 = &rcx_24[1]
                            i = i_3
                            i_3 -= 1
                        while (i != 1)
                    
                    var_e8.q = rdi
                    
                    if (sub_142923910(&var_98, rdi_1.d, rcx_3 + 1, r14, var_e8) s>= 0)
                        if (rdi_1.d s> 0 && rdi_1.d u>= 0x40)
                            int64_t rcx_26 = sx.q((rdi_1 - 1).d)
                            
                            if (&arg1[1] u> &var_98 + rcx_26 || &arg1[1 + rcx_26] u< &var_98)
                                int32_t rax_28 = rdi_1.d & 0x8000003f
                                
                                if (rax_28 s< 0)
                                    rax_28 = ((rax_28 - 1) | 0xffffffc0) + 1
                                
                                void* rcx_27 = &arg1[1]
                                
                                do
                                    int128_t zmm0_2 = *rcx_27
                                    result_1 += 0x40
                                    zmm1 = *(&var_98 - (arg1 + 1) + rcx_27)
                                    rcx_27 += 0x40
                                    *(rcx_27 - 0x40) = zmm1 ^ zmm0_2
                                    void var_88
                                    *(rcx_27 - 0x30) ^= *(&var_88 - (arg1 + 1) + rcx_27 - 0x40)
                                    void var_78
                                    *(rcx_27 - 0x20) ^= *(&var_78 - (arg1 + 1) + rcx_27 - 0x40)
                                    void var_68
                                    *(rcx_27 - 0x10) ^= *(&var_68 - (arg1 + 1) + rcx_27 - 0x40)
                                while (not.q(arg1) + rcx_27 s< sx.q(rdi_1.d - rax_28))
                        
                        int64_t result_2 = sx.q(result_1)
                        
                        if (result_2 s< rdi_1)
                            char* rax_32 = &arg1[1 + result_2]
                            int64_t i_2 = rdi_1 - result_2
                            int64_t i_1
                            
                            do
                                *rax_32 ^= rax_32[&var_98 - &arg1[1]]
                                rax_32 = &rax_32[1]
                                i_1 = i_2
                                i_2 -= 1
                            while (i_1 != 1)
                        
                        result_1 = 1
            else
                sub_1428a5670((rax_13 + 4).d, 0x9a, (rax_13 + 0x41).d, "crypto\rsa\rsa_oaep.c", 
                    0x57)
    
    sub_1428b8960(&var_98, 0x40)
    sub_1428a6890(r12, sx.q(r14), "crypto\rsa\rsa_oaep.c", 0x68)
    result = zx.q(result_1)
else
    sub_1428a5670(4, 0x9a, 0x78, "crypto\rsa\rsa_oaep.c", 0x44)
    result = 0

__security_check_cookie(rax_1 ^ &var_108)
return result
