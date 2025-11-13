// 函数: sub_141865200
// 地址: 0x141865200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe7218
arg1[1].d = *arg2
*(arg1 + 0xc) = arg2[1]
arg1[2].d = arg2[2]
*(arg1 + 0x14) = arg2[3]
arg1[3] = 0
arg1[3] = *(arg2 + 0x10)
*(arg2 + 0x10) = 0
arg1[4].d = arg2[6]
*(arg1 + 0x24) = arg2[7]
*(arg2 + 0x18) = 0
arg1[5].d = arg2[8]
void*** arg_28
arg1[8] = arg_28
arg1[6] = arg3
arg1[7] = arg4
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x11].d = 1
*(arg1 + 0x8c) = 0
InitializeCriticalSection(&arg1[0x12])
SetCriticalSectionSpinCount(&arg1[0x12], 0xfa0)
int64_t rax_9 = j_sub_140a82f30(0x48)

if (rax_9 == 0)
    rax_9 = 0
else
    __builtin_memset(rax_9, 0, 0x44)

arg1[0x19] = rax_9
arg1[0x18] = rax_9
arg1[0x1a].d = 0
int64_t rax_10 = j_sub_140a82f30(0x20)

if (rax_10 == 0)
    rax_10 = 0
else
    __builtin_memset(rax_10, 0, 0x20)

arg1[0x1d] = rax_10
arg1[0x1c] = rax_10
int64_t rax_11 = j_sub_140a82f30(0x20)

if (rax_11 == 0)
    rax_11 = 0
else
    __builtin_memset(rax_11, 0, 0x20)

arg1[0x1f] = rax_11
arg1[0x1e] = rax_11
int64_t rax_12 = j_sub_140a82f30(0x30)

if (rax_12 == 0)
    rax_12 = 0
else
    __builtin_memset(rax_12, 0, 0x2c)

arg1[0x21] = rax_12
void* rcx_2 = &arg1[0x25]
arg1[0x20] = rax_12
arg1[0x23] = 0
arg1[0x24] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_13 = *(rcx_2 + 0x10)
int64_t var_c8 = 0
int32_t var_c0 = 0

if (rax_13 != 0)
    rcx_2 = rax_13

*rcx_2 = 0
*(rcx_2 + 8) = 0
void* rcx_3 = &arg1[0x2f]
arg1[0x29].d = 0xffffffff
*(arg1 + 0x14c) = 0
arg1[0x2b] = 0
arg1[0x2c].d = 0
arg1[0x2d] = 0
arg1[0x2e] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_14 = *(rcx_3 + 0x10)

if (rax_14 != 0)
    rcx_3 = rax_14

*rcx_3 = 0
*(rcx_3 + 8) = 0
void* rcx_4 = &arg1[0x39]
arg1[0x33].d = 0xffffffff
*(arg1 + 0x19c) = 0
arg1[0x35] = 0
arg1[0x36].d = 0
arg1[0x37] = 0
arg1[0x38] = 0
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_15 = *(rcx_4 + 0x10)

if (rax_15 != 0)
    rcx_4 = rax_15

*rcx_4 = 0
*(rcx_4 + 8) = 0
arg1[0x3d].d = 0xffffffff
*(arg1 + 0x1ec) = 0
arg1[0x3f] = 0
arg1[0x40].d = 0
arg1[9] = 0
sub_1405947f0(&var_c8, 0x1d)
int32_t rax_16 = var_c0 + 0x1d
var_c0 = rax_16

if (rax_16 s> 0)
    sub_140594770(&var_c8)

UnDecorator::getReferenceType(var_c8, u"Chunk Writer: Serialize Time", 0x3a)
int64_t* rcx_8 = arg1[8]
int64_t rax_18 = (*(*rcx_8 + 8))(rcx_8, &var_c8, 0, 0)
int64_t rcx_9 = var_c8
arg1[0xa] = rax_18

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t var_b8 = 0
int32_t var_b0 = 0
sub_1405947f0(&var_b8, 0x18)
int32_t rax_19 = var_b0 + 0x18
var_b0 = rax_19

if (rax_19 s> 0)
    sub_140594770(&var_b8)

UnDecorator::getReferenceType(var_b8, u"Chunk Writer: Num Saved", 0x30)
int64_t* rcx_13 = arg1[8]
int64_t r8
r8.b = 4
int64_t rax_21 = (*(*rcx_13 + 8))(rcx_13, &var_b8, r8, 0)
int64_t rcx_14 = var_b8
arg1[0xb] = rax_21

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t var_a8 = 0
int32_t var_a0 = 0
sub_1405947f0(&var_a8, 0x20)
int32_t rax_22 = var_a0 + 0x20
var_a0 = rax_22

if (rax_22 s> 0)
    sub_140594770(&var_a8)

UnDecorator::getReferenceType(var_a8, u"Chunk Writer: Data Size Written", 0x40)
int64_t* rcx_18 = arg1[8]
int64_t r8_1
r8_1.b = 1
int64_t rax_24 = (*(*rcx_18 + 8))(rcx_18, &var_a8, r8_1, 0)
int64_t rcx_19 = var_a8
arg1[0xc] = rax_24

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t var_98 = 0
int32_t var_90 = 0
sub_1405947f0(&var_98, 0x20)
int32_t rax_25 = var_90 + 0x20
var_90 = rax_25

if (rax_25 s> 0)
    sub_140594770(&var_98)

UnDecorator::getReferenceType(var_98, u"Chunk Writer: Compression Ratio", 0x40)
int64_t* rcx_23 = arg1[8]
int64_t r8_2
r8_2.b = 3
int64_t rax_27 = (*(*rcx_23 + 8))(rcx_23, &var_98, r8_2, 0)
int64_t rcx_24 = var_98
arg1[0xe] = rax_27

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int64_t var_88 = 0
int32_t var_80 = 0
sub_1405947f0(&var_88, 0x1f)
int32_t rax_28 = var_80 + 0x1f
var_80 = rax_28

if (rax_28 s> 0)
    sub_140594770(&var_88)

UnDecorator::getReferenceType(var_88, u"Chunk Writer: Data Write Speed", 0x3e)
int64_t* rcx_28 = arg1[8]
int64_t r8_3
r8_3.b = 2
int64_t rax_30 = (*(*rcx_28 + 8))(rcx_28, &var_88, r8_3, 0)
int64_t rcx_29 = var_88
arg1[0xd] = rax_30

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

int16_t* const rbx = &data_142d40450
int16_t* const rdx_10

if (arg1[4].d == 0)
    rdx_10 = &data_142d40450
else
    rdx_10 = arg1[3]

int64_t* rcx_30 = arg1[6]
(*(*rcx_30 + 0x10))(rcx_30, rdx_10)
int16_t* const rdx_11

if (arg1[4].d == 0)
    rdx_11 = &data_142d40450
else
    rdx_11 = arg1[3]

int64_t* rcx_31 = arg1[6]

if ((*(*rcx_31 + 8))(rcx_31, rdx_11) == 0)
    if (arg1[4].d != 0)
        rbx = arg1[3]
    
    sub_140af98a0("Unknown", 0x4e, u"Could not create cloud directory (%s).", rbx)
    sub_140afbb40()

int32_t i = 0

if (*(arg1 + 0x14) s> 0)
    arg_28 = arg1
    
    do
        int64_t var_68[0x2]
        var_68[0] = 0
        int64_t var_58_1 = 0
        void* var_78
        void** rax_34
        rax_34, arg5, arg6 = sub_141856f70(&var_78, 2, &arg_28, &var_68, arg5, arg6)
        int64_t r14_1 = sx.q(arg1[0x10].d)
        int32_t rcx_33 = (r14_1 + 1).d
        arg1[0x10].d = rcx_33
        
        if (rcx_33 s> *(arg1 + 0x84))
            sub_1405a4f90(&arg1[0xf])
        
        void** rcx_37 = &arg1[0xf][r14_1 * 2]
        *rcx_37 = *rax_34
        rcx_37[1] = rax_34[1]
        rax_34[1] = 0
        *rax_34 = nullptr
        int64_t* var_70
        
        if (var_70 != 0)
            var_70[1].d -= 1
            
            if (var_70[1].d == 1)
                (**var_70)(var_70)
                int32_t rax_39 = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (rax_39 == 1)
                    (*(*var_70 + 8))(var_70, 1)
        
        i += 1
    while (i s< *(arg1 + 0x14))

int64_t rcx_40 = *(arg2 + 0x10)

if (rcx_40 != 0)
    sub_140a74f90(rcx_40)

return arg1
