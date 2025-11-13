// 函数: sub_140a36d40
// 地址: 0x140a36d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
InitializeCriticalSection(arg1)
SetCriticalSectionSpinCount(arg1, 0xfa0)
struct IDelegateInstance::VTable** var_38 = nullptr
struct IDelegateInstance::VTable** rax = sub_140a84c80(0, 0x30, 0)
var_38 = rax
void*** rcx_1 = rax
int32_t var_30 = 3

if (rax != 0)
    *rax = &IDelegateInstance::`vftable'
    *rcx_1 = &data_142d3fe58
    rcx_1[2] = j_sub_140a38430
    rcx_1[1] = arg1
    int64_t rax_1 = data_14399e718
    data_14399e718 += 1
    int64_t rax_2 = rax_1 + 1
    
    if (rax_1 == -1)
        int64_t rax_3 = data_14399e718
        data_14399e718 += 1
        rax_2 = rax_3 + 1
    
    rcx_1[4] = rax_2
    *rcx_1 = &data_142d3feb0

int64_t* rcx_2 = data_143db18d0

if (rcx_2 == 0)
    sub_140a53c40()
    rcx_2 = data_143db18d0

arg1->__offset(0x30).q =
    (*(*rcx_2 + 0x98))(rcx_2, r.VT.EvictFileCache", Evict all the file caches in the VT system."
    , &var_38, 0)
arg1->__offset(0x28).q = &data_142d3ff10
struct IDelegateInstance::VTable** rax_7

if (var_30 == 0)
    rax_7 = var_38
label_140a36e79:
    
    if (rax_7 != 0)
        sub_140a74f90(rax_7)
else
    struct IDelegateInstance::VTable** rcx_3 = var_38
    
    if (rcx_3 != 0)
        (*rcx_3)->`scalar deleting destructor'(rcx_3, 0)
        rax_7 = var_38
        
        if (rax_7 != 0)
            rax_7 = sub_140a84c80(rax_7, 0, 0)
            var_38 = rax_7
        
        int32_t var_30_1 = 0
        goto label_140a36e79
arg1->__offset(0x38).q = 0
arg1->__offset(0x80).q = 0
arg1->__offset(0xc8).d = 0
arg1->__offset(0xd0).q = 0
arg1->__offset(0xd8).q = 0
arg1->__offset(0x800e0).d = rbp.d << 0xe
arg1->__offset(0x800e4).d = rbp.d
arg1->__offset(0x800e8).d = 0
memset(arg1 + 0xe0, 0, 0x80000)
sub_140a37c00(arg1 + 0xd0, (rbp + 2).d)
*(arg1->__offset(0xd0).q + 0x14) = 0
void* rax_11 = arg1->__offset(0xd0).q
*(rax_11 + 0x3c) = 1
*(rax_11 + 0x40) = 1
*(arg1->__offset(0xd0).q + 0x18) = rbp.d
*(arg1->__offset(0xd0).q + rbp * 0x28 + 0x14) = 0

if (arg1->__offset(0xd8).d s> 2)
    int32_t r8_1 = 1
    int64_t r9_1 = 0x50
    
    do
        int64_t rcx_10 = arg1->__offset(0xd0).q
        int32_t rax_14 = r8_1 + 2
        r9_1 += 0x28
        *(r9_1 + rcx_10 - 0x10) = r8_1
        r8_1 += 1
        *(r9_1 + rcx_10 - 0x14) = rax_14
    while (r8_1 + 1 s< arg1->__offset(0xd8).d)

void*** var_28 = nullptr
void*** rax_16 = sub_140a84c80(0, 0x30, 0)
var_28 = rax_16
int32_t var_20 = 3

if (rax_16 != 0)
    *rax_16 = &IDelegateInstance::`vftable'
    *rax_16 = &data_142d42fd0
    rax_16[2] = sub_140a38c00
    rax_16[1] = arg1
    int64_t rax_17 = data_14399e718
    data_14399e718 += 1
    int64_t rax_18 = rax_17 + 1
    
    if (rax_17 == -1)
        int64_t rdi_1 = data_14399e718
        data_14399e718 += 1
        rax_18 = rdi_1 + 1
    
    rax_16[4] = rax_18

void arg_8
arg1->__offset(0x38).q = *sub_140a208a0(sub_140b18f30(), &arg_8, &var_28, 0x3dcccccd)
void*** rax_22

if (var_20 == 0)
    rax_22 = var_28
label_140a37011:
    
    if (rax_22 != 0)
        sub_140a74f90(rax_22)
else
    void*** rcx_14 = var_28
    
    if (rcx_14 != 0)
        (*rcx_14)[7](rcx_14, 0)
        rax_22 = var_28
        
        if (rax_22 != 0)
            rax_22 = sub_140a84c80(rax_22, 0, 0)
            var_28 = rax_22
        
        int32_t var_20_1 = 0
        goto label_140a37011
return arg1
