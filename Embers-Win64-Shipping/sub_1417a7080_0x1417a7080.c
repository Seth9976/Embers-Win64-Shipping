// 函数: sub_1417a7080
// 地址: 0x1417a7080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
sub_1417b6db0(&arg1[0x6d])
int64_t* rbx = arg1[0x4c]

if (rbx[0x11].b != 0)
    sub_14175a890(rbx, 0)

float zmm6_1[0x4] = sub_141791890(arg1, &rbx[0x3c], arg_10)
sub_1417a8100(arg1, arg_10, zmm6_1)

if (arg1[0x100] != 0)
    void* rax_1 = arg1[0x102]
    void* rcx_4 = &arg1[0x104]
    
    if (rax_1 != 0)
        rcx_4 = rax_1
    
    arg1[0x100]((*(*rcx_4 + 8))(rcx_4))

int128_t zmm6_2 = arg_10
int64_t* rbx_1 = arg1[0x1e]
int64_t rdi = 0
uint64_t rsi_1 = sx.q(arg1[0x1f].d) << 3 u>> 3

if (rbx_1 u> &rbx_1[arg1[0x1f]])
    rsi_1 = 0

if (rsi_1 != 0)
    do
        int64_t* rcx_6 = *rbx_1
        int512_t zmm1_1
        zmm1_1.o = zmm6_2
        (*(*rcx_6 + 0x20))(rcx_6, zmm1_1)
        rdi += 1
        rbx_1 = &rbx_1[1]
    while (rdi != rsi_1)

sub_1417a9230(arg1, 0)
int64_t* rbx_2 = arg1[0x4c]
int64_t* rdi_1 = arg1[0x4d]

if (rbx_2[0x11].b != 0)
    sub_14175a890(rbx_2, 0)

float zmm7[0x4] = arg_10
int64_t (* var_c8)(int64_t* arg1, int32_t* arg2)
int32_t var_c0
int64_t* var_88

if (not(data_143ef7ec8 <= 0f))
    int64_t* var_b0
    __builtin_memset(&var_b0, 0, 0x15)
    void* var_b8 = &rbx_2[0x3c]
    int32_t var_98_1 = 0
    sub_141750820(&var_b8)
    void* i_4
    void* i = i_4
    
    while (i != 0)
        int32_t var_a0_1
        int64_t r8_1 = sx.q(var_a0_1)
        
        if (*(r8_1 + *(i + 0x158)) != 0 && *(r8_1 + *(i + 0x398)) == 4)
            int64_t rax_10 = *(i + 0x1b8)
            int64_t rcx_10 = r8_1 * 3
            float zmm0_1[0x4] = *(rax_10 + (rcx_10 << 2) + 4)
            float zmm6_3 = *(rax_10 + (rcx_10 << 2))
            float zmm1_2[0x4] = *(rax_10 + (rcx_10 << 2) + 8)
            int64_t rax_11 = *(i + 0x80)
            zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
            int64_t* rcx_11 = *(rax_11 + (r8_1 << 3))
            zmm1_2[0] = zmm1_2[0] * zmm1_2[0]
            zmm6_3 = (zmm6_3 * zmm6_3 + zmm0_1[0] + zmm1_2[0]) * zmm7[0] * zmm7[0]
            int32_t* rax_13 = (*(*rcx_11 + 0x28))(rcx_11, &var_88)
            zmm0_1 = rax_13[3]
            float zmm2_3 = rax_13[4]
            zmm0_1[0] = zmm0_1[0] f- *rax_13
            zmm2_3 = zmm2_3 f- rax_13[1]
            zmm1_2 = rax_13[5]
            zmm1_2[0] = zmm1_2[0] f- rax_13[2]
            
            if (zmm0_1[0] >= zmm2_3 || not(zmm0_1[0] < zmm1_2[0]))
                zmm0_1 = _mm_min_ss(zmm1_2[0], zmm2_3)
            
            zmm0_1[0] = zmm0_1[0] f* data_143ef7ec8
            zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
            
            if (not(zmm6_3 <= zmm0_1[0]))
                zmm7 = sub_1417b1510(zmm7, &i_4, rdi_1)
            
            i = i_4
        
        if (var_b0 != 0)
            int64_t* rdx_6 = var_b0
            int32_t var_90
            int32_t rax_26 = var_90 + 1
            var_90 = rax_26
            
            if (rax_26 s>= rdx_6[1].d)
            label_1417a72dd:
                var_98_1 += 1
                sub_141750820(&var_b8)
                i = i_4
            else
                int64_t (** rdx_7)(int64_t* arg1, int32_t* arg2) = *(*rdx_6 + (sx.q(rax_26) << 3))
                int64_t (* rcx_22)(int64_t* arg1, int32_t* arg2) = *rdx_7
                var_c0 = rdx_7[1].d
                char rax_29
                
                if (rcx_22 == 0)
                    rax_29 = 0
                else
                    rax_29 = *(rcx_22 + 0x40)
                
                char var_bc_1 = rax_29
                var_c8 = rcx_22
                i_4.o = var_c8.o
                i = i_4
        else
            int32_t rax_15 = var_a0_1 + 1
            var_a0_1 = rax_15
            int32_t var_94
            
            if (rax_15 s>= var_94)
                goto label_1417a72dd

void* rdx_3 = arg1[0xf6]
*(rdx_3 + 0x18) = arg1[0x4d]
int64_t arg_8 = 0
int512_t zmm1_3
int32_t zmm8
zmm1_3, zmm8 = sub_141735620(&arg1[0xf6], rdx_3, &arg_8)

if (arg1[0x110] != 0)
    sub_141766c70(&arg1[0xc0], &arg1[0x110])

if (arg1[0x108] != 0)
    void* rax_17 = arg1[0x10a]
    void* rcx_15 = &arg1[0x10c]
    
    if (rax_17 != 0)
        rcx_15 = rax_17
    
    arg1[0x108]((*(*rcx_15 + 8))(rcx_15))

int64_t rdi_2 = 0
int64_t* rbx_3 = arg1[0x1e]
int128_t zmm6_4 = arg_10
uint64_t rsi_3 = sx.q(arg1[0x1f].d) << 3 u>> 3

if (rbx_3 u> &rbx_3[arg1[0x1f]])
    rsi_3 = 0

if (rsi_3 != 0)
    do
        int64_t* rcx_17 = *rbx_3
        zmm1_3.o = zmm6_4
        (*(*rcx_17 + 8))(rcx_17, zmm1_3)
        rdi_2 += 1
        rbx_3 = &rbx_3[1]
    while (rdi_2 != rsi_3)

int64_t* rbx_4 = arg1[0x4c]

if (rbx_4[0x11].b != 0)
    sub_14175a890(rbx_4, 0)

sub_14177a2d0(&arg1[0x22], &rbx_4[0x36])
int64_t* rbx_5 = arg1[0x1e]
int64_t r15 = sx.q(arg1[0x1f].d)
int64_t rdi_3 = 0
uint64_t rsi_5 = r15 << 3 u>> 3

if (rbx_5 u> &rbx_5[r15])
    rsi_5 = 0

if (rsi_5 != 0)
    do
        int64_t* rcx_20 = *rbx_5
        (*(*rcx_20 + 0x38))(rcx_20)
        rdi_3 += 1
        rbx_5 = &rbx_5[1]
    while (rdi_3 != rsi_5)
    
    r15 = zx.q(arg1[0x1f].d)

if (&arg1[0x20] != &arg1[0x1e])
    int64_t rdi_4 = arg1[0x1e]
    int32_t r8_4 = *(arg1 + 0x10c)
    arg1[0x21].d = r15.d
    
    if (r15.d != 0 || r8_4 != 0)
        sub_1405c4a00(&arg1[0x20], r15.d, r8_4)
        memcpy(arg1[0x20], rdi_4, r15.d << 3)
    else
        *(arg1 + 0x10c) = 0

int64_t* arg_20 = &arg_8
sub_1416f47e0(arg1[0x20], arg1[0x21].d)
int64_t* rbx_7 = arg1[0x4c]
int64_t* r8_7 = rbx_7

if (rbx_7[0x11].b != 0)
    sub_14175a890(rbx_7, 0)
    r8_7 = arg1[0x4c]

int64_t rdx_12
int64_t r9
int512_t zmm1_4
rdx_12, r9, zmm1_4 = sub_141781d30(&arg1[0x22], &rbx_7[0x39], r8_7)
int64_t rdi_5 = 0
int64_t* rbx_8 = arg1[0x1e]
uint64_t rsi_7 = sx.q(arg1[0x1f].d) << 3 u>> 3

if (rbx_8 u> &rbx_8[arg1[0x1f]])
    rsi_7 = 0

if (rsi_7 != 0)
    do
        int64_t* rcx_28 = *rbx_8
        rdx_12, r9 = (*(*rcx_28 + 0x40))(rcx_28)
        rdi_5 += 1
        rbx_8 = &rbx_8[1]
    while (rdi_5 != rsi_7)

if (arg1[0x118] != 0)
    void* rax_33 = arg1[0x11a]
    void* rcx_29 = &arg1[0x11c]
    
    if (rax_33 != 0)
        rcx_29 = rax_33
    
    rdx_12, r9 = arg1[0x118]((*(*rcx_29 + 8))(rcx_29))

int64_t count_1 = sx.q(arg1[0x34].d)
int32_t rbx_9 = 0
char* var_e8 = nullptr
int32_t var_e0 = 0
int32_t var_dc = 0
int32_t temp0_2 = count_1.d

if (temp0_2 s> 0)
    var_e0 = count_1.d
    sub_140679a80(&var_e8)
    rdx_12, r9 = memset(var_e8, 0, count_1)
    rbx_9 = var_e0
else if (temp0_2 s< 0)
    int32_t rsi_9 = neg.d(count_1.d)
    
    if (rsi_9 != 0)
        uint32_t count = neg.d(count_1.d + rsi_9)
        
        if (count != 0)
            memmove(count_1, nullptr, count)
            rbx_9 = var_e0
        
        var_e0 = rbx_9 - rsi_9
        rdx_12, r9 = sub_1405dac10(&var_e8)
        rbx_9 = var_e0

int64_t rsi_10 = sx.q(arg1[0x34].d)
int64_t*** var_d8 = nullptr
int32_t i_7 = 0
int32_t temp1 = rsi_10.d

if (temp1 s> 0)
    i_7 = rsi_10.d
    sub_1405a4f90(&var_d8)
    rdx_12, r9 = memset(var_d8, 0, rsi_10 << 4)
    rbx_9 = var_e0
else if (temp1 s< 0)
    int32_t i_8 = neg.d(rsi_10.d)
    
    if (i_8 != 0)
        int32_t i_5 = i_8
        int64_t rbx_11 = rsi_10 << 4
        int32_t i_1
        
        do
            int64_t rcx_37 = *rbx_11
            
            if (rcx_37 != 0)
                sub_140a74f90(rcx_37)
            
            rbx_11 += 0x10
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
        int32_t i_9 = i_7
        int32_t rcx_39 = i_9 - i_8
        
        if (rcx_39 != rsi_10.d)
            int64_t*** rdx_15 = var_d8
            memmove(&rdx_15[rsi_10 * 2], rdx_15, (rcx_39 - rsi_10.d) << 4)
            i_9 = i_7
        
        i_7 = i_9 - i_8
        rdx_12, r9 = sub_1405a5010(&var_d8)
        rbx_9 = var_e0

int64_t rdi_6 = sx.q(arg1[0x34].d)

if (rdi_6.d s> rbx_9)
    int32_t rdi_7 = rdi_6.d - rbx_9
    int32_t rax_38 = rbx_9 + rdi_7
    int32_t var_e0_1 = rax_38
    
    if (rax_38 s> var_dc)
        sub_140679a80(&var_e8)
    
    rdx_12, r9 = memset(&var_e8[sx.q(rbx_9)], 0, sx.q(rdi_7))
else if (rdi_6.d s< rbx_9)
    int32_t rsi_12 = rbx_9 - rdi_6.d
    
    if (rbx_9 != rdi_6.d)
        int32_t rax_40 = rbx_9 - rsi_12
        
        if (rax_40 != rdi_6.d)
            memmove(&var_e8[rdi_6], &var_e8[sx.q(rsi_12 + rdi_6.d)], rax_40 - rdi_6.d)
            rbx_9 = var_e0
        
        int32_t var_e0_2 = rbx_9 - rsi_12
        rdx_12, r9 = sub_1405dac10(&var_e8)

if (not(arg_10 f<= zmm8))
    int32_t rcx_49 = arg1[0x34].d
    int32_t* var_80_1 = &arg_10
    var_88 = arg1
    int64_t**** var_78_1 = &var_d8
    int64_t* var_70_1 = &var_e8
    var_c0.q = &var_88
    var_c8 = sub_1417a8c50
    rdx_12, zmm1_4 = sub_1417487a0(rcx_49, &var_c8, 0, r9)

int64_t* rbx_13 = arg1[0x1e]
int64_t rdi_8 = 0
int128_t zmm6_5 = arg_10
uint64_t rsi_14 = sx.q(arg1[0x1f].d) << 3 u>> 3

if (rbx_13 u> &rbx_13[arg1[0x1f]])
    rsi_14 = 0

if (rsi_14 != 0)
    do
        int64_t* rcx_50 = *rbx_13
        zmm1_4.o = zmm6_5
        rdx_12 = (*(*rcx_50 + 0x10))(rcx_50, zmm1_4)
        rdi_8 += 1
        rbx_13 = &rbx_13[1]
    while (rdi_8 != rsi_14)

int32_t i_2 = 0
arg_8.d = 0

if (arg1[0x34].d s> 0)
    int64_t (* r12_3)(int64_t* arg1, int32_t* arg2) = nullptr
    var_c8 = nullptr
    int64_t* rsi_15 = nullptr
    arg_20 = nullptr
    
    do
        if (*(var_e8 + r12_3) != 0)
            int64_t rax_47 = arg1[0x33]
            int64_t r12_4 = 0
            int64_t* rdi_9 = arg1[0x4c]
            int64_t* r15_2 = *(rsi_15 + rax_47)
            uint64_t r13_2 = sx.q(*(rsi_15 + rax_47 + 8)) << 3 u>> 3
            
            if (r15_2 u> &r15_2[sx.q(*(rsi_15 + rax_47 + 8))])
                r13_2 = 0
            
            if (r13_2 != 0)
                do
                    int64_t* rsi_16 = *r15_2
                    int64_t* rbx_14 = nullptr
                    
                    if (*(rsi_16 + 0xc) u>= 2)
                        rbx_14 = rsi_16
                    
                    if (rbx_14 != 0)
                        void* rcx_51 = *rbx_14
                        int64_t rdx_20 = sx.q(rbx_14[1].d)
                        char r8_16 = *(rdx_20 + *(rcx_51 + 0x398))
                        
                        if ((r8_16 == 4 || r8_16 == 1) && *(rdx_20 + *(rcx_51 + 0x368)) == 0)
                            sub_14177fe50(rcx_51, rdx_20.d, 1)
                            sub_14177fa60(*rbx_14, zx.q(rbx_14[1].d), 1)
                            char rax_52 = *(rsi_16 + 0xc)
                            int64_t* rcx_53 = nullptr
                            
                            if (rax_52 u>= 3)
                                rcx_53 = rsi_16
                            
                            if (rcx_53 == 0)
                                sub_14179c500(rbx_14, &rdi_9[0x12], &rdi_9[0x1c])
                            else if (rax_52 != 6)
                                sub_14179c500(rcx_53, &rdi_9[0x1e], &rdi_9[0x28])
                            else
                                rdi_9[0x11].b = 1
                    
                    r15_2 = &r15_2[1]
                    r12_4 += 1
                while (r12_4 != r13_2)
                
                rsi_15 = arg_20
            
            if (rdi_9[0x11].b != 0)
                sub_14175a890(rdi_9, 0)
            
            rdx_12, zmm1_4 = sub_14175b460(rdi_9)
            i_2 = arg_8.d
            r12_3 = var_c8
        
        int64_t*** rax_53 = var_d8
        int64_t rdi_10 = 0
        int64_t** rbx_15 = *(rax_53 + rsi_15)
        uint64_t rsi_18 = sx.q(*(rax_53 + rsi_15 + 8)) << 3 u>> 3
        
        if (rbx_15 u> &rbx_15[sx.q(*(rax_53 + rsi_15 + 8))])
            rsi_18 = 0
        
        if (rsi_18 != 0)
            do
                rdx_12, zmm1_4 = sub_1417abc90(arg1, *rbx_15)
                rdi_10 += 1
                rbx_15 = &rbx_15[1]
            while (rdi_10 != rsi_18)
        
        i_2 += 1
        rsi_15 = &arg_20[2]
        arg_8.d = i_2
        r12_3 += 1
        arg_20 = rsi_15
        var_c8 = r12_3
    while (i_2 s< arg1[0x34].d)

zmm1_4.o = arg_10
sub_1417a6120(&arg1[0x6d], rdx_12, &arg1[0xc0])
int64_t* rbx_16 = arg1[0x4c]

if (rbx_16[0x11].b != 0)
    sub_14175a890(rbx_16, 0)

void* rax_56 = arg1[0x10]
void* rcx_60 = &arg1[0x12]
arg_8.d = arg_10

if (rax_56 != 0)
    rcx_60 = rax_56

int64_t result = arg1[0xe]((*(*rcx_60 + 8))(rcx_60), &rbx_16[0x3c], &arg_8)
int32_t i_6 = i_7
int64_t*** rbx_17 = var_d8

if (i_6 != 0)
    int32_t i_3
    
    do
        int64_t** rcx_62 = *rbx_17
        
        if (rcx_62 != 0)
            result = sub_140a74f90(rcx_62)
        
        rbx_17 = &rbx_17[2]
        i_3 = i_6
        i_6 -= 1
    while (i_3 != 1)
    rbx_17 = var_d8

if (rbx_17 != 0)
    result = sub_140a74f90(rbx_17)

char* rcx_64 = var_e8

if (rcx_64 == 0)
    return result

return sub_140a74f90(rcx_64)
