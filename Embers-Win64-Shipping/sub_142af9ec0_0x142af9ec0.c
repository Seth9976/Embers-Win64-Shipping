// 函数: sub_142af9ec0
// 地址: 0x142af9ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t arg_10 = arg2
void* r13 = *(arg1 + 8)
void* rsi = arg1
char* r11 = *(arg1 + 0x20)
void* r10 = *(arg2 + 0x18)
int32_t rbp_1 = *(arg1 + 0x28) - r11.d
void* r15 = *(arg2 + 8)
char* i = *(arg2 + 0x10)
char* var_80 = r11
void* rax = *(r13 + 0x30)
void* var_78 = r10
int64_t rcx = *(rax + 0x58)
int16_t* rcx_1 = *(rax + 0x60)
uint64_t r14

if ((*(r13 + 0x38) & 0x10) == 0)
    r14 = *(rax + 0xe8)
else
    r14 = *(rax + 0xf0)

int32_t rcx_2 = *(rax + 0x104)
char r9 = *(r15 + 0x40)
char rax_1 = *(rax + 0xfd) & 1
uint64_t var_60 = r14
uint64_t rdi
int32_t r8

if (r9 s<= 0)
    rdi.b = 0
    r9 = 0
    r8 = 0
else
    rdi = zx.q(*(r15 + 0x4c))
    r8 = *(r15 + 0x48)

uint64_t rax_2 = zx.q(sx.d(rdi.b))
int32_t rcx_6 = sx.d(r9) - rax_2.d - i.d + r10.d

if (rcx_6 s> 0)
    arg2 = zx.q(*(r10 - 1))
    rax_2 = r10 - 1
    
    if (arg2.b s< 0)
        if (arg2.b s>= 0xc0 || rcx_6 s< 2)
            arg2.b += 0x3e
            
            if (arg2.b u<= 0x2d)
                r10 = rax_2
            
            var_78 = r10
        else
            uint32_t rsi_1 = zx.d(*(r10 - 2))
            r10 -= 2
            rax_2 = zx.q(rsi_1 + 0x20)
            
            if (rax_2.b u> 0xf)
                rsi = arg1
                r10 = var_78
            else
                rsi = arg1
                rax_2 = zx.q(sx.d(*((zx.q(rsi_1.b) & 0xf) + " 000000000000")))
                
                if (not(test_bit(rax_2.d, zx.d(arg2.b u>> 5))))
                    r10 = var_78
                else
                    var_78 = r10

int32_t r12 = 1

if (r8 != 0 && rbp_1 s> 0)
    *(r15 + 0x48) = 0
    r14 = zx.q(r9)
    *(r15 + 0x40) = 0
    r11 = var_80
label_142afa19c:
    bool cond:2_1 = r9 != rdi.b
    
    if (r9 s< rdi.b)
        while (i u< *(arg_10 + 0x18))
            char r10_3 = *i
            int32_t rax_26 = sx.d(rdi.b)
            
            if (rax_26 s<= 2 || r9 s> 1)
                arg2.b = r10_3 s< 0xc0
            else if (rax_26 != 3)
                arg2.b = 1 << (r8.b & 7)
                arg2.b &= *((zx.q(r10_3) u>> 4) + 0x14363c6e8)
            else
                arg2.b = 1 << r10_3 u>> 5
                arg2.b &= *((zx.q(r8) & 0xf) + " 000000000000")
            
            if (arg2.b != 0)
                i = &i[1]
                r9 += 1
                r8 = (r8 << 6) + zx.d(r10_3)
                
                if (r9 s< rdi.b)
                    continue
            
            cond:2_1 = r9 != rdi.b
            goto label_142afa23b
        
        void* rbx = i - sx.q(sx.d(r9) - sx.d(r14.b))
        
        if (r14.b s< r9)
            void* rcx_32 = r15 + 0x41 + sx.q(r14.b)
            uint64_t i_3 = zx.q(r9 - r14.b)
            uint64_t i_1
            
            do
                char rax_56 = *rbx
                rbx += 1
                *rcx_32 = rax_56
                rcx_32 += 1
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        *(r15 + 0x48) = r8
        *(r15 + 0x40) = r9
        *(r15 + 0x4c) = sx.d(rdi.b)
        rax_2 = var_80
        *(arg_10 + 0x10) = rbx
        *(arg1 + 0x20) = rax_2
        return rax_2
    
label_142afa23b:
    
    if (cond:2_1)
        void* rbx_1 = i - sx.q(sx.d(r9) - sx.d(r14.b))
        
        if (r14.b s< r9)
            void* rcx_40 = r15 + 0x41 + sx.q(r14.b)
            uint64_t i_4 = zx.q(r9 - r14.b)
            uint64_t i_2
            
            do
                char rax_63 = *rbx_1
                rbx_1 += 1
                *rcx_40 = rax_63
                rcx_40 += 1
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
        
        *(r15 + 0x40) = r9
        char* rax_64 = var_80
        *(arg_10 + 0x10) = rbx_1
        *(arg1 + 0x20) = rax_64
        *arg3 = 0xc
        return arg3
    
    uint32_t r8_1 = r8 - *((sx.q(r9) << 2) + 0x143663d10)
    int32_t rdx
    
    if (r9 s<= 3)
        rdx = *(rcx + (zx.q(zx.d(*(rcx + (sx.q(r8_1) s>> 0xa << 1))) + (r8_1 s>> 4 & 0x3f)) << 2))
    else if (rax_1 != 0)
        rdx = *(rcx + (zx.q(zx.d(*(rcx + (sx.q(r8_1) s>> 0xa << 1))) + (r8_1 s>> 4 & 0x3f)) << 2))
    else
        rdx = 0
    
    r14 = var_60
    int32_t rcx_24 = r8_1 & 0xf
    uint16_t r9_1 = *(r14 + (zx.q((zx.d(rdx.w) << 4) + rcx_24) << 1))
    uint64_t r10_6
    
    if (not(test_bit(rdx, zx.d(rcx_24.b + 0x10))))
        if (*(r13 + 0x3f) != 0 || r8_1 - 0xe000 u< 0x1900)
            if (r9_1 == 0)
            label_142afa302:
                rdi = arg3
                rsi = arg1
                
                while (true)
                    char rax_49 = *(rsi + 2)
                    void* const var_58 = &data_1436640ec
                    rax_2 = sub_142afa850(r13, *(r13 + 0x30), r8_1, &var_58, &data_1436640ec, 
                        &var_80, &r11[sx.q(rbp_1)], nullptr, 0xffffffff, rax_49, rdi)
                    
                    if (*rdi s> 0)
                        *(r13 + 0x54) = rax_2.d
                        r11 = var_80
                    label_142afa484:
                        
                        if (*rdi s> 0)
                            goto label_142afa53a
                    else
                        r11 = var_80
                        
                        if (*(r13 + 0xd0) s< 0)
                            r10 = var_78
                            rbp_1 = *(rsi + 0x28) - r11.d
                        label_142afa03f:
                            
                            if (i u>= r10)
                                goto label_142afa484
                            
                            if (rbp_1 s<= 0)
                                *rdi = 0xf
                                goto label_142afa53a
                            
                            arg2 = zx.q(*i)
                            i = &i[1]
                            
                            if (arg2.b s>= 0)
                                r8_1 = zx.d(arg2.b)
                                rax_2 = zx.q(rcx_2)
                                
                                if (test_bit(rax_2.d, zx.d((r8_1 u>> 2).b)))
                                    *r11 = arg2.b
                                    r11 = &var_80[1]
                                    var_80 = r11
                                    rbp_1 -= 1
                                    goto label_142afa03f
                                
                                r9_1 = *(r14 + ((zx.q(arg2.b) + zx.q(*rcx_1)) << 1))
                                
                                if (r9_1 != 0)
                                    goto label_142afa39e
                                
                                continue
                            
                            uint64_t rcx_12
                            uint64_t r8_4
                            char r9_2
                            char r10_1
                            
                            if (arg2.b u< 0xe0)
                                if (arg2.b u>= 0xc2)
                                    r10_1 = *i - 0x80
                                    r9_2 = r10_1
                                    
                                    if (r10_1 u<= 0x3f)
                                        int32_t rax_23 = zx.d(arg2.b) & 0x1f
                                        r8_4 = zx.q(rax_23)
                                        i = &i[1]
                                        rcx_12 = zx.q(rcx_1[zx.q(rax_23)])
                                    label_142afa11f:
                                        r9_1 = *(r14 + ((rcx_12 + zx.q(r9_2)) << 1))
                                        
                                        if (r9_1 == 0)
                                            r8_1 = r8_4.d << 6 | zx.d(r10_1)
                                            continue
                                        else if (r8_4.d s>= 0)
                                            break
                            else if (arg2.b u<= 0xed)
                                uint32_t r8_2 = zx.d(*i)
                                
                                if (test_bit(sx.d(*((zx.q(arg2.b) & 0xf) + " 000000000000")), 
                                        zx.d((r8_2 u>> 5).b)))
                                    r10_1 = i[1] - 0x80
                                    r9_2 = r10_1
                                    
                                    if (r10_1 u<= 0x3f)
                                        r8_4 = (zx.q(r8_2) & 0x3f) | zx.q((zx.d(arg2.b) & 0xf) << 6)
                                        i = &i[2]
                                        rcx_12 = zx.q(rcx_1[r8_4])
                                        goto label_142afa11f
                            r14.b = 0
                            r9 = 1
                            
                            if ((arg2 + 0x3e).b u> 0x32)
                                rdi.b = 0
                            else
                                rdi.b = arg2.b u>= 0xf0
                                rdi.b += (arg2.b u>= 0xe0) + 2
                            
                            r8 = zx.d(arg2.b)
                            goto label_142afa19c
                        
                        *rdi = 0xffffff81
                    
                    r10_6 = arg_10
                    
                    if (*(r13 + 0xd0) s< 0)
                        int64_t r9_4 = *(r10_6 + 0x18)
                        
                        if (i u< r9_4)
                            uint32_t rcx_34 = zx.d(*i)
                            char r8_7 = 1
                            i = &i[1]
                            *(r15 + 0x41) = rcx_34.b
                            uint32_t rdx_3 = rcx_34
                            
                            if (rcx_34.b s< 0)
                                rax_2 = zx.q(rcx_34 + 0x3e)
                                r12 = 0
                                
                                if (rax_2.b u<= 0x32)
                                    r12.b = rcx_34.b u>= 0xf0
                                    rax_2 = zx.q(sbb.d(rax_2.d, rax_2.d, rcx_34.b u< 0xe0) + 3)
                                    r12 += rax_2.d
                            
                            while (i u< r9_4)
                                uint32_t rcx_35 = zx.d(*i)
                                i = &i[1]
                                rax_2 = sx.q(r8_7)
                                r8_7 += 1
                                rdx_3 = (rdx_3 << 6) + rcx_35
                                *(rax_2 + r15 + 0x41) = rcx_35.b
                            
                            *(r15 + 0x48) = rdx_3
                            *(r15 + 0x40) = r8_7
                            *(r15 + 0x4c) = r12
                            r11 = var_80
                    
                    goto label_142afa54a
        else if (r8_1 - 0xf0000 u>= 0x20000 || r9_1 == 0)
            goto label_142afa302
    
    r10 = var_78
label_142afa39e:
    rax_2 = 0xff
    
    if (r9_1 u> 0xff)
        *r11 = (r9_1 u>> 8).b
        rax_2 = &var_80[1]
        var_80 = rax_2
        
        if (rbp_1 s< 2)
            rax_2 = arg3
            *(r13 + 0x68) = r9_1.b
            *(r13 + 0x5b) = 1
            r11 = var_80
            *rax_2 = 0xf
        label_142afa53a:
            r10_6 = arg_10
        label_142afa54a:
            *(r10_6 + 0x10) = i
            *(arg1 + 0x20) = r11
            return rax_2
        
        *rax_2 = r9_1.b
        r11 = &var_80[1]
        var_80 = r11
        rbp_1 -= 2
        rsi = arg1
    else
        *r11 = r9_1.b
        r11 = &var_80[1]
        var_80 = r11
        rbp_1 -= 1
        rsi = arg1

rdi = arg3
goto label_142afa03f
