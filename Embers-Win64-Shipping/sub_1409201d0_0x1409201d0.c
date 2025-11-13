// 函数: sub_1409201d0
// 地址: 0x1409201d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r13 = *(arg3 + 0x18)
char r12 = *(arg3 + 0x17)
char r15 = *(arg3 + 0x16)
char r14 = *(arg3 + 0x15)
char rsi = *(arg3 + 0x11)
char rdi = *(arg3 + 0x14)
char r11 = *(arg3 + 0x13)
char r10 = *(arg3 + 0x12)
char r9 = *(arg3 + 0x10)
char arg_10 = *(arg3 + 0x19)
int64_t rcx

if (*(arg2 + 0x14) == 0)
    rcx = sx.q(arg2[2].d)

uint64_t rax

if (*(arg2 + 0x14) != 0 || (rcx + 4).d u> arg2[1].d)
    *(arg2 + 0x14) = 1
    rax.b = 1
else
    *(rcx + *arg2) = *(arg3 + 0xb)
    *(sx.q(arg2[2].d) + *arg2 + 1) = *(arg3 + 0xa)
    *(sx.q(arg2[2].d) + *arg2 + 2) = *(arg3 + 9)
    *(sx.q(arg2[2].d) + *arg2 + 3) = *(arg3 + 8)
    arg2[2].d += 4
    rax = zx.q(*(arg2 + 0x14))

if (rax.b != 0)
    *(arg2 + 0x14) = 1
    rax.b = 1
else
    int64_t rcx_5 = sx.q(arg2[2].d)
    
    if ((rcx_5 + 4).d u> arg2[1].d)
        *(arg2 + 0x14) = 1
        rax.b = 1
    else
        *(rcx_5 + *arg2) = *(arg3 + 0xf)
        *(sx.q(arg2[2].d) + *arg2 + 1) = *(arg3 + 0xe)
        *(sx.q(arg2[2].d) + *arg2 + 2) = *(arg3 + 0xd)
        *(sx.q(arg2[2].d) + *arg2 + 3) = *(arg3 + 0xc)
        int64_t rcx_10 = sx.q(arg2[2].d)
        rax = zx.q((rcx_10 + 4).d)
        arg2[2].d = rax.d
        
        if (*(arg2 + 0x14) != 0)
            *(arg2 + 0x14) = 1
            rax.b = 1
        else
            rax = zx.q(rax.d + 1)
            
            if (rax.d u> arg2[1].d)
                *(arg2 + 0x14) = 1
                rax.b = 1
            else
                arg2[2].d = rax.d
                *(rcx_10 + *arg2 + 4) = r9
                
                if (*(arg2 + 0x14) != 0)
                    *(arg2 + 0x14) = 1
                    rax.b = 1
                else
                    rax = sx.q(arg2[2].d)
                    int32_t rcx_11 = (rax + 1).d
                    
                    if (rcx_11 u> arg2[1].d)
                        *(arg2 + 0x14) = 1
                        rax.b = 1
                    else
                        arg2[2].d = rcx_11
                        *(rax + *arg2) = r10
                        
                        if (*(arg2 + 0x14) != 0)
                            *(arg2 + 0x14) = 1
                            rax.b = 1
                        else
                            rax = sx.q(arg2[2].d)
                            int32_t rcx_13 = (rax + 1).d
                            
                            if (rcx_13 u> arg2[1].d)
                                *(arg2 + 0x14) = 1
                                rax.b = 1
                            else
                                arg2[2].d = rcx_13
                                *(rax + *arg2) = r11
                                
                                if (*(arg2 + 0x14) != 0)
                                    *(arg2 + 0x14) = 1
                                    rax.b = 1
                                else
                                    rax = sx.q(arg2[2].d)
                                    int32_t rcx_15 = (rax + 1).d
                                    
                                    if (rcx_15 u> arg2[1].d)
                                        *(arg2 + 0x14) = 1
                                        rax.b = 1
                                    else
                                        arg2[2].d = rcx_15
                                        *(rax + *arg2) = rdi
                                        
                                        if (*(arg2 + 0x14) != 0)
                                            *(arg2 + 0x14) = 1
                                            rax.b = 1
                                        else
                                            rax = sx.q(arg2[2].d)
                                            int32_t rcx_17 = (rax + 1).d
                                            
                                            if (rcx_17 u> arg2[1].d)
                                                *(arg2 + 0x14) = 1
                                                rax.b = 1
                                            else
                                                arg2[2].d = rcx_17
                                                *(rax + *arg2) = rsi
                                                
                                                if (*(arg2 + 0x14) != 0)
                                                    *(arg2 + 0x14) = 1
                                                    rax.b = 1
                                                else
                                                    rax = sx.q(arg2[2].d)
                                                    int32_t rcx_19 = (rax + 1).d
                                                    
                                                    if (rcx_19 u> arg2[1].d)
                                                        *(arg2 + 0x14) = 1
                                                        rax.b = 1
                                                    else
                                                        arg2[2].d = rcx_19
                                                        *(rax + *arg2) = r14
                                                        
                                                        if (*(arg2 + 0x14) != 0)
                                                            *(arg2 + 0x14) = 1
                                                            rax.b = 1
                                                        else
                                                            rax = sx.q(arg2[2].d)
                                                            int32_t rcx_21 = (rax + 1).d
                                                            
                                                            if (rcx_21 u> arg2[1].d)
                                                                *(arg2 + 0x14) = 1
                                                                rax.b = 1
                                                            else
                                                                arg2[2].d = rcx_21
                                                                *(rax + *arg2) = r15
                                                                
                                                                if (*(arg2 + 0x14) != 0)
                                                                    *(arg2 + 0x14) = 1
                                                                    rax.b = 1
                                                                else
                                                                    rax = sx.q(arg2[2].d)
                                                                    int32_t rcx_23 = (rax + 1).d
                                                                    
                                                                    if (rcx_23 u> arg2[1].d)
                                                                        *(arg2 + 0x14) = 1
                                                                        rax.b = 1
                                                                    else
                                                                        arg2[2].d = rcx_23
                                                                        *(rax + *arg2) = r12
                                                                        
                                                                        if (*(arg2 + 0x14) != 0)
                                                                            *(arg2 + 0x14) = 1
                                                                            rax.b = 1
                                                                        else
                                                                            rax = sx.q(arg2[2].d)
                                                                            int32_t rcx_25 = (rax + 1).d
                                                                            
                                                                            if (rcx_25 u> arg2[1].d)
                                                                                *(arg2 + 0x14) = 1
                                                                                rax.b = 1
                                                                            else
                                                                                arg2[2].d = rcx_25
                                                                                *(rax + *arg2) = r13
                                                                                
                                                                                if (*(arg2 + 0x14) != 0)
                                                                                    *(arg2 + 0x14) = 1
                                                                                    rax.b = 1
                                                                                else
                                                                                    rax = sx.q(arg2[2].d)
                                                                                    int32_t rcx_27 = (rax + 1).d
                                                                                    
                                                                                    if (rcx_27 u> arg2[1].d)
                                                                                        *(arg2 + 0x14) = 1
                                                                                        rax.b = 1
                                                                                    else
                                                                                        arg2[2].d = rcx_27
                                                                                        *(rax + *arg2) = arg_10
                                                                                        rax = zx.q(*(arg2 + 0x14))

int64_t rcx_29

if (rax.b == 0)
    rcx_29 = sx.q(arg2[2].d)

if (rax.b != 0 || (rcx_29 + 4).d u> arg2[1].d)
    *(arg2 + 0x14) = 1
else
    *(rcx_29 + *arg2) = *(arg3 + 0x1f)
    *(sx.q(arg2[2].d) + *arg2 + 1) = *(arg3 + 0x1e)
    *(sx.q(arg2[2].d) + *arg2 + 2) = *(arg3 + 0x1d)
    *(sx.q(arg2[2].d) + *arg2 + 3) = *(arg3 + 0x1c)
    arg2[2].d += 4

int32_t rdi_1 = 0
int32_t var_a4 = 1
int32_t var_98 = 0xffffffff
int32_t r10_1 = *(arg3 + 0x48)
void* r9_1 = arg3 + 0x30
void* var_a0 = r9_1
int32_t rcx_34 = 0
int32_t var_a8 = 0
int32_t rsi_1 = 0
int64_t var_94 = 0
int32_t r8 = 0

if (r10_1 != 0)
    void* rax_15 = *(r9_1 + 0x10)
    
    if (rax_15 != 0)
        r9_1 = rax_15
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_15 = *r9_1
    
    if (rdx_15 != 0)
    label_140920538:
        int32_t rax_22 = neg.d(rdx_15) & rdx_15
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_22)
        int32_t var_a4_1 = rax_22
        int32_t rax_23
        
        if (rax_22 == 0)
            rax_23 = 0x20
        else
            rax_23 = 0x1f - temp0_2
        
        var_94.d = r8 - rax_23 + 0x1f
        
        if (r8 - rax_23 + 0x1f s> r10_1)
            var_94.d = r10_1
    else
        while (true)
            int64_t rdx_16 = sx.q(rcx_34)
            r8 += 0x20
            rcx_34 += 1
            var_94:4.d = r8
            var_a8 = rcx_34
            
            if (rdx_16.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_15 = *(r9_1 + (rdx_16 << 2) + 4)
            var_98 = 0xffffffff
            
            if (rdx_15 != 0)
                goto label_140920538
        
        var_94.d = r10_1

double zmm2[0x2] = var_98.o
void** var_80 = arg3 + 0x20
double var_68 = zmm2[0]
double var_78[0x2] = var_a8.o
double zmm1[0x2] = var_78
var_a8.o = var_80.o
uint32_t rax_26 = (zmm2[0] u>> 0x20).d
int64_t var_88 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
var_98.o = zmm1

if (rax_26 s< r10_1)
    int32_t i_2
    int32_t i = i_2
    
    do
        int32_t r8_2 = rsi_1
        rsi_1 += 1
        
        if (*(*var_a8.q + sx.q(i) * 0x30 + 0x20) s< 2)
            rsi_1 = r8_2
        
        var_94:4.d &= not.d(var_a0:4.d)
        sub_14059bdd0(&var_a0)
        i = i_2
    while (i s< *(var_98.q + 0x18))

int64_t rcx_38

if (*(arg2 + 0x14) == 0)
    rcx_38 = sx.q(arg2[2].d)

if (*(arg2 + 0x14) != 0 || (rcx_38 + 4).d u> arg2[1].d)
    *(arg2 + 0x14) = 1
else
    *(rcx_38 + *arg2) = (rsi_1 u>> 0x18).b
    *(sx.q(arg2[2].d) + *arg2 + 1) = (rsi_1 u>> 0x10).b
    *(sx.q(arg2[2].d) + *arg2 + 2) = (rsi_1 u>> 8).b
    *(sx.q(arg2[2].d) + *arg2 + 3) = rsi_1.b
    arg2[2].d += 4

int32_t r9_2 = *(arg3 + 0x48)
void* r8_3 = arg3 + 0x30
var_a8 = 0
int32_t rcx_42 = 0
int32_t var_a4_2 = 1
var_a0 = r8_3
int32_t var_98_1 = 0xffffffff
var_94.d = 0
var_94:4.d = 0

if (r9_2 != 0)
    void* rax_37 = *(r8_3 + 0x10)
    
    if (rax_37 != 0)
        r8_3 = rax_37
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r9_2 - 1)
    int32_t rdx_27 = *r8_3
    
    if (rdx_27 != 0)
    label_1409206b6:
        int32_t rax_44 = neg.d(rdx_27) & rdx_27
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_44)
        int32_t var_a4_3 = rax_44
        int32_t r14_1
        
        if (rax_44 == 0)
            r14_1 = 0x20
        else
            r14_1 = 0x1f - temp0_4
        
        var_94.d = rcx_42 - r14_1 + 0x1f
        
        if (rcx_42 - r14_1 + 0x1f s> r9_2)
            var_94.d = r9_2
    else
        while (true)
            int64_t rdx_28 = sx.q(rdi_1)
            rcx_42 += 0x20
            rdi_1 += 1
            var_94:4.d = rcx_42
            var_a8 = rdi_1
            
            if (rdx_28.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_27 = *(r8_3 + (rdx_28 << 2) + 4)
            var_98_1 = 0xffffffff
            
            if (rdx_27 != 0)
                goto label_1409206b6
        
        var_94.d = r9_2

zmm2 = var_98_1.o
double var_40[0x2] = zmm2
double var_50[0x2] = var_a8.o
var_80.o = (arg3 + 0x20).o
double result = zmm2[0] u>> 0x20
var_68 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
var_78 = var_50

if (result.d s< r9_2)
    int32_t i_1 = var_68:4.d
    
    do
        int32_t* rcx_45 = *var_80 + sx.q(i_1) * 0x30
        
        if (rcx_45[8] s>= 2)
            sub_140b63b70(rcx_45, &var_a8)
            sub_14091c9a0(arg2, &var_a8)
            int64_t rcx_47 = var_a8.q
            
            if (rcx_47 != 0)
                sub_140a74f90(rcx_47)
            
            sub_14091caa0(arg2, &rcx_45[2])
            int64_t rax_49
            int32_t rcx_49
            
            if (*(arg2 + 0x14) == 0)
                rax_49 = sx.q(arg2[2].d)
                rcx_49 = (rax_49 + 1).d
            
            if (*(arg2 + 0x14) != 0 || rcx_49 u> arg2[1].d)
                *(arg2 + 0x14) = 1
            else
                arg2[2].d = rcx_49
                *(rax_49 + *arg2) = rcx_45[8].b
        
        var_68.d &= not.d(var_78[0]:4.d)
        sub_14059bdd0(&var_78)
        result = var_78[1]
        i_1 = var_68:4.d
    while (i_1 s< *(result i+ 0x18))

return result
