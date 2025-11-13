// 函数: sub_142a82c20
// 地址: 0x142a82c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r13 = arg6
uint32_t rdi = zx.d(arg4)

if (r13 == 0 || *r13 s> 0)
    return 

if (arg1 == 0 || arg2 == 0 || arg3 s< 0xffffffff || (rdi - 0x7e).b u<= 0x7f)
    *r13 = 1
    return 

if (arg3 == 0xffffffff)
    arg3 = std::_WChar_traits<wchar_t>::length(arg2)

if (*(arg1 + 0x84) == 3)
    return sub_142a82410(arg1, arg2, arg3, rdi.b, r13) __tailcall

arg1[0x17].d = zx.d(rdi.b) & 1
*arg1 = 0
arg1[1] = arg2
int32_t rax_4
rax_4.b = rdi.b u>= 0xfe
arg1[3].d = arg3
*(arg1 + 0x8e) = rax_4.b
arg1[2].d = arg3
*(arg1 + 0x14) = arg3
*(arg1 + 0x8d) = rdi.b
arg1[0x19].d = 1
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x26] = 0
*(arg1 + 0x1a4) = 0

if (arg3 == 0)
    if (rdi.b u>= 0xfe)
        *(arg1 + 0x8e) = 0
        *(arg1 + 0x8d) = rdi.b & 1
    
    arg1[0x25].d = 0
    arg1[0x19].d = 0
    arg1[0x13].d = 0
    arg1[0x15].d = 0
    *(arg1 + 0xbc) = *(((zx.q(rdi.b) & 1) << 2) + &data_143641180)
    *arg1 = arg1
    return 

void* rax_9 = arg1[0xa]
arg1[0x25].d = 0xffffffff

if (rax_9 == 0)
    rax_9 = &arg1[0x1b]

arg1[0x1a] = rax_9

if (sub_142a82af0(&arg1[7], arg1 + 0x1c, arg1[0xd].b, arg3) == 0)
    *r13 = 7
    return 

arg1[0xe] = arg1[7]

if (sub_142a80a90(arg1) == 0)
    *r13 = 7
    return 

int64_t r12_1 = sx.q(*(arg1 + 0x14))
int64_t r14_1 = arg1[0xe]
int64_t var_40_1 = r14_1
*(arg1 + 0xc4) = r12_1.d
uint64_t rax

if (arg5 == 0)
    if (sub_142a82af0(&arg1[8], &arg1[4], arg1[0xd].b, r12_1.d).b != 0)
        arg1[0xf] = arg1[8]
        rax = sub_142a815e0(arg1, r13)
        goto label_142a82e44
    
    *r13 = 7
    return 

arg1[0xf] = arg5
rax = sub_142a804c0(arg1, r13)
label_142a82e44:
int32_t rsi_1 = rax.d

if (*r13 s> 0)
    return 

int32_t rdi_1 = *(arg1 + 0x144)
void* rax_13

if (rdi_1 s> 5)
    int32_t rdi_2 = rdi_1 << 4
    
    if (rdi_2 s<= arg1[6].d)
        goto label_142a82e89
    
    int64_t rcx_8 = arg1[0xc]
    
    if (rcx_8 != 0)
        if (rdi_2 s<= arg1[6].d)
            goto label_142a82e89
        
        rax = sub_142a7dd30(rcx_8, sx.q(rdi_2))
        
        if (rax != 0)
            arg1[0xc] = rax
        label_142a82e86:
            arg1[6].d = rdi_2
        label_142a82e89:
            rax_13 = arg1[0xc]
            goto label_142a82e8d
        
        *r13 = 7
    else
        rax = sub_142a7dd00(sx.q(rdi_2))
        arg1[0xc] = rax
        
        if (rax != 0)
            goto label_142a82e86
        
        *r13 = 7
    
    return 

rax_13 = &arg1[0x2a]
label_142a82e8d:
arg1[0x29] = rax_13
*(arg1 + 0x144) = 0xffffffff
arg1[0x17].d = rsi_1

if (rsi_1 == 0 || rsi_1 == 1)
    *(arg1 + 0xc4) = 0
label_142a83203:
    
    if (*(arg1 + 0x8e) u> 0 && (arg1[0x11].b & 1) != 0 && *(arg1 + 0x84) - 5 u<= 1)
        int32_t i = 0
        
        if (arg1[0x19].d s> 0)
            int64_t rdi_4 = 0
            
            do
                int64_t rax_35 = arg1[0x1a]
                int32_t r9_7 = *(rax_35 + (rdi_4 << 3)) - 1
                
                if (*(rax_35 + (rdi_4 << 3) + 4) != 0)
                    int32_t rcx_25 = 0
                    
                    if (rdi_4 != 0)
                        rcx_25 = *(rax_35 + (rdi_4 << 3) - 8)
                    
                    int64_t r11_2 = sx.q(r9_7)
                    int32_t r8_8 = r9_7
                    int64_t r10_2 = sx.q(rcx_25)
                    int64_t rdx_14 = r11_2
                    
                    if (r11_2 s>= r10_2)
                        do
                            char rcx_26 = *(rdx_14 + r14_1)
                            
                            if (rcx_26 == 0)
                                if (r8_8 s< r9_7)
                                    char* rax_37 = r11_2 + r14_1
                                    
                                    if (*(r11_2 + r14_1) == 7)
                                        do
                                            r9_7 -= 1
                                            rax_37 = &rax_37[-1]
                                        while (*rax_37 == 7)
                                
                                sub_142a7f950(arg1, r9_7)
                                break
                            
                            if ((1 << rcx_26 & 0x2002) != 0)
                                break
                            
                            r8_8 -= 1
                            rdx_14 -= 1
                        while (rdx_14 s>= r10_2)
                
                i += 1
                rdi_4 += 1
            while (i s< arg1[0x19].d)
    
    if ((arg1[0x11].b & 2) == 0)
        arg1[3].d += *(arg1 + 0x1a4)
    else
        arg1[3].d -= arg1[0x37].d
    
    arg1[0x13].d = 0
    arg1[0x15].d = 0
    *arg1 = arg1
else
    int64_t rax_14 = sx.q(*(arg1 + 0x84))
    
    if (rax_14.d u> 6)
        abort()
        noreturn
    
    void** const rax_17
    void** const rcx_10
    
    switch (rax_14)
        case 0
            rax_17 = &data_143640eb8
        case 1
            rax_17 = &data_143640f00
        case 2
            rax_17 = &data_143640f78
        case 3
            abort()
            noreturn
        case 4
            rax_17 = &data_143640ff8
        case 5
            rax_17 = &data_1436410f8
            rcx_10 = &data_143641058
        label_142a82f61:
            
            if ((arg1[0x11].b & 1) == 0)
                rax_17 = rcx_10
        case 6
            rax_17 = &data_143641160
            rcx_10 = &data_143641118
            goto label_142a82f61
    
    arg1[0x16] = rax_17
    
    if (arg5 != 0 || arg1[0x19].d s> 1 || *(arg1 + 0xbc) s< 0)
        int32_t rsi_4 = 0
        char* r8_4 = arg1[0xf]
        char* var_50_1 = r8_4
        char rcx_15
        
        if (*(arg1 + 0x8e) == 0 || *arg1[0x1a] s> 0)
            rcx_15 = *(arg1 + 0x8d)
        else
            r8_4 = var_50_1
            rcx_15 = sub_142a82b80(arg1, 0)
        
        char rbp_2 = *r8_4
        char r15_1 = rcx_15
        
        if (rcx_15 u< rbp_2)
            r15_1 = rbp_2
        
        char* i_1 = nullptr
        r15_1 &= 1
        void* rax_25 = r8_4 - r14_1
        void* var_48_1 = rax_25
        
        do
            int32_t var_54_1 = rsi_4
            char* i_2 = i_1
            char var_58_1 = rbp_2
            char var_56_1 = rbp_2
            char var_57_1 = rbp_2
            
            if (rsi_4 s> 0 && i_1[r14_1 - 1] == 7)
                if (*(arg1 + 0x8e) == 0 || rsi_4 s< *arg1[0x1a])
                    r15_1 = *(arg1 + 0x8d)
                else
                    r8_4 = var_50_1
                    r15_1 = sub_142a82b80(arg1, rsi_4)
                
                rax_25 = var_48_1
                r15_1 &= 1
            
            void* rdx_9 = &i_1[r14_1]
            
            while (true)
                rsi_4 += 1
                rdx_9 += 1
                i_1 = &i_1[1]
                
                if (i_1 s>= r12_1)
                    int32_t rdx_10
                    
                    if (*(arg1 + 0x8e) != 0)
                        rdx_10 = (r12_1 - 1).d
                    
                    if (*(arg1 + 0x8e) == 0 || rdx_10 s< *arg1[0x1a])
                        rbp_2 = *(arg1 + 0x8d)
                    else
                        rbp_2 = sub_142a82b80(arg1, rdx_10)
                    
                    break
                
                if (*(rax_25 + rdx_9) != rbp_2)
                    rax_25 = var_48_1
                    
                    if ((1 << *rdx_9 & 0x5d800) == 0)
                        rbp_2 = *(i_1 + r8_4)
                        break
            
            char r14_2 = var_57_1
            
            if ((zx.d(var_58_1) & 0xffffff7f) u< (zx.d(rbp_2) & 0xffffff7f))
                r14_2 = rbp_2
            
            r14_2 &= 1
            
            if (var_56_1 s< 0)
                r8_4 = var_50_1
                void* rcx_23 = i_2 + r8_4
                
                do
                    *rcx_23 &= 0x7f
                    rcx_23 += 1
                while (neg.q(r8_4) + rcx_23 s< i_1)
            else
                sub_142a81f00(arg1, var_54_1, rsi_4, r15_1, r14_2)
                r8_4 = var_50_1
            
            rax_25 = var_48_1
            r15_1 = r14_2
            r14_1 = var_40_1
        while (i_1 s< r12_1)
        
        r13 = arg6
    else
        char rsi_3 = *(arg1 + 0x8e)
        int32_t rdx_7
        
        if (rsi_3 != 0)
            rdx_7 = (r12_1 - 1).d
        
        char rdi_3
        
        if (rsi_3 == 0 || rdx_7 s< *arg1[0x1a])
            rdi_3 = *(arg1 + 0x8d)
        else
            rdi_3 = sub_142a82b80(arg1, rdx_7)
        
        char rax_21
        
        if (rsi_3 == 0 || *arg1[0x1a] s> 0)
            rax_21 = *(arg1 + 0x8d)
        else
            rax_21 = sub_142a82b80(arg1, 0)
        
        sub_142a81f00(arg1, 0, r12_1.d, rax_21 & 1, rdi_3 & 1)
    
    rax = zx.q(*(arg1 + 0x1ac))
    
    if (rax.d s<= 0)
        sub_142a7fa40(arg1)
        goto label_142a83203
    
    *r13 = rax.d
