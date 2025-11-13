// 函数: sub_141cf7120
// 地址: 0x141cf7120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = 0
*arg1 = arg2
void* rdi_1 = *arg2 + 0x20
int32_t arg_18 = 0
int32_t r11 = *(rdi_1 + 0x18)
void* var_c0 = rdi_1 + 0x10
int32_t rcx = 0
int32_t var_c8 = 0
int32_t var_c4 = 1
int32_t var_b8 = 0xffffffff
char r14 = 0
int64_t var_b4 = 0
int32_t r8 = 0

if (r11 != 0)
    void* r9_1 = *(rdi_1 + 0x10)
    
    if ((r9_1.b & 1) != 0)
        r9_1 = (r9_1 s>> 1) + rdi_1 + 0x10
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141cf71d8:
        int32_t rax_7 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_c4_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_b4.d = r8 - rax_8 + 0x1f
        
        if (r8 - rax_8 + 0x1f s> r11)
            var_b4.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_b4:4.d = r8
            var_c8 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            var_b8 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141cf71d8
        
        var_b4.d = r11

double zmm2[0x2] = var_b8.o
uint128_t var_98 = var_c8.o
double var_88[0x2] = zmm2
*(arg1 + 8) = rdi_1.o
*(arg1 + 0x18) = var_98
arg1[5] = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
void* var_c0_1
int32_t var_b8_1
void* var_a0_1
int64_t var_78
int64_t var_50
uint128_t zmm0

if (*(arg1 + 0x24) s>= *(arg1[3] + 8))
    zmm0 = data_14321e0e0
    int64_t var_68
    var_c0_1 = &var_68
    r14 = 1
    int32_t var_44_1 = 0
    var_a0_1 = &var_78
    __builtin_memset(&var_78, 0, 0x18)
    uint128_t var_60_1 = zmm0
    var_50 = 0
    var_c8 = 0
    int32_t var_c4_4 = 1
    var_b8_1 = 0xffffffff
    int64_t var_b4_2 = 0
else
    int64_t* rax_11 = arg1[1]
    void* rdx_4 = *rax_11
    
    if ((rdx_4.b & 1) != 0)
        rdx_4 = (rdx_4 s>> 1) + rax_11
    
    int64_t rax_12 = sx.q(*(arg1 + 0x24))
    int32_t rcx_3 = 0
    var_c8 = 0
    int32_t r8_2 = 0
    int32_t var_c4_2 = 1
    var_b8_1 = 0xffffffff
    int64_t var_b4_1 = 0
    void* rdi_5 = rax_12 * 0x50 + 0x10 + rdx_4
    int32_t r11_1 = *(rdi_5 + 0x18)
    var_c0_1 = rdi_5 + 0x10
    
    if (r11_1 != 0)
        void* r9_3 = *(rdi_5 + 0x10)
        
        if ((r9_3.b & 1) != 0)
            r9_3 = (r9_3 s>> 1) + rdi_5 + 0x10
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_8 = *r9_3
        
        if (rdx_8 != 0)
        label_141cf72e8:
            int32_t rax_20 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
            int32_t var_c4_3 = rax_20
            int32_t rsi_1
            
            if (rax_20 == 0)
                rsi_1 = 0x20
            else
                rsi_1 = 0x1f - temp0_4
            
            var_b4_1.d = r8_2 - rsi_1 + 0x1f
            
            if (r8_2 - rsi_1 + 0x1f s> r11_1)
                var_b4_1.d = r11_1
        else
            while (true)
                int64_t rdx_9 = sx.q(rcx_3)
                r8_2 += 0x20
                rcx_3 += 1
                var_b4_1:4.d = r8_2
                var_c8 = rcx_3
                
                if (rdx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r9_3 + (rdx_9 << 2) + 4)
                var_b8_1 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_141cf72e8
            
            var_b4_1.d = r11_1
    
    var_a0_1 = rdi_5

zmm2 = var_b8_1.o
zmm0 = var_c8.o
double var_88_1[0x2] = zmm2
int64_t var_a8 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
var_b8_1.o = zmm0
var_c8.o = var_a0_1.o
*(arg1 + 0x30) = var_c8.o
*(arg1 + 0x40) = var_b8_1.o
arg1[0xa] = var_a8

if ((r14 & 1) != 0)
    int32_t var_48_1 = 0
    sub_140a1d5c0(&var_50)
    sub_141cf8580(&var_78)

arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd].b = arg3
sub_141cfc310(arg1)

if (*(arg1 + 0x24) s>= *(arg1[3] + 8) || *(arg1 + 0x4c) s>= *(arg1[8] + 8))
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) != 0)
        sub_1405947f0(&arg1[0xb], 0)
else
    int64_t* rcx_10 = arg1[6]
    void* rax_24 = *rcx_10
    
    if ((rax_24.b & 1) != 0)
        rax_24 = (rax_24 s>> 1) + rcx_10
    
    void* rcx_13 = (sx.q(*(arg1 + 0x4c)) << 5) + rax_24
    void* r15_1 = *rcx_13
    
    if ((r15_1.b & 1) != 0)
        r15_1 = (r15_1 s>> 1) + rcx_13
    
    int32_t rax_26 = *(rcx_13 + 8)
    int64_t r14_1 = 0
    int64_t var_d8 = 0
    int32_t rsi_2 = 0
    int64_t var_d0_1 = 0
    arg_18 = 0
    int32_t r13_1 = rax_26 - 1
    
    if (rax_26 == 0)
        r13_1 = 0
    
    if (r15_1 != 0 && *r15_1 != 0 && r13_1 s> 0)
        if (r13_1 + 1 s> 0)
            sub_1405947f0(&var_d8, r13_1 + 1)
            r12 = var_d0_1:4.d
            rsi_2 = var_d0_1.d
            r14_1 = var_d8
            arg_18 = r12
        
        rsi_2 += r13_1 + 1
        var_d0_1.d = rsi_2
        
        if (rsi_2 s> r12)
            sub_140594770(&var_d8)
            rsi_2 = var_d0_1.d
            r14_1 = var_d8
            arg_18 = var_d0_1:4.d
        
        UnDecorator::getReferenceType(r14_1, r15_1, r13_1 * 2)
        *(r14_1 + (sx.q(rsi_2) << 1) - 2) = 0
    
    int64_t* rax_29 = arg1[1]
    void* rcx_17 = *rax_29
    
    if ((rcx_17.b & 1) != 0)
        rcx_17 = (rcx_17 s>> 1) + rax_29
    
    void* rdx_15 = sx.q(*(arg1 + 0x24)) * 0x50 + rcx_17
    void* r13_2 = *rdx_15
    
    if ((r13_2.b & 1) != 0)
        r13_2 = (r13_2 s>> 1) + rdx_15
    
    int32_t rax_31 = *(rdx_15 + 8)
    int64_t r15_3 = 0
    var_d8 = 0
    int32_t rdx_16 = 0
    var_d0_1.d = 0
    int32_t r12_1 = rax_31 - 1
    int32_t rax_32 = 0
    
    if (rax_31 == 0)
        r12_1 = 0
    
    var_d0_1:4.d = 0
    int32_t r12_3
    
    if (r13_2 != 0 && *r13_2 != 0 && r12_1 s> 0)
        if (r12_1 + 1 s> 0)
            sub_1405947f0(&var_d8, r12_1 + 1)
            rdx_16 = var_d0_1.d
            rax_32 = var_d0_1:4.d
            r15_3 = var_d8
        
        r12_3 = r12_1 + 1 + rdx_16
        var_d0_1.d = r12_3
        
        if (r12_3 s> rax_32)
            sub_140594770(&var_d8)
            r12_3 = var_d0_1.d
            r15_3 = var_d8
        
        UnDecorator::getReferenceType(r15_3, r13_2, r12_1 * 2)
        *(r15_3 + (sx.q(r12_3) << 1) - 2) = 0
    
    int64_t r12_4
    int32_t r13_4
    
    if (r13_2 == 0 || *r13_2 == 0 || r12_1 s<= 0 || r12_3 s<= 1)
        r13_4 = arg_18
        r12_4 = r14_1
        r14_1 = 0
    else
        int32_t rsi_4
        
        if (rsi_2 == 0)
            rsi_4 = 0
        else
            rsi_4 = rsi_2 - 1
        
        int32_t rcx_23
        
        if (r12_3 == 0)
            rcx_23 = r12_3 + 1
        
        if (r12_3 != 0 || rsi_4 == 0)
            rcx_23 = 0
        
        int32_t rax_34 = var_d0_1:4.d
        int32_t rdx_20 = r12_3 + rsi_4 + rcx_23
        var_c8.q = r15_3
        var_c0_1.d = r12_3
        r15_3 = 0
        var_c0_1:4.d = rax_34
        
        if (rdx_20 s> rax_34)
            sub_1405947f0(&var_c8, rdx_20)
        
        sub_140a20ba0(&var_c8, r14_1, rsi_4)
        r12_4 = var_c8.q
        rsi_2 = var_c0_1.d
        r13_4 = var_c0_1:4.d
        var_c8.q = 0
        int64_t var_c0_2 = 0
    
    if (&arg1[0xb] != &var_d8)
        int64_t rcx_26 = arg1[0xb]
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        arg1[0xb] = r12_4
        arg1[0xc].d = rsi_2
        *(arg1 + 0x64) = r13_4
    else if (r12_4 != 0)
        sub_140a74f90(r12_4)
    
    if (r15_3 != 0)
        sub_140a74f90(r15_3)
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)

return arg1
