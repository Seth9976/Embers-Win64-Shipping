// 函数: sub_142be7dc0
// 地址: 0x142be7dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t r13 = *(arg1 + 0x98)
void* rbx = -ffffffffffffffff
int64_t rsi = *(arg1 + 0x2e0)
int32_t r15 = 0
char* result

if (*(arg1 + 0x420) != 0)
label_142be8064:
    int32_t var_64
    int32_t* var_58
    void* var_50
    (*(rsi + 0x50))(arg1, &var_64, &var_58, 0, &var_50)
    int32_t rax_16 = *(arg1 + 4)
    int32_t var_68
    void* rbx_2
    char* result_1
    
    if ((rax_16 & 0x7fff0000) == 0 || (*(arg1 + 8) & 0x8000) != 0)
    label_142be81ec:
        void* rdi_4 = *(var_50 + 0x10)
        result_1 = sub_142b99860(r13, *(arg1 + 0x428) + var_64 * 0x11 + 1, &var_68)
        
        if (var_68 == 0)
            char* rcx_19 = *(arg1 + 0x420)
            char* result_4 = result_1
            char i
            
            do
                i = *rcx_19
                rcx_19 = &rcx_19[1]
                *result_4 = i
                result_4 = &result_4[1]
            while (i != 0)
            rbx_2 = &result_1[zx.q(*(arg1 + 0x428))]
            
            if (var_64 u> 0)
                char* rdi_5 = rdi_4 + 0x14
                
                do
                    if (*var_58 != *(rdi_5 - 8))
                        *rbx_2 = 0x5f
                        void* rax_31 = sub_142be70c0(*var_58, rbx_2 + 1)
                        char rdx_16 = rdi_5[3]
                        rbx_2 = rax_31
                        
                        if (rdx_16 != 0x20)
                            int32_t rcx_22 = sx.d(rdx_16)
                            
                            if (rcx_22 - 0x30 u< 0xa || rcx_22 - 0x41 u< 0x1a
                                    || rcx_22 - 0x61 u< 0x1a)
                                *rbx_2 = rdx_16
                                rbx_2 += 1
                        
                        char rcx_23 = rdi_5[2]
                        
                        if (rcx_23 != 0x20)
                            int32_t rdx_17 = sx.d(rcx_23)
                            
                            if (rdx_17 - 0x30 u< 0xa || rdx_17 - 0x41 u< 0x1a
                                    || rdx_17 - 0x61 u< 0x1a)
                                *rbx_2 = rcx_23
                                rbx_2 += 1
                        
                        uint8_t rcx_25 = (*rdi_5 u>> 8).b
                        
                        if (rcx_25 != 0x20)
                            int32_t rdx_18 = sx.d(rcx_25)
                            
                            if (rdx_18 - 0x30 u< 0xa || rdx_18 - 0x41 u< 0x1a
                                    || rdx_18 - 0x61 u< 0x1a)
                                *rbx_2 = rcx_25
                                rbx_2 += 1
                        
                        char rcx_26 = *rdi_5
                        
                        if (rcx_26 != 0x20)
                            int32_t rdx_19 = sx.d(rcx_26)
                            
                            if (rdx_19 - 0x30 u< 0xa || rdx_19 - 0x41 u< 0x1a
                                    || rdx_19 - 0x61 u< 0x1a)
                                *rbx_2 = rcx_26
                                rbx_2 += 1
                    
                    var_58 = &var_58[1]
                    r15 += 1
                    rdi_5 = &rdi_5[0x20]
                while (r15 u< var_64)
            
        label_142be8338:
            
            if (rbx_2 - result_1 s> 0x7f)
                void var_40
                sub_142be7970(result_1, rbx_2.d - result_1.d, 0x75bcd15, &var_40)
                void var_34
                void* r8_12 = &var_34
                void* rdx_22 = &result_1[zx.q(*(arg1 + 0x428))]
                int64_t i_3 = 4
                *rdx_22 = 0x2d
                *(rdx_22 + 0x21) = 0x2e2e2e
                void* rdx_23 = rdx_22 + 0x20
                int64_t i_1
                
                do
                    int32_t rcx_28 = *r8_12
                    rdx_23 -= 8
                    r8_12 -= 4
                    uint32_t rcx_29 = rcx_28 u>> 4
                    *(rdx_23 + 8) = *((zx.q(rcx_28) & 0xf) + "0123456789ABCDEF")
                    uint32_t rcx_30 = rcx_29 u>> 4
                    *(rdx_23 + 7) = *((zx.q(rcx_29) & 0xf) + "0123456789ABCDEF")
                    uint32_t rcx_31 = rcx_30 u>> 4
                    *(rdx_23 + 6) = *((zx.q(rcx_30) & 0xf) + "0123456789ABCDEF")
                    uint32_t rcx_32 = rcx_31 u>> 4
                    *(rdx_23 + 5) = *((zx.q(rcx_31) & 0xf) + "0123456789ABCDEF")
                    uint32_t rcx_33 = rcx_32 u>> 4
                    *(rdx_23 + 4) = *((zx.q(rcx_32) & 0xf) + "0123456789ABCDEF")
                    uint64_t rcx_34 = zx.q(rcx_33 u>> 4)
                    *(rdx_23 + 3) = *((zx.q(rcx_33) & 0xf) + "0123456789ABCDEF")
                    *(rdx_23 + 2) = *((zx.q(rcx_34.d) & 0xf) + "0123456789ABCDEF")
                    *(rdx_23 + 1) = (*"0123456789ABCDEF")[rcx_34 u>> 4]
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
            
            result = result_1
        else
            result = nullptr
    else
        void* rdx_5 = var_50
        int64_t r12_1 = *(arg1 + 0x2d0)
        int64_t rdi_3 = sx.q((rax_16 s>> 0x10 & 0x7fff) - 1) * 2
        int32_t rcx_9 = *(*(rdx_5 + 0x18) + (rdi_3 << 3) + 0xc)
        char* result_2 = nullptr
        
        if (rcx_9 != 6 && rcx_9 - 0x100 u> 0x7eff)
            goto label_142be8108
        
        (*(r12_1 + 0x120))(arg1, zx.q(rcx_9.w), &result_2)
        result_1 = result_2
        
        if (result_1 != 0)
            do
                rbx += 1
            while (*(result_1 + rbx) != 0)
            
            rbx_2 = rbx + 1 + result_1
            goto label_142be8338
        
        rdx_5 = var_50
    label_142be8108:
        char* var_60
        (*(r12_1 + 0x120))(arg1, zx.q(*(*(rdx_5 + 0x18) + (rdi_3 << 3) + 8)), &var_60)
        char* rax_23 = var_60
        
        if (rax_23 == 0)
            goto label_142be81ec
        
        do
            rbx += 1
        while (*(rax_23 + rbx) != 0)
        
        char* result_3 = sub_142b99860(r13, *(arg1 + 0x428) + 2 + rbx.d, &var_68)
        result_1 = result_3
        
        if (var_68 == 0)
            char* rcx_13 = *(arg1 + 0x420)
            char* result_5 = result_3
            char i_2
            
            do
                i_2 = *rcx_13
                rcx_13 = &rcx_13[1]
                *result_5 = i_2
                result_5 = &result_5[1]
            while (i_2 != 0)
            void* rbx_4 = &result_1[zx.q(*(arg1 + 0x428))]
            *rbx_4 = 0x2d
            void* rbx_5 = rbx_4 + 1
            char* rdx_11 = var_60
            
            while (*rdx_11 != 0)
                int32_t r8_10 = sx.d(*rdx_11)
                
                if (r8_10 - 0x30 u< 0xa || r8_10 - 0x41 u< 0x1a || r8_10 - 0x61 u< 0x1a)
                    *rbx_5 = r8_10.b
                    rbx_5 += 1
                
                rdx_11 = &rdx_11[1]
            
            *rbx_5 = 0
            rbx_2 = rbx_5 + 1
            sub_142b99980(r13, var_60)
            var_60 = nullptr
            goto label_142be8338
        
        result = nullptr
else
    uint32_t r9_1 = zx.d(*(arg1 + 0x1d0))
    char r10_1 = 1
    int32_t rdx_1 = -1
    int32_t rdi_1 = -1
    int32_t rcx = 0
    
    if (r9_1 != 0)
        int16_t* rax_2 = *(arg1 + 0x1e8)
        
        do
            if (rax_2[3] == 0x19 && rax_2[4] u> 0)
                int16_t r8_1 = *rax_2
                
                if (r8_1 == 3 && rax_2[1] u<= 1 && (rax_2[2] == 0x409 || rdx_1 == 0xffffffff))
                    rdx_1 = rcx
                
                if (r8_1 == 1 && rax_2[1] == 0 && (rax_2[2] == 0 || rdi_1 == 0xffffffff))
                    rdi_1 = rcx
            
            rcx += 1
            rax_2 = &rax_2[0xc]
        while (rcx s< r9_1)
    
    char rax_3
    
    if (r9_1 != 0 && (rdx_1 s>= 0 || rdi_1 s>= 0))
        rax_3 = 1
    else
        rax_3 = 0
    
    if (zx.d(rax_3) != 0)
    label_142be7fa3:
        int64_t var_78
        char* rax_11
        char* rcx_5
        
        if (rdx_1 != 0xffffffff)
            var_78.b = 0
            rax_11 = sub_142be7370(r13, *(arg1 + 0x200), *(arg1 + 0x1e8) + sx.q(rdx_1) * 0x18, 
                sub_142be8440, arg2)
            rcx_5 = rax_11
        
        if (rdx_1 != 0xffffffff && rax_11 != 0)
        label_142be8018:
            int64_t rax_15 = -1
            
            do
                rax_15 += 1
            while (rcx_5[rax_15] != 0)
            
            if (rax_15.d u> 0x5b)
                rax_15 = 0x5b
                rcx_5[0x5b] = 0
            
            *(arg1 + 0x420) = rcx_5
            *(arg1 + 0x428) = rax_15.d
            goto label_142be8064
        
        if (rdi_1 == 0xffffffff)
            result = nullptr
        else
            var_78.b = 0
            char* rax_14 = sub_142be7260(*(arg1 + 0x98), *(arg1 + 0x200), 
                *(arg1 + 0x1e8) + sx.q(rdi_1) * 0x18, sub_142be8440, arg2)
            rcx_5 = rax_14
            
            if (rax_14 != 0)
                goto label_142be8018
            
            result = nullptr
    else
        rdx_1 = -1
        rdi_1 = -1
        int32_t rcx_1 = 0
        
        if (r9_1 != 0)
            int16_t* rax_5 = *(arg1 + 0x1e8)
            
            do
                if (rax_5[3] == 0x10 && rax_5[4] u> 0)
                    int16_t r8_2 = *rax_5
                    
                    if (r8_2 == 3 && rax_5[1] u<= 1 && (rax_5[2] == 0x409 || rdx_1 == 0xffffffff))
                        rdx_1 = rcx_1
                    
                    if (r8_2 == 1 && rax_5[1] == 0 && (rax_5[2] == 0 || rdi_1 == 0xffffffff))
                        rdi_1 = rcx_1
                
                rcx_1 += 1
                rax_5 = &rax_5[0xc]
            while (rcx_1 s< r9_1)
        
        char rax_6
        
        if (r9_1 != 0 && (rdx_1 s>= 0 || rdi_1 s>= 0))
            rax_6 = 1
        else
            rax_6 = 0
        
        if (zx.d(rax_6) != 0)
            goto label_142be7fa3
        
        rdx_1 = -1
        rdi_1 = -1
        int32_t rcx_2 = 0
        
        if (r9_1 == 0)
            r10_1 = 0
        else
            int16_t* rax_8 = *(arg1 + 0x1e8)
            
            do
                if (rax_8[3] == 1 && rax_8[4] u> 0)
                    int16_t r8_3 = *rax_8
                    
                    if (r8_3 == 3 && rax_8[1] u<= 1 && (rax_8[2] == 0x409 || rdx_1 == 0xffffffff))
                        rdx_1 = rcx_2
                    
                    if (r8_3 == 1 && rax_8[1] == 0 && (rax_8[2] == 0 || rdi_1 == 0xffffffff))
                        rdi_1 = rcx_2
                
                rcx_2 += 1
                rax_8 = &rax_8[0xc]
            while (rcx_2 s< r9_1)
            
            if (rdx_1 s< 0 && rdi_1 s< 0)
                r10_1 = 0
        
        if (r10_1 != 0)
            goto label_142be7fa3
        
        result = nullptr

__security_check_cookie(rax_1 ^ &var_98)
return result
