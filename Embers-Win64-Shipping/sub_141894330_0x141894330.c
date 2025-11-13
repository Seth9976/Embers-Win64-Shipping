// 函数: sub_141894330
// 地址: 0x141894330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t var_118 = 0
int32_t var_110 = 0
sub_1405947f0(&var_118, 0x1a)
int32_t rax = var_110 + 0x1a
var_110 = rax

if (rax s> 0)
    sub_140594770(&var_118)

UnDecorator::getReferenceType(var_118, u"BuildA: Chunked data size", 0x34)
int64_t* rcx_3 = arg1[2]
int64_t r8
r8.b = 1
int64_t* rax_2 = (*(*rcx_3 + 8))(rcx_3, &var_118, r8, 0)
int64_t rcx_4 = var_118

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t var_108 = 0
int32_t var_100 = 0
sub_1405947f0(&var_108, 0x16)
int32_t rax_3 = var_100 + 0x16
var_100 = rax_3

if (rax_3 s> 0)
    sub_140594770(&var_108)

UnDecorator::getReferenceType(var_108, u"BuildA: Chunking time", 0x2c)
int64_t* rcx_8 = arg1[2]
int64_t* rax_5 = (*(*rcx_8 + 8))(rcx_8, &var_108, 0, 0)
int64_t rcx_9 = var_108

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t var_f8 = 0
int32_t var_f0 = 0
sub_1405947f0(&var_f8, 0x11)
int32_t rax_6 = var_f0 + 0x11
var_f0 = rax_6

if (rax_6 s> 0)
    sub_140594770(&var_f8)

UnDecorator::getReferenceType(var_f8, u"BuildA: Progress", 0x22)
int64_t* rcx_13 = arg1[2]
int64_t r8_1
r8_1.b = 3
int64_t* rax_8 = (*(*rcx_13 + 8))(rcx_13, &var_f8, r8_1, 0)
int64_t rcx_14 = var_f8

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t* rcx_15 = arg1[1]
int64_t rdx_6 = *rcx_15
int64_t* rax_9 = (*(rdx_6 + 0x18))(rcx_15, rdx_6)
int64_t* r12 = rax_9
int64_t rax_10 = sub_141830c70(rax_9)
int32_t rcx_17 = arg1[0xc].d
int64_t rdi = rax_10
int32_t rsi_1 = rcx_17 << 5
int64_t r13 = 0
int32_t arg_10 = rsi_1
int64_t r15 = 0
int64_t var_148 = 0
int64_t var_140 = 0
int32_t rdx_7 = rcx_17 + rsi_1

if (rdx_7 s> 0)
    sub_1405c5510(&var_148, rdx_7)
    rbx = var_140.d
    r15 = var_148

void arg_18
sub_141828370(&arg_18)
int64_t* rcx_20 = arg1[1]
char rax_12
int64_t r9
rax_12, r9 = (*(*rcx_20 + 0x10))(rcx_20)
uint128_t zmm8 = 0x3ff0000000000000
int32_t var_138
int32_t arg_8

if (rax_12 == 0)
    uint128_t zmm6 = 0x43f0000000000000
    int128_t zmm0_1
    zmm0_1.q = float.d(rdi)
    
    if (rdi s< 0)
        zmm0_1.q = zmm0_1.q f+ zmm6.q
    
    uint128_t zmm7
    zmm7.q = zmm8.q f/ zmm0_1.q
    char i
    
    do
        uint64_t rdi_1 = zx.q(rbx)
        int32_t rcx_21 = rdi_1.d + rsi_1
        
        if (rcx_21 s> rbx)
            rbx = rcx_21
            var_140.d = rcx_21
            
            if (rcx_21 s> var_140:4.d)
                sub_1405daba0(&var_148)
                rbx = var_140.d
                r15 = var_148
        else if (rcx_21 s< rbx)
            int32_t rdx_9 = rdi_1.d
            
            if (rdx_9 != rcx_21)
                rbx = rcx_21
                
                if (rcx_21 != rcx_21)
                    memmove(sx.q(rcx_21) + r15, sx.q(rdx_9) + r15, 0)
                
                var_140.d = rbx
        
        int64_t* rcx_25 = arg1[1]
        r9.b = 1
        int32_t rcx_26 = (*(*rcx_25 + 8))(rcx_25, r15 + rdi_1, zx.q(rsi_1), r9) + rdi_1.d
        
        if (rcx_26 s> rbx)
            rbx = rcx_26
            var_140.d = rcx_26
            
            if (rcx_26 s> var_140:4.d)
                sub_1405daba0(&var_148)
                rbx = var_140.d
                r15 = var_148
        else if (rcx_26 s< rbx)
            int32_t rax_19 = rbx - rcx_26
            
            if (rbx != rcx_26)
                rbx -= rax_19
                
                if (rbx != rcx_26)
                    memmove(sx.q(rcx_26) + r15, sx.q(rax_19 + rcx_26) + r15, rbx - rcx_26)
                
                var_140.d = rbx
        
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_138)
        sub_14184deb0(r12, r13, sx.q(rbx), &var_138)
        int32_t rdi_2 = 0
        int32_t rsi_3 = rbx - arg1[0xc].d
        bool cond:5_1 = rbx - arg1[0xc].d s< 0
        arg_8 = 0
        
        if (not(cond:5_1))
            do
                sub_14188bfe0(arg1, &var_148, &arg_8, &var_138)
                rdi_2 = arg_8 + arg1[0xc].d
                arg_8 = rdi_2
            while (rdi_2 s<= rsi_3)
            
            rbx = var_140.d
            r15 = var_148
        
        int64_t* rcx_33 = arg1[1]
        
        if ((*(*rcx_33 + 0x10))(rcx_33) != 0)
            int32_t rax_23 = arg1[0xc].d
            rdi_2 = rbx
            
            if (rbx s>= rax_23)
                arg_8 = rbx - rax_23
                sub_14188bfe0(arg1, &var_148, &arg_8, &var_138)
                rbx = var_140.d
                r15 = var_148
        
        int32_t rsi_5 = rbx - rdi_2
        int64_t r13_1 = r13 + sx.q(rbx)
        int64_t r12_1 = sx.q(rsi_5)
        
        if (rsi_5 s> 0)
            memcpy(r15, sx.q(rdi_2) + r15, r12_1.d)
        
        if (rsi_5 s> rbx)
            int32_t rsi_6 = rsi_5 - rbx
            int64_t rdi_4 = sx.q(rbx)
            rbx = rdi_4.d + rsi_6
            var_140.d = rbx
            
            if (rbx s> var_140:4.d)
                sub_1405daba0(&var_148)
                rbx = var_140.d
                r15 = var_148
            
            memset(r15 + rdi_4, 0, sx.q(rsi_6))
        else if (rsi_5 s< rbx)
            int32_t rax_26 = rbx - rsi_5
            
            if (rbx != rsi_5)
                rbx -= rax_26
                
                if (rbx != rsi_5)
                    memmove(r12_1 + r15, sx.q(rax_26 + rsi_5) + r15, rbx - rsi_5)
                
                var_140.d = rbx
        
        int64_t rax_28 = sx.q(rbx)
        r13 = r13_1 - rax_28
        double zmm1_1 = float.d(r13)
        
        if (r13_1 - rax_28 s< 0)
            zmm1_1 = zmm1_1 f+ zmm6.q
        
        sub_1418508f0(rax_8, zmm1_1 f* zmm7.q)
        sub_1418508e0(rax_2, r13)
        sub_1418283a0(rax_5, &arg_18)
        sub_141828370(&arg_18)
        sub_1418221b0(&var_138)
        int64_t* rcx_46 = arg1[1]
        i, r9 = (*(*rcx_46 + 0x10))(rcx_46)
        rsi_1 = arg_10
        r12 = rax_9
    while (i == 0)
    rdi = rax_10

sub_1418508f0(rax_8, zmm8.q)
sub_1418508e0(rax_2, rdi)
int32_t r10 = arg1[0x45].d
int32_t rcx_49 = 0
int32_t var_134 = 1
int32_t r8_11 = 0
var_138 = 0
int32_t var_128 = 0xffffffff
int64_t var_124 = 0

if (r10 != 0)
    int32_t* rax_30 = arg1[0x44]
    int32_t* r9_4 = &arg1[0x42]
    
    if (rax_30 != 0)
        r9_4 = rax_30
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_32 = *r9_4
    
    if (rdx_32 != 0)
    label_14189488c:
        int32_t rax_37 = ((rdx_32 - 1) & rdx_32) ^ rdx_32
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_37)
        int32_t var_134_1 = rax_37
        int32_t rax_38
        
        if (rax_37 == 0)
            rax_38 = 0x20
        else
            rax_38 = 0x1f - temp0_2
        
        var_124.d = r8_11 - rax_38 + 0x1f
        
        if (r8_11 - rax_38 + 0x1f s> r10)
            var_124.d = r10
    else
        while (true)
            int64_t rdx_33 = sx.q(rcx_49)
            r8_11 += 0x20
            rcx_49 += 1
            var_124:4.d = r8_11
            var_138 = rcx_49
            
            if (rdx_33.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_32 = r9_4[rdx_33 + 1]
            var_128 = 0xffffffff
            
            if (rdx_32 != 0)
                goto label_14189488c
        
        var_124.d = r10

int32_t rdx_34 = arg1[0x45].d
double zmm2[0x2] = var_128.o
var_124.d = rdx_34
double var_88[0x2] = zmm2
int128_t var_98 = var_138.o
int32_t rsi_7 = 0xffffffff << (rdx_34 & 0x1f).b
int32_t r8_14 = rdx_34 s>> 5
int32_t r9_6 = rdx_34 & 0xffffffe0
int64_t var_a8 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_128_1 = rsi_7
int128_t var_c8 = (&arg1[0x40]).o
int128_t var_b8 = var_98

if (rdx_34 != r10)
    int32_t* rax_42 = arg1[0x44]
    int32_t* r11_1 = &arg1[0x42]
    
    if (rax_42 != 0)
        r11_1 = rax_42
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_38 = r11_1[sx.q(r8_14)] & rsi_7
    
    if (rdx_38 != 0)
    label_141894967:
        int32_t rax_48 = ((rdx_38 - 1) & rdx_38) ^ rdx_38
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_48)
        int32_t rbx_2
        
        if (rax_48 == 0)
            rbx_2 = 0x20
        else
            rbx_2 = 0x1f - temp0_4
        
        var_124.d = r9_6 - rbx_2 + 0x1f
        
        if (r9_6 - rbx_2 + 0x1f s> r10)
            var_124.d = r10
    else
        while (true)
            int64_t rcx_53 = sx.q(r8_14)
            r9_6 += 0x20
            r8_14 += 1
            
            if (rcx_53.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_38 = r11_1[rcx_53 + 1]
            var_128_1 = 0xffffffff
            
            if (rdx_38 != 0)
                goto label_141894967
        
        var_124.d = r10

while (true)
    int64_t rdx_39 = sx.q(var_b8:0xc.d)
    int32_t rax_41
    
    if (rdx_39.d != (var_128_1.q u>> 0x20).d || var_b8.q != &arg1[0x42])
        rax_41.b = 0
    else
        rax_41.b = 1
    
    int64_t rcx_55 = var_c8.q
    
    if (rax_41.b == 0 || rcx_55 != &arg1[0x40])
        rax_41.b = 1
    else
        rax_41.b = 0
    
    if (rax_41.b == 0)
        break
    
    int128_t* rdi_8 = rdx_39 * 0x1c + *rcx_55
    void* rax_49 = sub_14185c720(&arg1[0x54], rdi_8[1].d, &rdi_8[1])
    sub_140598750(rax_49, &var_138)
    *(arg1 + 0x210) = *rdi_8
    arg1[0x44].d = 0xffffffff
    sub_14093ebb0(rax_49, &arg_8, sub_140a6b260(&arg1[0x42], 0x10), &arg1[0x42], var_138, nullptr)
    var_b8:8.d &= not.d(var_c8:0xc.d)
    sub_14059bdd0(&var_c8:8)

int64_t result = sub_1418283a0(rax_5, &arg_18)
int64_t r15_2 = var_148
arg1[0x2b].b = 1

if (r15_2 == 0)
    return result

return sub_140a74f90(r15_2)
