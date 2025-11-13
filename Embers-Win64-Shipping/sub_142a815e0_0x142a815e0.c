// 函数: sub_142a815e0
// 地址: 0x142a815e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_bb8
int64_t rax_1 = __security_cookie ^ &var_bb8
int64_t rax_2 = *(arg1 + 0x70)
int32_t result_1 = 0
char* r11 = *(arg1 + 0x78)
void* r13 = arg1
int64_t i = sx.q(*(arg1 + 0x14))
int64_t var_b58 = *(arg1 + 8)
char* var_b70 = r11
int32_t var_b60 = i.d
int32_t* rdi_1

if (*(arg1 + 0x8e) != 0)
    rdi_1 = *(arg1 + 0xd0)

uint32_t rsi

if (*(arg1 + 0x8e) == 0 || *rdi_1 s> 0)
    rsi = zx.d(*(arg1 + 0x8d))
else
    int32_t rdx = *(arg1 + 0xc8)
    int32_t rax_4 = 0
    
    if (rdx s> 0)
        arg1 = rdi_1
        
        while (*arg1 s<= 0)
            rax_4 += 1
            arg1 += 8
            
            if (rax_4 s>= rdx)
                break
    
    if (rax_4 s>= rdx)
        rax_4 = rdx - 1
    
    rsi = zx.d(rdi_1[sx.q(rax_4) * 2 + 1].b)

*(r13 + 0x144) = 0
uint64_t result

if (*arg2 s<= 0)
    int32_t rdx_1 = *(r13 + 0xbc)
    int64_t rax_3
    
    if ((rdx_1 & 0x20e002) == 0)
        arg1.b = (rdx_1 & 0x7ddfd8) != 0
        rax_3.b = (rdx_1.b & 0x20) != 0
    
    if ((rdx_1 & 0x20e002) == 0 && (rax_3.b & arg1.b) == 0)
        result = zx.q(result_1)
    else if ((rdx_1 & 0x1901825) == 0)
        result = 1
    else if (*(r13 + 0x84) s<= 1)
        void var_b38
        void* rdx_3 = &var_b38
        int32_t var_944
        char var_936
        
        if ((rdx_1 & 0x79d800) != 0)
            char r15_2 = rsi.b
            char var_b98_1 = rsi.b
            int32_t var_b78_1 = 0
            uint64_t rbx_2 = 0
            int32_t* var_b90
            var_b90.d = 0
            int32_t var_b80_1 = 0
            int32_t var_b94_2 = 0
            sub_142a7fdc0(r13, rdx_3)
            int32_t rdi_7 = 0
            uint16_t var_148 = zx.w(rsi.b)
            int32_t r9_1 = 0
            int32_t var_b88_1 = 0
            
            if (i.d s> 0)
                char* r10_2 = rax_2 - r11
                int64_t rax_25 = neg.q(r11)
                char* var_b68_1 = r10_2
                
                do
                    uint32_t r12_2 = zx.d(*(r10_2 + r11))
                    uint32_t rdx_7 = r12_2
                    
                    if (r12_2 - 7 u> 0xf)
                    label_142a81d6e:
                        
                        if (((zx.d(r15_2) ^ zx.d(rsi.b)) & 0xffffff7f) != 0)
                            sub_142a7ff40(&var_b38, var_b78_1, r15_2, rsi.b)
                            r9_1 = var_b88_1
                            r11 = var_b70
                            int32_t rdi_8 = rdi_7 | 0x80000000
                            uint64_t rax_63 = zx.q(rsi.b) & 1
                            
                            if (rsi.b s>= 0)
                                rdi_7 = rdi_8 | *((rax_63 << 2) + 0x143641188)
                            else
                                rdi_7 = rdi_8 | *((rax_63 << 2) + 0x143641190)
                        
                        var_b98_1 = rsi.b
                        *r11 = rsi.b
                        r15_2 = rsi.b
                        
                        if (sub_142a7ffd0(&var_b38, r9_1) == 0)
                            result = 0xffffffff
                            goto label_142a81e9b
                        
                        r11 = var_b70
                        r10_2 = var_b68_1
                        r9_1 = var_b88_1
                        rdi_7 |= 1 << (zx.d(*(r10_2 + r11)) u% 0x20)
                    else
                        switch (r12_2)
                            case 7
                                rdi_7 |= 0x80
                                char rax_54
                                
                                if (*(r13 + 0x8e) == 0 || r9_1 s< **(r13 + 0xd0))
                                    rax_54 = *(r13 + 0x8d)
                                else
                                    rax_54 = sub_142a82b80(r13, r9_1)
                                    r9_1 = var_b88_1
                                    r11 = var_b70
                                    r10_2 = var_b68_1
                                
                                *r11 = rax_54
                                
                                if (r9_1 + 1 s< var_b60
                                        && (*var_b58 != 0xd || *(var_b58 + 2) != 0xa))
                                    rbx_2 = 0
                                    var_b90.d = 0
                                    var_b80_1 = 0
                                    var_b94_2 = 0
                                    
                                    if (*(r13 + 0x8e) == 0 || r9_1 + 1 s< **(r13 + 0xd0))
                                        rsi = zx.d(*(r13 + 0x8d))
                                    else
                                        char rax_57 = sub_142a82b80(r13, r9_1 + 1)
                                        r9_1 = var_b88_1
                                        rsi = zx.d(rax_57)
                                        r11 = var_b70
                                    
                                    r10_2 = var_b68_1
                                    r15_2 = rsi.b
                                    var_148 = zx.w(rsi.b)
                                    int32_t rax_60 = zx.d(rsi.b) & 1
                                    var_b98_1 = rsi.b
                                    var_936 = rax_60.b
                                    char var_937_2 = rax_60.b
                                    int32_t var_934_2 = rax_60
                                    var_944.q = 0
                                    int16_t var_93a_2 = 0
                                    char var_938_2 = rsi.b
                            case 8, 9, 0xa, 0xd, 0x11, 0x13
                                goto label_142a81d6e
                            case 0xb, 0xc, 0xe, 0xf
                                rdi_7 |= 0x40000
                                *r11 = r15_2
                                char rax_29
                                
                                if (r12_2.b - 0xb u<= 1)
                                    rax_29 = (rsi.b + 2) & 0x7e
                                else
                                    rax_29 = ((rsi.b & 0x7f) + 1) | 1
                                
                                if (rax_29 u> 0x7d)
                                    if (var_b90.d == 0)
                                        var_b80_1 += 1
                                else if (var_b90.d == 0)
                                    if (var_b80_1 != 0)
                                        var_b80_1 += 1
                                    else
                                        var_b78_1 = r9_1
                                        rsi = zx.d(rax_29)
                                        
                                        if (r12_2.b == 0xc || r12_2.b == 0xf)
                                            rsi.b = rax_29 | 0x80
                                        
                                        rbx_2 = zx.q(rbx_2.d + 1)
                                        (&var_148)[rbx_2] = zx.w(rsi.b)
                            case 0x10
                                rdi_7 |= 0x40000
                                *r11 = r15_2
                                
                                if (var_b90.d == 0)
                                    if (var_b80_1 != 0)
                                        var_b80_1 -= 1
                                    else if (rbx_2.d != 0 && (&var_148)[zx.q(rbx_2.d)] u< 0x100)
                                        rbx_2 = zx.q(rbx_2.d - 1)
                                        var_b78_1 = r9_1
                                        rsi = zx.d((&var_148)[rbx_2].b)
                            case 0x12
                                *r11 = r15_2
                                rdi_7 |= 0x40000
                            case 0x14, 0x15
                                uint32_t r8_1 = zx.d(var_b98_1)
                                char r15_3 = rsi.b & 0x7f
                                *r11 = r15_3
                                rdi_7 |= *(((zx.q(rsi.b) & 1) << 2) + &data_143641180) | 0x400
                                
                                if (((r8_1 ^ zx.d(rsi.b)) & 0xffffff7f) != 0)
                                    sub_142a7ff40(&var_b38, var_b78_1, r8_1.b, rsi.b)
                                    r11 = var_b70
                                    rdi_7 |= 0x80000000
                                    r10_2 = var_b68_1
                                    r9_1 = var_b88_1
                                    rdx_7 = zx.d(r12_2.b)
                                
                                var_b98_1 = rsi.b
                                
                                if (r12_2.b != 0x14)
                                    r15_3 = (r15_3 + 1) | 1
                                else
                                    r15_3 = (rsi.b + 2) & 0x7e
                                
                                int32_t rcx_19 = var_b90.d
                                
                                if (r15_3 u> 0x7d || rcx_19 != 0 || var_b80_1 != 0)
                                    *(r10_2 + r11) = 9
                                    var_b90.d = rcx_19 + 1
                                    r15_2 = rsi.b
                                else
                                    rdi_7 |= 1 << (rdx_7 u% 0x20)
                                    int32_t r8_3 = var_b94_2 + 1
                                    var_b78_1 = r9_1
                                    var_b94_2 = r8_3
                                    
                                    if (r8_3 s> *(r13 + 0x144))
                                        *(r13 + 0x144) = r8_3
                                    
                                    rbx_2 = zx.q(rbx_2.d + 1)
                                    rsi = zx.d(r15_3)
                                    (&var_148)[rbx_2] = zx.w(r15_3) + 0x100
                                    void var_940
                                    void* rcx_21 = &var_940 + (sx.q(var_944) << 4)
                                    int16_t rax_38 = *(rcx_21 + 6)
                                    *(rcx_21 + 0xa) = 0xa
                                    var_944 += 1
                                    *(rcx_21 + 0x16) = rax_38
                                    *(rcx_21 + 0x14) = rax_38
                                    int32_t rax_40 = zx.d(r15_3) & 1
                                    *(rcx_21 + 0x18) = r15_3
                                    r15_2 = var_b98_1
                                    *(rcx_21 + 0x1a) = rax_40.b
                                    *(rcx_21 + 0x19) = rax_40.b
                                    *(rcx_21 + 0x1c) = rax_40
                                    *(rcx_21 + 0x10) = 0
                            case 0x16
                                if (((zx.d(r15_2) ^ zx.d(rsi.b)) & 0xffffff7f) != 0)
                                    sub_142a7ff40(&var_b38, var_b78_1, r15_2, rsi.b)
                                    r11 = var_b70
                                    rdi_7 |= 0x80000000
                                    r10_2 = var_b68_1
                                    r9_1 = var_b88_1
                                
                                int32_t rcx_26 = var_b90.d
                                
                                if (rcx_26 != 0)
                                    var_b90.d = rcx_26 - 1
                                    *(r10_2 + r11) = 9
                                else if (var_b94_2 == 0)
                                    *(r10_2 + r11) = 9
                                else
                                    rdi_7 |= 0x400000
                                    var_b78_1 = r9_1
                                    var_b80_1 = 0
                                    
                                    if ((&var_148)[zx.q(rbx_2.d)] u< 0x100)
                                        do
                                            rbx_2 = zx.q(rbx_2.d - 1)
                                        while ((&var_148)[rbx_2] u< 0x100)
                                    
                                    int32_t rax_50 = var_944 - 1
                                    var_b94_2 -= 1
                                    var_944 = rax_50
                                    rbx_2 = zx.q(rbx_2.d - 1)
                                    (&var_936)[sx.q(rax_50) * 0x10] = 0xa
                                
                                rsi = zx.d((&var_148)[zx.q(rbx_2.d)].b)
                                var_b98_1 = rsi.b
                                r15_2 = rsi.b
                                rdi_7 |= *(((zx.q(rsi) & 1) << 2) + &data_143641180) | 0x400
                                *r11 = rsi.b & 0x7f
                    
                    r11 = &r11[1]
                    var_b58 += 2
                    r9_1 += 1
                    var_b88_1 = r9_1
                    var_b70 = r11
                while (&r11[rax_25] s< i)
            
            if ((rdi_7 & 0x7fdfd8) != 0)
                rdi_7 |= *(((zx.q(*(r13 + 0x8d)) & 1) << 2) + &data_143641180)
            
            if (*(r13 + 0x8c) != 0 && rdi_7.b s< 0)
                rdi_7 |= 1
            
            *(r13 + 0xbc) = rdi_7
            void* rax_23
            
            if ((rdi_7 & 0x20e002) == 0)
                rax_23.b = (rdi_7.b & 0x20) != 0
            
            if ((rdi_7 & 0x20e002) != 0 || (rax_23.b & (rdi_7 & 0x7ddfd8) != 0) != 0)
                result_1.b = (rdi_7 & 0x1901825) != 0
                result_1 += 1
            
            result = zx.q(result_1)
        else
            sub_142a7fdc0(r13, rdx_3)
            int32_t var_b94_1 = 0
            
            if (*(r13 + 0xc8) s<= 0)
            label_142a81889:
                result = 2
            else
                int64_t rdx_4 = 0
                int32_t var_b88
                var_b88.q = 0
                
                while (true)
                    int32_t rbx_1
                    
                    if (rdx_4 != 0)
                        rbx_1 = *(*(r13 + 0xd0) + (rdx_4 << 3) - 8)
                    else
                        rbx_1 = 0
                    
                    int64_t rax_9 = *(r13 + 0xd0)
                    int64_t rcx_5 = sx.q(rbx_1)
                    char r15_1 = *(rax_9 + (rdx_4 << 3) + 4)
                    int64_t rax_10 = sx.q(*(rax_9 + (rdx_4 << 3)))
                    int32_t var_b78
                    var_b78.q = rax_10
                    
                    if (rcx_5 s< rax_10)
                        char* rdi_6 = rcx_5 + rax_2
                        int64_t rsi_1 = var_b58 + (rcx_5 << 1)
                        int32_t var_b80
                        var_b80.q = neg.q(rax_2)
                        int64_t rcx_6 = var_b78.q
                        
                        while (true)
                            *(r11 - rax_2 + rdi_6) = r15_1
                            char rax_13 = *rdi_6
                            
                            if (rax_13 != 0x12)
                                if (rax_13 != 7)
                                    if (sub_142a7ffd0(&var_b38, rbx_1) == 0)
                                        *arg2 = 7
                                        result = 0
                                        break
                                    
                                    rcx_6 = var_b78.q
                                else if (rbx_1 + 1 s< var_b60
                                        && (*rsi_1 != 0xd || *(rsi_1 + 2) != 0xa))
                                    int32_t rax_16 = zx.d(r15_1) & 1
                                    var_944.q = 0
                                    var_936 = rax_16.b
                                    char var_937_1 = rax_16.b
                                    int32_t var_934_1 = rax_16
                                    int16_t var_93a_1 = 0
                                    char var_938_1 = r15_1
                            
                            rdi_6 = &rdi_6[1]
                            rbx_1 += 1
                            rsi_1 += 2
                            
                            if (var_b80.q + rdi_6 s>= rcx_6)
                                rdx_4 = var_b88.q
                                r11 = var_b70
                                goto label_142a8186e
                        
                        break
                    
                label_142a8186e:
                    rdx_4 += 1
                    int32_t rax_21 = var_b94_1 + 1
                    var_b88.q = rdx_4
                    var_b94_1 = rax_21
                    
                    if (rax_21 s>= *(r13 + 0xc8))
                        goto label_142a81889
    else
        int32_t i_1 = 0
        
        if (*(r13 + 0xc8) s> 0)
            int64_t rdx_2 = 0
            
            do
                int32_t rdi_2
                
                if (rdx_2 != 0)
                    rdi_2 = *(*(r13 + 0xd0) + (rdx_2 << 3) - 8)
                else
                    rdi_2 = 0
                
                int64_t rax_6 = *(r13 + 0xd0)
                int32_t rcx = *(rax_6 + (rdx_2 << 3))
                int64_t rcx_3
                int64_t rdi_5
                
                if (rdi_2 s< rcx)
                    rdi_5, rcx_3 = __memfill_u8(&r11[sx.q(rdi_2)], *(rax_6 + (rdx_2 << 3) + 4), 
                        sx.q(rcx - rdi_2))
                i_1 += 1
                rdx_2 += 1
            while (i_1 s< *(r13 + 0xc8))
        
        result = 2
else
    result = 0

label_142a81e9b:
__security_check_cookie(rax_1 ^ &var_bb8)
return result
