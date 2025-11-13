// 函数: sub_140e14390
// 地址: 0x140e14390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = arg1 + 0x228
int64_t r14 = 0
int32_t var_94 = 1
*arg2 = 0
int32_t rcx = 0
int32_t var_80 = 0
int32_t r8 = 0
arg2[1] = 0
int32_t var_98 = 0
int32_t* var_90 = r9
int32_t var_88 = 0xffffffff
int32_t var_84 = 0
int32_t r11 = r9[6]

if (r11 != 0)
    int32_t* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    int32_t var_84_2
    
    if (rdx_2 != 0)
    label_140e14458:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_84_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_84_2 = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_80_1 = rcx
            var_98 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r9[rdx_3 + 1]
            var_88 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140e14458
        
        var_84_2 = r11

double zmm2[0x2] = var_88.o
double var_38[0x2] = zmm2
double var_48[0x2] = var_98.o
double var_78[0x2] = (arg1 + 0x218).o
uint32_t rax_12 = (zmm2[0] u>> 0x20).d
int64_t var_58 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t i_2

if (rax_12 s< r11)
    int32_t i = i_2
    
    do
        double r14_1 = var_78[0]
        int64_t r15_1 = sx.q(i) * 0x18
        void* rsi_1 = *(r15_1 + *r14_1 + 8)
        int32_t rcx_3
        rcx_3.b = sub_140b5b8a0(*(rsi_1 + 0x50), 0) == 0
        void* rax_16
        
        if ((*(rsi_1 + 0x54) != 0 | rcx_3.b) == 0)
            rax_16 = *(rsi_1 + 0x48)
        
        int64_t rax_17
        
        if ((*(rsi_1 + 0x54) != 0 | rcx_3.b) != 0 || rax_16 == 0)
            rax_17 = *(rsi_1 + 0x50)
        else
            rax_17 = *(rax_16 + 0x18)
        
        if (rax_17 == arg3)
            int64_t rsi_2 = sx.q(arg2[1].d)
            int64_t r14_2 = *r14_1
            int32_t rax_18 = (rsi_2 + 1).d
            arg2[1].d = rax_18
            
            if (rax_18 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            *(*arg2 + (rsi_2 << 3)) = *(r15_1 + r14_2)
        
        var_48[1].d &= not.d(var_78[1]:4.d)
        sub_14059bdd0(&var_78[1])
        i = i_2
    while (i s< *(var_48[0] i+ 0x18))
    
    r14 = 0

var_98.q = 0
int64_t var_90_1 = 0
sub_1405c5570(&var_98, 0x14)
var_78[0]:4.d = 1
int32_t r10 = *(arg1 + 0x58)
void* r9_1 = arg1 + 0x40
var_78[1] = r9_1
int32_t rcx_8 = 0
var_78[0].d = 0
int32_t r8_1 = 0
var_48[0].d = 0xffffffff
var_48[0] = 0

if (r10 != 0)
    void* rax_23 = *(r9_1 + 0x10)
    
    if (rax_23 != 0)
        r9_1 = rax_23
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_8 = *r9_1
    
    if (rdx_8 != 0)
    label_140e14608:
        int32_t rax_30 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_30)
        var_78[0]:4.d = rax_30
        int32_t r12_1
        
        if (rax_30 == 0)
            r12_1 = 0x20
        else
            r12_1 = 0x1f - temp0_4
        
        var_48[0]:4.d = r8_1 - r12_1 + 0x1f
        
        if (r8_1 - r12_1 + 0x1f s> r10)
            var_48[0]:4.d = r10
    else
        while (true)
            int64_t rdx_9 = sx.q(rcx_8)
            r8_1 += 0x20
            rcx_8 += 1
            var_48[1].d = r8_1
            var_78[0].d = rcx_8
            
            if (rdx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r9_1 + (rdx_9 << 2) + 4)
            var_48[0].d = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_140e14608
        
        var_48[0]:4.d = r10

double var_38_1[0x2] = var_48
double var_48_1[0x2] = var_78
var_78 = (arg1 + 0x30).o
uint32_t rax_33 = (var_48[0] u>> 0x20).d
int64_t var_58_1 = (_mm_unpackhi_pd(var_48, var_48[0])).q
int96_t var_68_1 = var_48_1[0].12

if (rax_33 s< r10)
    int32_t i_1 = i_2
    
    do
        double r12_2 = var_78[0]
        int64_t* rcx_12 = *((sx.q(i_1) << 5) + *r12_2 + 8)
        (*(*rcx_12 + 8))(rcx_12, &var_98)
        int64_t* r15_2 = var_98.q
        void* rcx_13 = &r15_2[sx.q(var_90_1.d)]
        uint64_t r13_4 = (rcx_13 - r15_2 + 7) u>> 3
        
        if (r15_2 u> rcx_13)
            r13_4 = 0
        
        if (r13_4 != 0)
            do
                void* rsi_4 = *r15_2
                int32_t rcx_14
                rcx_14.b = sub_140b5b8a0(*(rsi_4 + 0x50), 0) == 0
                void* rax_38
                
                if ((*(rsi_4 + 0x54) != 0 | rcx_14.b) == 0)
                    rax_38 = *(rsi_4 + 0x48)
                
                int64_t rax_39
                
                if ((*(rsi_4 + 0x54) != 0 | rcx_14.b) != 0 || rax_38 == 0)
                    rax_39 = *(rsi_4 + 0x50)
                else
                    rax_39 = *(rax_38 + 0x18)
                
                if (rax_39 == arg3)
                    int64_t rsi_5 = sx.q(arg2[1].d)
                    int64_t* r12_3 = *r12_2
                    int32_t rax_40 = (rsi_5 + 1).d
                    arg2[1].d = rax_40
                    
                    if (rax_40 s> *(arg2 + 0xc))
                        sub_1405a4d70(arg2)
                    
                    r12_2 = var_78[0]
                    *(*arg2 + (rsi_5 << 3)) = r12_3[sx.q(i_1) * 4]
                
                r15_2 = &r15_2[1]
                r14 += 1
            while (r14 != r13_4)
        
        int32_t rax_43 = var_90_1:4.d
        r14 = 0
        var_90_1.d = 0
        
        if (rax_43 s< 0 && rax_43 != 0)
            sub_1405c5570(&var_98, 0)
        
        var_68_1:8.d &= not.d(var_78[1]:4.d)
        sub_14059bdd0(&var_78[1])
        i_1 = i_2
    while (i_1 s< *(var_68_1.q + 0x18))

int64_t rcx_19 = var_98.q

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

return arg2
