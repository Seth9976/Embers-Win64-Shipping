// 函数: sub_1426361a0
// 地址: 0x1426361a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_7 = arg1[1]
int16_t* r12 = arg2
int32_t rdx = *arg1
int32_t i = 0
int32_t var_78 = rdx
int32_t i_8 = i_7

if (arg1[2] s> 0)
    int16_t* rax_1 = r12
    
    do
        *rax_1 = 0xffff
        rax_1 = &rax_1[1]
        i += 1
    while (i s< arg1[2])

int32_t r15 = 0

if (i_7 s> 0)
    int32_t var_70
    
    do
        int32_t r14_1 = 0
        
        if (rdx s> 0)
            int32_t r13_2 = r15 * rdx
            int64_t rcx_1 = sx.q(r13_2) << 2
            var_70.q = rcx_1
            
            do
                int32_t rcx_2 = *(rcx_1 + *(arg1 + 0x40))
                uint64_t rax_4 = zx.q(rcx_2) & 0xffffff
                uint64_t r10_1 = zx.q(rax_4.d)
                uint64_t r12_1 = zx.q(rax_4.d + (rcx_2 u>> 0x18))
                
                if (r10_1 u< r12_1)
                    uint64_t rbp_2 = rax_4 * 0xc
                    
                    do
                        int32_t rax_5 = 0
                        int64_t rbx_1 = *(arg1 + 0x58)
                        int32_t r9_1 = *(*(arg1 + 0x48) + rbp_2 + 4)
                        char rsi_1 = *(rbx_1 + r10_1)
                        uint32_t rdi_1 = zx.d(r9_1.b)
                        
                        if (rdi_1 != 0xff)
                            rdx = var_78
                            
                            if (rsi_1 == *(zx.q((*(*(arg1 + 0x40) + (sx.q(r14_1 + r13_2) << 2) - 4)
                                    & 0xffffff) + rdi_1) + rbx_1))
                                rax_5 = 1
                        
                        uint32_t rdi_2 = zx.d((r9_1 u>> 8).b)
                        
                        if (rdi_2 != 0xff && rsi_1 == *(zx.q((
                                *(*(arg1 + 0x40) + (sx.q((r15 + 1) * rdx + r14_1) << 2)) & 0xffffff)
                                + rdi_2) + rbx_1))
                            rax_5 += 1
                        
                        uint32_t rdi_3 = zx.d((r9_1 u>> 0x10).b)
                        
                        if (rdi_3 != 0xff && rsi_1 == *(zx.q((
                                *(*(arg1 + 0x40) + (sx.q(r14_1 + r13_2) << 2) + 4) & 0xffffff) + rdi_3)
                                + rbx_1))
                            rax_5 += 1
                        
                        uint32_t r9_2 = r9_1 u>> 0x18
                        
                        if (r9_2 != 0xff && rsi_1 == *(zx.q((
                                *(*(arg1 + 0x40) + (sx.q((r15 - 1) * var_78 + r14_1) << 2))
                                & 0xffffff) + r9_2) + rbx_1))
                            rax_5 += 1
                        
                        if (rax_5 != 4)
                            arg2[r10_1] = 0
                        
                        rdx = var_78
                        r10_1 += 1
                        rbp_2 += 0xc
                    while (r10_1 s< r12_1)
                
                r14_1 += 1
                rcx_1 = var_70.q + 4
                var_70.q = rcx_1
            while (r14_1 s< rdx)
            
            i_7 = i_8
        
        r15 += 1
    while (r15 s< i_7)
    
    r12 = arg2
    int32_t r10_2 = var_78
    int64_t rax_7 = 0
    int64_t rcx_22 = sx.q(rdx)
    int32_t r14_3 = neg.d(rdx)
    var_70.q = rcx_22
    int32_t* r13_3 = nullptr
    int64_t rdx_5 = var_70.q
    int64_t var_50_1 = 0
    int32_t var_68
    var_68.q = rcx_22 << 2
    uint64_t i_5 = zx.q(i_7)
    int64_t r8_12 = var_68.q
    uint64_t i_6 = i_5
    uint64_t i_1
    
    do
        int32_t rsi_2 = 0
        
        if (r10_2 s> 0)
            int32_t* r15_1 = r13_3
            
            do
                int32_t rcx_24 = *(r15_1 + *(arg1 + 0x40))
                uint64_t rax_10 = zx.q(rcx_24) & 0xffffff
                uint64_t r9_3 = zx.q(rax_10.d)
                uint64_t rbp_3 = zx.q(rax_10.d + (rcx_24 u>> 0x18))
                
                if (r9_3 u< rbp_3)
                    uint64_t rdi_5 = rax_10 * 0xc
                    
                    do
                        int64_t r8_13 = *(arg1 + 0x48)
                        uint32_t rdx_7 = zx.d((*(r8_13 + rdi_5 + 4)).b)
                        
                        if (rdx_7 != 0xff)
                            uint32_t rbx_2 = zx.d(r12[r9_3])
                            uint64_t rcx_28 =
                                zx.q((*(r15_1 + *(arg1 + 0x40) - 4) & 0xffffff) + rdx_7)
                            uint32_t rdx_8 = zx.d(r12[rcx_28])
                            
                            if (rdx_8 + 2 u< rbx_2)
                                rdx_8.w += 2
                                rbx_2 = zx.d(rdx_8.w)
                                r12[r9_3] = rdx_8.w
                            
                            uint32_t r8_15 = zx.d(*(r8_13 + rcx_28 * 0xc + 7))
                            
                            if (r8_15 != 0xff)
                                uint32_t rdx_12 = zx.d(r12[zx.q((
                                    *(*(arg1 + 0x40) + (sx.q(rsi_2 + r14_3) << 2) - 4) & 0xffffff)
                                    + r8_15)])
                                
                                if (rdx_12 + 3 u< zx.d(rbx_2.w))
                                    rdx_12.w += 3
                                    r12[r9_3] = rdx_12.w
                        
                        uint32_t r8_16 = zx.d(*(r8_13 + rdi_5 + 7))
                        
                        if (r8_16 != 0xff)
                            uint32_t r10_4 = zx.d(r12[r9_3])
                            uint64_t rdx_15 = zx.q((*(*(arg1 + 0x40) + (sx.q(r14_3 + rsi_2) << 2))
                                & 0xffffff) + r8_16)
                            void* rdx_16 = *(arg1 + 0x48) + rdx_15 * 0xc
                            uint32_t rcx_33 = zx.d(r12[zx.q(rdx_15.d)])
                            
                            if (rcx_33 + 2 u< r10_4)
                                rcx_33.w += 2
                                r10_4 = zx.d(rcx_33.w)
                                r12[r9_3] = rcx_33.w
                            
                            char r8_18 = *(rdx_16 + 6)
                            
                            if (r8_18 != 0xff)
                                uint32_t rdx_20 = zx.d(r12[zx.q((
                                    *(*(arg1 + 0x40) + (sx.q(rsi_2 + r14_3) << 2) + 4) & 0xffffff)
                                    + zx.d(r8_18))])
                                
                                if (rdx_20 + 3 u< zx.d(r10_4.w))
                                    rdx_20.w += 3
                                    r12[r9_3] = rdx_20.w
                        
                        r9_3 += 1
                        rdi_5 += 0xc
                    while (r9_3 s< rbp_3)
                    
                    r10_2 = var_78
                
                rsi_2 += 1
                r15_1 = &r15_1[1]
            while (rsi_2 s< r10_2)
            
            rax_7 = var_50_1
            i_5 = i_6
            rdx_5 = var_70.q
            r8_12 = var_68.q
        
        rax_7 += rdx_5
        r13_3 += r8_12
        r14_3 += r10_2
        var_50_1 = rax_7
        i_1 = i_5
        i_5 -= 1
        i_6 = i_5
    while (i_1 != 1)
    rdx = var_78
    i_7 = i_8

int32_t i_2 = i_7 - 1
int32_t i_4 = i_2

if (i_2 s>= 0)
    int32_t r8_19 = rdx - 1
    int32_t rcx_37 = i_2 * rdx
    int32_t rdx_21 = neg.d(rdx)
    int32_t var_70_1 = r8_19
    int32_t r14_5 = (i_2 + 1) * var_78
    int16_t* var_58
    var_58.d = rdx_21
    int32_t var_68_1 = rcx_37
    
    do
        int32_t rsi_3 = r8_19
        
        if (r8_19 s>= 0)
            int32_t rax_25 = rcx_37 + r8_19
            int32_t r13_4 = r8_19 + 1
            int64_t rcx_39 = sx.q(rax_25) << 2
            int64_t var_60_1 = rcx_39
            int64_t r15_3 = sx.q(rax_25 + 1) << 2
            int32_t temp0_1
            
            do
                int32_t rcx_40 = *(rcx_39 + *(arg1 + 0x40))
                uint64_t rax_29 = zx.q(rcx_40) & 0xffffff
                uint64_t r9_4 = zx.q(rax_29.d)
                uint64_t rbp_4 = zx.q(rax_29.d + (rcx_40 u>> 0x18))
                
                if (r9_4 u< rbp_4)
                    uint64_t rbx_4 = rax_29 * 0xc
                    
                    do
                        int64_t rdx_22 = *(arg1 + 0x48)
                        char r8_20 = *(rbx_4 + rdx_22 + 6)
                        
                        if (r8_20 != 0xff)
                            uint32_t rdi_6 = zx.d(r12[r9_4])
                            uint64_t rcx_44 =
                                zx.q((*(r15_3 + *(arg1 + 0x40)) & 0xffffff) + zx.d(r8_20))
                            uint32_t rdx_23 = zx.d(r12[rcx_44])
                            
                            if (rdx_23 + 2 u< rdi_6)
                                rdx_23.w += 2
                                rdi_6 = zx.d(rdx_23.w)
                                r12[r9_4] = rdx_23.w
                            
                            char r8_22 = *(rdx_22 + rcx_44 * 0xc + 5)
                            
                            if (r8_22 != 0xff)
                                uint32_t rdx_27 = zx.d(r12[zx.q((
                                    *(*(arg1 + 0x40) + (sx.q(r14_5 + r13_4) << 2)) & 0xffffff)
                                    + zx.d(r8_22))])
                                
                                if (rdx_27 + 3 u< zx.d(rdi_6.w))
                                    rdx_27.w += 3
                                    r12[r9_4] = rdx_27.w
                        
                        char r8_23 = *(rbx_4 + rdx_22 + 5)
                        
                        if (r8_23 != 0xff)
                            uint32_t r10_6 = zx.d(r12[r9_4])
                            uint64_t rdx_30 = zx.q((*(*(arg1 + 0x40) + (sx.q(r14_5 + rsi_3) << 2))
                                & 0xffffff) + zx.d(r8_23))
                            void* r8_24 = *(arg1 + 0x48) + rdx_30 * 0xc
                            uint32_t rcx_49 = zx.d(r12[rdx_30])
                            
                            if (rcx_49 + 2 u< r10_6)
                                rcx_49.w += 2
                                r10_6 = zx.d(rcx_49.w)
                                r12[r9_4] = rcx_49.w
                            
                            uint32_t r8_26 = zx.d((*(r8_24 + 4)).b)
                            
                            if (r8_26 != 0xff)
                                uint32_t rdx_34 = zx.d(r12[zx.q((
                                    *(*(arg1 + 0x40) + (sx.q(r14_5 + rsi_3) << 2) - 4) & 0xffffff)
                                    + r8_26)])
                                
                                if (rdx_34 + 3 u< zx.d(r10_6.w))
                                    rdx_34.w += 3
                                    r12[r9_4] = rdx_34.w
                        
                        r9_4 += 1
                        rbx_4 += 0xc
                    while (r9_4 s< rbp_4)
                
                r13_4 -= 1
                rcx_39 = var_60_1 - 4
                r15_3 -= 4
                temp0_1 = rsi_3
                rsi_3 -= 1
                var_60_1 = rcx_39
            while (temp0_1 - 1 s>= 0)
            i_2 = i_4
            rcx_37 = var_68_1
            rdx_21 = var_58.d
            r8_19 = var_70_1
        
        i_2 -= 1
        rcx_37 += rdx_21
        r14_5 += rdx_21
        i_4 = i_2
        var_68_1 = rcx_37
    while (i_2 s>= 0)

int32_t i_3 = 0
*arg3 = 0

if (arg1[2] s> 0)
    do
        int16_t rcx_53 = *arg3
        
        if (*r12 u> rcx_53)
            rcx_53 = *r12
        
        i_3 += 1
        *arg3 = rcx_53
        r12 = &r12[1]
    while (i_3 s< arg1[2])

return i_2
