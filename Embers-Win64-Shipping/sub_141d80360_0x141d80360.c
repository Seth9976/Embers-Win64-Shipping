// 函数: sub_141d80360
// 地址: 0x141d80360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_b8 = 0xffffffff
int64_t var_98 = 0
int32_t var_90 = 0
int32_t rsi = 1
int32_t r11 = *(arg1 + 0x28)
int32_t arg_18 = 0
int32_t var_c8 = 0
int32_t rdi = 0
int32_t var_c4 = 1
int32_t r8 = 0
int32_t* var_c0 = arg1 + 0x10
int32_t rcx = 0
int64_t var_b4 = 0

if (r11 != 0)
    int32_t* rax_1 = *(arg1 + 0x20)
    int32_t* r9_1 = arg1 + 0x10
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141d80418:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_c4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_b4.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_b4.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_b4:4.d = rcx
            var_c8 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r9_1[rdx_3 + 1]
            var_b8 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141d80418
        
        var_b4.d = r11

int32_t rdx_5 = *(arg1 + 0x28)
double zmm2[0x2] = var_b8.o
double var_48[0x2] = zmm2
int32_t r12 = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_58 = var_c8.o
int32_t r8_2 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_68 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_b8_1 = r12
var_b4.d = rdx_5
int128_t var_88 = arg1.o
int128_t var_78 = var_58

if (rdx_5 != r11)
    int32_t* rax_11 = *(arg1 + 0x20)
    int32_t* r10_1 = arg1 + 0x10
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = r10_1[sx.q(r8_2)] & r12
    
    if (rdx_9 != 0)
    label_141d804e2:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_b4.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r11)
            var_b4.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = r10_1[rcx_5 + 1]
            var_b8_1 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141d804e2
        
        var_b4.d = r11

while (true)
    int64_t rax_20 = sx.q(var_78:0xc.d)
    int64_t* rdx_10 = var_88.q
    int64_t var_a8
    
    if (rax_20.d == (var_b8_1.q u>> 0x20).d && var_78.q == arg1 + 0x10 && rdx_10 == arg1)
        int32_t* rcx_22
        
        if (rdi == 0 || rdi - 1 s<= 0)
            var_a8 = 0
            int32_t var_a0_1 = 0
            sub_1405947f0(&var_a8, 7)
            int32_t rax_29 = var_a0_1 + 7
            var_a0_1 = rax_29
            
            if (rax_29 s> 0)
                sub_140594770(&var_a8)
            
            UnDecorator::getReferenceType(var_a8, u"<none>", 0xe)
            rcx_22 = &var_a8
            rsi = 2
        else
            int64_t rbx_3 = var_98
            var_c8.q = 0
            var_c0.d = rdi
            sub_1405a4c70(&var_c8, rdi, 0)
            memcpy(var_c8.q, rbx_3, rdi * 2)
            rcx_22 = &var_c8
        
        *arg2 = *rcx_22
        *rcx_22 = 0
        arg2[1].d = rcx_22[2]
        *(arg2 + 0xc) = rcx_22[3]
        *(rcx_22 + 8) = 0
        
        if ((rsi.b & 2) != 0)
            int64_t rcx_26 = var_a8
            rsi &= 0xfffffffd
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
        
        if ((rsi.b & 1) != 0)
            int64_t rcx_27 = var_c8.q
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
        
        int64_t rcx_28 = var_98
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        return arg2
    
    int32_t* rbx_2 = *rdx_10 + rax_20 * 0x18
    
    if (rdi != 0 && rdi - 1 s> 0)
        sub_140a20ba0(&var_98, &data_142d7fa60, 1)
    
    int64_t* rax_23 = sub_140b63b70(rbx_2, &var_c8)
    int32_t rcx_10 = rax_23[1].d
    int32_t r8_3 = rcx_10 - 1
    
    if (rcx_10 == 0)
        r8_3 = 0
    
    sub_140a20ba0(&var_98, *rax_23, r8_3)
    int64_t rcx_12 = var_c8.q
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    bool rdx_13 = sub_140b5b8a0(rbx_2[2], 0) == 0
    
    if ((rbx_2[3] != 0 | rdx_13) != 0)
        sub_140a20ba0(&var_98, &data_142d84ee0, 1)
        int64_t* rax_25 = sub_140b63b70(&rbx_2[2], &var_a8)
        int32_t rcx_16 = rax_25[1].d
        int32_t r8_4 = rcx_16 - 1
        
        if (rcx_16 == 0)
            r8_4 = 0
        
        sub_140a20ba0(&var_98, *rax_25, r8_4)
        int64_t rcx_18 = var_a8
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
    
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)
    rdi = var_90
