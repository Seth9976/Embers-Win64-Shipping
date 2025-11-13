// 函数: sub_142399a40
// 地址: 0x142399a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = 0
void* r12 = *(arg1 + 0x200)
char r15 = arg2.b

if (*(arg1 + 0x380) == 0 || arg2.b != 0)
    int64_t rsi_1 = 0
    int32_t* rdi_1 = *(r12 + 0xc8)
    uint64_t r14_2 = sx.q(*(r12 + 0xd0)) << 2 u>> 2
    
    if (rdi_1 u> &rdi_1[sx.q(*(r12 + 0xd0))])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            int64_t r9_1 = sx.q(*rdi_1)
            
            if (r9_1.d s>= 0 && r9_1.d s< *(arg1 + 0x18))
                if (*(arg1 + 0x2e0) == *(arg1 + 0x30c))
                label_142399b39:
                    sub_1423ab970(r9_1 * 0xd8 + *(arg1 + 0x10))
                else
                    void* r8_1 = arg1 + 0x310
                    void* rcx = *(r8_1 + 8)
                    
                    if (rcx != 0)
                        r8_1 = rcx
                    
                    int32_t rax_4 = *(r8_1 + (((sx.q(*(arg1 + 0x320)) - 1) & r9_1) << 2))
                    
                    if (rax_4 == 0xffffffff)
                    label_142399b39_1:
                        sub_1423ab970(r9_1 * 0xd8 + *(arg1 + 0x10))
                    else
                        int64_t r8_2 = *(arg1 + 0x2d8)
                        
                        while (true)
                            arg2 = sx.q(rax_4) * 3
                            
                            if (*(r8_2 + (arg2 << 2)) == r9_1.d)
                                break
                            
                            rax_4 = *(r8_2 + (arg2 << 2) + 4)
                            
                            if (rax_4 == 0xffffffff)
                                goto label_142399b39_2
                        
                        if (rax_4 == 0xffffffff)
                        label_142399b39_2:
                            sub_1423ab970(r9_1 * 0xd8 + *(arg1 + 0x10))
            
            rdi_1 = &rdi_1[1]
            rsi_1 += 1
        while (rsi_1 != r14_2)
    
    if (r15 != 0 || *data_143f59c28 == 0 || *data_143f59c40 s<= 0)
        int64_t rsi_3 = 0
        int32_t* rdi_7 = *(r12 + 0xb8)
        uint64_t r14_5 = sx.q(*(r12 + 0xc0)) << 2 u>> 2
        
        if (rdi_7 u> &rdi_7[sx.q(*(r12 + 0xc0))])
            r14_5 = 0
        
        if (r14_5 != 0)
            do
                int64_t r9_3 = sx.q(*rdi_7)
                
                if (r9_3.d s>= 0 && r9_3.d s< *(arg1 + 0x18))
                    if (*(arg1 + 0x2e0) == *(arg1 + 0x30c))
                    label_142399e1c:
                        sub_1423b6350(r9_3 * 0xd8 + *(arg1 + 0x10))
                    else
                        void* r8_6 = arg1 + 0x310
                        void* rcx_16 = *(r8_6 + 8)
                        
                        if (rcx_16 != 0)
                            r8_6 = rcx_16
                        
                        int32_t rax_22 = *(r8_6 + (((sx.q(*(arg1 + 0x320)) - 1) & r9_3) << 2))
                        
                        if (rax_22 == 0xffffffff)
                        label_142399e1c_1:
                            sub_1423b6350(r9_3 * 0xd8 + *(arg1 + 0x10))
                        else
                            int64_t r8_7 = *(arg1 + 0x2d8)
                            
                            while (true)
                                arg2 = sx.q(rax_22) * 3
                                
                                if (*(r8_7 + (arg2 << 2)) == r9_3.d)
                                    break
                                
                                rax_22 = *(r8_7 + (arg2 << 2) + 4)
                                
                                if (rax_22 == 0xffffffff)
                                    goto label_142399e1c_2
                            
                            if (rax_22 == 0xffffffff)
                            label_142399e1c_2:
                                sub_1423b6350(r9_3 * 0xd8 + *(arg1 + 0x10))
                
                rdi_7 = &rdi_7[1]
                rsi_3 += 1
            while (rsi_3 != r14_5)
    else
        *(arg1 + 0x330) = 0
        
        if (*(arg1 + 0x334) s<= 0xffffffff)
            sub_1405a5410(arg1 + 0x328, 0)
        
        *(arg1 + 0x338) = 0
        int32_t* r15_1 = *(r12 + 0xb8)
        int64_t r12_1 = 0
        uint64_t rdi_3 = sx.q(*(r12 + 0xc0)) << 2 u>> 2
        
        if (r15_1 u> &r15_1[sx.q(*(r12 + 0xc0))])
            rdi_3 = 0
        
        if (rdi_3 != 0)
            uint64_t rax_9 = rdi_3
            
            do
                int64_t rdi_4 = sx.q(*r15_1)
                
                if (rdi_4.d s>= 0 && rdi_4.d s< *(arg1 + 0x18))
                    int64_t* r13_2 = rdi_4 * 0xd8 + *(arg1 + 0x10)
                    
                    if (*r13_2 != 0)
                        if (*(arg1 + 0x2e0) == *(arg1 + 0x30c))
                        label_142399c61:
                            sub_1423ab180(r13_2)
                            int64_t rsi_2 = sx.q(*(arg1 + 0x330))
                            int32_t rax_13 = (rsi_2 + 1).d
                            *(arg1 + 0x330) = rax_13
                            
                            if (rax_13 s> *(arg1 + 0x334))
                                sub_1405a4f90(arg1 + 0x328)
                            
                            int64_t rcx_12 = rsi_2 << 4
                            int64_t* rcx_13 = rcx_12 + *(arg1 + 0x328)
                            
                            if (rcx_12 != neg.q(*(arg1 + 0x328)))
                                *rcx_13 = *r13_2
                                rcx_13[1].d = rdi_4.d
                        else
                            void* rdx_3 = arg1 + 0x310
                            void* rax_11 = *(rdx_3 + 8)
                            
                            if (rax_11 != 0)
                                rdx_3 = rax_11
                            
                            int32_t rax_12 = *(rdx_3 + (((sx.q(*(arg1 + 0x320)) - 1) & rdi_4) << 2))
                            
                            if (rax_12 == 0xffffffff)
                                goto label_142399c61
                            
                            int64_t r8_3 = *(arg1 + 0x2d8)
                            
                            while (true)
                                arg2 = sx.q(rax_12) * 3
                                
                                if (*(r8_3 + (arg2 << 2)) == rdi_4.d)
                                    break
                                
                                rax_12 = *(r8_3 + (arg2 << 2) + 4)
                                
                                if (rax_12 == 0xffffffff)
                                    goto label_142399c61
                            
                            if (rax_12 == 0xffffffff)
                                goto label_142399c61
                    
                    rax_9 = rdi_3
                
                r15_1 = &r15_1[1]
                r12_1 += 1
            while (r12_1 != rax_9)
            
            r13 = 0

int64_t r11 = 0
int32_t* r10 = *(r12 + 0xd8)
uint64_t rdi_6 = sx.q(*(r12 + 0xe0)) << 2 u>> 2

if (r10 u> &r10[sx.q(*(r12 + 0xe0))])
    rdi_6 = 0

if (rdi_6 != 0)
    do
        int64_t r9_2 = sx.q(*r10)
        
        if (r9_2.d s>= 0 && r9_2.d s< *(arg1 + 0x18))
            if (*(arg1 + 0x2e0) == *(arg1 + 0x30c))
            label_142399e42:
                void** rcx_21 = r9_2 * 0xd8 + *(arg1 + 0x10)
                
                if (*(r12 + 0x10) s> 0 || (*(rcx_21 + 0xb4) & 0x80) != 0)
                    arg2.b = 1
                else
                    arg2.b = 0
                
                int32_t rax_24
                
                if (*(arg1 + 0x380) != 0 || (*(rcx_21 + 0x94) s<= *(rcx_21 + 0x5c) && arg2.b != 0))
                    arg2.b = 0
                    rax_24 = 0
                else
                    arg2.b = 0x10
                    rax_24 = 0x40
                
                *(rcx_21 + 0xb4) &= 0xffffffbf
                *(rcx_21 + 0xb4) |= rax_24
                void* rax_25 = *rcx_21
                
                if (rax_25 != 0)
                    *(rax_25 + 0x3d) &= 0xef
                    *(rax_25 + 0x3d) |= arg2.b
            else
                void* r8_4 = arg1 + 0x310
                void* rcx_14 = *(r8_4 + 8)
                
                if (rcx_14 != 0)
                    r8_4 = rcx_14
                
                int32_t rax_18 = *(r8_4 + (((sx.q(*(arg1 + 0x320)) - 1) & r9_2) << 2))
                
                if (rax_18 == 0xffffffff)
                    goto label_142399e42
                
                int64_t r8_5 = *(arg1 + 0x2d8)
                
                while (true)
                    arg2 = sx.q(rax_18) * 3
                    
                    if (*(r8_5 + (arg2 << 2)) == r9_2.d)
                        break
                    
                    rax_18 = *(r8_5 + (arg2 << 2) + 4)
                    
                    if (rax_18 == 0xffffffff)
                        goto label_142399e42
                
                if (rax_18 == 0xffffffff)
                    goto label_142399e42
        
        r10 = &r10[1]
        r11 += 1
    while (r11 != rdi_6)

int32_t r10_1 = *(arg1 + 0x300)
int32_t var_84 = 1
int32_t rcx_22 = 0
int32_t var_88 = 0
int32_t r8_8 = 0
void* var_80 = arg1 + 0x2e8
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (r10_1 != 0)
    void* rax_26 = *(arg1 + 0x2f8)
    void* r9_4 = arg1 + 0x2e8
    
    if (rax_26 != 0)
        r9_4 = rax_26
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_13 = *r9_4
    
    if (rdx_13 != 0)
    label_142399f38:
        int32_t rax_33 = neg.d(rdx_13) & rdx_13
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_33)
        int32_t var_84_1 = rax_33
        int32_t rax_34
        
        if (rax_33 == 0)
            rax_34 = 0x20
        else
            rax_34 = 0x1f - temp0_2
        
        var_74.d = r8_8 - rax_34 + 0x1f
        
        if (r8_8 - rax_34 + 0x1f s> r10_1)
            var_74.d = r10_1
    else
        while (true)
            int64_t rdx_14 = sx.q(rcx_22)
            r8_8 += 0x20
            rcx_22 += 1
            var_74:4.d = r8_8
            var_88 = rcx_22
            
            if (rdx_14.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_13 = *(r9_4 + (rdx_14 << 2) + 4)
            var_78 = 0xffffffff
            
            if (rdx_13 != 0)
                goto label_142399f38
        
        var_74.d = r10_1

int128_t var_48 = 0xffffffff
double var_58[0x2] = var_88.o
var_88.o = (arg1 + 0x2d8).o
int64_t var_68 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_78.o = var_58

if (0 s< r10_1)
    int32_t i_2
    int32_t i = i_2
    
    do
        int64_t rax_38 = sx.q(*(*var_88.q + sx.q(i) * 0xc))
        
        if (rax_38.d s>= 0 && rax_38.d s< *(arg1 + 0x18))
            void* rdx_17 = rax_38 * 0xd8 + *(arg1 + 0x10)
            int32_t rcx_25 = *(rdx_17 + 0x6c)
            bool cond:2_1 = *(rdx_17 + 0x68) s>= rcx_25
            *(rdx_17 + 0xa0) = 0
            
            if (cond:2_1)
                rcx_25 = *(rdx_17 + 0x68)
            
            *(rdx_17 + 0x68) = rcx_25
        
        var_74:4.d &= not.d(var_80:4.d)
        sub_14059bdd0(&var_80)
        i = i_2
    while (i s< *(var_78.q + 0x18))

bool cond:0 = *(arg1 + 0x2e4) == 0
*(arg1 + 0x2e0) = 0

if (not(cond:0))
    sub_140638cc0(arg1 + 0x2d8, 0)

*(arg1 + 0x308) = 0xffffffff
*(arg1 + 0x30c) = 0
sub_14059a8e0(arg1 + 0x2e8, 0)
void* result = zx.q(*(arg1 + 0x320))

if (result.d s> 0)
    uint64_t i_3 = zx.q(result.d)
    uint64_t i_1
    
    do
        void* result_1 = *(arg1 + 0x318)
        result = arg1 + 0x310
        int64_t rdx_20 = (sx.q(*(arg1 + 0x320)) - 1) & r13
        
        if (result_1 != 0)
            result = result_1
        
        r13 += 1
        *(result + (rdx_20 << 2)) = 0xffffffff
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
