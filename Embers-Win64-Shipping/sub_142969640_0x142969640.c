// 函数: sub_142969640
// 地址: 0x142969640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int64_t var_60_1
__builtin_memset(&var_60_1, 0, 0x18)
int64_t rbp = 0
int64_t* rax = sub_142891ee0()
int64_t var_58_1
char* var_50_1
int32_t r13_1

if (rax == 0)
label_1429699ec:
    r13_1 = 0
label_142969a0a:
    sub_1428a5670(0x23, 0x6f, 0x41, "crypto\pkcs12\p12_key.c", 0xa5)
else
    int64_t i_2 = sx.q(sub_1406bc1c0(arg9))
    int32_t rax_2 = sub_1428916c0(arg9)
    int64_t r14_1 = sx.q(rax_2)
    
    if (rax_2 s< 0 || i_2.d s<= 0)
        goto label_1429699ec
    
    var_58_1 = sub_1428a6730(i_2)
    rbp = sub_1428a6730(r14_1)
    var_60_1 = sub_1428a6730(sx.q((i_2 + 1).d))
    int32_t r15_2 = arg4 - 1 + i_2.d
    int32_t r15_3 = r15_2 - mods.dp.d(sx.q(r15_2), i_2.d)
    int32_t r14_4
    
    if (arg2 == 0)
        r14_4 = 0
    else
        int32_t r14_3 = arg2 - 1 + i_2.d
        r14_4 = r14_3 - mods.dp.d(sx.q(r14_3), i_2.d)
    
    int64_t rcx_5 = sx.q(r14_4 + r15_3)
    char* rax_14 = sub_1428a6730(rcx_5)
    var_50_1 = rax_14
    
    if (var_58_1 == 0 || rbp == 0 || var_60_1 == 0 || rax_14 == 0)
        goto label_1429699ec
    
    int64_t rcx_8
    int64_t rdi_2
    
    if (i_2.d s> 0)
        rdi_2, rcx_8 = __memfill_u8(var_58_1, arg5, i_2)
    int32_t r8_4 = 0
    char* rdi_3 = rax_14
    
    if (r15_3 s> 0)
        do
            int32_t rax_16 = r8_4
            r8_4 += 1
            *rdi_3 = *(sx.q(mods.dp.d(sx.q(rax_16), arg4)) + arg3)
            rdi_3 = &rdi_3[1]
        while (r8_4 s< r15_3)
    
    r13_1 = 0
    int32_t r8_5 = 0
    
    if (r14_4 s> 0)
        do
            rdi_3 = &rdi_3[1]
            int32_t temp20_1
            int32_t temp21_1
            temp20_1:temp21_1 = sx.q(r8_5)
            r8_5 += 1
            rdi_3[-1] = *(sx.q(mods.dp.d(temp20_1:temp21_1, arg2)) + arg1)
        while (r8_5 s< r14_4)
    
    int32_t* r14_5 = arg9
    
    if (sub_1428919c0(rax, r14_5, nullptr) == 0)
    label_142969a0a_1:
        sub_1428a5670(0x23, 0x6f, 0x41, "crypto\pkcs12\p12_key.c", 0xa5)
    else
        int32_t r15_4 = arg6
        int32_t rdi_4 = 1
        
        while (true)
            if (sub_142891c10(rax, var_58_1, i_2) == 0)
                goto label_142969a0a_1
            
            if (sub_142891c10(rax, var_50_1, rcx_5) == 0)
                goto label_142969a0a_1
            
            if (sub_1428918e0(rax, rbp, nullptr) == 0)
                goto label_142969a0a_1
            
            if (r15_4 s> 1)
                do
                    if (sub_1428919c0(rax, r14_5, nullptr) == 0)
                        goto label_142969a0a_1
                    
                    if (sub_142891c10(rax, rbp, r14_1) == 0)
                        goto label_142969a0a_1
                    
                    if (sub_1428918e0(rax, rbp, nullptr) == 0)
                        goto label_142969a0a_1
                    
                    rdi_4 += 1
                while (rdi_4 s< r15_4)
            
            int64_t r14_6 = sx.q(r14_1.d)
            uint32_t count = r14_6.d
            
            if (arg7 s< r14_6.d)
                count = arg7
            
            memcpy(arg8, rbp, count)
            
            if (r14_6.d s>= arg7)
                r13_1 = 1
                break
            
            arg8 += r14_6
            arg7 -= r14_6.d
            char* rdi_7 = nullptr
            int32_t r8_10 = 0
            
            if (i_2 s> 0)
                int64_t r15_5 = var_60_1
                
                do
                    int32_t rax_29 = r8_10
                    r8_10 += 1
                    rdi_7[r15_5] = *(sx.q(mods.dp.d(sx.q(rax_29), r14_6.d)) + rbp)
                    rdi_7 = &rdi_7[1]
                while (rdi_7 s< i_2)
                
                r15_4 = arg6
            
            int64_t r10_1 = 0
            
            if (rcx_5 s> 0)
                void* r9_3 = var_60_1 - var_50_1
                int16_t rax_33 = 1
                
                do
                    int16_t rdi_8 = rax_33
                    
                    if (i_2 s> 0)
                        void* rax_34 = &var_50_1[-1 + i_2 + r10_1]
                        int64_t i_1 = i_2
                        int64_t i
                        
                        do
                            uint16_t rdx_23 = zx.w(*(r9_3 + rax_34))
                            uint16_t rcx_20 = zx.w(*rax_34)
                            rax_34 -= 1
                            rdi_8 += rdx_23 + rcx_20
                            *(rax_34 + 1) = rdi_8.b
                            rdi_8 u>>= 8
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                        rax_33 = (i_1 + 1).w
                    
                    r10_1 += i_2
                    r9_3 += neg.q(i_2)
                while (r10_1 s< rcx_5)
            
            r14_5 = arg9
            rdi_4 = 1
            
            if (sub_1428919c0(rax, r14_5, nullptr) == 0)
                goto label_142969a0a_1

sub_1428a6780(rbp)
sub_1428a6780(var_60_1)
sub_1428a6780(var_58_1)
sub_1428a6780(var_50_1)
sub_142891ea0(rax)
return zx.q(r13_1)
