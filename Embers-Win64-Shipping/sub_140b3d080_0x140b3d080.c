// 函数: sub_140b3d080
// 地址: 0x140b3d080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int32_t r15 = *(arg1 + 0x28)
int32_t var_d0 = 0
int32_t var_cc = 1
void* var_c8 = arg1 + 0x10
int32_t var_c0 = 0xffffffff
int64_t rdi = zx.q((((*(arg1 + 0x2c) + 0x1f) u>> 5) + *(arg1 + 0xc) * 0xc + *(arg1 + 0x48)) << 2)
    + ((sx.q(*(arg1 + 0xc4)) + sx.q(*(arg1 + 0xb4))) << 3)
int64_t var_bc = 0
int32_t r8_6 = 0
int32_t rcx = 0
int64_t result = rdi + sx.q(*(arg1 + 0x84)) + sx.q(*(arg1 + 0x74))

if (r15 != 0)
    void* rax_4 = *(arg1 + 0x20)
    void* r9_1 = arg1 + 0x10
    
    if (rax_4 != 0)
        r9_1 = rax_4
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r15 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_140b3d169:
        int32_t rax_10 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_cc_1 = rax_10
        int32_t arg_8 = temp0_2
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_bc.d = r8_6 - rax_11 + 0x1f
        
        if (r8_6 - rax_11 + 0x1f s> r15)
            var_bc.d = r15
    else
        while (true)
            int64_t rax_7 = sx.q(rcx)
            r8_6 += 0x20
            rcx += 1
            var_bc:4.d = r8_6
            var_d0 = rcx
            
            if (rax_7.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_5 = *(r9_1 + (rax_7 << 2) + 4)
            int32_t var_c0_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_140b3d169
        
        var_bc.d = r15

int32_t rax_13 = *(arg1 + 0x28)
char rcx_3 = rax_13.b & 0x1f
int32_t r8_9 = rax_13 s>> 5
double var_f0[0x2] = var_d0.o
void* var_f8
var_f8:4.d = 1 << rcx_3
int32_t r12_1 = 0xffffffff << rcx_3
int128_t var_e0 = 0xffffffff
int32_t rcx_5 = rax_13 & 0xffffffe0
var_f8.d = r8_9
int64_t var_90 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_f0[0] = arg1 + 0x10
var_f0[1].d = r12_1
var_f0[1]:4.d = rax_13
var_e0.d = rcx_5
double var_b0[0x2] = arg1.o

if (rax_13 != r15)
    void* rax_14 = *(arg1 + 0x20)
    void* r9_2 = arg1 + 0x10
    
    if (rax_14 != 0)
        r9_2 = rax_14
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r15 - 1)
    int32_t rdx_9 = *(r9_2 + (sx.q(r8_9) << 2)) & r12_1
    
    if (rdx_9 != 0)
    label_140b3d26c:
        int32_t rax_21 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_21)
        var_f8:4.d = rax_21
        int32_t arg_10 = temp0_4
        int32_t r11_1
        
        if (rax_21 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_f0[1]:4.d = rcx_5 - r11_1 + 0x1f
        
        if (rcx_5 - r11_1 + 0x1f s> r15)
            var_f0[1]:4.d = r15
    else
        while (true)
            int64_t rax_18 = sx.q(r8_9)
            rcx_5 += 0x20
            r8_9 += 1
            var_e0.d = rcx_5
            var_f8.d = r8_9
            
            if (rax_18.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_9 = *(r9_2 + (rax_18 << 2) + 4)
            var_f0[1].d = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140b3d26c
        
        var_f0[1]:4.d = r15

double var_70[0x2] = var_f0
double var_80[0x2] = var_f8.o
double var_60[0x2] = arg1.o
double r15_1 = var_f0[0]
int64_t var_40 = (_mm_unpackhi_pd(var_f0, var_f0[0])).q
double var_50[0x2] = var_80

while (true)
    int64_t rax_23 = sx.q(var_f0[1]:4.d)
    double rdx_11 = var_b0[0]
    
    if (rax_23.d == (r15_1 u>> 0x20).d && var_f0[0] == arg1 + 0x10 && rdx_11 == arg1)
        int64_t* rdx_15 = *(arg1 + 0xa8)
        uint64_t r8_13 = sx.q(*(arg1 + 0xb0)) << 3 u>> 3
        
        if (rdx_15 u> &rdx_15[sx.q(*(arg1 + 0xb0))])
            r8_13 = 0
        
        if (r8_13 != 0)
            do
                void* rax_31 = *rdx_15
                rdx_15 = &rdx_15[1]
                rbx += 1
                result += sx.q(*(rax_31 + 0x14)) << 1
            while (rbx != r8_13)
        
        int64_t* i = *(arg1 + 0xb8)
        
        while (i != &i[sx.q(*(arg1 + 0xc0))])
            int64_t* rax_33 = *i
            void* rcx_14 = *rax_33
            i = &i[1]
            int64_t r8_17 = ((*(rcx_14 + 0x10) - *(rcx_14 + 0x20) + 0xff) u>> 8) * 0x1808
                + (sx.q(*(rax_33 + 0x44)) << 3)
                + ((*(rcx_14 + 0x38) - *(rcx_14 + 0x48) + 0xff) u>> 8) * 0x2008 + (
                ((*(rcx_14 + 0x60) - *(rcx_14 + 0x70) + 0x1f) u>> 5) * 0x2b + sx.q(*(rax_33 + 0x24))
                + sx.q(*(rax_33 + 0x34))) * 0x18
            result += sx.q(rax_33[8].d) * 0x38 + r8_17
        
        return result
    
    void* rdx_13 = *rdx_11 + rax_23 * 0x30
    void* rax_26 = *(rdx_13 + 0x18)
    int64_t r8_11 = (sx.q(*(rdx_13 + 0x14)) + sx.q(*(rdx_13 + 0x24)) * 6) << 2
    void* r9_3 = rax_26 + sx.q(*(rdx_13 + 0x20)) * 0x18
    
    while (rax_26 != r9_3)
        int64_t rcx_11 = sx.q(*(rax_26 + 0xc))
        rax_26 += 0x18
        r8_11 += rcx_11 << 1
    
    result += r8_11
    var_f0[1].d &= not.d(var_b0[1]:4.d)
    sub_14059bdd0(&var_b0[1])
