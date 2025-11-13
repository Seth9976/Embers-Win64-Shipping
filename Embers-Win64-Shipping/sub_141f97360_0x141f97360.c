// 函数: sub_141f97360
// 地址: 0x141f97360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg1 + 0x80))

if (rbx.d s< 3)
    return 

int32_t i_4 = (rbx - 1).d
int32_t i_3 = 0
int32_t r12_1 = 0

if (arg3 s>= 0)
    r12_1 = arg3

int32_t var_110_1 = r12_1

if (arg4 s<= i_4)
    i_4 = arg4

if (i_4 - r12_1 s< 2)
    return 

int32_t rax_1 = *(arg1 + 0x10)
int64_t r14_1 = 0
uint64_t r15_1 = 0
uint64_t var_d0 = 0
int32_t var_c4_1 = 0
int64_t var_e8 = 0
int64_t var_e0_1 = 0
int32_t var_c8_1 = rbx.d
int64_t var_108
double zmm2[0x2]

if (rax_1 == *(arg1 + 0x3c))
    if (rbx.d s> 0)
        sub_1405a4cf0(&var_d0)
        r15_1 = var_d0
    
    uint64_t rcx_15 = r15_1
    
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
        sub_1405a4cf0(&var_d0)
        r15_1 = var_d0
    
    memset(r15_1, 0, rbx << 2)
    int32_t rdx_2 = *(arg1 + 0x80)
    
    if (rdx_2 s> 0)
        sub_1405dadb0(&var_e8, rdx_2)
        r14_1 = var_e8
    
    var_108:4.d = 1
    int32_t r11_1 = *(arg1 + 0x30)
    int32_t var_100
    var_100.q = arg1 + 0x18
    int32_t rcx_3 = 0
    var_108.d = 0
    int32_t r8_2 = 0
    int32_t var_f8_1 = 0xffffffff
    int64_t var_f4_1 = 0
    
    if (r11_1 != 0)
        void* rax_2 = *(arg1 + 0x28)
        void* r9 = arg1 + 0x18
        
        if (rax_2 != 0)
            r9 = rax_2
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r11_1 - 1)
        int32_t rdx_5 = *r9
        
        if (rdx_5 != 0)
        label_141f974cb:
            int32_t rax_9 = neg.d(rdx_5) & rdx_5
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_9)
            var_108:4.d = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_1
            
            var_f4_1.d = r8_2 - rax_10 + 0x1f
            
            if (r8_2 - rax_10 + 0x1f s> r11_1)
                var_f4_1.d = r11_1
        else
            while (true)
                int64_t rdx_6 = sx.q(rcx_3)
                r8_2 += 0x20
                rcx_3 += 1
                var_f4_1:4.d = r8_2
                var_108.d = rcx_3
                
                if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r9 + (rdx_6 << 2) + 4)
                var_f8_1 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_141f974cb
            
            var_f4_1.d = r11_1
    
    int32_t rdx_7 = *(arg1 + 0x30)
    zmm2 = var_f8_1.o
    var_f4_1.d = rdx_7
    int32_t r9_1 = 0xffffffff << (rdx_7.b & 0x1f)
    int32_t var_f8_2 = r9_1
    uint128_t var_80_1 = var_108.o
    int32_t r9_3 = rdx_7 & 0xffffffe0
    int32_t r8_5 = rdx_7 s>> 5
    double var_70_1[0x2] = zmm2
    int64_t var_90_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    uint128_t var_b0 = (arg1 + 8).o
    uint128_t var_a0_1 = var_80_1
    
    if (rdx_7 != r11_1)
        void* rax_12 = *(arg1 + 0x28)
        void* r10_1 = arg1 + 0x18
        
        if (rax_12 != 0)
            r10_1 = rax_12
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r11_1 - 1)
        int32_t rdx_11 = *(r10_1 + (sx.q(r8_5) << 2)) & r9_1
        
        if (rdx_11 != 0)
        label_141f975a3:
            int32_t rax_19 = neg.d(rdx_11) & rdx_11
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_19)
            int32_t rbx_1
            
            if (rax_19 == 0)
                rbx_1 = 0x20
            else
                rbx_1 = 0x1f - temp0_3
            
            var_f4_1.d = r9_3 - rbx_1 + 0x1f
            
            if (r9_3 - rbx_1 + 0x1f s> r11_1)
                var_f4_1.d = r11_1
        else
            while (true)
                int64_t rcx_8 = sx.q(r8_5)
                r9_3 += 0x20
                r8_5 += 1
                
                if (rcx_8.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(r10_1 + (rcx_8 << 2) + 4)
                var_f8_2 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_141f975a3
            
            var_f4_1.d = r11_1
    
    while (true)
        int64_t rax_21 = sx.q(var_a0_1:0xc.d)
        int64_t rcx_11 = var_b0.q
        
        if (rax_21.d == (var_f8_2.q u>> 0x20).d && var_a0_1.q == arg1 + 0x18 && rcx_11 == arg1 + 8)
            break
        
        int32_t* rax_23 = (rax_21 << 4) + *rcx_11
        *(r15_1 + (sx.q(rax_23[1]) << 2)) = *rax_23
        var_a0_1:8.d &= not.d(var_b0:0xc.d)
        sub_14059bdd0(&var_b0:8)
    
    r12_1 = var_110_1

int32_t rdx_13 = *(arg1 + 0x80)
int32_t rbx_4 = 0
int32_t var_100_1 = 0
int64_t r15_2 = 0
var_108 = 0
int32_t r13_2 = 0
int32_t var_fc_1 = 0

if (rdx_13 s> 0)
    sub_1405c5570(&var_108, rdx_13)
    r13_2 = var_fc_1
    rbx_4 = var_100_1
    r15_2 = var_108

uint64_t r8_6

if (r12_1 s< 0)
    r8_6 = var_d0
else
    int64_t i_1 = 0
    
    do
        int64_t rax_29 = *(arg1 + 0x78)
        int32_t rax_30 = rbx_4
        int32_t var_118_1 = rbx_4
        rbx_4 += 1
        
        if (rbx_4 s> r13_2)
            sub_1405a4d70(&var_108)
            rax_30 = var_118_1
            r13_2 = var_fc_1
            r15_2 = var_108
        
        int32_t rcx_19 = var_e0_1.d
        *(r15_2 + (sx.q(rax_30) << 3)) = *(rax_29 + (i_1 << 3))
        var_e0_1.d = rcx_19 + 1
        
        if (rcx_19 + 1 s> var_e0_1:4.d)
            sub_1405a4cf0(&var_e8)
            r14_1 = var_e8
        
        r8_6 = var_d0
        int32_t rax_33 = *(r8_6 + (i_1 << 2))
        i_1 += 1
        *(r14_1 + (sx.q(rcx_19) << 2)) = rax_33
    while (i_1 s<= sx.q(r12_1))
    
    r12_1 = var_110_1
    i_3 = 0

int64_t rcx_22 = sx.q(r12_1 + 1)
uint64_t i_5 = sx.q(i_4)
var_110_1.q = rcx_22
uint64_t i_7 = i_5
uint64_t i_6 = i_5

if (rcx_22 s< i_5)
    int64_t r12_3 = rcx_22 << 3
    int64_t rdx_16 = 0
    
    do
        double (* rax_35)[0x2] = *(arg1 + 0x78)
        int32_t zmm3 = *(rax_35 + rdx_16)
        uint128_t zmm0
        zmm0.d = (*(rax_35 + r12_3 + 8)).d f- zmm3
        
        if (zmm0.d f<= 0f || *(arg1 + 0x70) == 1)
            zmm2 = *(rax_35 + rdx_16 + 4)
        else
            zmm2 = *(rax_35 + r12_3)
            zmm2[0].d = zmm2[0].d f- zmm3
            zmm2[0].d = zmm2[0].d f/ zmm0.d
            zmm0.d = (*(rax_35 + r12_3 + 0xc)).d f- *(rax_35 + rdx_16 + 4)
            zmm2[0].d = zmm2[0].d f* zmm0.d
            zmm2[0].d = zmm2[0].d f+ *(rax_35 + rdx_16 + 4)
        
        zmm2[0].d = zmm2[0].d f- *(rax_35 + r12_3 + 4)
        
        if (not(_mm_and_ps(zmm2, 0x7fffffff)[0].d f<= arg2.d))
            int32_t rax_36 = rbx_4
            int32_t var_118_2 = rbx_4
            rbx_4 += 1
            
            if (rbx_4 s> r13_2)
                sub_1405a4d70(&var_108)
                rax_36 = var_118_2
                r13_2 = var_fc_1
                r15_2 = var_108
            
            int32_t rcx_25 = var_e0_1.d
            *(r15_2 + (sx.q(rax_36) << 3)) = *(rax_35 + r12_3)
            var_e0_1.d = rcx_25 + 1
            
            if (rcx_25 + 1 s> var_e0_1:4.d)
                sub_1405a4cf0(&var_e8)
                r14_1 = var_e8
            
            rdx_16 = r12_3
            r8_6 = var_d0
            *(r14_1 + (sx.q(rcx_25) << 2)) = *(r8_6 + (var_110_1.q << 2))
            rcx_22 = var_110_1.q
        
        rcx_22 += 1
        r12_3 += 8
        var_110_1.q = rcx_22
    while (rcx_22 s< i_5)
    
    i_5 = zx.q(i_4)
    i_3 = 0
    i_7 = i_6

if (i_5.d s< *(arg1 + 0x80))
    int32_t i_2 = i_4
    uint64_t rdx_19 = r8_6 + (i_7 << 2)
    int32_t var_118
    var_118.q = i_7 << 3
    var_110_1.q = rdx_19
    
    do
        int64_t r12_4 = sx.q(rbx_4)
        int32_t arg_8
        arg_8.q = *(arg1 + 0x78)
        rbx_4 = (r12_4 + 1).d
        
        if (rbx_4 s> r13_2)
            sub_1405a4d70(&var_108)
            rdx_19 = var_110_1.q
            r13_2 = var_fc_1
            r15_2 = var_108
        
        *(r15_2 + (r12_4 << 3)) = *(arg_8.q + var_118.q)
        int64_t r12_5 = sx.q(var_e0_1.d)
        int32_t rax_43 = (r12_5 + 1).d
        var_e0_1.d = rax_43
        
        if (rax_43 s> var_e0_1:4.d)
            sub_1405a4cf0(&var_e8)
            rdx_19 = var_110_1.q
            r14_1 = var_e8
        
        int32_t rax_44 = *rdx_19
        i_2 += 1
        var_118.q += 8
        rdx_19 += 4
        *(r14_1 + (r12_5 << 2)) = rax_44
        var_110_1.q = rdx_19
    while (i_2 s< *(arg1 + 0x80))
    
    i_3 = 0

if (arg1 + 0x78 != &var_108)
    int64_t rcx_31 = *(arg1 + 0x78)
    
    if (rcx_31 != 0)
        sub_140a74f90(rcx_31)
    
    *(arg1 + 0x78) = r15_2
    *(arg1 + 0x80) = rbx_4
    *(arg1 + 0x84) = r13_2
else if (r15_2 != 0)
    sub_140a74f90(r15_2)

sub_141453140(arg1 + 8, 0)
bool cond:5_1 = *(arg1 + 0x64) == 0
*(arg1 + 0x60) = 0

if (not(cond:5_1))
    sub_1405dadb0(arg1 + 0x58, 0)

if (*(arg1 + 0x80) s> 0)
    do
        sub_141f7f180(arg1 + 8, r14_1 + (sx.q(i_3) << 2), i_3)
        i_3 += 1
    while (i_3 s< *(arg1 + 0x80))

if (r14_1 != 0)
    sub_140a74f90(r14_1)

uint64_t rax = var_d0

if (rax != 0)
    sub_140a74f90(rax)
