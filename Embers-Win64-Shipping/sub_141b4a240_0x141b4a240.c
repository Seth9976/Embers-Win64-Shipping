// 函数: sub_141b4a240
// 地址: 0x141b4a240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int64_t* rdx = &arg1[4]
*arg1 = &data_142dd6680
arg1[1] = &data_14306c200
arg1[2] = 0
arg1[3] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
arg1[0xa] = 0
arg1[0xb].d = 0
sub_1423ba590(&arg1[0xc])
*arg1 = &data_14306c3b0
arg1[1] = &data_14306c3e0
arg1[0xc] = &data_14306c408
InitializeCriticalSection(&arg1[0xd])
SetCriticalSectionSpinCount(&arg1[0xd], 0xfa0)
arg1[0x12].b = 0
void* rcx_3 = &arg1[0x15]
arg1[0x13] = 0
arg1[0x14] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_1 = *(rcx_3 + 0x10)

if (rax_1 != 0)
    rcx_3 = rax_1

*rcx_3 = 0
*(rcx_3 + 8) = 0
void* rcx_4 = &arg1[0x1f]
arg1[0x19].d = 0xffffffff
*(arg1 + 0xcc) = 0
arg1[0x1b] = 0
arg1[0x1c].d = 0
arg1[0x1d] = 0
arg1[0x1e] = 0
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_2 = *(rcx_4 + 0x10)

if (rax_2 != 0)
    rcx_4 = rax_2

*rcx_4 = 0
*(rcx_4 + 8) = 0
void* rcx_5 = &arg1[0x29]
arg1[0x23].d = 0xffffffff
*(arg1 + 0x11c) = 0
arg1[0x25] = 0
arg1[0x26].d = 0
arg1[0x27] = 0
arg1[0x28] = 0
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax_3 = *(rcx_5 + 0x10)

if (rax_3 != 0)
    rcx_5 = rax_3

*rcx_5 = 0
*(rcx_5 + 8) = 0
arg1[0x2d].d = 0xffffffff
*(arg1 + 0x16c) = 0
arg1[0x2f] = 0
arg1[0x30].d = 0
arg1[0x31] = 0
void* rcx_6 = &arg1[0x33]
arg1[0x32] = 0
*(rcx_6 + 0x10) = 0
*(rcx_6 + 0x18) = 0
*(rcx_6 + 0x1c) = 0x80
void* rax_4 = *(rcx_6 + 0x10)
int32_t var_70 = 0
void*** var_68 = nullptr

if (rax_4 != 0)
    rcx_6 = rax_4

uint64_t (* var_78)(void* arg1) = _set_new_handler
*rcx_6 = 0
*(rcx_6 + 8) = 0
arg1[0x37].d = 0xffffffff
*(arg1 + 0x1bc) = 0
arg1[0x39] = 0
arg1[0x3a].d = 0
__builtin_memset(&arg1[0x3b], 0, 0x50)
__builtin_memset(&arg1[0x47], 0, 0x18)
void*** rax_5 = sub_140a84c80(0, 0x30, 0)
var_68 = rax_5
int32_t var_60 = 3

if (rax_5 != 0)
    int128_t zmm0_1 = var_78.o
    *rax_5 = &data_142e22de8
    rax_5[1] = arg1
    *(rax_5 + 0x10) = zmm0_1
    rax_5[5] = sub_140a387b0()
    *rax_5 = &data_142e22e40

void var_58
int64_t* rax_8 = sub_140ac6680(
    _vfprintf_p_l(&var_58, 
        Flushes and deletes all resources created by Slate's RHI Resource Manager.", 
    Slate"))
int16_t* const rbx_1

if (rax_8[1].d == 0)
    rbx_1 = &data_142d40450
else
    rbx_1 = *rax_8

int64_t* rcx_9 = data_143db18d0

if (rcx_9 == 0)
    sub_140a53c40()
    rcx_9 = data_143db18d0

arg1[0x4b] = (*(*rcx_9 + 0x98))(rcx_9, u"Slate.DeleteResources", rbx_1, &var_68, 0)
arg1[0x4a] = &data_142d3ff10
int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t r14_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (r14_1 == 1)
            (*(*var_50 + 8))(var_50, zx.q(r14_1))

void*** rax_15

if (var_60 == 0)
    rax_15 = var_68
label_141b4a5d5:
    
    if (rax_15 != 0)
        sub_140a74f90(rax_15)
else
    void*** rcx_12 = var_68
    
    if (rcx_12 != 0)
        (*rcx_12)[7](rcx_12, 0)
        rax_15 = var_68
        
        if (rax_15 != 0)
            rax_15 = sub_140a84c80(rax_15, 0, 0)
            var_68 = rax_15
        
        int32_t var_60_1 = 0
        goto label_141b4a5d5
int32_t var_60_2 = 0
var_68 = sub_141b63080
void*** rax_16 = sub_140a84c80(0, 0x30, 0)

if (rax_16 != 0)
    int128_t zmm0_2 = var_68.o
    *rax_16 = &data_142e22de8
    rax_16[1] = arg1
    *(rax_16 + 0x10) = zmm0_2
    rax_16[5] = sub_140a387b0()
    *rax_16 = &data_142e22e40

if (rax_16 != 0)
    sub_140599630(&data_14399fce8, 1)
    void arg_20
    (*rax_16)[6](rax_16, &arg_20)
    int64_t r14_2 = sx.q(data_14399fcf0)
    int32_t rax_19 = (r14_2 + 1).d
    bool cond:1_1 = rax_19 s<= data_14399fcf4
    data_14399fcf0 = rax_19
    
    if (not(cond:1_1))
        sub_1405a4f90(&data_14399fce8)
    
    void**** rax_22 = (r14_2 << 4) + data_14399fce8
    *rax_22 = rax_16
    rax_22[1].d = 3

int32_t var_60_3 = 0
var_68 = sub_141b630b0
sub_140d21f60()
void*** rax_23 = sub_140a84c80(0, 0x30, 0)

if (rax_23 != 0)
    int128_t zmm0_3 = var_68.o
    *rax_23 = &data_142e22de8
    rax_23[1] = arg1
    *(rax_23 + 0x10) = zmm0_3
    rax_23[5] = sub_140a387b0()
    *rax_23 = &data_142e22e40

if (rax_23 != 0)
    sub_140599630(&data_1439aad48, 1)
    (*rax_23)[6](rax_23, &var_78)
    int64_t r15_1 = sx.q(data_1439aad50)
    int32_t rax_26 = (r15_1 + 1).d
    data_1439aad50 = rax_26
    
    if (rax_26 s> data_1439aad54)
        sub_1405a4f90(&data_1439aad48)
    
    void**** rax_29 = (r15_1 << 4) + data_1439aad48
    *rax_29 = rax_23
    rax_29[1].d = 3

*(arg1 + 0x22c) = 0x100
arg1[0x46].d = 0x100
arg1[0x45].d = 0x400
void* rcx_17 = data_143ddb400

if (rcx_17 != 0)
    int32_t arg_8 = 0x400
    sub_140af3c10(rcx_17, u"SlateRenderer", u"TextureAtlasSize", &arg_8, &data_143de5780)
    int32_t rcx_18 = 0x800
    int32_t arg_10 = 0x100
    bool cond:2_1 = arg_8 u< 0x800
    int32_t arg_18 = 0x100
    
    if (cond:2_1)
        rcx_18 = arg_8
    
    arg1[0x45].d = rcx_18
    sub_140af3c10(data_143ddb400, SlateRenderer", MaxAtlasedTextureWidth", &arg_10, &data_143de5780)
    sub_140af3c10(data_143ddb400, SlateRenderer", MaxAtlasedTextureHeight", &arg_18, 
        &data_143de5780)
    int32_t rdx_8 = arg_10
    int32_t rax_30 = arg1[0x45].d
    int32_t rcx_21
    
    if (rdx_8 s>= 0)
        rcx_21 = rax_30
        
        if (rdx_8 s< rax_30)
            rcx_21 = rdx_8
    else
        rcx_21 = 0
    
    *(arg1 + 0x22c) = rcx_21
    int32_t rcx_22 = arg_18
    
    if (rcx_22 s>= 0)
        if (rcx_22 s< rax_30)
            rax_30 = rcx_22
        
        rsi = rax_30
    
    arg1[0x46].d = rsi

return arg1
