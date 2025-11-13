// 函数: sub_140ddff20
// 地址: 0x140ddff20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_74 = 1
int32_t var_68 = 0xffffffff
int32_t* r9 = &arg1[0x45]
int64_t var_64 = 0
int32_t* var_70 = r9
*arg1 = &data_142ec9950
int32_t r11 = r9[6]
int32_t rcx = 0
int32_t var_78 = 0
int32_t r8 = 0

if (r11 != 0)
    int32_t* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_140ddffd8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_64.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_64.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_64:4.d = r8
            var_78 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = r9[rdx_4 + 1]
            var_68 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140ddffd8
        
        var_64.d = r11

double zmm4[0x2] = var_68.o
int64_t* var_10 = &arg1[0x43]
int16_t var_40 = 0
double zmm3[0x2] = var_78.o
double rax_11 = zmm3[0]
var_68.o = zmm3
var_78.o = (&arg1[0x43]).o
double rcx_2 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
double var_58[0x2] = zmm4

if ((rcx_2 u>> 0x20).d s< *(rax_11 i+ 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* rcx_5 = *(*var_78.q + sx.q(i) * 0x18 + 8)
        
        if (rcx_5[9] == 0 && (rcx_5[0x10].b & 2) == 0 && rcx_5 != 0)
            (**rcx_5)(rcx_5, 1)
        
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i = i_1
    while (i s< *(var_68.q + 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        sub_1405b6730(&arg1[0x43], arg1[0x44].d - *(arg1 + 0x24c), 1)

arg1[0x74].d = 0
int64_t rcx_8 = arg1[0x73]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

arg1[0x6c].d = 0

if (*(arg1 + 0x364) != 0)
    sub_1405a5410(&arg1[0x6b], 0)

arg1[0x71].d = 0xffffffff
*(arg1 + 0x38c) = 0
sub_14059a8e0(&arg1[0x6d], 0)
int64_t rcx_11 = arg1[0x6f]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[0x6b]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

arg1[0x6a].d = 0
int64_t rcx_13 = arg1[0x69]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

sub_140dded10(&arg1[0x61])
arg1[0x60].d = 0
int64_t rcx_15 = arg1[0x5f]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

sub_140e0fc00(&arg1[0x57], 0)
int64_t rcx_17 = arg1[0x5b]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t rcx_18 = arg1[0x57]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

sub_1405ae000(&arg1[0x4d])
sub_1405ae080(&arg1[0x43])
sub_1405ae100(&arg1[0x38])
arg1[0x37].d = 0
int64_t rcx_22 = arg1[0x36]

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

sub_140e0fa60(&arg1[0x2e], 0)
int64_t rcx_24 = arg1[0x32]

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int64_t rcx_25 = arg1[0x2e]

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

sub_1405ae100(&arg1[0x24])
sub_1405ae080(&arg1[0x1a])
sub_1405ae200(&arg1[0x10])
arg1[0xf].d = 0
int64_t rcx_29 = arg1[0xe]

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

sub_1407ece30(&arg1[6], 0)
int64_t rcx_31 = arg1[0xa]

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

int64_t rcx_32 = arg1[6]

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

int64_t rcx_33 = arg1[4]

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

int64_t rcx_34 = arg1[2]

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

*arg1 = &data_142e3aa40
return &data_142e3aa40
