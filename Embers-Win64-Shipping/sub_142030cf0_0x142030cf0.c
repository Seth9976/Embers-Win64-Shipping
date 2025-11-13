// 函数: sub_142030cf0
// 地址: 0x142030cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3[0x45] == 0)
    *arg2 = 0
    arg2[1] = 0
    sub_1405947f0(arg2, 0x14)
    int32_t rax = arg2[1].d + 0x14
    arg2[1].d = rax
    
    if (rax s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, u"PlayerState is null", 0x28)
    return arg2

int64_t var_50 = 0
int32_t arg_18 = 0
int32_t var_78 = 0
int16_t* var_a8 = nullptr
float var_a0 = 0f
sub_1405947f0(&var_a8, 0xe)
float r15 = var_a0 i+ 0xe

if (r15 s> 0)
    sub_140594770(&var_a8)

UnDecorator::getReferenceType(var_a8, u"bIsFromInvite", 0x1c)
void var_48
int64_t* rax_2 = sub_140596d10(&var_48, arg5)
uint64_t var_70 = 0
int64_t var_68 = 0
int64_t var_98
__builtin_memset(&var_98, 0, 0x1c)
char rax_3
int64_t r9
rax_3, r9 = sub_14202c090(rax_2, &var_70)
int16_t* const r13 = &data_142d40450
uint64_t var_88
float var_80

if (rax_3 != 0)
    uint64_t rsi_1
    char i
    
    do
        sub_142029c40(&var_70, &var_88, &var_98)
        int16_t* const rdx_5 = &data_142d40450
        rsi_1 = var_88
        int16_t* const rcx_9 = &data_142d40450
        
        if (var_80 != 0)
            rdx_5 = rsi_1
        
        if (r15 != 0)
            rcx_9 = var_a8
        
        int32_t rax_4
        rax_4, r9 = sub_140a54510(rcx_9, rdx_5)
        
        if (rax_4 == 0)
            int64_t rcx_20 = var_98
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            if (rsi_1 != 0)
                sub_140a74f90(rsi_1)
            
            uint64_t rcx_22 = var_70
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)
            
            int64_t rcx_23 = *rax_2
            
            if (rcx_23 != 0)
                sub_140a74f90(rcx_23)
            
            r9.b = 1
            goto label_142030eb0
        
        i, r9 = sub_14202c090(rax_2, &var_70)
    while (i != 0)
    int64_t rcx_11 = var_98
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)

uint64_t rcx_13 = var_70

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = *rax_2

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

r9.b = 0
label_142030eb0:
int64_t* rcx_15 = arg1[0x4f]
(*(*rcx_15 + 0x648))(rcx_15, arg3, arg4 + 8, r9)
int16_t* rax_6 = var_a8

if (rax_6 != 0)
    sub_140a74f90(rax_6)

void* rax_7
int64_t r8_4
rax_7, r8_4 = sub_1424b24d0(arg1, arg3, arg6)
int64_t var_90

if (rax_7 == 0)
    sub_140a2e390(&var_98, u"Failed to find PlayerStart", r8_4)
    var_50 = var_98
    arg_18 = var_90.d
    var_78 = var_90:4.d
else
    void* rcx_18 = *(rax_7 + 0x130)
    float rax_11
    uint128_t zmm0_1
    float zmm1_1[0x4]
    
    if (rcx_18 == 0)
        zmm0_1 = zx.o(data_143dbb208)
        rax_11 = data_143dbb210
    else
        zmm1_1 = *(rcx_18 + 0x1c0)
        void* rsi_2 = rcx_18 + 0x180
        uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*rsi_2, zmm1_1, 4))
        var_98.o = zmm1_1
        
        if (temp0_2 != 0)
            *rsi_2 = zmm1_1
            int32_t* rax_9 = sub_140adf5d0(&var_98, &var_a8)
            *(rsi_2 + 0x10) = *rax_9
            *(rsi_2 + 0x18) = rax_9[2]
            rcx_18 = *(rax_7 + 0x130)
        
        zmm0_1 = zx.o(*(rsi_2 + 0x10))
        rax_11 = *(rsi_2 + 0x18)
    
    var_80 = rax_11
    var_88 = zmm0_1.q
    var_70 = var_88
    var_68.d = 0
    
    if (rcx_18 == 0)
        float rax_12 = data_143dbb200
        var_88 = data_143dbb1f8.q
        var_80 = rax_12
    else
        zmm1_1 = *(rcx_18 + 0x1d0)
        var_88.d = zmm1_1[0]
        zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
        var_80 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
        var_88:4.d = zmm0_1.d
    
    var_a0 = var_80
    int64_t rax_14 = *arg3
    var_a8 = var_88
    (*(rax_14 + 0x670))(arg3, &var_a8, &var_70)
    sub_140d3a3a0(&arg3[0x46], rax_7)

var_a8 = nullptr
int32_t var_a0_1 = 0
sub_1405947f0(&var_a8, 0xe)
int32_t rax_18 = var_a0_1 + 0xe
var_a0_1 = rax_18

if (rax_18 s> 0)
    sub_140594770(&var_a8)

int16_t* rsi_3 = var_a8
UnDecorator::getReferenceType(rsi_3, u"SpectatorOnly", 0x1c)
int64_t* rax_20 = sub_142035500(&var_98, sub_140596d10(&var_48, arg5), &var_a8)
int16_t* const rcx_32

if (rax_20[1].d == 0)
    rcx_32 = &data_142d40450
else
    rcx_32 = *rax_20

int32_t rax_21 = sub_140a54510(rcx_32, &(*U"RGBXYZF10|")[7])
int64_t rcx_33 = var_98
void* r15_1
r15_1.b = rax_21 == 0

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

if (rsi_3 != 0)
    sub_140a74f90(rsi_3)

char rax_22

if (r15_1.b == 0)
    rax_22 = sub_1424b2a30(arg1, arg3)

if (r15_1.b != 0 || rax_22 != 0)
    (*(*arg3 + 0xd00))(arg3)

var_a8 = nullptr
int32_t var_a0_2 = 0
sub_1405947f0(&var_a8, 5)
int32_t rax_24 = var_a0_2 + 5
var_a0_2 = rax_24

if (rax_24 s> 0)
    sub_140594770(&var_a8)

UnDecorator::getReferenceType(var_a8, u"Name", 0xa)
int64_t* rax_26 = sub_142035500(&var_98, sub_140596d10(&var_48, arg5), &var_a8)
int32_t rax_27 = rax_26[1].d
int32_t rcx_42 = rax_27 - 1

if (rax_27 == 0)
    rcx_42 = -1

int32_t r15_2 = rax_27 - 1

if (rax_27 == 0)
    rcx_42 = 0

int32_t r10 = rcx_42

if (rcx_42 s> 0x14)
    r10 = 0x14

if (rax_27 == 0)
    r15_2 = -1

if (rax_27 == 0)
    r15_2 = 0

int32_t r15_3 = r15_2 - r10
int32_t rcx_43 = rcx_42 - r10

if (rcx_42 - r10 s>= 0)
    if (rcx_43 s< r15_3)
        r15_3 = rcx_43
    
    if (r15_3 != 0)
        int32_t rcx_45 = rax_27 - r15_3
        
        if (rcx_45 != r10)
            int64_t r9_1 = *rax_26
            memmove(r9_1 + (sx.q(r10) << 1), r9_1 + (sx.q(r15_3 + r10) << 1), (rcx_45 - r10) * 2)
            rax_27 = rax_26[1].d
        
        rax_26[1].d = rax_27 - r15_3

int64_t var_60 = *rax_26
*rax_26 = 0
int32_t rax_32 = rax_26[1].d
int32_t var_54 = *(rax_26 + 0xc)
rax_26[1] = 0
int64_t rcx_49 = var_98

if (rcx_49 != 0)
    sub_140a74f90(rcx_49)

int16_t* rcx_50 = var_a8

if (rcx_50 != 0)
    sub_140a74f90(rcx_50)

if (rax_32 s<= 1)
    *(arg3[0x45] + 0x224)
    int16_t** rax_35 = sub_140ac6680(&arg1[0x52])
    
    if (rax_35[1].d != 0)
        r13 = *rax_35
    
    sub_140a2e390(&var_98, u"%s%i", r13)
    int64_t rcx_53 = var_60
    
    if (rcx_53 != 0)
        sub_140a74f90(rcx_53)
    
    var_60 = var_98
    int32_t var_58_1 = var_90.d
    int32_t var_54_1 = var_90:4.d

(*(*arg1 + 0x770))(arg1, arg3, &var_60, 0)
int64_t rcx_55 = var_60
*arg2 = var_50
arg2[1].d = arg_18
*(arg2 + 0xc) = var_78

if (rcx_55 != 0)
    sub_140a74f90(rcx_55)

return arg2
