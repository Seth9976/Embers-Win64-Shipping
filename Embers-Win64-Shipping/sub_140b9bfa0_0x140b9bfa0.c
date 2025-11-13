// 函数: sub_140b9bfa0
// 地址: 0x140b9bfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xcb) = 1
sub_140b9bee0(arg1, 1, 2)
sub_140b9bee0(arg1, 0, 2)
int32_t rcx_1 = 0
int32_t var_b4 = 1
int32_t var_b8 = 0
int32_t r11 = *(arg1 + 0x2c8)
int32_t r8 = 0
void* var_b0 = arg1 + 0x2b0
int32_t var_a8 = 0xffffffff
int64_t var_a4 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x2c0)
    void* r9_1 = arg1 + 0x2b0
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_140b9c068:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_a4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_a4.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_a4:4.d = r8
            var_b8 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            var_a8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140b9c068
        
        var_a4.d = r11

int32_t rdx_5 = *(arg1 + 0x2c8)
double zmm2[0x2] = var_a8.o
int128_t zmm0 = var_b8.o
var_a4.d = rdx_5
double var_80[0x2] = zmm2
int32_t r14 = 0xffffffff << (rdx_5 & 0x1f).b
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_48 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_a8_1 = r14
int128_t var_68 = (arg1 + 0x2a0).o
int128_t var_58 = zmm0

if (rdx_5 != r11)
    void* rax_13 = *(arg1 + 0x2c0)
    void* r10_1 = arg1 + 0x2b0
    
    if (rax_13 != 0)
        r10_1 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_9 != 0)
    label_140b9c146:
        int32_t rax_19 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t rbx_1
        
        if (rax_19 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_a4.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r11)
            var_a4.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
            var_a8_1 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140b9c146
        
        var_a4.d = r11

while (true)
    int64_t rcx_7 = sx.q(var_58:0xc.d)
    int64_t rdx_10 = var_68.q
    int32_t rax_12
    
    if (rcx_7.d != (var_a8_1.q u>> 0x20).d || var_58.q != arg1 + 0x2b0 || rdx_10 != arg1 + 0x2a0)
        rax_12.b = 1
    else
        rax_12.b = 0
    
    if (rax_12.b == 0)
        break
    
    double rbx_2 = 0.0
    int64_t* rcx_9 = rcx_7 * 0x38 + *rdx_10
    var_80[1] = 0
    int64_t rsi_1 = sx.q(rcx_9[5].d)
    int64_t* r8_4 = *rcx_9
    int64_t r14_1 = rcx_9[4]
    int128_t var_90
    var_90.q = rcx_9[1]
    var_90:8.q = rcx_9[2]
    var_80[0].d = rcx_9[3].d
    var_80[0]:4.d = *(rcx_9 + 0x1c)
    int32_t var_70_1 = rsi_1.d
    
    if (rsi_1.d != 0)
        sub_140638750(&var_80[1], rsi_1.d, 0)
        rbx_2 = var_80[1]
        memcpy(rbx_2, r14_1, (rsi_1 << 2).d)
    
    if (r8_4 != 0)
        (**r8_4)(r8_4, 1)
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)
    
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)

sub_140ba26d0(arg1 + 0x2a0, 0)
sub_140ba2630(arg1 + 0x2f0, 0)
sub_140aa8b70(arg1 + 0x3f0, 0)
sub_140aa8b70(arg1 + 0x440, 0)
sub_140aa8b70(arg1 + 0x490, 0)
*(arg1 + 0x4e8) = 0

if (*(arg1 + 0x4ec) != 0)
    sub_1405c5570(arg1 + 0x4e0, 0)

*(arg1 + 0x550) = 0
sub_140bbb400(arg1 + 0x500)
char arg_8 = 0
char* var_b0_1 = &arg_8
var_b8.q = sub_140884c50
void* rsi_2 = *(sub_140a756e0(&var_b8, &data_14397f5f0) + 0x48)

if (rsi_2 != 0)
    int64_t r14_2 = sx.q(*(rsi_2 + 0x18))
    
    if (r14_2.d != 0)
        int32_t rax_28 = *(arg1 + 0x120)
        int32_t rdx_13 = r14_2.d + rax_28
        
        if (rdx_13 s> *(arg1 + 0x124))
            sub_1405c5570(arg1 + 0x118, rdx_13)
            rax_28 = *(arg1 + 0x120)
        
        memcpy(*(arg1 + 0x118) + (sx.q(rax_28) << 3), *(rsi_2 + 0x10), (r14_2 << 3).d)
        *(arg1 + 0x120) += r14_2.d
        *(rsi_2 + 0x18) = 0
        
        if (*(rsi_2 + 0x1c) s<= 0xffffffff)
            sub_1405c5570(rsi_2 + 0x10, 0)

EnterCriticalSection(arg1 + 0x1b0)
sub_140b91340(arg1 + 0x160)
sub_140b91270(arg1 + 0x118)
sub_140b91270(arg1 + 0x108)
uint64_t result = sub_140ba28c0(arg1)
*(arg1 + 0x120) = 0

if (*(arg1 + 0x124) != 0)
    result = sub_1405c5570(arg1 + 0x118, 0)

*(arg1 + 0x110) = 0

if (*(arg1 + 0x114) != 0)
    result = sub_1405c5570(arg1 + 0x108, 0)

if (arg1 != -0x1b0)
    result = LeaveCriticalSection(arg1 + 0x1b0)

if (*(arg1 + 0x58) != 0)
    void* rcx_34 = *(arg1 + 0x50)
    
    if (rcx_34 != 0)
        sub_140cba9f0(rcx_34 + 0x200)
    
    if (*(arg1 + 0xce) != 0)
        void* rax_30 = *(arg1 + 0x58)
        arg_8.q = 0
        *(rax_30 + 8) &= 0xfff7ffff
        void* rax_31 = *(arg1 + 0x58)
        *(rax_31 + 0x28) &= 0xfd
        void* rax_32 = sub_140cddea0()
        void arg_10
        int64_t* rax_35 = sub_140b63b70(sub_140d25240(&arg_10, sub_140cde0b0(), rax_32, 0), &var_b8)
        int16_t* const rdx_18
        
        if (rax_35[1].d == 0)
            rdx_18 = &data_142d40450
        else
            rdx_18 = *rax_35
        
        int64_t* rcx_38 = *(arg1 + 0x58)
        (*(*rcx_38 + 0x138))(rcx_38, rdx_18, 0, 0x35)
        int64_t rcx_39 = var_b8.q
        
        if (rcx_39 != 0)
            sub_140a74f90(rcx_39)
    
    result = *(arg1 + 0x50)
    
    if (result != 0)
        *(result + 0x2e0) = 0
        sub_140cba9f0(*(arg1 + 0x50) + 0x200)
        sub_140cb70e0(*(arg1 + 0x50))
        result = sub_140ce4270(sub_140cdbb20(), *(arg1 + 0x50))
        *(arg1 + 0x50) = 0

*(arg1 + 0xa8) = 0
*(arg1 + 0xb0) = 0
return result
