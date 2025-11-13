// 函数: sub_14204bcc0
// 地址: 0x14204bcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg5

if (*(arg1 + 0x798) != r14 || *(arg1 + 0x7f4) u>= data_14399fa54)
    return 

int64_t r10_1 = sx.q(sub_1422e5e40(arg2))
arg5 = r10_1.d
int32_t* rcx_5

if (*(arg1 + 0x7a8) == *(arg1 + 0x7d4))
label_14204bd82:
    rcx_5 = nullptr
else
    void* rdx = *(arg1 + 0x7e0)
    void* r9 = arg1 + 0x7d8
    
    if (rdx != 0)
        r9 = rdx
    
    int32_t rax_2 = *(r9 + (((sx.q(*(arg1 + 0x7e8)) - 1) & r10_1) << 2))
    
    if (rax_2 == 0xffffffff)
    label_14204bd82_1:
        rcx_5 = nullptr
    else
        while (true)
            rcx_5 = sx.q(rax_2) * 0x30 + *(arg1 + 0x7a0)
            
            if (*rcx_5 == r10_1.d)
                break
            
            rax_2 = rcx_5[0xa]
            
            if (rax_2 == 0xffffffff)
                goto label_14204bd82_2
        
        if (rax_2 == 0xffffffff)
        label_14204bd82_2:
            rcx_5 = nullptr

void* rbx_1 = &rcx_5[2]

if (rcx_5 == 0)
    rbx_1 = nullptr

if (rbx_1 != 0)
    *(rbx_1 + 0x18) = data_14399fa54
    
    if (rbx_1 == arg3)
        *(rbx_1 + 0x10) = arg4
        *(rbx_1 + 0x14) = r14
    else
        uint32_t count_1 = arg3[1].d
        int64_t rsi_1 = *arg3
        int32_t r8_4 = *(rbx_1 + 0xc)
        *(rbx_1 + 8) = count_1
        
        if (count_1 != 0 || r8_4 != 0)
            sub_1405da9e0(rbx_1, count_1, r8_4)
            memcpy(*rbx_1, rsi_1, count_1)
            *(rbx_1 + 0x10) = arg4
            *(rbx_1 + 0x14) = r14
        else
            *(rbx_1 + 0xc) = 0
            *(rbx_1 + 0x10) = arg4
            *(rbx_1 + 0x14) = r14
    
    return 

int32_t r11_1 = *(arg1 + 0x7c8)
void* r9_1 = arg1 + 0x7b0
int32_t var_84_1 = 1
int32_t rcx_8 = 0
int32_t var_88 = 0
int32_t r8_6 = 0
void* var_80 = r9_1
int32_t var_78_1 = 0xffffffff
int64_t var_74_1 = 0

if (r11_1 != 0)
    void* rax_3 = *(r9_1 + 0x10)
    
    if (rax_3 != 0)
        r9_1 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11_1 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_14204be68:
        int32_t rax_10 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_84_2 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_74_1.d = r8_6 - rax_11 + 0x1f
        
        if (r8_6 - rax_11 + 0x1f s> r11_1)
            var_74_1.d = r11_1
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_8)
            r8_6 += 0x20
            rcx_8 += 1
            var_74_1:4.d = r8_6
            var_88 = rcx_8
            
            if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            var_78_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_14204be68
        
        var_74_1.d = r11_1

double zmm4_1[0x2] = var_78_1.o
void* var_20_1 = arg1 + 0x7a0
int16_t var_50_1 = 0
double zmm3[0x2] = var_88.o
double rax_13 = zmm3[0]
var_78_1.o = zmm3
var_88.o = (arg1 + 0x7a0).o
double rcx_10 = zmm4_1[0]
zmm4_1[0] = (_mm_unpackhi_pd(zmm4_1, zmm4_1[0])).q

if ((rcx_10 u>> 0x20).d s< *(rax_13 i+ 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        if (*(*var_88.q + sx.q(i) * 0x30 + 0x20) != data_14399fa54)
            sub_1420658e0(zmm4_1[1], i)
            var_50_1.b = 1
        
        var_74_1:4.d &= not.d(var_80:4.d)
        sub_14059bdd0(&var_80)
        i = i_1
    while (i s< *(var_78_1.q + 0x18))
    
    if (var_50_1.b != 0 && var_50_1:1.b != 0)
        sub_14144aa10(arg1 + 0x7a0, *(arg1 + 0x7a8) - *(arg1 + 0x7d4), 1)

uint32_t count = arg3[1].d
int64_t rsi_2 = *arg3
var_88.q = 0
var_80.d = count

if (count != 0)
    sub_1405da9e0(&var_88, count, 0)
    memcpy(var_88.q, rsi_2, count)
else
    var_80:4.d = 0

var_74_1:4.d = data_14399fa54
int32_t var_78_2 = arg4
var_74_1.d = r14
sub_142044e50(arg1 + 0x7a0, &arg5, &var_88)
int64_t rcx_19 = var_88.q

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)
