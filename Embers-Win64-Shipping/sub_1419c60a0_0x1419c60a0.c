// 函数: sub_1419c60a0
// 地址: 0x1419c60a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg1 + 0x10)
int32_t r15 = 0
int16_t arg_8 = 0
int16_t* var_50
sub_140a2e390(&var_50, u"%s_", r8)
int16_t* const r8_1 = &data_142d40450
int16_t* const var_78 = &data_142d40450
int32_t var_48

if (var_48 != 0)
    r8_1 = var_50

sub_1419c63b0(arg1, *(arg1 + 0x10), r8_1, &arg_8, arg5, arg2)
int16_t* rsi = *(arg1 + 0x10)
int16_t* r14 = nullptr
int32_t rdi = 0
int32_t arg_18 = *(arg1 + 0x60)
int16_t* var_70 = nullptr
int64_t var_68 = 0

if (rsi != 0 && *rsi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rsi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_70, rbx_1.d + 1)
        r15 = var_68:4.d
        rdi = var_68.d
        r14 = var_70
    
    rdi += rbx_1.d + 1
    var_68.d = rdi
    
    if (rdi s> r15)
        sub_140594770(&var_70)
        r15 = var_68:4.d
        rdi = var_68.d
        r14 = var_70
    
    UnDecorator::getReferenceType(r14, rsi, (rbx_1.d + 1) * 2)

int32_t var_60
sub_140a696e0(arg3, &var_60)
int16_t* const rdx_5 = r14
int32_t rax_1 = arg_18
int64_t* var_58
*var_58 = r14
var_58[1].d = rdi
*(var_58 + 0xc) = r15
var_58[2].d = rax_1
var_58[3].d = 0xffffffff
int32_t rax_2 = var_58[1].d
int32_t rcx_6

if (rax_2 != 0)
    rcx_6 = rax_2 - 1
else
    rdx_5 = &data_142d40450
    rcx_6 = 0

int32_t rax_3 = sub_1405969c0(rcx_6, rdx_5)
int64_t* var_88
var_88.d = var_60
int32_t* result = sub_1409249d0(arg3, &arg_18, rax_3, var_58, var_88.d, nullptr)
int16_t* rdi_1 = *(arg1 + 0x18)

if (rdi_1 != 0)
    int64_t r13_1 = 0
    var_60.q = 0
    int32_t r14_1 = 0
    int64_t var_58_1 = 0
    int32_t rax_4 = 0
    
    if (*rdi_1 != 0)
        int64_t rbx_4 = -1
        
        do
            rbx_4 += 1
        while (rdi_1[rbx_4] != 0)
        
        if (rbx_4.d + 1 s> 0)
            sub_1405947f0(&var_60, rbx_4.d + 1)
            rax_4 = var_58_1:4.d
            r14_1 = var_58_1.d
            r13_1 = var_60.q
        
        r14_1 += rbx_4.d + 1
        var_58_1.d = r14_1
        
        if (r14_1 s> rax_4)
            sub_140594770(&var_60)
            r14_1 = var_58_1.d
            r13_1 = var_60.q
        
        UnDecorator::getReferenceType(r13_1, rdi_1, (rbx_4.d + 1) * 2)
    
    int16_t* rsi_1 = *(arg1 + 0x10)
    int16_t* r15_1 = nullptr
    var_70 = nullptr
    int32_t rdi_2 = 0
    int16_t** var_68_1 = nullptr
    int32_t r12_1 = 0
    
    if (rsi_1 != 0 && *rsi_1 != 0)
        int64_t rbx_6 = -1
        
        do
            rbx_6 += 1
        while (rsi_1[rbx_6] != 0)
        
        if (rbx_6.d + 1 s> 0)
            sub_1405947f0(&var_70, rbx_6.d + 1)
            r12_1 = var_68_1:4.d
            rdi_2 = var_68_1.d
            r15_1 = var_70
        
        rdi_2 += rbx_6.d + 1
        var_68_1.d = rdi_2
        
        if (rdi_2 s> r12_1)
            sub_140594770(&var_70)
            r12_1 = var_68_1:4.d
            rdi_2 = var_68_1.d
            r15_1 = var_70
        
        UnDecorator::getReferenceType(r15_1, rsi_1, (rbx_6.d + 1) * 2)
    
    sub_1405d1820(arg4, &var_70)
    *var_68_1 = r15_1
    var_68_1[1].d = rdi_2
    *(var_68_1 + 0xc) = r12_1
    var_68_1[2] = r13_1
    var_68_1[3].d = r14_1
    *(var_68_1 + 0x1c) = var_58_1:4.d
    var_68_1[4].d = 0xffffffff
    int32_t rax_6 = var_68_1[1].d
    
    if (rax_6 != 0)
        var_78 = r15_1
    
    int32_t rcx_16 = rax_6 - 1
    
    if (rax_6 == 0)
        rcx_16 = 0
    
    int32_t rax_7 = sub_1405969c0(rcx_16, var_78)
    var_88.d = var_70.d
    result = sub_1405d2a60(arg4, &arg_18, rax_7, var_68_1, var_88.d, nullptr)

int16_t* rcx_19 = var_50

if (rcx_19 == 0)
    return result

return sub_140a74f90(rcx_19)
