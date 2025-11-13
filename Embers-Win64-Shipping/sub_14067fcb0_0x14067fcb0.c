// 函数: sub_14067fcb0
// 地址: 0x14067fcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a464c0()
int16_t* const rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

int64_t* rax_1 = (*(data_14399ea08 + 0x20))(&data_14399ea08, rdx, 0)

if (rax_1 == 0)
    return rax_1

int16_t arg_18 = 0xfeff
(*(*rax_1 + 0x150))(rax_1, &arg_18, 2)
int32_t rsi = 0
int16_t* var_148 = nullptr
int32_t var_140 = 0
sub_1405947f0(&var_148, 2)
int32_t rdi = var_140 + 2

if (rdi s> 0)
    sub_140594770(&var_148)

int16_t* r12 = var_148
UnDecorator::getReferenceType(r12, U"{}[\nt", 4)
uint64_t r13 = -1
uint64_t rcx_4
int16_t* rdx_3

if (rdi == 0)
    rdx_3 = &data_142d40450
    rcx_4 = 0
label_14067fdd7:
    
    if (rcx_4.d == 0xffffffff)
        rcx_4 = -1
        
        do
            rcx_4 += 1
        while (rdx_3[rcx_4] != 0)
else
    if (r12 != 0)
        rdx_3 = r12
        rcx_4 = zx.q(rdi - 1)
        
        if (rdi - 1 s> 0 && r12[sx.q(rdi - 1) - 1] == 0)
            rcx_4 = zx.q(rdi - 2)
        
        goto label_14067fdd7
    
    rdx_3 = nullptr
    rcx_4 = 0

(*(*rax_1 + 0x150))(rax_1, rdx_3, sx.q(rcx_4.d) * 2)
void* r10 = *(arg1 + 0x28)
int32_t rcx_6 = 0
int32_t r8_2 = 0
int32_t* r10_1 = r10 + 0x10
int32_t arg_20 = 0
int32_t var_100 = 0
int32_t var_fc = 1
int32_t* var_f8 = r10_1
int32_t r11 = r10_1[6]
int32_t var_f0 = 0xffffffff
int64_t var_ec = 0

if (r11 != 0)
    int32_t* rax_5 = *(r10_1 + 0x10)
    int32_t* r9_1 = r10_1
    
    if (rax_5 != 0)
        r9_1 = rax_5
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_6 = *r9_1
    
    if (rdx_6 != 0)
    label_14067fe9a:
        int32_t rax_11 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_fc_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        var_ec.d = r8_2 - rax_12 + 0x1f
        
        if (r8_2 - rax_12 + 0x1f s> r11)
            var_ec.d = r11
    else
        while (true)
            rcx_6 += 1
            r8_2 += 0x20
            var_100 = rcx_6
            var_ec:4.d = r8_2
            
            if (rcx_6 s> ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            int32_t var_f0_1 = 0xffffffff
            rdx_6 = r9_1[sx.q(rcx_6)]
            
            if (rdx_6 != 0)
                goto label_14067fe9a
        
        var_ec.d = r11
    
    r10_1 = var_f8

void* r11_1 = r10
int32_t r14 = r10_1[6]
int32_t rdx_7 = *(r11_1 + 0x28)
int32_t var_70 = var_100.o.d
void* var_78 = r11_1
int128_t zmm0 = var_78.o
int32_t r8_5 = rdx_7 s>> 5
int128_t var_60 = 0xffffffff
int32_t r15_1 = 0xffffffff << (rdx_7.b & 0x1f)
int32_t r9_3 = rdx_7 & 0xffffffe0
int32_t var_c8 = r15_1
int64_t var_80 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_c4 = rdx_7
int128_t var_a0 = zmm0
int128_t var_68
int128_t var_90 = var_68

if (rdx_7 != r14)
    int32_t* rax_14 = *(r10_1 + 0x10)
    
    if (rax_14 != 0)
        r10_1 = rax_14
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r14 - 1)
    int32_t rdx_11 = r10_1[sx.q(r8_5)] & r15_1
    int32_t var_c4_2
    
    if (rdx_11 != 0)
    label_14067ff75:
        int32_t rax_20 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
        int32_t rdi_2
        
        if (rax_20 == 0)
            rdi_2 = 0x20
        else
            rdi_2 = 0x1f - temp0_4
        
        int32_t var_c4_1 = r9_3 - rdi_2 + 0x1f
        
        if (r9_3 - rdi_2 + 0x1f s> r14)
            var_c4_2 = r14
    else
        while (true)
            r8_5 += 1
            r9_3 += 0x20
            
            if (r8_5 s> ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            var_c8 = 0xffffffff
            rdx_11 = r10_1[sx.q(r8_5)]
            
            if (rdx_11 != 0)
                goto label_14067ff75
        
        var_c4_2 = r14
    r11_1 = r10
    r10_1 = var_f8

uint64_t rax_23 = var_c8.q u>> 0x20
uint64_t var_a8 = rax_23

while (true)
    int64_t rcx_12 = sx.q(var_90:0xc.d)
    int64_t* rdx_12 = var_a0.q
    
    if (rcx_12.d != rax_23.d || var_90.q != r10_1 || rdx_12 != r11_1)
        rax_23.b = 1
    else
        rax_23.b = 0
    
    if (rax_23.b == 0)
        break
    
    int64_t* rdi_3 = *rdx_12 + rcx_12 * 0x28
    sub_140596d10(&var_78, rdi_3)
    int64_t rax_25 = rdi_3[2]
    int64_t* rax_26 = rdi_3[3]
    
    if (rax_26 != 0)
        rax_26[1].d += 1
    
    int16_t* var_138 = nullptr
    int32_t var_130_1 = 0
    sub_1405947f0(&var_138, 2)
    int32_t rdi_4 = var_130_1 + 2
    
    if (rdi_4 s> 0)
        sub_140594770(&var_138)
    
    int16_t* r14_1 = var_138
    UnDecorator::getReferenceType(r14_1, &data_142d4056c, 4)
    
    if (r12 != 0)
        sub_140a74f90(r12)
    
    var_138 = nullptr
    int64_t var_130_2 = 0
    uint64_t rcx_19
    int16_t* rdx_15
    
    if (rdi_4 == 0)
        rdx_15 = &data_142d40450
        rcx_19 = 0
    label_14068009f:
        
        if (rcx_19.d == 0xffffffff)
            rcx_19 = -1
            
            do
                rcx_19 += 1
            while (rdx_15[rcx_19] != 0)
    else
        rcx_19 = zx.q(rdi_4 - 1)
        
        if (r14_1 != 0)
            rdx_15 = r14_1
            
            if (rcx_19.d s> 0 && r14_1[sx.q(rdi_4) - 2] == 0)
                rcx_19 = zx.q(rcx_19.d - 1)
            
            goto label_14068009f
        
        rdx_15 = nullptr
        rcx_19 = 0
    
    (*(*rax_1 + 0x150))(rax_1, rdx_15, sx.q(rcx_19.d) * 2)
    void* r12_1 = &data_142d40450
    int32_t r13_1 = 0
    
    if (var_70 != 0)
        r12_1 = var_78
    
    int32_t rcx_21 = var_70 - 1
    
    if (var_70 == 0)
        rcx_21 = 0
    
    int32_t var_e0_1 = rcx_21
    
    while (r13_1 s< rcx_21)
        int16_t* var_128 = nullptr
        int16_t* r15_2 = nullptr
        int32_t var_120_1 = 0
        int32_t rdi_5 = 0
        
        if (r12_1 != 0 && *r12_1 != 0)
            sub_1405947f0(&var_128, 2)
            rdi_5 = var_120_1 + 2
            
            if (rdi_5 s> 0)
                sub_140594770(&var_128)
            
            r15_2 = var_128
            UnDecorator::getReferenceType(r15_2, r12_1, 2)
            r15_2[sx.q(rdi_5) - 1] = 0
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
        
        var_128 = nullptr
        r14_1 = r15_2
        int64_t var_120_2 = 0
        uint64_t rax_32
        int16_t* const rdx_18
        int32_t rcx_26
        
        if (rdi_5 == 0)
            rdx_18 = &data_142d40450
            rcx_26 = 0
        label_1406801bf:
            
            if (rcx_26 != 0xffffffff)
                rax_32 = zx.q(rcx_26)
            else
                rax_32 = -1
                
                do
                    rax_32 += 1
                while (rdx_18[rax_32] != 0)
        else
            rcx_26 = rdi_5 - 1
            
            if (r15_2 != 0)
                rdx_18 = r15_2
                
                if (rcx_26 s> 0 && r15_2[sx.q(rdi_5) - 2] == 0)
                    rcx_26 -= 1
                
                goto label_1406801bf
            
            rdx_18 = nullptr
            rax_32 = 0
        int64_t r9_5 = *rax_1
        (*(r9_5 + 0x150))(rax_1, rdx_18, sx.q(rax_32.d) * 2, r9_5)
        rcx_21 = var_e0_1
        r13_1 += 1
        r12_1 += 2
    
    int16_t* var_118 = nullptr
    int32_t var_110_1 = 0
    sub_1405947f0(&var_118, 2)
    int32_t rdi_6 = var_110_1 + 2
    
    if (rdi_6 s> 0)
        sub_140594770(&var_118)
    
    int16_t* r15_3 = var_118
    UnDecorator::getReferenceType(r15_3, &data_142d4056c, 4)
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    var_118 = nullptr
    int64_t var_110_2 = 0
    uint64_t rcx_32
    int16_t* const rdx_20
    
    if (rdi_6 == 0)
        rdx_20 = &data_142d40450
        rcx_32 = 0
    label_140680327:
        
        if (rcx_32.d != 0xffffffff)
            r13 = -1
        else
            r13 = -1
            rcx_32 = -1
            
            do
                rcx_32 += 1
            while (rdx_20[rcx_32] != 0)
    else
        rcx_32 = zx.q(rdi_6 - 1)
        
        if (r15_3 != 0)
            rdx_20 = r15_3
            
            if (rcx_32.d s> 0 && r15_3[sx.q(rdi_6) - 2] == 0)
                rcx_32 = zx.q(rcx_32.d - 1)
            
            goto label_140680327
        
        rdx_20 = nullptr
        rcx_32 = 0
        r13 = -1
    
    (*(*rax_1 + 0x150))(rax_1, rdx_20, sx.q(rcx_32.d) * 2)
    var_148 = nullptr
    int32_t var_140_1 = 0
    sub_1405947f0(&var_148, 2)
    int32_t rdi_7 = var_140_1 + 2
    
    if (rdi_7 s> 0)
        sub_140594770(&var_148)
    
    r12 = var_148
    UnDecorator::getReferenceType(r12, &data_142d84ee0, 4)
    
    if (r15_3 != 0)
        sub_140a74f90(r15_3)
    
    var_148 = nullptr
    int64_t var_140_2 = 0
    uint64_t rcx_38
    int16_t* const rdx_22
    
    if (rdi_7 == 0)
        rdx_22 = &data_142d40450
        rcx_38 = 0
    label_14068035e:
        
        if (rcx_38.d == 0xffffffff)
            rcx_38 = -1
            
            do
                rcx_38 += 1
            while (rdx_22[rcx_38] != 0)
    else
        rcx_38 = zx.q(rdi_7 - 1)
        
        if (r12 != 0)
            rdx_22 = r12
            
            if (rcx_38.d s> 0 && r12[sx.q(rdi_7) - 2] == 0)
                rcx_38 = zx.q(rcx_38.d - 1)
            
            goto label_14068035e
        
        rdx_22 = nullptr
        rcx_38 = 0
    
    (*(*rax_1 + 0x150))(rax_1, rdx_22, sx.q(rcx_38.d) * 2)
    int32_t rdx_24 = arg_20 + 1
    arg_20 = rdx_24
    int64_t* var_d0_1 = rax_26
    void* rax_38 = *(arg1 + 0x28)
    int32_t rcx_41 = *(rax_38 + 8) - *(rax_38 + 0x34)
    int64_t var_d8 = rax_25
    
    if (rax_26 != 0)
        rax_26[1].d += 1
    
    void arg_10
    sub_14067e660(&arg_10, &var_d8, rax_1, rdx_24 s>= rcx_41)
    
    if (rax_26 != 0)
        rax_26[1].d -= 1
        
        if (rax_26[1].d == 1)
            (**rax_26)(rax_26)
            int32_t temp6_1 = *(rax_26 + 0xc)
            *(rax_26 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rax_26 + 8))(rax_26, 1)
    
    void* rcx_45 = var_78
    
    if (rcx_45 != 0)
        sub_140a74f90(rcx_45)
    
    var_90:8.d &= not.d(var_a0:0xc.d)
    sub_14059bdd0(&var_a0:8)
    rax_23 = var_a8
    r10_1 = var_f8
    r11_1 = r10

var_148 = nullptr
int32_t var_140_3 = 0
sub_1405947f0(&var_148, 2)
int32_t r14_2 = var_140_3 + 2

if (r14_2 s> 0)
    sub_140594770(&var_148)

int16_t* rdi_9 = var_148
UnDecorator::getReferenceType(rdi_9, &(*U"{}[\nt")[1], 4)

if (r12 != 0)
    sub_140a74f90(r12)

int16_t* rdx_27

if (r14_2 == 0)
    rdx_27 = &data_142d40450
label_140680529:
    
    if (rsi != 0xffffffff)
        r13 = zx.q(rsi)
    else
        do
            r13 += 1
        while (rdx_27[r13] != 0)
else
    if (rdi_9 != 0)
        rdx_27 = rdi_9
        rsi = r14_2 - 1
        
        if (r14_2 - 1 s> 0 && rdi_9[sx.q(r14_2 - 1) - 1] == 0)
            rsi = r14_2 - 2
        
        goto label_140680529
    
    rdx_27 = nullptr
    r13 = zx.q(rsi)

(*(*rax_1 + 0x150))(rax_1, rdx_27, sx.q(r13.d) * 2)
(*(*rax_1 + 0x1b8))(rax_1)

if (rdi_9 != 0)
    sub_140a74f90(rdi_9)

int64_t r8_17 = *rax_1
(*r8_17)(rax_1, 1, r8_17)
int64_t rax_48
rax_48.b = 1
return rax_48
