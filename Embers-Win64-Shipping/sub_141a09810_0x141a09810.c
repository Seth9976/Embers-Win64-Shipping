// 函数: sub_141a09810
// 地址: 0x141a09810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8

if (*(arg1 + 0x290) != 0)
    data_14399e5e0
    sub_1405a6220(sub_140a242a0(), arg1 + 0x290)
    int64_t* rcx_1 = *(arg1 + 0x290)
    *(arg1 + 0x290) = 0
    
    if (rcx_1 != 0)
        rcx_1[9].d -= 1
        
        if (rcx_1[9].d == 1)
            sub_140a2f6e0(rcx_1)

int32_t var_cc = 1
int32_t r11 = *(arg1 + 0x268)
void* var_c8 = arg1 + 0x250
int32_t rcx_2 = 0
int32_t var_d0 = 0
int32_t r8_2 = 0
int32_t var_c0 = 0xffffffff
int64_t var_bc = 0

if (r11 != 0)
    void* rax_4 = *(arg1 + 0x260)
    void* r9_1 = arg1 + 0x250
    
    if (rax_4 != 0)
        r9_1 = rax_4
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_4 = *r9_1
    
    if (rdx_4 != 0)
    label_141a09918:
        int32_t rax_11 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_cc_1 = rax_11
        int32_t var_90_1 = temp0_2
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        var_bc.d = r8_2 - rax_12 + 0x1f
        
        if (r8_2 - rax_12 + 0x1f s> r11)
            var_bc.d = r11
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_2)
            r8_2 += 0x20
            rcx_2 += 1
            var_bc:4.d = r8_2
            var_d0 = rcx_2
            
            if (rdx_5.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
            var_c0 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_141a09918
        
        var_bc.d = r11

int32_t rdx_6 = *(arg1 + 0x268)
void* var_60 = arg1 + 0x240
double zmm2[0x2] = var_c0.o
int128_t var_58 = var_d0.o
int32_t r8_5 = rdx_6 s>> 5
int128_t zmm0 = var_60.o
int32_t r14 = 0xffffffff << (rdx_6.b & 0x1f)
int32_t r9_3 = rdx_6 & 0xffffffe0
int32_t var_b0 = r8_5
int32_t var_a0 = r14
int32_t var_9c = rdx_6
int32_t var_98 = r9_3
int64_t var_68 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int128_t var_88 = zmm0
int128_t var_78 = var_58

if (rdx_6 != r11)
    void* rax_14 = *(arg1 + 0x260)
    void* r10_1 = arg1 + 0x250
    
    if (rax_14 != 0)
        r10_1 = rax_14
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_5) << 2)) & r14
    int32_t var_9c_2
    
    if (rdx_10 != 0)
    label_141a099fa:
        int32_t rax_21 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_21)
        int32_t var_8c_1 = temp0_4
        int32_t rbx_2
        
        if (rax_21 == 0)
            rbx_2 = 0x20
        else
            rbx_2 = 0x1f - temp0_4
        
        int32_t var_9c_1 = r9_3 - rbx_2 + 0x1f
        
        if (r9_3 - rbx_2 + 0x1f s> r11)
            var_9c_2 = r11
    else
        while (true)
            int64_t rcx_7 = sx.q(r8_5)
            r9_3 += 0x20
            r8_5 += 1
            int32_t var_98_1 = r9_3
            int32_t var_b0_1 = r8_5
            
            if (rcx_7.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_7 << 2) + 4)
            var_a0 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141a099fa
        
        var_9c_2 = r11

while (true)
    int64_t rax_23 = sx.q(var_78:0xc.d)
    int64_t* rdx_11 = var_88.q
    
    if (rax_23.d == (var_a0.q u>> 0x20).d && var_78.q == arg1 + 0x250 && rdx_11 == arg1 + 0x240)
        uint64_t result = sub_141a09190(arg1 + 0x240, 0)
        __security_check_cookie(rax_1 ^ &var_f8)
        return result
    
    int32_t rdi_1 = data_14399e5e0
    int32_t var_d8
    sub_140865c40(arg1 + 0x240, &var_d8, *(*rdx_11 + rax_23 * 0x18))
    int64_t rax_25 = sx.q(var_d8)
    void* const rbx_3
    
    if (rax_25.d == 0xffffffff)
        rbx_3 = nullptr
    else
        rbx_3 = *(arg1 + 0x240) + rax_25 * 0x18
    
    int64_t* rax_27 = sub_140a242a0()
    void* rcx_11 = *(rbx_3 + 8)
    zmm2[1] = 0
    int32_t var_34_1 = 4
    int32_t i_2 = 1
    var_60 = rcx_11
    
    if (rcx_11 != 0)
        *(rcx_11 + 0x48) += 1
    
    (*(*rax_27 + 0x48))(rax_27, &var_60, zx.q(rdi_1), rax_27)
    void** rcx_13 = zmm2[1]
    void** rbx_4 = &var_60
    int32_t i_1 = i_2
    
    if (rcx_13 != 0)
        rbx_4 = rcx_13
    
    if (i_1 != 0)
        int32_t i
        
        do
            void* rcx_14 = *rbx_4
            
            if (rcx_14 != 0)
                int32_t rax_29 = *(rcx_14 + 0x48)
                *(rcx_14 + 0x48) -= 1
                
                if (rax_29 == 1)
                    sub_140a2f6e0(rcx_14)
            
            rbx_4 = &rbx_4[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx_13 = zmm2[1]
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)
