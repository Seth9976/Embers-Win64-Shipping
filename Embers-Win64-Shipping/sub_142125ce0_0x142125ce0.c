// 函数: sub_142125ce0
// 地址: 0x142125ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58
int64_t* rax_2 = sub_142124e80(&var_58, (*(*arg1 + 0x1d8))())
int16_t* const r13 = &data_142d40450

if (rax_2[1].d == 0)
    int16_t* const arg_20 = &data_142d40450
else
    arg_20 = *rax_2

void arg_18
int16_t* rax_4 = (*(*arg1 + 0x1e8))(arg1, &arg_18)
int32_t rdi = 0
int64_t var_78 = 0
int32_t var_70 = 0
int16_t rbx_1 = *rax_4
sub_1405947f0(&var_78, 2)
int32_t r14 = var_70 + 2
var_70 = r14

if (r14 s> 0)
    sub_140594770(&var_78)
    r14 = var_70

int64_t r12 = var_78
UnDecorator::getReferenceType(r12, &(*U"RGBXYZF10|")[9], 4)
void*** rax_5 = sub_140a84c80(0, 0x20, 0)

if (rax_5 != 0)
    *rax_5 = &data_1432d8548
    rax_5[1] = sub_142127c40
    rax_5[3] = sub_140a387b0()

uint32_t rbx_2 = zx.d(rbx_1)
int16_t* var_68 = nullptr
int32_t var_60 = 0

if (rbx_2 != 0)
    while (true)
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_forward(rbx_2)
        rbx_2 &= not.d(1 << temp0_1.b)
        (*rax_5)[9](rax_5, &var_78, zx.q(temp0_1))
        int32_t r8_3
        
        if (var_70 == 0)
            r8_3 = 0
        else
            r8_3 = var_70 - 1
        
        sub_140a20ba0(&var_68, var_78, r8_3)
        int64_t rcx_8 = var_78
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        if (rbx_2 == 0)
            break
        
        int32_t r8_4 = r14 - 1
        
        if (r14 == 0)
            r8_4 = 0
        
        sub_140a20ba0(&var_68, r12, r8_4)

if (rax_5 != 0)
    (*rax_5)[7](rax_5, 0)
    int64_t rax_11 = sub_140a84c80(rax_5, 0, 0)
    
    if (rax_11 != 0)
        sub_140a74f90(rax_11)

if (r12 != 0)
    sub_140a74f90(r12)

if (var_60 != 0)
    r13 = var_68

sub_140a2e390(arg2, u"LightingModel=%s, BlendMode=%s, ", r13)
int16_t* rcx_15 = var_68

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t rcx_16 = var_58

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

uint32_t r13_1 = zx.d(sub_14212efd0(arg1))
uint32_t r12_1 = zx.d(sub_142134f80(arg1, 0))
uint32_t r15_1 = zx.d((*(*arg1 + 0x210))(arg1))
uint32_t r14_1 = zx.d((*(*arg1 + 0x1c0))(arg1))
uint32_t rsi_3 = zx.d((*(*arg1 + 0x48))(arg1))
(*(*arg1 + 0x28))(arg1)
uint32_t var_88 = r13_1
uint32_t var_90 = r12_1
uint32_t var_98 = r15_1
uint32_t var_a0 = r14_1
uint32_t var_a8 = rsi_3
sub_140a2e390(&var_68, 
    SpecialEngine=%d, TwoSided=%d, TSNormal=%d, Masked=%d, Distorted=%d, WritesEveryPixel=%d, "
"ModifiesMeshPosition=%d, Usage={", zx.q((*(*arg1 + 0xc0))(arg1)))
int32_t r8_8

if (var_60 == 0)
    r8_8 = 0
else
    r8_8 = var_60 - 1

sub_140a20ba0(arg2, var_68, r8_8)
int16_t* rcx_26 = var_68

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

uint32_t rbx_4
rbx_4.b = 1

for (int32_t i = 0; i s< 0x11; i += 1)
    if (sub_142110b90(arg1[5], i) != 0)
        if (rbx_4.b == 0)
            var_78 = 0
            uint32_t var_70_1 = 0
            sub_1405947f0(&var_78, 2)
            rbx_4 = var_70_1 + 2
            
            if (rbx_4 s> 0)
                sub_140594770(&var_78)
            
            int64_t rsi_4 = var_78
            UnDecorator::getReferenceType(rsi_4, &data_142d7fa60, 4)
            int32_t r8_9 = rbx_4 - 1
            
            if (rbx_4 == 0)
                r8_9 = 0
            
            sub_140a20ba0(arg2, rsi_4, r8_9)
            
            if (rsi_4 != 0)
                sub_140a74f90(rsi_4)
        
        int64_t* rax_25 = sub_142110d90(arg1[5], &var_58, i)
        int32_t rcx_34 = rax_25[1].d
        int32_t r8_11 = rcx_34 - 1
        
        if (rcx_34 == 0)
            r8_11 = 0
        
        sub_140a20ba0(arg2, *rax_25, r8_11)
        int64_t rcx_36 = var_58
        
        if (rcx_36 != 0)
            sub_140a74f90(rcx_36)
        
        rbx_4.b = 0

var_78 = 0
int32_t var_70_2 = 0
sub_1405947f0(&var_78, 2)
int32_t rbx_5 = var_70_2 + 2

if (rbx_5 s> 0)
    sub_140594770(&var_78)

int64_t rsi_5 = var_78
UnDecorator::getReferenceType(rsi_5, &(*U"{}[\nt")[1], 4)

if (rbx_5 != 0)
    rdi = rbx_5 - 1

sub_140a20ba0(arg2, rsi_5, rdi)

if (rsi_5 != 0)
    sub_140a74f90(rsi_5)

return arg2
