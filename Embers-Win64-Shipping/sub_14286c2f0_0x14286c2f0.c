// 函数: sub_14286c2f0
// 地址: 0x14286c2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x148)
void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t result_1 = 0
void* rax_2 = sub_142896750(*(*(arg1 + 0x488) + 0x28))
uint64_t result

if (rax_2 != 0)
    uint128_t zmm0_1 = *arg2
    uint128_t var_148_1
    void* r13_1
    uint64_t r14_3
    
    if (((*arg1 - 0x100) & 0xfffffdff) == 0)
        r14_3 = zmm0_1:8.q
        r13_1 = zmm0_1.q
    label_14286c415:
        int32_t var_150_2
        int32_t r9_2
        
        if (sub_142897860(rax_2) s>= 0x30)
            char* rax_10 = sub_1428a6730(sx.q(sub_142897860(rax_2)))
            var_148_1.q = rax_10
            char* rbx_1 = rax_10
            
            if (rax_10 == 0)
                var_150_2 = 0xbbb
                r9_2 = (&rax_10[0x41]).d
                goto label_14286c46f
            
            void var_78
            
            if (sub_142897c20(&var_78, 0x30) s> 0)
                int64_t var_158
                var_158.d = 3
                int32_t rax_12 = sub_142897560(zx.q(r14_3.d), r13_1, rbx_1, rax_2, var_158)
                
                if (rax_12 s< 0)
                    sub_142856580(arg1, 0x33, 0x19f, 0x44, "ssl\statem\statem_srvr.c", 0xbd8)
                else if (rax_12 s>= 0x3b)
                    int64_t r11_1 = sx.q(rax_12 - 0x30)
                    int32_t rax_15 = zx.d(rbx_1[1]) ^ 2
                    uint8_t r9_5 = neg.b(((rax_15 - 1) u>> 0x1f).b & (not.d(rax_15) u>> 0x1f).b)
                        & neg.b(((zx.d(*rbx_1) - 1) u>> 0x1f).b)
                    void* i = 2
                    int64_t i_2 = 2
                    
                    if (2 u< r11_1 - 1)
                        do
                            uint32_t rax_18 = zx.d(*(i + rbx_1))
                            i += 1
                            r9_5 &= ((rax_18 - 1) u>> 0x1f).b - 1
                        while (i u< r11_1 - 1)
                    
                    void* r12_1 = &rbx_1[r11_1]
                    uint32_t r14_4 = zx.d(*r12_1)
                    uint32_t r13_2 = zx.d(*(r12_1 + 1))
                    int32_t rax_24 = arg1[0x179]
                    uint32_t rcx_19 = zx.d(rax_24.b) ^ r13_2
                    int32_t rdx_7 = rax_24 s>> 8 ^ r14_4
                    uint8_t r10_2 = neg.b(((rcx_19 - 1) u>> 0x1f).b & (not.d(rcx_19) u>> 0x1f).b)
                        & neg.b(((rdx_7 - 1) u>> 0x1f).b & (not.d(rdx_7) u>> 0x1f).b)
                    
                    if ((arg1[0x171] & 0x800000) != 0)
                        int32_t rax_27 = *arg1
                        uint32_t rcx_23 = zx.d(rax_27.b) ^ r13_2
                        int32_t r8_5 = rax_27 s>> 8 ^ r14_4
                        r10_2 |= neg.b(((rcx_23 - 1) u>> 0x1f).b & (not.d(rcx_23) u>> 0x1f).b)
                            & neg.b(((r8_5 - 1) u>> 0x1f).b & (not.d(r8_5) u>> 0x1f).b)
                    
                    r10_2 &= r9_5 & neg.b(((zx.d(rbx_1[r11_1 - 1]) - 1) u>> 0x1f).b)
                    uint8_t r14_5 = not.b(r10_2)
                    void* r9_6 = r12_1
                    int64_t i_1
                    
                    do
                        char rax_73 = *(r9_6 + 1)
                        *r9_6 = (*(r9_6 + &var_78 - r11_1 - rbx_1) & r14_5) | (*r9_6 & r10_2)
                        char rax_74 = *(r9_6 + 2)
                        void var_77
                        *(r9_6 + 1) = (*(r9_6 + &var_77 - r11_1 - rbx_1) & r14_5) | (rax_73 & r10_2)
                        char rax_75 = *(r9_6 + 3)
                        void var_76
                        *(r9_6 + 2) = (*(r9_6 + &var_76 - r11_1 - rbx_1) & r14_5) | (rax_74 & r10_2)
                        char rax_76 = *(r9_6 + 4)
                        void var_75
                        *(r9_6 + 3) = (*(r9_6 + &var_75 - r11_1 - rbx_1) & r14_5) | (rax_75 & r10_2)
                        char rax_77 = *(r9_6 + 5)
                        void var_74
                        *(r9_6 + 4) = (*(r9_6 + &var_74 - r11_1 - rbx_1) & r14_5) | (rax_76 & r10_2)
                        char rax_78 = *(r9_6 + 6)
                        void var_73
                        *(r9_6 + 5) = (*(r9_6 + &var_73 - r11_1 - rbx_1) & r14_5) | (rax_77 & r10_2)
                        char rax_79 = *(r9_6 + 7)
                        void var_72
                        *(r9_6 + 6) = (*(r9_6 + &var_72 - r11_1 - rbx_1) & r14_5) | (rax_78 & r10_2)
                        char rax_80 = *(r9_6 + 8)
                        void var_71
                        *(r9_6 + 7) = (*(r9_6 + &var_71 - r11_1 - rbx_1) & r14_5) | (rax_79 & r10_2)
                        void var_70
                        *(r9_6 + 8) = (*(r9_6 + &var_70 - r11_1 - rbx_1) & r14_5) | (rax_80 & r10_2)
                        void var_6f
                        *(r9_6 + 9) =
                            (*(r9_6 + &var_6f - r11_1 - rbx_1) & r14_5) | (*(r9_6 + 9) & r10_2)
                        void var_6e
                        *(r9_6 + 0xa) =
                            (*(r9_6 + &var_6e - r11_1 - rbx_1) & r14_5) | (*(r9_6 + 0xa) & r10_2)
                        void var_6d
                        *(r9_6 + 0xb) =
                            (*(r9_6 + &var_6d - r11_1 - rbx_1) & r14_5) | (*(r9_6 + 0xb) & r10_2)
                        void var_6c
                        *(r9_6 + 0xc) =
                            (*(r9_6 + &var_6c - r11_1 - rbx_1) & r14_5) | (*(r9_6 + 0xc) & r10_2)
                        r9_6 += 0x18
                        void var_6b
                        *(r9_6 - 0xb) = (*(r9_6 + &var_6b - r11_1 - rbx_1 - 0x18) & r14_5)
                            | (*(r9_6 - 0xb) & r10_2)
                        void var_6a
                        *(r9_6 - 0xa) = (*(r9_6 + &var_6a - r11_1 - rbx_1 - 0x18) & r14_5)
                            | (*(r9_6 - 0xa) & r10_2)
                        void var_69
                        *(r9_6 - 9) = (*(r9_6 + &var_69 - r11_1 - rbx_1 - 0x18) & r14_5)
                            | (*(r9_6 - 9) & r10_2)
                        void var_68
                        *(r9_6 - 8) = (*(r9_6 + &var_68 - r11_1 - rbx_1 - 0x18) & r14_5)
                            | (*(r9_6 - 8) & r10_2)
                        void var_67
                        *(r9_6 - 7) = (*(r9_6 + &var_67 - r11_1 - rbx_1 - 0x18) & r14_5)
                            | (*(r9_6 - 7) & r10_2)
                        void var_66
                        *(r9_6 - 6) = (*(r9_6 + &var_66 - r11_1 - rbx_1 - 0x18) & r14_5)
                            | (*(r9_6 - 6) & r10_2)
                        void var_65
                        *(r9_6 - 5) = (*(r9_6 + &var_65 - r11_1 - rbx_1 - 0x18) & r14_5)
                            | (*(r9_6 - 5) & r10_2)
                        void var_64
                        *(r9_6 - 4) = (*(r9_6 + &var_64 - r11_1 - rbx_1 - 0x18) & r14_5)
                            | (*(r9_6 - 4) & r10_2)
                        void var_63
                        *(r9_6 - 3) = (*(r9_6 + &var_63 - r11_1 - rbx_1 - 0x18) & r14_5)
                            | (*(r9_6 - 3) & r10_2)
                        void var_62
                        *(r9_6 - 2) = (*(r9_6 + &var_62 - r11_1 - rbx_1 - 0x18) & r14_5)
                            | (*(r9_6 - 2) & r10_2)
                        i_1 = i_2
                        i_2 -= 1
                        void var_61
                        *(r9_6 - 1) = (*(r9_6 + &var_61 - r11_1 - rbx_1 - 0x18) & r14_5)
                            | (*(r9_6 - 1) & r10_2)
                    while (i_1 != 1)
                    rbx_1 = var_148_1.q
                    result_1 = 0
                    
                    if (sub_142872ab0(arg1, r12_1, 0x30, 0) != 0)
                        result_1 = 1
                else
                    sub_142856580(arg1, 0x33, 0x19f, 0x93, "ssl\statem\statem_srvr.c", 0xbe5)
            else
                sub_142856580(arg1, 0x50, 0x19f, 0x44, "ssl\statem\statem_srvr.c", 0xbca)
            
            sub_1428a6780(rbx_1)
            result = zx.q(result_1)
        else
            var_150_2 = 0xbb4
            r9_2 = 0x78
        label_14286c46f:
            sub_142856580(arg1, 0x50, 0x19f, r9_2, "ssl\statem\statem_srvr.c", var_150_2)
            result = 0
    else
        int64_t rcx_3 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rcx_3 u>= 2)
            char* rax_5 = zmm0_1.q
            var_148_1:8.q = rcx_3 - 2
            r13_1 = &rax_5[2]
            r14_3 = zx.q(*rax_5) << 8 | zx.q(rax_5[1])
            var_148_1.q = r13_1
            
            if (rcx_3 - 2 u>= r14_3)
                var_148_1.q = r14_3 + r13_1
                var_148_1:8.q = rcx_3 - 2 - r14_3
                *arg2 = var_148_1
                
                if (*(arg2 + 8) == 0)
                    goto label_14286c415
        
        sub_142856580(arg1, 0x32, 0x19f, 0x9f, "ssl\statem\statem_srvr.c", 0xba7)
        result = 0
else
    int32_t rdx = (rax_2 + 0x50).d
    sub_142856580(arg1, rdx, 0x19f, rdx + 0x58, "ssl\statem\statem_srvr.c", 0xb9c)
    result = 0

__security_check_cookie(rax_1 ^ &var_178)
return result
