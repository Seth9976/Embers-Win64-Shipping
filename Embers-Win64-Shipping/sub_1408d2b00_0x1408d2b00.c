// 函数: sub_1408d2b00
// 地址: 0x1408d2b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
void* rdi = arg1
int32_t i = 0

if (*(arg1 + 0xc0) s<= 0)
    return 

int64_t r12_1 = 0
int64_t arg_10 = 0

do
    void* rsi_2 = r12_1 * 0x38 + *(rdi + 0xb8)
    uint64_t r10
    
    if (*(rdi + 0x130) f< *(rsi_2 + 4))
        if (*(rsi_2 + 1) == 0)
            int32_t* j = *(rsi_2 + 0x20)
            
            for (void* rbp_4 = &j[sx.q(*(rsi_2 + 0x28))]; j != rbp_4; j = &j[1])
                sub_1408cf420(rdi, zx.q(*j), **(rsi_2 + 0x18))
            
            *(rsi_2 + 1) = 1
            rbp = 0
        
        int32_t* j_1 = *(rsi_2 + 0x20)
        r10.b = 0
        
        for (; j_1 != &j_1[sx.q(*(rsi_2 + 0x28))]; j_1 = &j_1[1])
            if (*((sx.q(*j_1) << 6) + *(rdi + 0x38) + 0xc) != 0)
                r10.b = 1
                break
        
        uint64_t rax_42 = zx.q(*(rsi_2 + 0xc))
        int64_t rcx_27 = *(rdi + 0x58)
        uint64_t rdx_19 = rax_42 * 0xa0
        
        if (*(rdx_19 + rcx_27) == 0)
            int32_t r8_16 = *(rsi_2 + 0x10)
            
            if (rax_42.d s< *(rdi + 0x60) && r8_16 s>= 0 && r8_16 s< *(rdx_19 + rcx_27 + 0x48))
                void* r9_8 = rcx_27 + 0x30 + rdx_19
                void* rax_43 = *(r9_8 + 0x10)
                
                if (rax_43 != 0)
                    r9_8 = rax_43
                
                int32_t rax_44 = r8_16
                
                if (r8_16 s< 0)
                    rax_44 = r8_16 + 0x1f
                
                int64_t rdx_20 = sx.q(rax_44 s>> 5)
                *(r9_8 + (rdx_20 << 2)) |= 1 << (r8_16.b & 0x1f)
                rcx_27 = *(rdi + 0x58)
            
            if (r10.b != 0)
                int32_t r8_18 = *(rsi_2 + 0x10)
                
                if (r8_18 s>= 0)
                    uint64_t rdx_22 = zx.q(*(rsi_2 + 0xc)) * 0xa0
                    
                    if (r8_18 s< *(rdx_22 + rcx_27 + 0x88))
                        void* r9_10 = rcx_27 + 0x70 + rdx_22
                        void* rax_48 = *(r9_10 + 0x10)
                        
                        if (rax_48 != 0)
                            r9_10 = rax_48
                        
                        int32_t rax_49 = r8_18
                        
                        if (r8_18 s< 0)
                            rax_49 = r8_18 + 0x1f
                        
                        int64_t rdx_23 = sx.q(rax_49 s>> 5)
                        *(r9_10 + (rdx_23 << 2)) |= 1 << (r8_18.b & 0x1f)
                        rcx_27 = *(rdi + 0x58)
        
        uint64_t rax = zx.q(*(rsi_2 + 0xd))
        uint64_t rdx_25 = rax * 0xa0
        
        if (*(rdx_25 + rcx_27) == 0)
            int32_t r8_20 = *(rsi_2 + 0x14)
            
            if (rax.d s< *(rdi + 0x60) && r8_20 s>= 0 && r8_20 s< *(rdx_25 + rcx_27 + 0x48))
                void* r9_12 = rcx_27 + 0x30 + rdx_25
                void* rax_52 = *(r9_12 + 0x10)
                
                if (rax_52 != 0)
                    r9_12 = rax_52
                
                int32_t rax_53 = r8_20
                
                if (r8_20 s< 0)
                    rax_53 = r8_20 + 0x1f
                
                int64_t rdx_26 = sx.q(rax_53 s>> 5)
                *(r9_12 + (rdx_26 << 2)) |= 1 << (r8_20.b & 0x1f)
            
            if (r10.b != 0)
                int32_t rcx_31 = *(rsi_2 + 0x14)
                
                if (rcx_31 s>= 0)
                    rax = *(rdi + 0x58)
                    uint64_t rdx_28 = zx.q(*(rsi_2 + 0xd)) * 0xa0
                    
                    if (rcx_31 s< *(rdx_28 + rax + 0x88))
                        void* r8_23 = rax + 0x70 + rdx_28
                        void* rax_56 = *(r8_23 + 0x10)
                        
                        if (rax_56 != 0)
                            r8_23 = rax_56
                        
                        int32_t rax_57 = rcx_31
                        
                        if (rcx_31 s< 0)
                            rax_57 = rcx_31 + 0x1f
                        
                        int64_t rdx_29 = sx.q(rax_57 s>> 5)
                        *(r8_23 + (rdx_29 << 2)) |= 1 << (rcx_31.b & 0x1f)
    else
        int64_t rdx_1 = *(rdi + 0x58)
        
        if (*(zx.q(*(rsi_2 + 0xd)) * 0xa0 + rdx_1) != 0)
            int32_t* rbx_1 = *(rsi_2 + 0x20)
            void* r14_1 = &rbx_1[sx.q(*(rsi_2 + 0x28))]
            
            if (rbx_1 != r14_1)
                do
                    void* rax_4 = *(rsi_2 + 0x18)
                    int64_t rbp_1 = sx.q(*rbx_1)
                    int64_t* r8_2
                    
                    if (*(rax_4 + 0x24) != 0)
                        r8_2 = *(rax_4 + 0x10)
                    else
                        r8_2 = *(rax_4 + 0x18)
                    
                    sub_1408cf420(rdi, zx.q(rbp_1.d), r8_2)
                    rbx_1 = &rbx_1[1]
                    *((rbp_1 << 6) + *(rdi + 0x38) + 2) = 0
                while (rbx_1 != r14_1)
                
                rbp = 0
        else if (*(zx.q(*(rsi_2 + 0xc)) * 0xa0 + rdx_1) == 0)
            int64_t r15_1 = 0
            int32_t* r14_2 = *(rsi_2 + 0x20)
            uint64_t r12_3 = sx.q(*(rsi_2 + 0x28)) << 2 u>> 2
            
            if (r14_2 u> &r14_2[sx.q(*(rsi_2 + 0x28))])
                r12_3 = 0
            
            if (r12_3 != 0)
                do
                    int64_t rdx_3 = sx.q(*r14_2)
                    char rcx_7 = *(rsi_2 + 0xd)
                    int64_t rbp_3 = rdx_3 << 6
                    
                    if ((*(rdi + 0x38))[rbp_3] == rcx_7)
                        int32_t rbx_2 = *(rsi_2 + 0x14)
                        void* r8_5 = zx.q(rcx_7) * 0xa0 + *(rdi + 0x58)
                        int32_t rax_11 = *(r8_5 + 0x28) - 1
                        
                        if (rax_11 u<= rbx_2)
                            rbx_2 = rax_11
                        
                        sub_1408cf420(rdi, rdx_3, *(*(r8_5 + 0x20) + (sx.q(rbx_2) << 3)))
                        *(*(rdi + 0x38) + rbp_3 + 2) = rbx_2.b
                    
                    r14_2 = &r14_2[1]
                    r15_1 += 1
                while (r15_1 != r12_3)
                
                rbp = 0
            
            r12_1 = arg_10
        
        int64_t* r15_2 = *(rsi_2 + 0x18)
        
        if (r15_2[1] != 0)
            int64_t* rcx_9 = *r15_2
            (*(*rcx_9 + 0x340))(rcx_9, 0)
            int64_t* rcx_10 = *r15_2
            (*(*rcx_10 + 0x3d0))(rcx_10, r15_2[2])
            int64_t* rcx_11 = *r15_2
            (*(*rcx_11 + 0x3d0))(rcx_11, r15_2[3])
        
        int64_t rbx_3 = sx.q(*(rdi + 0x70))
        int32_t rax_17 = (rbx_3 + 1).d
        *(rdi + 0x70) = rax_17
        
        if (rax_17 s> *(rdi + 0x74))
            sub_1405a4d70(rdi + 0x68)
        
        *(*(rdi + 0x68) + (rbx_3 << 3)) = r15_2
        int32_t rbx_4 = 0
        int32_t rcx_13 = *(rdi + 0x80)
        
        if (rcx_13 s> 0)
            int32_t rax_19
            
            do
                int64_t* r9_1 = *(rdi + 0x78)
                rax_19 = rcx_13
                
                if (*(r9_1 + rbp) == r15_2)
                    int32_t rax_21 = rax_19 - rbx_4 - 1
                    
                    if (rax_21 s>= 1)
                        rax_21 = 1
                    
                    if (rax_21 != 0)
                        memcpy(&r9_1[sx.q(rbx_4)], &r9_1[sx.q(rcx_13 - rax_21)], rax_21 << 3)
                        rcx_13 = *(rdi + 0x80)
                    
                    *(rdi + 0x80) = rcx_13 - 1
                    sub_1405c53d0(rdi + 0x78)
                    rax_19 = *(rdi + 0x80)
                    rbx_4 -= 1
                    rbp -= 8
                
                rbx_4 += 1
                rbp += 8
                rcx_13 = rax_19
            while (rbx_4 s< rax_19)
            rdi = arg1
            rbp = 0
        
        int64_t r9_2 = 0
        int32_t* r8_10 = *(rsi_2 + 0x20)
        r10 = sx.q(*(rsi_2 + 0x28)) << 2 u>> 2
        
        if (r8_10 u> &r8_10[sx.q(*(rsi_2 + 0x28))])
            r10 = 0
        
        if (r10 != 0)
            do
                int64_t rdx_8 = sx.q(*r8_10)
                r9_2 += 1
                r8_10 = &r8_10[1]
                *((rdx_8 << 6) + *(rdi + 0x38) + 0x10) = 0xffffffff
                *((rdx_8 << 6) + *(rdi + 0x38) + 3) = 0
            while (r9_2 != r10)
        
        int64_t rcx_19 = sx.q(*(rdi + 0xc0))
        
        if (rcx_19.d s> 1 && i != (rcx_19 - 1).d)
            int64_t rax_30 = *(rdi + 0xb8)
            int64_t r8_11 = 0
            int64_t rcx_20 = rcx_19 * 0x38
            int32_t* rdx_10 = *(rcx_20 + rax_30 - 0x18)
            uint64_t r9_4 = sx.q(*(rcx_20 + rax_30 - 0x10)) << 2 u>> 2
            
            if (rdx_10 u> &rdx_10[sx.q(*(rcx_20 + rax_30 - 0x10))])
                r9_4 = 0
            
            if (r9_4 != 0)
                do
                    int64_t rcx_21 = sx.q(*rdx_10)
                    rdx_10 = &rdx_10[1]
                    r8_11 += 1
                    *((rcx_21 << 6) + *(rdi + 0x38) + 0x10) = i
                while (r8_11 != r9_4)
        
        int64_t rbx_5 = sx.q(i) * 0x38
        int64_t rcx_23 = *(rbx_5 + *(rdi + 0xb8) + 0x20)
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        int32_t r9_6 = *(rdi + 0xc0)
        int32_t rdx_13 = r9_6 - i - 1
        
        if (rdx_13 s>= 1)
            rdx_13 = 1
        
        if (rdx_13 != 0)
            int64_t rcx_24 = *(rdi + 0xb8)
            memcpy(rcx_24 + rbx_5, sx.q(r9_6 - rdx_13) * 0x38 + rcx_24, rdx_13 * 0x38)
            r9_6 = *(rdi + 0xc0)
        
        i -= 1
        *(rdi + 0xc0) = r9_6 - 1
        r12_1 -= 1
    r12_1 += 1
    i += 1
    arg_10 = r12_1
while (i s< *(rdi + 0xc0))
