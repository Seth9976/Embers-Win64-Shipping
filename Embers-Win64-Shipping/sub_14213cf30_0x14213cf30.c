// 函数: sub_14213cf30
// 地址: 0x14213cf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
int64_t* rbx = *(arg1 + 0x1310)
int64_t rdi = 0
uint64_t r14_1 = sx.q(*(arg1 + 0x1318)) << 3 u>> 3

if (rbx u> &rbx[sx.q(*(arg1 + 0x1318))])
    r14_1 = 0

int64_t arg_8

if (r14_1 != 0)
    do
        arg_8 = *rbx
        (*(*arg2 + 0x38))(arg2, &arg_8, arg1, 0)
        rdi += 1
        rbx = &rbx[1]
    while (rdi != r14_1)

int32_t var_b4 = 1
int32_t r11 = *(arg1 + 0x1440)
void* r9 = arg1 + 0x1428
void* var_b0 = r9
int32_t rcx_1 = 0
int32_t var_b8 = 0
int32_t r8_2 = 0
int32_t var_a8 = 0xffffffff
int64_t var_a4 = 0

if (r11 != 0)
    void* rax_4 = *(r9 + 0x10)
    
    if (rax_4 != 0)
        r9 = rax_4
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_14213d038:
        int32_t rax_11 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_b4_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        var_a4.d = r8_2 - rax_12 + 0x1f
        
        if (r8_2 - rax_12 + 0x1f s> r11)
            var_a4.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8_2 += 0x20
            rcx_1 += 1
            var_a4:4.d = r8_2
            var_b8 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            int32_t var_a8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14213d038
        
        var_a4.d = r11

void* var_30 = arg1 + 0x1418
int64_t var_80 = 0xffffffff
int128_t var_90 = var_b8.o
char var_60 = 0
int128_t zmm3 = var_90
var_90 = zmm3
void* var_98
var_98.o = (arg1 + 0x1418).o
int128_t zmm0
zmm0.q = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_80:8.o = zmm0

if (0 s< *(zmm3.q + 0x18))
    int32_t i = var_80:4.d
    
    do
        int64_t rdi_1 = 0
        int64_t rdx_6 = sx.q(i) << 5
        int64_t rcx_3 = *var_98
        int64_t* rbx_2 = *(rdx_6 + rcx_3 + 8)
        uint64_t r14_3 = sx.q(*(rdx_6 + rcx_3 + 0x10)) << 3 u>> 3
        
        if (rbx_2 u> &rbx_2[sx.q(*(rdx_6 + rcx_3 + 0x10))])
            r14_3 = 0
        
        if (r14_3 != 0)
            do
                arg_8 = *rbx_2
                (*(*arg2 + 0x38))(arg2, &arg_8, arg1, 0, var_b8, var_b0, 0xffffffff)
                rdi_1 += 1
                rbx_2 = &rbx_2[1]
            while (rdi_1 != r14_3)
        
        var_80.d &= not.d(var_90:4.d)
        sub_14059bdd0(&var_90)
        i = var_80:4.d
    while (i s< *(var_90:8.q + 0x18))
    
    char var_5f
    
    if (var_60 != 0 && var_5f != 0)
        sub_140cb1a20(arg1 + 0x1418, *(arg1 + 0x1420) - *(arg1 + 0x144c), 1)

int32_t var_b8_1 = 0
int32_t r10 = *(arg1 + 0x1580)
int32_t var_b4_2 = 1
int32_t rcx_7 = 0
int32_t var_a8_2 = 0xffffffff
var_a4.d = 0
var_a4:4.d = 0

if (r10 != 0)
    void* rax_23 = *(arg1 + 0x1578)
    void* r8_6 = arg1 + 0x1568
    
    if (rax_23 != 0)
        r8_6 = rax_23
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_12 = *r8_6
    
    if (rdx_12 != 0)
    label_14213d1e8:
        int32_t rax_30 = neg.d(rdx_12) & rdx_12
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_30)
        int32_t var_b4_3 = rax_30
        int32_t rax_31
        
        if (rax_30 == 0)
            rax_31 = 0x20
        else
            rax_31 = 0x1f - temp0_4
        
        var_a4.d = rcx_7 - rax_31 + 0x1f
        
        if (rcx_7 - rax_31 + 0x1f s> r10)
            var_a4.d = r10
    else
        while (true)
            int64_t rdx_13 = sx.q(r15)
            rcx_7 += 0x20
            r15 += 1
            var_a4:4.d = rcx_7
            var_b8_1 = r15
            
            if (rdx_13.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_12 = *(r8_6 + (rdx_13 << 2) + 4)
            int32_t var_a8_3 = 0xffffffff
            
            if (rdx_12 != 0)
                goto label_14213d1e8
        
        var_a4.d = r10

int32_t rdx_15 = *(arg1 + 0x1580)
int128_t var_40 = 0xffffffff
int32_t r15_1 = 0xffffffff << (rdx_15.b & 0x1f)
int128_t var_50 = var_b8_1.o
int32_t r8_8 = rdx_15 s>> 5
int32_t r9_2 = rdx_15 & 0xffffffe0
var_80 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
int32_t var_a8_4 = r15_1
var_a4.d = rdx_15
var_98.o = (arg1 + 0x1558).o
var_90 = var_50

if (rdx_15 != r10)
    void* rax_33 = *(arg1 + 0x1578)
    void* r10_1 = arg1 + 0x1568
    
    if (rax_33 != 0)
        r10_1 = rax_33
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r10 - 1)
    int32_t rdx_19 = *(r10_1 + (sx.q(r8_8) << 2)) & r15_1
    
    if (rdx_19 != 0)
    label_14213d2b3:
        int32_t rax_40 = neg.d(rdx_19) & rdx_19
        uint64_t rflags_3
        int32_t temp0_6
        temp0_6, rflags_3 = _bit_scan_reverse(rax_40)
        int32_t r12_1
        
        if (rax_40 == 0)
            r12_1 = 0x20
        else
            r12_1 = 0x1f - temp0_6
        
        var_a4.d = r9_2 - r12_1 + 0x1f
        
        if (r9_2 - r12_1 + 0x1f s> r10)
            var_a4.d = r10
    else
        while (true)
            int64_t rcx_12 = sx.q(r8_8)
            r9_2 += 0x20
            r8_8 += 1
            
            if (rcx_12.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_19 = *(r10_1 + (rcx_12 << 2) + 4)
            var_a8_4 = 0xffffffff
            
            if (rdx_19 != 0)
                goto label_14213d2b3
        
        var_a4.d = r10

while (true)
    int64_t rax_42 = sx.q(var_80:4.d)
    
    if (rax_42.d == (var_a8_4.q u>> 0x20).d && var_90:8.q == arg1 + 0x1568
            && var_98 == arg1 + 0x1558)
        return sub_140594850() __tailcall
    
    (*(*arg2 + 0x38))(arg2, *var_98 + rax_42 * 0x18, arg1, 0, var_b8_1, arg1 + 0x1568, var_a8_4)
    var_80.d &= not.d(var_90:4.d)
    sub_14059bdd0(&var_90)
