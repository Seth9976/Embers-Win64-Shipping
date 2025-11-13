// 函数: sub_141b546f0
// 地址: 0x141b546f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x238)

if (sub_140a80f40() == 0)
    sub_141997f50(rsi + 0x20)
else
    (*(*(rsi + 0x20) + 0x30))(rsi + 0x20)

if (sub_140a80f40() == 0)
    sub_141997f50(rsi + 0x48)
else
    (*(*(rsi + 0x48) + 0x30))(rsi + 0x48)

sub_141997f50(rsi + 0x70)
sub_141b640f0(*(arg1 + 0x228))
sub_140e20de0(*(arg1 + 8))
int32_t var_94 = 1
int32_t var_98 = 0
int32_t r11 = *(arg1 + 0xe0)
void* r9 = arg1 + 0xc8
void* var_90 = r9
int32_t rcx_5 = 0
int32_t var_88 = 0xffffffff
int32_t r8 = 0
int64_t var_84 = 0

if (r11 != 0)
    void* rax_4 = *(r9 + 0x10)
    
    if (rax_4 != 0)
        r9 = rax_4
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_141b54808:
        int32_t rax_11 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_94_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_12 + 0x1f
        
        if (r8 - rax_12 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_5)
            r8 += 0x20
            rcx_5 += 1
            var_84:4.d = r8
            var_98 = rcx_5
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141b54808
        
        var_84.d = r11

double zmm4[0x2] = var_88.o
void* var_30 = arg1 + 0xb8
char var_60 = 0
double zmm3[0x2] = var_98.o
double rax_14 = zmm3[0]
var_88.o = zmm3
var_98.o = (arg1 + 0xb8).o
double rcx_7 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
double var_40[0x2] = zmm4
double var_78[0x2] = zmm4
int32_t i_2
char var_5f

if ((rcx_7 u>> 0x20).d s< *(rax_14 i+ 0x18))
    int32_t i = i_2
    
    do
        int64_t rdx_5 = sx.q(i) * 3
        sub_141997f50(*(*var_98.q + (rdx_5 << 3) + 8), rdx_5)
        var_84:4.d &= not.d(var_90:4.d)
        sub_14059bdd0(&var_90)
        i = i_2
    while (i s< *(var_88.q + 0x18))
    
    if (var_60 != 0 && var_5f != 0)
        sub_1405b6470(arg1 + 0xb8, *(arg1 + 0xc0) - *(arg1 + 0xec), 1)

int64_t rcx_13 = *(arg1 + 0x278)

if (rcx_13 != 0)
    sub_141b4f810(rcx_13)
    *(arg1 + 0x278) = 0

sub_1419a21e0(0)
int64_t rbx = *(arg1 + 0x220)

if (rbx != 0)
    *(arg1 + 0x220) = 0
    j_sub_140a74f90(rbx)

if (arg1 + 0x238 != &var_98)
    *(arg1 + 0x238) = 0
    int64_t* rbx_1 = *(arg1 + 0x240)
    
    if (rbx_1 != 0)
        *(arg1 + 0x240) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp4_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

if (arg1 + 0x228 != &var_98)
    *(arg1 + 0x228) = 0
    int64_t* rbx_2 = *(arg1 + 0x230)
    
    if (rbx_2 != 0)
        *(arg1 + 0x230) = 0
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp6_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

if (arg1 + 8 != &var_98)
    *(arg1 + 8) = 0
    int64_t* rbx_3 = *(arg1 + 0x10)
    
    if (rbx_3 != 0)
        *(arg1 + 0x10) = 0
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp7_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)

bool cond:1 = *(arg1 + 0x2ec) == 0
*(arg1 + 0x2e8) = 0

if (not(cond:1))
    sub_141b65820(arg1 + 0x280, 0)

int32_t r10 = *(arg1 + 0xe0)
void* r9_1 = arg1 + 0xc8
int32_t var_94_2 = 1
int32_t rcx_23 = 0
var_98 = 0
int32_t r8_3 = 0
var_90 = r9_1
int32_t var_88_1 = 0xffffffff
int64_t var_84_1 = 0

if (r10 != 0)
    void* rax_26 = *(r9_1 + 0x10)
    
    if (rax_26 != 0)
        r9_1 = rax_26
    
    int32_t temp8_1
    int32_t temp9_1
    temp8_1:temp9_1 = sx.q(r10 - 1)
    int32_t rdx_11 = *r9_1
    
    if (rdx_11 != 0)
    label_141b54a78:
        int32_t rax_33 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_33)
        int32_t var_94_3 = rax_33
        int32_t r12_1
        
        if (rax_33 == 0)
            r12_1 = 0x20
        else
            r12_1 = 0x1f - temp0_4
        
        var_84_1.d = r8_3 - r12_1 + 0x1f
        
        if (r8_3 - r12_1 + 0x1f s> r10)
            var_84_1.d = r10
    else
        while (true)
            int64_t rdx_12 = sx.q(rcx_23)
            r8_3 += 0x20
            rcx_23 += 1
            var_84_1:4.d = r8_3
            var_98 = rcx_23
            
            if (rdx_12.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r9_1 + (rdx_12 << 2) + 4)
            var_88_1 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_141b54a78
        
        var_84_1.d = r10

double zmm4_1[0x2] = var_88_1.o
void* var_30_1 = arg1 + 0xb8
char var_60_1 = 0
double zmm3_1[0x2] = var_98.o
double rax_35 = zmm3_1[0]
var_88_1.o = zmm3_1
var_98.o = (arg1 + 0xb8).o
double rcx_25 = zmm4_1[0]
zmm4_1[0] = (_mm_unpackhi_pd(zmm4_1, zmm4_1[0])).q
double var_78_1[0x2] = zmm4_1

if ((rcx_25 u>> 0x20).d s< *(rax_35 i+ 0x18))
    int32_t i_1 = i_2
    
    do
        int64_t* rcx_28 = *(*var_98.q + sx.q(i_1) * 0x18 + 8)
        
        if (rcx_28 != 0)
            (**rcx_28)(rcx_28, 1)
        
        var_84_1:4.d &= not.d(var_90:4.d)
        sub_14059bdd0(&var_90)
        i_1 = i_2
    while (i_1 s< *(var_88_1.q + 0x18))
    
    if (var_60_1 != 0 && var_5f != 0)
        sub_1405b6470(arg1 + 0xb8, *(arg1 + 0xc0) - *(arg1 + 0xec), 1)

void* result = sub_140865470(arg1 + 0xb8, 0)
*(arg1 + 0x340) = 0xffffffff
bool cond:2 = *(arg1 + 0x33c) == 0
*(arg1 + 0x338) = 0

if (cond:2)
    return result

return sub_14085a940(arg1 + 0x310, 0)
