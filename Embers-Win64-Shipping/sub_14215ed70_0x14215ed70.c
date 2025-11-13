// 函数: sub_14215ed70
// 地址: 0x14215ed70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t rdi = sx.q(*(arg1 + 0x98))
int32_t rax = (rdi + 1).d
*(arg1 + 0x98) = rax

if (rax s> *(arg1 + 0x9c))
    sub_1405a4d70(arg1 + 0x90)
    arg2 = arg_10

*(*(arg1 + 0x90) + (rdi << 3)) = arg2
int64_t* rcx_1 = arg_10
int64_t* var_78
(*(*rcx_1 + 0x2d0))(rcx_1, &var_78)
uint128_t var_b8
int32_t arg_8

if (var_78 != 0)
    uint128_t zmm0 = var_78.o
    var_b8 = zmm0
    void* rax_3 = _mm_bsrli_si128(zmm0, 8).q
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int128_t* var_38 = &var_b8
    int64_t** var_30_1 = &arg_10
    sub_1409465c0(arg1 + 0xa0, &arg_8, &var_38, nullptr)
    int64_t* rbx_1 = var_b8:8.q
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rsi_1 = *(arg1 + 0xf0)
    int64_t* rbx_2 = rsi_1
    void* rdi_1 = &rsi_1[sx.q(*(arg1 + 0xf8)) * 3]
    
    if (rsi_1 != rdi_1)
        do
            int64_t* rcx_6 = var_78
            
            if ((*(*rcx_6 + 0x80))(rcx_6, *rbx_2) != 0)
                int32_t rdx_6 = ((rbx_2 - rsi_1) s/ 0x18).d
                
                if (rdx_6 != 0xffffffff)
                    sub_140974890(arg1 + 0xf0, rdx_6, 1, 1)
                
                break
            
            rbx_2 = &rbx_2[3]
        while (rbx_2 != rdi_1)

int64_t* rcx_8 = *(arg1 + 0x6e8)

if (rcx_8 != 0)
    (*(*rcx_8 + 0x288))(rcx_8, arg_10)

int64_t* rsi_2 = arg_10

if (rsi_2 != 0)
    int64_t* i = *(arg1 + 0x198)
    
    for (void* rdi_2 = &i[sx.q(*(arg1 + 0x1a0)) * 5]; i != rdi_2; i = &i[5])
        if (*(i + 0x1f) != 0 && i[2] != 0)
            sub_14213fce0(rsi_2, i, 2, i[3].d)

void* rsi_3 = *(arg1 + 0x6f0)
int32_t rbx_4 = 0
int32_t rcx_11 = 0
var_b8.d = 0
var_b8:4.d = 1
int32_t r8_2 = 0
int32_t var_a8 = 0xffffffff
int64_t var_a4 = 0
int32_t r10 = *(rsi_3 + 0xc8)
void* r9_3 = rsi_3 + 0xb0
var_b8:8.q = r9_3

if (r10 != 0)
    void* rax_14 = *(r9_3 + 0x10)
    
    if (rax_14 != 0)
        r9_3 = rax_14
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_11 = *r9_3
    
    if (rdx_11 != 0)
    label_14215efb8:
        int32_t rax_21 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_1
        int32_t temp0_3
        temp0_3, rflags_1 = _bit_scan_reverse(rax_21)
        var_b8:4.d = rax_21
        int32_t rax_22
        
        if (rax_21 == 0)
            rax_22 = 0x20
        else
            rax_22 = 0x1f - temp0_3
        
        var_a4.d = r8_2 - rax_22 + 0x1f
        
        if (r8_2 - rax_22 + 0x1f s> r10)
            var_a4.d = r10
    else
        while (true)
            int64_t rdx_12 = sx.q(rcx_11)
            r8_2 += 0x20
            rcx_11 += 1
            var_a4:4.d = r8_2
            var_b8.d = rcx_11
            
            if (rdx_12.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r9_3 + (rdx_12 << 2) + 4)
            var_a8 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_14215efb8
        
        var_a4.d = r10

uint128_t zmm2 = var_a8.o
int64_t* var_90 = rsi_3 + 0xa0
uint128_t var_50 = zmm2
uint128_t var_60 = var_b8
var_b8 = (rsi_3 + 0xa0).o
uint64_t var_98 = (_mm_unpackhi_pd(zmm2, zmm2.q)).q
int128_t var_58
var_a8.o = var_58
int32_t i_3

if ((zmm2.q u>> 0x20).d s< r10)
    int32_t i_1 = i_3
    
    do
        sub_1421599e0(rsi_3 + 0x50, &arg_8, *var_b8.q + sx.q(i_1) * 0x18, nullptr)
        var_a4:4.d &= not.d(var_b8:0xc.d)
        sub_14059bdd0(&var_b8:8)
        i_1 = i_3
    while (i_1 s< *(var_a8.q + 0x18))

sub_142165ea0(rsi_3 + 0xa0, 0)
var_b8.d = 0
int32_t r10_1 = *(arg1 + 0x350)
void* r8_5 = arg1 + 0x338
var_b8:4.d = 1
int32_t rcx_17 = 0
var_b8:8.q = r8_5
int32_t var_a8_1 = 0xffffffff
int64_t var_a4_1 = 0

if (r10_1 != 0)
    void* rax_31 = *(r8_5 + 0x10)
    
    if (rax_31 != 0)
        r8_5 = rax_31
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r10_1 - 1)
    int32_t rdx_17 = *r8_5
    
    if (rdx_17 != 0)
    label_14215f0f6:
        int32_t rax_38 = neg.d(rdx_17) & rdx_17
        uint64_t rflags_2
        int32_t temp0_5
        temp0_5, rflags_2 = _bit_scan_reverse(rax_38)
        var_b8:4.d = rax_38
        int32_t rdi_3
        
        if (rax_38 == 0)
            rdi_3 = 0x20
        else
            rdi_3 = 0x1f - temp0_5
        
        var_a4_1.d = rcx_17 - rdi_3 + 0x1f
        
        if (rcx_17 - rdi_3 + 0x1f s> r10_1)
            var_a4_1.d = r10_1
    else
        while (true)
            int64_t rdx_18 = sx.q(rbx_4)
            rcx_17 += 0x20
            rbx_4 += 1
            var_a4_1:4.d = rcx_17
            var_b8.d = rbx_4
            
            if (rdx_18.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_17 = *(r8_5 + (rdx_18 << 2) + 4)
            var_a8_1 = 0xffffffff
            
            if (rdx_17 != 0)
                goto label_14215f0f6
        
        var_a4_1.d = r10_1

double zmm4[0x2] = var_a8_1.o
void* var_40 = arg1 + 0x328
double var_50_1[0x2] = zmm4
uint128_t var_60_1 = var_b8
int16_t var_80 = 0
void* result = var_58.q
var_a8_1.o = var_58
var_b8 = (arg1 + 0x328).o
double rcx_19 = zmm4[0]
uint128_t zmm0_1
zmm0_1.q = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
var_98.o = zmm0_1

if ((rcx_19 u>> 0x20).d s< *(result + 0x18))
    int32_t i_2 = i_3
    
    do
        int64_t rdx_20 = sx.q(i_2) * 3
        int64_t rcx_21 = *var_b8.q
        
        if ((*(rcx_21 + (rdx_20 << 3)) & 1) != 0)
            int64_t* rax_42 = arg_10
            void* r8_6 = *(rcx_21 + (rdx_20 << 3) + 8)
            int64_t* rcx_22 = rax_42[0x278]
            
            if (rcx_22 == 0)
                sub_141f77ab0(&rax_42[0x279], &arg_8, r8_6 + 0x1c, nullptr)
            else
                (*(*rcx_22 + 0x278))(rcx_22, r8_6, r8_6)
        
        var_a4_1:4.d &= not.d(var_b8:0xc.d)
        sub_14059bdd0(&var_b8:8)
        result = var_a8_1.q
        i_2 = i_3
    while (i_2 s< *(result + 0x18))
    
    if (var_80.b != 0 && var_80:1.b != 0)
        result = sub_140b9ddc0(arg1 + 0x328, *(arg1 + 0x330) - *(arg1 + 0x35c), 1)

int64_t* var_70

if (var_70 != 0)
    var_70[1].d -= 1
    
    if (var_70[1].d == 1)
        result = (**var_70)(var_70)
        int32_t temp7_1 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (temp7_1 == 1)
            return (*(*var_70 + 8))(var_70, 1)

return result
