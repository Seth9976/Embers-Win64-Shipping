// 函数: sub_140a8e750
// 地址: 0x140a8e750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_f4 = 1
int32_t* r14 = arg1 + 0x10
int16_t* var_108 = nullptr
int32_t var_100 = 0
void* r13 = arg1
int32_t rbx = r14[6]
int32_t rcx = 0
int32_t var_f8 = 0
int32_t* var_f0 = r14
int32_t r8 = 0
int32_t var_e8 = 0xffffffff
int32_t var_e4 = 0
int32_t var_e0 = 0

if (rbx != 0)
    int32_t* rax_1 = *(r14 + 0x10)
    int32_t* r9_1 = r14
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_2 = *r9_1
    int32_t var_e4_2
    
    if (rdx_2 != 0)
    label_140a8e80b:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_f4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_e4_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> rbx)
            var_e4_2 = rbx
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_e0_1 = rcx
            var_f8 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r9_1[rdx_3 + 1]
            var_e8 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140a8e80b
        
        var_e4_2 = rbx

int32_t rdx_5 = *(r13 + 0x28)
void* var_78 = r13
double zmm2[0x2] = var_e8.o
int128_t var_70 = var_f8.o
int32_t rsi = 0xffffffff << (rdx_5.b & 0x1f)
int128_t zmm0 = var_78.o
int32_t r8_2 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int32_t var_b0 = rsi
int32_t var_ac = rdx_5
double var_60[0x2] = zmm2
int64_t var_80 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int128_t var_a0 = zmm0
int128_t var_90 = var_70

if (rdx_5 != rbx)
    int32_t* rax_11 = *(r14 + 0x10)
    int32_t* r10_1 = r14
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_9 = r10_1[sx.q(r8_2)] & rsi
    int32_t var_ac_2
    
    if (rdx_9 != 0)
    label_140a8e8d2:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        int32_t var_ac_1 = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_ac_2 = rbx
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = r10_1[rcx_5 + 1]
            var_b0 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140a8e8d2
        
        var_ac_2 = rbx

uint64_t rax_21 = var_b0.q u>> 0x20
uint64_t var_c8 = rax_21
int16_t* const r15_1

while (true)
    int64_t rcx_7 = sx.q(var_90:0xc.d)
    r15_1 = &data_142d40450
    int64_t* rdx_10 = var_a0.q
    
    if (rcx_7.d != rax_21.d || var_90.q != r14 || rdx_10 != r13)
        rax_21.b = 1
    else
        rax_21.b = 0
    
    if (rax_21.b == 0)
        break
    
    int64_t* rbx_1 = *rdx_10 + rcx_7 * 0x28
    sub_140596d10(&var_78, rbx_1)
    int64_t* rsi_1 = rbx_1[2]
    int64_t* rbx_2 = rbx_1[3]
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    int32_t rdi_1 = var_70.d
    void* r14_1 = var_78
    uint64_t var_d8 = 0
    int32_t var_d0_1 = rdi_1
    
    if (rdi_1 != 0)
        sub_1405a4c70(&var_d8, rdi_1, 0)
        memcpy(var_d8, r14_1, rdi_1 * 2)
    else
        int32_t var_cc_1 = 0
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    int64_t var_c0
    int64_t* rax_24 = (*(*rsi_1 + 8))(rsi_1, &var_c0)
    void* const r12_1 = &data_142d7fa60
    
    if (var_100 s<= 1)
        r12_1 = &data_142d40450
    
    int32_t rax_33
    int64_t r15_2
    
    if (*r12_1 == 0)
        r15_2 = *rax_24
        *rax_24 = 0
        rax_33 = rax_24[1].d
        rax_24[1] = 0
    else
        int64_t rdi_3 = -1
        
        do
            rdi_3 += 1
        while (*(r12_1 + (rdi_3 << 1)) != 0)
        
        int32_t rax_25 = rax_24[1].d
        int32_t rsi_2 = rax_25 - 1
        
        if (rax_25 == 0)
            rsi_2 = 0
        
        int64_t var_118 = 0
        r15_2 = 0
        int64_t var_110_1 = 0
        int32_t rdx_15 = 0
        int32_t rcx_13 = 0
        int32_t rax_27 = rsi_2 + 1 + rdi_3.d
        
        if (rax_27 s> 0)
            sub_1405947f0(&var_118, rax_27)
            rcx_13 = var_110_1:4.d
            rdx_15 = var_110_1.d
            r15_2 = var_118
        
        int32_t rax_30 = rsi_2 + 1 + rdx_15 + rdi_3.d
        int32_t arg_18 = rax_30
        var_110_1.d = rax_30
        
        if (rax_30 s> rcx_13)
            sub_140594770(&var_118)
            r15_2 = var_118
            arg_18 = var_110_1.d
        
        int64_t r14_2 = sx.q(rdi_3.d)
        int64_t rsi_3 = r14_2 * 2
        memcpy(r15_2, r12_1, rsi_3.d)
        int64_t rdi_4 = sx.q(rsi_2)
        memcpy(r15_2 + rsi_3, *rax_24, rdi_4.d * 2)
        r14_1 = var_78
        *(r15_2 + ((rdi_4 + r14_2) << 1)) = 0
        rax_33 = arg_18
        var_118 = 0
        int64_t var_110_2 = 0
    
    int32_t r8_7 = rax_33 - 1
    
    if (rax_33 == 0)
        r8_7 = 0
    
    sub_140a20ba0(&var_108, r15_2, r8_7)
    
    if (r15_2 != 0)
        int64_t* rcx_19 = data_143ddb3f0
        
        if (rcx_19 == 0)
            sub_140a750a0()
            rcx_19 = data_143ddb3f0
        
        (*(*rcx_19 + 0x30))(rcx_19, r15_2)
    
    int64_t rdi_5 = var_c0
    
    if (rdi_5 != 0)
        int64_t* rcx_20 = data_143ddb3f0
        
        if (rcx_20 == 0)
            sub_140a750a0()
            rcx_20 = data_143ddb3f0
        
        (*(*rcx_20 + 0x30))(rcx_20, rdi_5)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    uint64_t rdi_6 = var_d8
    
    if (rdi_6 != 0)
        int64_t* rcx_23 = data_143ddb3f0
        
        if (rcx_23 == 0)
            sub_140a750a0()
            rcx_23 = data_143ddb3f0
        
        (*(*rcx_23 + 0x30))(rcx_23, rdi_6)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp7_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (r14_1 != 0)
        int64_t* rcx_26 = data_143ddb3f0
        
        if (rcx_26 == 0)
            sub_140a750a0()
            rcx_26 = data_143ddb3f0
        
        (*(*rcx_26 + 0x30))(rcx_26, r14_1)
    
    var_90:8.d &= not.d(var_a0:0xc.d)
    sub_14059bdd0(&var_a0:8)
    rax_21 = var_c8
    r14 = var_f0
    r13 = arg1

if (var_100 != 0)
    r15_1 = var_108

sub_140a2e390(arg2, u"{%s}", r15_1)
int16_t* rbx_3 = var_108

if (rbx_3 != 0)
    int64_t* rcx_29 = data_143ddb3f0
    
    if (rcx_29 == 0)
        sub_140a750a0()
        rcx_29 = data_143ddb3f0
    
    (*(*rcx_29 + 0x30))(rcx_29, rbx_3)

return arg2
