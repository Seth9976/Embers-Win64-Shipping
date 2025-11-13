// 函数: sub_142923ff0
// 地址: 0x142923ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x100)
void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t rsi = 0
int64_t r12 = sx.q(arg5)
char* r13 = arg3
void* rbx = arg9
int32_t r14 = 0
char* rbp = nullptr
void* rax_3 = arg8
int64_t r15 = sx.q(arg4)
int32_t var_100 = r12.d
void* const var_e8 = rax_3
uint32_t var_108 = 0xffffffff
char* var_f8 = nullptr

if (rax_3 == 0)
    rax_3 = sub_142893c90()
    var_e8 = &data_1434e9110

if (rbx == 0)
    rbx = rax_3

int64_t rdi = sx.q(sub_1428916c0(rax_3))
uint64_t result

if (arg2 s<= 0 || r15.d s<= 0)
    result = 0xffffffff
else
    char var_c8[0x40]
    
    if (r12.d s< r15.d || r12.d s< ((rdi << 1) + 2).d)
        sub_1428a5670(4, 0x99, 0x79, "crypto\rsa\rsa_oaep.c", 0xf5)
        var_108 = 0xffffffff
    else
        r14 = r12.d - rdi.d - 1
        char* rax_5 = sub_1428a6730(sx.q(r14))
        rbp = rax_5
        
        if (rax_5 != 0)
            if (r15.d == r12.d)
                goto label_14292416e
            
            char* rax_6 = sub_1428a6a70(r12)
            var_f8 = rax_6
            
            if (rax_6 != 0)
                memcpy(&rax_6[r12 - r15], r13, r15.d)
                r13 = var_f8
            label_14292416e:
                int32_t var_118
                var_118.q = rbx
                void* r13_2 = &r13[1 + rdi]
                int32_t r15_4 = neg.d((zx.d(*r13) - 1) u>> 0x1f)
                int64_t rbx_3 = rdi
                
                if (sub_142923910(&var_c8, rdi.d, r13_2, r14, var_118) == 0)
                    int32_t rdx_4 = 0
                    
                    if (rdi.d s> 0 && rdi.d u>= 0x40)
                        int64_t rcx_6 = sx.q((rdi - 1).d)
                        
                        if (&var_c8 u> &r13[1 + rcx_6] || &var_c8[rcx_6] u< &r13[1])
                            int32_t rcx_8 = rdi.d & 0x8000003f
                            
                            if (rcx_8 s< 0)
                                rcx_8 = ((rcx_8 - 1) | 0xffffffc0) + 1
                            
                            int64_t i = 0
                            int64_t rcx_12 = &r13[1] - &var_c8
                            
                            do
                                rdx_4 += 0x40
                                int128_t* rax_13 = &var_c8[i]
                                i += 0x40
                                *rax_13 ^= *(rax_13 + rcx_12)
                                rax_13[1] ^= *(rax_13 + rcx_12 + 0x10)
                                rax_13[2] ^= *(rax_13 + rcx_12 + 0x20)
                                rax_13[3] ^= *(rax_13 + rcx_12 + 0x30)
                            while (i s< sx.q(rdi.d - rcx_8))
                    
                    int64_t rdx_5 = sx.q(rdx_4)
                    
                    while (rdx_5 s< rbx_3)
                        char* rcx_13 = &var_c8[rdx_5]
                        rdx_5 += 1
                        *rcx_13 ^= rcx_13[&r13[1] - &var_c8]
                    
                    var_118.q = rbx
                    
                    if (sub_142923910(rbp, r14, &var_c8, rdi.d, var_118) == 0)
                        int32_t r8_6 = 0
                        
                        if (r14 s> 0 && r14 u>= 0x40)
                            int64_t rcx_15 = sx.q(r14 - 1)
                            
                            if (rbp u> rcx_15 + r13_2 || &rbp[rcx_15] u< r13_2)
                                int32_t rcx_17 = r14 & 0x8000003f
                                
                                if (rcx_17 s< 0)
                                    rcx_17 = ((rcx_17 - 1) | 0xffffffc0) + 1
                                
                                char* rcx_20 = rbp
                                void* rdx_9 = r13_2 - rbp
                                
                                do
                                    r8_6 += 0x40
                                    *rcx_20 ^= *(rdx_9 + rcx_20)
                                    *(rcx_20 + 0x10) ^= *(rdx_9 + rcx_20 + 0x10)
                                    *(rcx_20 + 0x20) ^= *(rdx_9 + rcx_20 + 0x20)
                                    *(rcx_20 + 0x30) ^= *(rdx_9 + rcx_20 + 0x30)
                                    rcx_20 = &rcx_20[0x40]
                                while (rcx_20 - rbp s< sx.q(r14 - rcx_17))
                        
                        int64_t rax_23 = sx.q(r8_6)
                        int64_t r12_3 = sx.q(r14)
                        
                        if (rax_23 s< r12_3)
                            char* rcx_21 = &rbp[rax_23]
                            void* i_2 = r12_3 - rax_23
                            void* i_1
                            
                            do
                                *rcx_21 ^= rcx_21[r13_2 - rbp]
                                rcx_21 = &rcx_21[1]
                                i_1 = i_2
                                i_2 -= 1
                            while (i_1 != 1)
                        
                        var_118.q = var_e8
                        void var_88
                        
                        if (sub_142891710(arg6, sx.q(arg7), &var_88, nullptr, var_118, nullptr)
                                != 0)
                            int32_t rax_27 = sub_1428bc500(rbp, &var_88, rbx_3)
                            int32_t r9_4 = 0
                            int32_t r15_5 =
                                r15_4 & neg.d((rax_27 - 1) u>> 0x1f & not.d(rax_27) u>> 0x1f)
                            
                            while (rbx_3 s< r12_3)
                                uint32_t r8_9 = zx.d(rbp[rbx_3])
                                int32_t rax_31 = r8_9 ^ 1
                                rbx_3 += 1
                                int32_t rdx_16 =
                                    neg.d((rax_31 - 1) u>> 0x1f & not.d(rax_31) u>> 0x1f)
                                int32_t rcx_30 = not.d(r9_4) & rdx_16
                                r9_4 |= rdx_16
                                int32_t rcx_31 = rcx_30 & rdi.d
                                rdi = zx.q(rdi.d + 1)
                                rsi = (rsi & not.d(rcx_30)) | rcx_31
                                r15_5 &= neg.d((r8_9 - 1) u>> 0x1f) | r9_4
                            
                            if ((r15_5 & r9_4) == 0)
                                sub_1428a5670(4, 0x99, 0x79, "crypto\rsa\rsa_oaep.c", 0xf5)
                                var_108 = 0xffffffff
                            else
                                uint32_t count = r14 - (rsi + 1)
                                var_108 = count
                                
                                if (arg2 s>= count)
                                    memcpy(arg1, &rbp[sx.q(rsi + 1)], count)
                                else
                                    sub_1428a5670(4, 0x99, 0x6d, "crypto\rsa\rsa_oaep.c", 0xe8)
                                    sub_1428a5670(4, 0x99, 0x79, "crypto\rsa\rsa_oaep.c", 0xf5)
                                    var_108 = 0xffffffff
            else
                sub_1428a5670(4, 0x99, 0x41, "crypto\rsa\rsa_oaep.c", 0xa4)
        else
            sub_1428a5670(4, 0x99, 0x41, "crypto\rsa\rsa_oaep.c", 0x9c)
    
    sub_1428b8960(&var_c8, 0x40)
    sub_1428a6890(rbp, sx.q(r14), "crypto\rsa\rsa_oaep.c", 0xf8)
    sub_1428a6890(var_f8, sx.q(var_100), "crypto\rsa\rsa_oaep.c", 0xf9)
    result = zx.q(var_108)

__security_check_cookie(rax_1 ^ &var_138)
return result
