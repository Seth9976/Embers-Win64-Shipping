// 函数: sub_142631460
// 地址: 0x142631460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *arg3
int32_t i_6 = arg3[1]
int32_t var_78 = rdi
int32_t i_7 = i_6

if (*(arg1 + 9) != 0)
    (*(*arg1 + 0x20))(arg4, 0xe)

int64_t rax_2 = data_143b502a8(zx.q(arg3[2]), 1)
int64_t count = sx.q(arg3[2])

if (rax_2 == 0)
    sub_14262d160(arg1, (rax_2 + 3).d, "erodeWalkableArea: Out of memory 'dist' (%d).", 
        zx.q(count.d))
    int64_t rax_3
    rax_3.b = 0
    return rax_3

memset(rax_2, 0xff, count)
int32_t r14 = 0

if (i_6 s> 0)
    int32_t rdx_1 = rdi
    int32_t var_70
    
    do
        int32_t rsi_1 = 0
        
        if (rdx_1 s> 0)
            int32_t r15_2 = r14 * rdx_1
            int64_t r13_2 = sx.q(r15_2) << 2
            var_70.q = r13_2
            
            do
                int32_t rcx_3 = *(*(arg3 + 0x40) + r13_2)
                uint64_t rax_6 = zx.q(rcx_3) & 0xffffff
                uint64_t r10_1 = zx.q(rax_6.d)
                uint64_t r12 = zx.q(rax_6.d + (rcx_3 u>> 0x18))
                
                if (r10_1 u< r12)
                    uint64_t rbp_2 = rax_6 * 0xc
                    
                    do
                        int64_t r11_1 = *(arg3 + 0x58)
                        int32_t rax_7
                        
                        if (*(r11_1 + r10_1) != 0)
                            rax_7 = 0
                            int32_t r9_2 = *(*(arg3 + 0x48) + rbp_2 + 4)
                            uint32_t rdi_1 = zx.d(r9_2.b)
                            
                            if (rdi_1 != 0xff)
                                rdx_1 = var_78
                                
                                if (*(zx.q((*(*(arg3 + 0x40) + (sx.q(r15_2 + rsi_1) << 2) - 4)
                                        & 0xffffff) + rdi_1) + r11_1) != 0)
                                    rax_7 = 1
                            
                            uint32_t rdi_2 = zx.d((r9_2 u>> 8).b)
                            
                            if (rdi_2 != 0xff && *(zx.q((
                                    *(*(arg3 + 0x40) + (sx.q((r14 + 1) * rdx_1 + rsi_1) << 2))
                                    & 0xffffff) + rdi_2) + r11_1) != 0)
                                rax_7 += 1
                            
                            uint32_t rdi_3 = zx.d((r9_2 u>> 0x10).b)
                            
                            if (rdi_3 != 0xff && *(zx.q((
                                    *(*(arg3 + 0x40) + (sx.q(r15_2 + rsi_1) << 2) + 4) & 0xffffff) + rdi_3)
                                    + r11_1) != 0)
                                rax_7 += 1
                            
                            uint32_t r9_3 = r9_2 u>> 0x18
                            
                            if (r9_3 != 0xff && *(zx.q((
                                    *(*(arg3 + 0x40) + (sx.q((r14 - 1) * var_78 + rsi_1) << 2))
                                    & 0xffffff) + r9_3) + r11_1) != 0)
                                rax_7 += 1
                        
                        if (*(r11_1 + r10_1) == 0 || rax_7 != 4)
                            *(r10_1 + rax_2) = 0
                        
                        rdx_1 = var_78
                        r10_1 += 1
                        rbp_2 += 0xc
                    while (r10_1 s< r12)
                    
                    r13_2 = var_70.q
                
                r13_2 += 4
                rsi_1 += 1
                var_70.q = r13_2
            while (rsi_1 s< rdx_1)
            
            i_6 = i_7
        
        r14 += 1
    while (r14 s< i_6)
    
    rdi = var_78
    int64_t rax_8 = 0
    int64_t rcx_22 = sx.q(rdx_1)
    int32_t r15_4 = neg.d(rdx_1)
    var_70.q = rcx_22
    int32_t* r13_4 = nullptr
    int64_t rdx_6 = var_70.q
    int64_t var_48_1 = 0
    int32_t var_58
    var_58.q = rcx_22 << 2
    int64_t r8_13 = var_58.q
    uint64_t i_4 = zx.q(i_6)
    uint64_t i_5 = i_4
    uint64_t i
    
    do
        int32_t r14_1 = 0
        
        if (rdi s> 0)
            int32_t* r12_1 = r13_4
            
            do
                int32_t rcx_24 = *(r12_1 + *(arg3 + 0x40))
                uint64_t rax_11 = zx.q(rcx_24) & 0xffffff
                uint64_t rdx_7 = zx.q(rax_11.d)
                uint64_t rsi_2 = zx.q(rax_11.d + (rcx_24 u>> 0x18))
                
                if (rdx_7 u< rsi_2)
                    uint64_t rdi_5 = rax_11 * 0xc
                    char* r9_4 = rax_11 + rax_2
                    uint64_t j_2 = rsi_2 - rdx_7
                    uint64_t j
                    
                    do
                        int64_t r8_14 = *(arg3 + 0x48)
                        uint32_t rdx_9 = zx.d((*(r8_14 + rdi_5 + 4)).b)
                        
                        if (rdx_9 != 0xff)
                            char r10_2 = -1
                            uint64_t rcx_28 =
                                zx.q((*(*(arg3 + 0x40) + r12_1 - 4) & 0xffffff) + rdx_9)
                            int32_t rdx_11 = zx.d(*(rcx_28 + rax_2)) + 2
                            
                            if (rdx_11 u< 0xff)
                                r10_2 = rdx_11.b
                            
                            char rax_15 = *r9_4
                            
                            if (r10_2 u>= rax_15)
                                r10_2 = rax_15
                            else
                                *r9_4 = r10_2
                            
                            uint32_t r8_17 = *(r8_14 + rcx_28 * 0xc + 4) u>> 0x18
                            
                            if (r8_17 != 0xff)
                                char rdx_15 = -1
                                int32_t rcx_31 = zx.d(*(zx.q((
                                    *(*(arg3 + 0x40) + (sx.q(r14_1 + r15_4) << 2) - 4) & 0xffffff)
                                    + r8_17) + rax_2)) + 3
                                
                                if (rcx_31 u< 0xff)
                                    rdx_15 = rcx_31.b
                                
                                if (rdx_15 u< r10_2)
                                    *r9_4 = rdx_15
                        
                        uint32_t r8_18 = zx.d(*(r8_14 + rdi_5 + 7))
                        
                        if (r8_18 != 0xff)
                            char r10_3 = *r9_4
                            uint64_t rdx_18 = zx.q((*(*(arg3 + 0x40) + (sx.q(r15_4 + r14_1) << 2))
                                & 0xffffff) + r8_18)
                            void* r11_3 = *(arg3 + 0x48) + rdx_18 * 0xc
                            int32_t rcx_35 = zx.d(*(rdx_18 + rax_2)) + 2
                            char rdx_19 = -1
                            
                            if (rcx_35 u< 0xff)
                                rdx_19 = rcx_35.b
                            
                            if (rdx_19 u< r10_3)
                                *r9_4 = rdx_19
                                r10_3 = rdx_19
                            
                            char r8_20 = *(r11_3 + 6)
                            
                            if (r8_20 != 0xff)
                                char rdx_23 = -1
                                int32_t rcx_38 = zx.d(*(zx.q((
                                    *(*(arg3 + 0x40) + (sx.q(r14_1 + r15_4) << 2) + 4) & 0xffffff)
                                    + zx.d(r8_20)) + rax_2)) + 3
                                
                                if (rcx_38 u< 0xff)
                                    rdx_23 = rcx_38.b
                                
                                if (rdx_23 u< r10_3)
                                    *r9_4 = rdx_23
                        
                        rdi_5 += 0xc
                        r9_4 = &r9_4[1]
                        j = j_2
                        j_2 -= 1
                    while (j != 1)
                    rdi = var_78
                
                r14_1 += 1
                r12_1 = &r12_1[1]
            while (r14_1 s< rdi)
            
            rax_8 = var_48_1
            i_4 = i_5
            rdx_6 = var_70.q
            r8_13 = var_58.q
        
        rax_8 += rdx_6
        r13_4 += r8_13
        r15_4 += rdi
        var_48_1 = rax_8
        i = i_4
        i_4 -= 1
        i_5 = i_4
    while (i != 1)
    i_6 = i_7

int32_t i_1 = i_6 - 1
int32_t i_3 = i_1

if (i_1 s>= 0)
    int32_t r8_21 = rdi - 1
    int32_t rcx_40 = i_1 * rdi
    int32_t var_70_1 = r8_21
    int32_t rdx_25 = neg.d(rdi)
    int32_t var_58_1 = rdx_25
    int32_t r14_3 = (i_1 + 1) * rdi
    int32_t var_78_1 = rcx_40
    
    do
        int32_t rbp_4 = r8_21
        
        if (r8_21 s>= 0)
            int32_t rax_27 = rcx_40 + r8_21
            int32_t r12_2 = r8_21 + 1
            int64_t r13_6 = sx.q(rax_27) << 2
            int64_t var_60_1 = r13_6
            int64_t r15_6 = sx.q(rax_27 + 1) << 2
            int32_t temp0_1
            
            do
                int32_t rcx_41 = *(*(arg3 + 0x40) + r13_6)
                uint64_t rax_31 = zx.q(rcx_41) & 0xffffff
                uint64_t rdx_26 = zx.q(rax_31.d)
                uint64_t rsi_3 = zx.q(rax_31.d + (rcx_41 u>> 0x18))
                
                if (rdx_26 u< rsi_3)
                    uint64_t rdi_7 = rax_31 * 0xc
                    uint64_t j_3 = rsi_3 - rdx_26
                    char* r8_22 = rax_31 + rax_2
                    uint64_t j_1
                    
                    do
                        int64_t rdx_27 = *(arg3 + 0x48)
                        char r9_5 = *(rdi_7 + rdx_27 + 6)
                        
                        if (r9_5 != 0xff)
                            uint64_t rcx_45 =
                                zx.q((*(r15_6 + *(arg3 + 0x40)) & 0xffffff) + zx.d(r9_5))
                            char r9_6 = -1
                            int32_t rcx_47 = zx.d(*(rcx_45 + rax_2)) + 2
                            
                            if (rcx_47 u< 0xff)
                                r9_6 = rcx_47.b
                            
                            char rax_36 = *r8_22
                            
                            if (r9_6 u>= rax_36)
                                r9_6 = rax_36
                            else
                                *r8_22 = r9_6
                            
                            char r10_5 = *(rdx_27 + rcx_45 * 0xc + 5)
                            
                            if (r10_5 != 0xff)
                                char rdx_31 = -1
                                int32_t rcx_50 = zx.d(*(zx.q((
                                    *(*(arg3 + 0x40) + (sx.q(r14_3 + r12_2) << 2)) & 0xffffff)
                                    + zx.d(r10_5)) + rax_2)) + 3
                                
                                if (rcx_50 u< 0xff)
                                    rdx_31 = rcx_50.b
                                
                                if (rdx_31 u< r9_6)
                                    *r8_22 = rdx_31
                        
                        char r9_7 = *(rdi_7 + rdx_27 + 5)
                        
                        if (r9_7 != 0xff)
                            char r10_6 = *r8_22
                            uint64_t rdx_34 = zx.q((*(*(arg3 + 0x40) + (sx.q(r14_3 + rbp_4) << 2))
                                & 0xffffff) + zx.d(r9_7))
                            void* r9_8 = *(arg3 + 0x48) + rdx_34 * 0xc
                            int32_t rcx_54 = zx.d(*(rdx_34 + rax_2)) + 2
                            char rdx_35 = -1
                            
                            if (rcx_54 u< 0xff)
                                rdx_35 = rcx_54.b
                            
                            if (rdx_35 u< r10_6)
                                *r8_22 = rdx_35
                                r10_6 = rdx_35
                            
                            uint32_t r9_10 = zx.d((*(r9_8 + 4)).b)
                            
                            if (r9_10 != 0xff)
                                char rdx_39 = -1
                                int32_t rcx_57 = zx.d(*(zx.q((
                                    *(*(arg3 + 0x40) + (sx.q(r14_3 + rbp_4) << 2) - 4) & 0xffffff)
                                    + r9_10) + rax_2)) + 3
                                
                                if (rcx_57 u< 0xff)
                                    rdx_39 = rcx_57.b
                                
                                if (rdx_39 u< r10_6)
                                    *r8_22 = rdx_39
                        
                        rdi_7 += 0xc
                        r8_22 = &r8_22[1]
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
                    r13_6 = var_60_1
                
                r13_6 -= 4
                r12_2 -= 1
                r15_6 -= 4
                var_60_1 = r13_6
                temp0_1 = rbp_4
                rbp_4 -= 1
            while (temp0_1 - 1 s>= 0)
            i_1 = i_3
            rcx_40 = var_78_1
            rdx_25 = var_58_1
            r8_21 = var_70_1
        
        i_1 -= 1
        rcx_40 += rdx_25
        r14_3 += rdx_25
        i_3 = i_1
        var_78_1 = rcx_40
    while (i_1 s>= 0)

char rdx_40 = arg2 * 2

if (arg3[2] s> 0)
    int64_t rax_49 = rax_2
    int32_t i_2 = 0
    char* rcx_58 = nullptr
    
    do
        if (rcx_58[rax_49] u< rdx_40)
            rcx_58[*(arg3 + 0x58)] = 0
            rax_49 = rax_2
        
        i_2 += 1
        rcx_58 = &rcx_58[1]
    while (i_2 s< arg3[2])

data_143b502b0(rax_2, rdx_40)

if (*(arg1 + 9) != 0)
    (*(*arg1 + 0x28))(arg1, 0xe)

int64_t rax_51
rax_51.b = 1
return rax_51
