// 函数: sub_141d79780
// 地址: 0x141d79780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const r15 = &data_142d40450
int32_t var_a8
int64_t var_a0
void* rax
void* r12

if (*(arg1 + 0x38) == 0)
    r12 = nullptr
else
    int64_t var_58
    int64_t* rax_1 = sub_140d30800(arg1 + 0x38, &var_58)
    int16_t* rbx_1
    
    if (rax_1[1].d == 0)
        rbx_1 = &data_142d40450
    else
        rbx_1 = *rax_1
    
    var_a0 = 0
    var_a8 = 0
    rax = sub_140d2f240(sub_141d82390(), 0, rbx_1, 0, 0, 0)
    int64_t rcx_2 = var_58
    r12 = rax
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

void* r13

if (*(arg1 + 0x50) == 0)
    r13 = nullptr
else
    int64_t var_48
    int64_t* rax_3 = sub_140d30800(arg1 + 0x50, &var_48)
    int16_t* rbx_2
    
    if (rax_3[1].d == 0)
        rbx_2 = &data_142d40450
    else
        rbx_2 = *rax_3
    
    var_a0 = 0
    var_a8 = 0
    rax = sub_140d2f240(sub_141d82460(), 0, rbx_2, 0, 0, 0)
    int64_t rcx_5 = var_48
    r13 = rax
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

int64_t* rcx_6 = *(arg1 + 0x68)
void* rdx_3 = arg1 + 0x78
int16_t* var_68
int64_t arg_8
void arg_10

if (rcx_6 != 0)
    (*(*rcx_6 + 0x2b8))(rcx_6, rdx_3)
    void* rax_6 = sub_141d82390()
    int64_t* rax_7 = sub_140b58170(&arg_10, "ImageCaptureProtocol_DEAD", 1)
    sub_140d25240(&arg_8, sub_140cde0b0(), rax_6, *rax_7)
    int64_t* rax_9 = sub_140b63b70(&arg_8, &var_68)
    int16_t* const rdi_2
    
    if (rax_9[1].d == 0)
        rdi_2 = &data_142d40450
    else
        rdi_2 = *rax_9
    
    int64_t rbx_4 = **(arg1 + 0x68)
    int64_t rax_11 = sub_140cde0b0()
    (*(rbx_4 + 0x138))(*(arg1 + 0x68), rdi_2, rax_11, 0, var_a8, var_a0)
    int16_t* rcx_11 = var_68
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    *(arg1 + 0x68) = 0
    rdx_3 = arg1 + 0x78

int64_t* rcx_12 = *(arg1 + 0x70)

if (rcx_12 != 0)
    (*(*rcx_12 + 0x2b8))(rcx_12, rdx_3)
    void* rax_13 = sub_141d82460()
    int64_t* rax_14 = sub_140b58170(&arg_10, "AudioCaptureProtocol_DEAD", 1)
    sub_140d25240(&arg_8, sub_140cde0b0(), rax_13, *rax_14)
    int64_t* rax_16 = sub_140b63b70(&arg_8, &var_68)
    int16_t* const rdi_4
    
    if (rax_16[1].d == 0)
        rdi_4 = &data_142d40450
    else
        rdi_4 = *rax_16
    
    int64_t rbx_6 = **(arg1 + 0x70)
    int64_t rax_18 = sub_140cde0b0()
    (*(rbx_6 + 0x138))(*(arg1 + 0x70), rdi_4, rax_18, 0, var_a8, var_a0)
    int16_t* rcx_17 = var_68
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    *(arg1 + 0x70) = 0

int16_t* var_78
int32_t var_70
int32_t var_6c
void* r12_1

if (r12 == 0)
    r12_1 = arg1 + 0x78
else
    arg_8 = *(arg1 + 0x18)
    int32_t rcx_19 = sub_140b63b70(&arg_8, &var_78)
    int32_t var_60_1 = var_70
    var_68 = var_78
    int32_t rdx_12 = var_70 + sbb.d(rcx_19, rcx_19, var_70 != 0) + 0xf
    var_78 = nullptr
    int32_t var_5c_1 = var_6c
    var_70.q = 0
    
    if (rdx_12 s> var_6c)
        sub_1405947f0(&var_68, rdx_12)
    
    sub_140a20ba0(&var_68, u"_ImageProtocol", 0xe)
    int16_t* rcx_24 = var_78
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    int16_t* rdi_5 = var_68
    int16_t* rdx_13 = &data_142d40450
    
    if (var_60_1 != 0)
        rdx_13 = rdi_5
    
    uint64_t rbx_7 = *sub_140b58260(&arg_8, rdx_13, 1)
    uint32_t rcx_28
    rcx_28.b = (rbx_7 u>> 0x20).d == 0
    
    if ((rcx_28.b & sub_140b5b8a0(rbx_7.d, 0)) != 0)
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    rax = sub_140d2dfc0(r12, arg1, rbx_7, 0, 0, 0, 0, 0, 0)
    *(arg1 + 0x68) = rax
    
    if (rax == 0)
        r12_1 = arg1 + 0x78
    else
        sub_140ce1310(rax, nullptr, nullptr, 0, 0)
        int64_t* rcx_32 = *(arg1 + 0x68)
        r12_1 = arg1 + 0x78
        (*(*rcx_32 + 0x2c0))(rcx_32, r12_1)
    
    if (rdi_5 != 0)
        sub_140a74f90(rdi_5)

if (r13 == 0)
    return 

arg_8 = *(arg1 + 0x18)
int32_t rcx_35 = sub_140b63b70(&arg_8, &var_78)
int32_t var_60_2 = var_70
var_68 = var_78
int32_t rdx_18 = var_70 + sbb.d(rcx_35, rcx_35, var_70 != 0) + 0xf
var_78 = nullptr
int32_t var_5c_2 = var_6c
var_70.q = 0

if (rdx_18 s> var_6c)
    sub_1405947f0(&var_68, rdx_18)

sub_140a20ba0(&var_68, u"_AudioProtocol", 0xe)
int16_t* rcx_40 = var_78

if (rcx_40 != 0)
    sub_140a74f90(rcx_40)

int16_t* rdi_6 = var_68

if (var_60_2 != 0)
    r15 = rdi_6

uint64_t rbx_8 = *sub_140b58260(&arg_8, r15, 1)
uint32_t rcx_44
rcx_44.b = (rbx_8 u>> 0x20).d == 0

if ((rcx_44.b & sub_140b5b8a0(rbx_8.d, 0)) != 0)
    sub_140d19010(arg1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

rax = sub_140d2dfc0(r13, arg1, rbx_8, 0, 0, 0, 0, 0, 0)
*(arg1 + 0x70) = rax

if (rax != 0)
    sub_140ce1310(rax, nullptr, nullptr, 0, 0)
    int64_t* rcx_48 = *(arg1 + 0x70)
    (*(*rcx_48 + 0x2c0))(rcx_48, r12_1)

if (rdi_6 != 0)
    sub_140a74f90(rdi_6)
