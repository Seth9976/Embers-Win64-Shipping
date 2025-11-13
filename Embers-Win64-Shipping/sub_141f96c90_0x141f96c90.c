// 函数: sub_141f96c90
// 地址: 0x141f96c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg1 + 0x78))

if (rbx.d s< 3)
    return 

int32_t i_4 = (rbx - 1).d
int32_t i_3 = 0
int32_t r13_1 = 0

if (arg3 s>= 0)
    r13_1 = arg3

int32_t var_f4_1 = r13_1

if (arg4 s<= i_4)
    i_4 = arg4

if (i_4 - r13_1 s< 2)
    return 

int32_t rax_1 = *(arg1 + 0x10)
uint64_t rdi_1 = 0
int64_t r14_1 = 0
uint64_t var_a8 = 0
int32_t var_9c_1 = 0
int64_t var_c8 = 0
int64_t var_c0_1 = 0
int32_t var_a0_1 = rbx.d
int64_t var_e8

if (rax_1 == *(arg1 + 0x3c))
    if (rbx.d s> 0)
        sub_1405a4cf0(&var_a8)
        rdi_1 = var_a8
    
    uint64_t rcx_15 = rdi_1
    
    if (rbx.d != 0)
        int32_t rax_27 = data_143a2d8ec
        int32_t i
        
        do
            rax_27 += 1
            *rcx_15 = rax_27
            rcx_15 += 4
            i = rbx.d
            rbx = zx.q(rbx.d - 1)
        while (i != 1)
        data_143a2d8ec = rax_27
else
    if (rbx.d s> 0)
        sub_1405a4cf0(&var_a8)
        rdi_1 = var_a8
    
    memset(rdi_1, 0, rbx << 2)
    int32_t rdx_1 = *(arg1 + 0x78)
    
    if (rdx_1 s> 0)
        sub_1405dadb0(&var_c8, rdx_1)
        r14_1 = var_c8
    
    var_e8:4.d = 1
    int32_t r11_1 = *(arg1 + 0x30)
    int32_t var_e0
    var_e0.q = arg1 + 0x18
    int32_t rcx_3 = 0
    var_e8.d = 0
    int32_t r8_2 = 0
    int32_t var_d8_1 = 0xffffffff
    int64_t var_d4_1 = 0
    
    if (r11_1 != 0)
        void* rax_2 = *(arg1 + 0x28)
        void* r9 = arg1 + 0x18
        
        if (rax_2 != 0)
            r9 = rax_2
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r11_1 - 1)
        int32_t rdx_4 = *r9
        
        if (rdx_4 != 0)
        label_141f96dd9:
            int32_t rax_9 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_9)
            var_e8:4.d = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_1
            
            var_d4_1.d = r8_2 - rax_10 + 0x1f
            
            if (r8_2 - rax_10 + 0x1f s> r11_1)
                var_d4_1.d = r11_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_3)
                r8_2 += 0x20
                rcx_3 += 1
                var_d4_1:4.d = r8_2
                var_e8.d = rcx_3
                
                if (rdx_5.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r9 + (rdx_5 << 2) + 4)
                var_d8_1 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_141f96dd9
            
            var_d4_1.d = r11_1
    
    int32_t rdx_6 = *(arg1 + 0x30)
    double zmm2[0x2] = var_d8_1.o
    var_d4_1.d = rdx_6
    int32_t r9_1 = 0xffffffff << (rdx_6.b & 0x1f)
    int32_t var_d8_2 = r9_1
    uint32_t var_68_1[0x4] = var_e8.o
    int32_t r9_3 = rdx_6 & 0xffffffe0
    int32_t r8_5 = rdx_6 s>> 5
    double var_58_1[0x2] = zmm2
    int64_t var_78_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    uint32_t var_98[0x4] = (arg1 + 8).o
    uint128_t var_88_1 = var_68_1
    
    if (rdx_6 != r11_1)
        void* rax_12 = *(arg1 + 0x28)
        void* r10_1 = arg1 + 0x18
        
        if (rax_12 != 0)
            r10_1 = rax_12
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r11_1 - 1)
        int32_t rdx_10 = *(r10_1 + (sx.q(r8_5) << 2)) & r9_1
        
        if (rdx_10 != 0)
        label_141f96eb2:
            int32_t rax_19 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_19)
            int32_t rbx_1
            
            if (rax_19 == 0)
                rbx_1 = 0x20
            else
                rbx_1 = 0x1f - temp0_3
            
            var_d4_1.d = r9_3 - rbx_1 + 0x1f
            
            if (r9_3 - rbx_1 + 0x1f s> r11_1)
                var_d4_1.d = r11_1
        else
            while (true)
                int64_t rcx_8 = sx.q(r8_5)
                r9_3 += 0x20
                r8_5 += 1
                
                if (rcx_8.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r10_1 + (rcx_8 << 2) + 4)
                var_d8_2 = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_141f96eb2
            
            var_d4_1.d = r11_1
    
    while (true)
        int64_t rax_21 = sx.q(var_88_1:0xc.d)
        int64_t rcx_11 = var_98[0].q
        
        if (rax_21.d == (var_d8_2.q u>> 0x20).d && var_88_1.q == arg1 + 0x18 && rcx_11 == arg1 + 8)
            break
        
        int32_t* rax_23 = (rax_21 << 4) + *rcx_11
        *(rdi_1 + (sx.q(rax_23[1]) << 2)) = *rax_23
        var_88_1:8.d &= not.d(var_98[3])
        sub_14059bdd0(&var_98[2])
    
    r13_1 = var_f4_1

int32_t rdx_12 = *(arg1 + 0x78)
int32_t rbx_4 = 0
int32_t var_e0_1 = 0
int64_t rdi_2 = 0
var_e8 = 0
int32_t r12_2 = 0
int32_t var_dc_1 = 0

if (rdx_12 s> 0)
    sub_1413f6f70(&var_e8, rdx_12)
    r12_2 = var_dc_1
    rbx_4 = var_e0_1
    rdi_2 = var_e8

int64_t var_f0

if (r13_1 s>= 0)
    int64_t rdx_13 = 0
    int64_t i_1 = 0
    uint64_t rsi_1 = var_a8
    var_f0 = 0
    
    do
        int128_t* r8_6 = *(arg1 + 0x70)
        int32_t rax_28 = rbx_4
        int32_t var_f8_2 = rbx_4
        rbx_4 += 1
        
        if (rbx_4 s> r12_2)
            sub_1405c50f0(&var_e8)
            rdx_13 = var_f0
            rax_28 = var_f8_2
            r12_2 = var_dc_1
            rdi_2 = var_e8
        
        int128_t* rcx_18 = sx.q(rax_28) * 0x1c
        *(rcx_18 + rdi_2) = *(r8_6 + rdx_13)
        *(rcx_18 + rdi_2 + 0x10) = *(r8_6 + rdx_13 + 0x10)
        *(rcx_18 + rdi_2 + 0x18) = *(r8_6 + rdx_13 + 0x18)
        int32_t rcx_19 = var_c0_1.d
        var_c0_1.d = rcx_19 + 1
        
        if (rcx_19 + 1 s> var_c0_1:4.d)
            sub_1405a4cf0(&var_c8)
            rdx_13 = var_f0
            r14_1 = var_c8
        
        int32_t rax_32 = *(rsi_1 + (i_1 << 2))
        rdx_13 += 0x1c
        i_1 += 1
        var_f0 = rdx_13
        *(r14_1 + (sx.q(rcx_19) << 2)) = rax_32
    while (i_1 s<= sx.q(var_f4_1))
    
    r13_1 = var_f4_1
    i_3 = 0

int64_t i_5 = sx.q(i_4)
int64_t r13_3 = sx.q(r13_1 + 1)
int32_t r9_5 = 0
int32_t var_f8_4 = 0
int32_t var_f4_2 = r13_1 + 1

if (r13_3 s< i_5)
    int64_t rsi_2 = r13_3 * 0x1c
    int32_t rax_34 = r13_1 + 2
    int32_t var_b0_1 = rax_34
    
    do
        uint32_t (* r8_7)[0x4] = *(arg1 + 0x70)
        uint32_t zmm0[0x4]
        uint32_t zmm6_1[0x4]
        int32_t zmm7_1
        zmm0, zmm6_1, zmm7_1 =
            sub_141f87510(sx.q(r9_5) * 0x1c + r8_7, sx.q(rax_34) * 0x1c + r8_7, *(r8_7 + rsi_2 + 4))
        zmm0[0] = zmm0[0] f- *(r8_7 + rsi_2 + 8)
        
        if (not(_mm_and_ps(zmm0, zmm6_1)[0] f<= zmm7_1))
            var_f8_4 = var_f4_2
            int32_t rax_39 = rbx_4
            var_f0.d = rbx_4
            rbx_4 += 1
            
            if (rbx_4 s> r12_2)
                sub_1405c50f0(&var_e8)
                rax_39 = var_f0.d
                r12_2 = var_dc_1
                rdi_2 = var_e8
            
            uint32_t (* rcx_26)[0x4] = sx.q(rax_39) * 0x1c
            *(rcx_26 + rdi_2) = *(r8_7 + rsi_2)
            *(rcx_26 + rdi_2 + 0x10) = *(r8_7 + rsi_2 + 0x10)
            *(rcx_26 + rdi_2 + 0x18) = *(r8_7 + rsi_2 + 0x18)
            int32_t rcx_27 = var_c0_1.d
            var_f0.d = rcx_27
            var_c0_1.d = rcx_27 + 1
            
            if (rcx_27 + 1 s> var_c0_1:4.d)
                sub_1405a4cf0(&var_c8)
                rcx_27 = var_f0.d
                r14_1 = var_c8
            
            *(r14_1 + (sx.q(rcx_27) << 2)) = *(var_a8 + (r13_3 << 2))
        
        r13_3 += 1
        var_f4_2 += 1
        rax_34 = var_b0_1 + 1
        i_5 = sx.q(i_4)
        rsi_2 += 0x1c
        r9_5 = var_f8_4
        var_b0_1 = rax_34
    while (r13_3 s< i_5)
    
    i_3 = 0

if (i_4 s< *(arg1 + 0x78))
    int32_t i_2 = i_4
    int64_t r13_4 = i_5 * 0x1c
    int64_t rdx_20 = var_a8 + (i_5 << 2)
    int64_t var_f0_1 = rdx_20
    
    do
        uint32_t (* r8_8)[0x4] = *(arg1 + 0x70)
        int32_t rax_49 = rbx_4
        int32_t arg_8 = rbx_4
        rbx_4 += 1
        
        if (rbx_4 s> r12_2)
            sub_1405c50f0(&var_e8)
            rax_49 = arg_8
            rdx_20 = var_f0_1
            r12_2 = var_dc_1
            rdi_2 = var_e8
        
        uint32_t (* rcx_31)[0x4] = sx.q(rax_49) * 0x1c
        *(rcx_31 + rdi_2) = *(r8_8 + r13_4)
        *(rcx_31 + rdi_2 + 0x10) = *(r8_8 + r13_4 + 0x10)
        *(rcx_31 + rdi_2 + 0x18) = *(r8_8 + r13_4 + 0x18)
        int32_t rcx_32 = var_c0_1.d
        var_c0_1.d = rcx_32 + 1
        
        if (rcx_32 + 1 s> var_c0_1:4.d)
            sub_1405a4cf0(&var_c8)
            rdx_20 = var_f0_1
            r14_1 = var_c8
        
        int32_t rax_53 = *rdx_20
        i_2 += 1
        rdx_20 += 4
        r13_4 += 0x1c
        var_f0_1 = rdx_20
        *(r14_1 + (sx.q(rcx_32) << 2)) = rax_53
    while (i_2 s< *(arg1 + 0x78))
    
    i_3 = 0

if (arg1 + 0x70 != &var_e8)
    int64_t rcx_35 = *(arg1 + 0x70)
    
    if (rcx_35 != 0)
        sub_140a74f90(rcx_35)
    
    *(arg1 + 0x70) = rdi_2
    *(arg1 + 0x78) = rbx_4
    *(arg1 + 0x7c) = r12_2
else if (rdi_2 != 0)
    sub_140a74f90(rdi_2)

sub_141f814e0(arg1, zx.o(0).d)
sub_141453140(arg1 + 8, 0)
bool cond:5_1 = *(arg1 + 0x64) == 0
*(arg1 + 0x60) = 0

if (not(cond:5_1))
    sub_1405dadb0(arg1 + 0x58, 0)

if (*(arg1 + 0x78) s> 0)
    do
        sub_141f7f180(arg1 + 8, r14_1 + (sx.q(i_3) << 2), i_3)
        i_3 += 1
    while (i_3 s< *(arg1 + 0x78))

if (r14_1 != 0)
    sub_140a74f90(r14_1)

uint64_t rax = var_a8

if (rax != 0)
    sub_140a74f90(rax)
