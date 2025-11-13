// 函数: sub_142b15620
// 地址: 0x142b15620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** arg_8 = arg1
int64_t var_48 = -2
sub_142a9d940(arg1, 0, 0x10ffff)
arg1[0x19] = 0
arg1[0x1a] = arg3
__builtin_memset(&arg1[0x1b], 0, 0x24)
*(arg1 + 0xfc) = arg4 == 0x3f
sub_142aa04d0(arg1, arg2)
int32_t rax_2 = arg4 & 1

if (rax_2 != 0)
    arg1[0x19] = arg1

int64_t i_1 = sx.q(arg1[0x1a]->__offset(0x8).q.d)
int64_t r15
r15.b = 0
int32_t i = 0
int32_t arg_18
int32_t arg_20
int32_t rax_5
int32_t r13_2

if (i_1.d s> 0)
    rax_5 = arg4 & 8
    r13_2 = arg4 & 4
    
    do
        void* rax_6 = sub_142ae72d0(arg1[0x1a], i)
        int16_t rcx_2 = *(rax_6 + 8)
        void* rdi_1
        
        if ((rcx_2.b & 0x11) == 0)
            rdi_1 = rax_6 + 0xa
            
            if ((rcx_2.b & 2) == 0)
                rdi_1 = *(rax_6 + 0x18)
        else
            rdi_1 = nullptr
        
        int32_t rbx_2
        
        if (rcx_2 s< 0)
            rbx_2 = *(rax_6 + 0xc)
        else
            rbx_2 = sx.d(rcx_2) s>> 5
        
        int32_t rax_7
        
        if (sub_142aa0780(arg1, rdi_1, rbx_2, 1) s>= rbx_2)
            rax_7.b = 0
        else
            rax_7.b = 1
            r15 = 1
        
        if (rax_5 != 0 && rbx_2 s> *(arg1 + 0xf4))
            *(arg1 + 0xf4) = rbx_2
        
        if (r13_2 != 0 && (rax_7.b != 0 || (arg4.b & 2) != 0))
            arg_20 = 0
            arg_18 = 0
            sub_142a8e8d0(nullptr, 0, &arg_18, rdi_1, rbx_2, &arg_20)
            int32_t rax_8 = arg_20
            int32_t rax_9
            
            if (rax_8 s<= 0 || rax_8 == 0xf)
                rax_9 = arg_18
            else
                rax_9 = 0
            
            arg1[0x1e].d += rax_9
            
            if (rax_9 s> arg1[0x1f].d)
                arg1[0x1f].d = rax_9
        
        i += 1
    while (i s< i_1.d)

if (i_1.d s<= 0 || r15.b == 0)
    *(arg1 + 0xf4) = 0
else
    if (*(arg1 + 0xfc) != 0)
        sub_142a9f940(arg1)
    
    int32_t rcx_5
    
    if (*(arg1 + 0xfc) == 0 || *(arg1 + 0xfc) == 0)
        rcx_5 = i_1.d
        
        if (r13_2 != 0)
            rcx_5 = (i_1 * 5).d + arg1[0x1e].d
    else
        rcx_5 = arg1[0x1e].d + (i_1 << 3).d
    
    if (rcx_5 s> 0x80)
        int64_t rax_12 = sub_142a7dd00(sx.q(rcx_5))
        arg1[0x1b] = rax_12
        
        if (rax_12 != 0)
            goto label_142b15869
        
        *(arg1 + 0xf4) = rax_12
    else
        arg1[0x1b] = &arg1[0x20]
    label_142b15869:
        int64_t rax_13 = arg1[0x1b]
        void* rcx_9
        char* rbx_3
        void* r13_3
        
        if (*(arg1 + 0xfc) == 0)
            if (r13_2 == 0)
                arg1[0x1c] = rax_13
            else
                int64_t rcx_10 = rax_13 + (i_1 << 2)
                arg1[0x1c] = rcx_10
                arg1[0x1d] = i_1 + rcx_10
            
            r13_3 = arg1[0x1c]
            rbx_3 = r13_3
            rcx_9 = r13_3
        else
            void* rcx_8 = rax_13 + (i_1 << 2)
            arg1[0x1c] = rcx_8
            rcx_9 = rcx_8 + i_1
            rbx_3 = i_1 + rcx_9
            r13_3 = &rbx_3[i_1]
            arg1[0x1d] = i_1 + r13_3
        
        arg_20 = 0
        int32_t rdx_3 = 0
        int32_t var_6c_1 = 0
        
        if (i_1.d s> 0)
            int32_t* rdi_2 = nullptr
            int32_t* var_88_1 = nullptr
            void* r13_4 = r13_3 - rbx_3
            char* rcx_11 = rcx_9 - rbx_3
            int64_t r14_1 = neg.q(rbx_3)
            int64_t var_68_1 = r14_1
            
            do
                void* rax_16 = sub_142ae72d0(arg1[0x1a], rdx_3)
                int16_t rcx_13 = *(rax_16 + 8)
                void* r15_1
                
                if ((rcx_13.b & 0x11) == 0)
                    r15_1 = rax_16 + 0xa
                    
                    if ((rcx_13.b & 2) == 0)
                        r15_1 = *(rax_16 + 0x18)
                else
                    r15_1 = nullptr
                
                int32_t rbp_1
                
                if (rcx_13 s< 0)
                    rbp_1 = *(rax_16 + 0xc)
                else
                    rbp_1 = sx.d(rcx_13) s>> 5
                
                int32_t rax_17
                int512_t zmm2_1
                rax_17, zmm2_1 = sub_142aa0780(arg1, r15_1, rbp_1, 1)
                
                if (rax_17 s>= rbp_1)
                    if (r13_2 != 0)
                        if ((arg4.b & 2) == 0)
                            *(rdi_2 + arg1[0x1b]) = 0
                        else
                            int64_t rax_46 = sx.q(arg_20)
                            char* rcx_38 = rax_46 + arg1[0x1d]
                            int32_t rdx_19 = arg1[0x1e].d - rax_46.d
                            int32_t var_74 = 0
                            int32_t var_70 = 0
                            sub_142a8e8d0(rcx_38, rdx_19, &var_70, r15_1, rbp_1, &var_74)
                            int32_t rcx_39 = 0
                            
                            if (var_74 s<= 0)
                                rcx_39 = var_70
                            
                            *(rdi_2 + arg1[0x1b]) = rcx_39
                            arg_20 += rcx_39
                    
                    if (*(arg1 + 0xfc) != 0)
                        *(rbx_3 + r13_4) = 0xff
                        *rbx_3 = 0xff
                        *(rcx_11 + rbx_3) = 0xff
                    
                    *(arg1[0x1c] + r14_1 + rbx_3) = 0xff
                else
                    if (rax_5 != 0)
                        if ((arg4.b & 2) == 0)
                            *(rcx_11 + rbx_3) = 0
                            *(arg1[0x1c] + r14_1 + rbx_3) = 0
                        else
                            if ((arg4.b & 0x20) != 0)
                                char rdx_5 = -2
                                
                                if (rax_17 s< 0xfe)
                                    rdx_5 = rax_17.b
                                
                                *(arg1[0x1c] + r14_1 + rbx_3) = rdx_5
                            
                            if ((arg4.b & 0x10) != 0)
                                int32_t rax_19
                                rax_19, zmm2_1 = sub_142aa0950(arg1, r15_1, rbp_1, 1)
                                int32_t rdx_8 = rbp_1 - rax_19
                                char rcx_19 = -2
                                
                                if (rdx_8 s< 0xfe)
                                    rcx_19 = rdx_8.b
                                
                                *(rcx_11 + rbx_3) = rcx_19
                    
                    if (r13_2 != 0)
                        int64_t rax_23 = sx.q(arg_20)
                        char* r14_3 = rax_23 + arg1[0x1d]
                        int32_t rdx_10 = arg1[0x1e].d - rax_23.d
                        int32_t rdi_3 = 0
                        arg_18 = 0
                        int32_t var_7c = 0
                        sub_142a8e8d0(r14_3, rdx_10, &var_7c, r15_1, rbp_1, &arg_18)
                        
                        if (arg_18 s<= 0)
                            rdi_3 = var_7c
                        
                        *(var_88_1 + arg1[0x1b]) = rdi_3
                        arg_20 += rdi_3
                        
                        if (rdi_3 == 0)
                            *(rbx_3 + r13_4) = 0xff
                            *rbx_3 = 0xff
                            rdi_2 = var_88_1
                        else if ((arg4.b & 2) == 0)
                            *(rbx_3 + r13_4) = 0
                            *rbx_3 = 0
                            rdi_2 = var_88_1
                        else
                            if ((arg4.b & 0x20) != 0)
                                int32_t rax_25 = sub_142aa0ce0(arg1, r14_3, rdi_3, 1, zmm2_1)
                                char r8_6 = -2
                                
                                if (rax_25 s< 0xfe)
                                    r8_6 = rax_25.b
                                
                                *rbx_3 = r8_6
                            
                            if ((arg4.b & 0x10) != 0)
                                int32_t rdi_4 = rdi_3 - sub_142aa0b30(arg1, r14_3, rdi_3, 1)
                                char rcx_27 = -2
                                
                                if (rdi_4 s< 0xfe)
                                    rcx_27 = rdi_4.b
                                
                                *(rbx_3 + r13_4) = rcx_27
                            
                            rdi_2 = var_88_1
                        
                        r14_1 = var_68_1
                    
                    if (rax_2 != 0)
                        if ((arg4.b & 0x20) != 0)
                            uint32_t rdi_5 = zx.d(*r15_1)
                            
                            if ((rdi_5 & 0xfffffc00) == 0xd800 && rbp_1 != 1)
                                uint32_t rcx_28 = zx.d(*(r15_1 + 2))
                                
                                if ((rcx_28 & 0xfffffc00) == 0xdc00)
                                    rdi_5 = ((rdi_5 - 0xd7f7) << 0xa) + rcx_28
                            
                            int64_t rax_32 = arg1[0x19]
                            
                            if (rax_32 == 0 || rax_32 == arg1)
                                if (sub_142a9f280(arg1, zx.q(rdi_5)) == 0)
                                    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** 
                                        rax_34 = sub_142a9ee40(arg1)
                                    
                                    if (rax_34 != 0)
                                        arg1[0x19] = rax_34
                                        sub_142a9e7d0(arg1[0x19], rdi_5)
                            else
                                sub_142a9e7d0(arg1[0x19], rdi_5)
                        
                        if ((arg4.b & 0x10) != 0)
                            uint32_t rdi_8 = zx.d(*(r15_1 + (sx.q(rbp_1 - 1) << 1)))
                            
                            if ((rdi_8 & 0xfffffc00) == 0xdc00 && rbp_1 - 1 s> 0)
                                uint32_t rdx_15 = zx.d(*(r15_1 + (sx.q(rbp_1 - 2) << 1)))
                                
                                if ((rdx_15 & 0xfffffc00) == 0xd800)
                                    rdi_8 += (rdx_15 - 0xd7f7) << 0xa
                            
                            int64_t rax_43 = arg1[0x19]
                            
                            if (rax_43 == 0 || rax_43 == arg1)
                                if (sub_142a9f280(arg1, zx.q(rdi_8)) == 0)
                                    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** 
                                        rax_45 = sub_142a9ee40(arg1)
                                    
                                    if (rax_45 != 0)
                                        arg1[0x19] = rax_45
                                        sub_142a9e7d0(arg1[0x19], rdi_8)
                            else
                                sub_142a9e7d0(arg1[0x19], rdi_8)
                        
                        rdi_2 = var_88_1
                
                rdx_3 = var_6c_1 + 1
                var_6c_1 = rdx_3
                rdi_2 = &rdi_2[1]
                var_88_1 = rdi_2
                rbx_3 = &rbx_3[1]
            while (&rbx_3[r14_1] s< i_1)
        
        if (*(arg1 + 0xfc) != 0)
            sub_142a9f940(arg1[0x19])

return arg1
