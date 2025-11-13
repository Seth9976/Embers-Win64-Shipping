// 函数: sub_141024080
// 地址: 0x141024080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_14093f560(arg1 + 0x988, &arg_8, *arg2)
int64_t rax = sx.q(arg_8)
int32_t i = 0
int64_t rax_3

if (rax.d == 0xffffffff)
    rax_3 = 0
else
    rax_3 = rax * 0x30 + *(arg1 + 0x988)

int64_t rcx_1 = rax_3 + 8

if (rax_3 == 0)
    rcx_1 = 0

if (rcx_1 != 0)
    return rcx_1

int64_t var_50 = *arg2
void* var_58
int32_t var_70 = &var_58
var_58 = arg1
int64_t var_48 = 0
int64_t var_40 = 0
int64_t* var_78 = arg2
sub_1410012e0(arg1 + 0x988, &arg_8, &var_78, nullptr)
int64_t* r12_1 = *(arg1 + 0x988) + sx.q(arg_8) * 0x30 + 8

if (var_48 != 0)
    sub_140a74f90(var_48)

void* r13 = *r12_1

if (data_1439c7ad0 s<= 0)
    return r12_1

void* r14_1 = &data_1439c7ac0

do
    int32_t rbx_1 = *r14_1
    int32_t rdx_2 = 0x20
    
    if (rbx_1 != 0)
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_forward(rbx_1)
        rdx_2 = temp0_1
    
    int64_t* rax_7 = sub_141027930(r13 + 0x430, rdx_2)
    data_143f0f1d8
    int64_t var_68
    int64_t* rax_8 = sub_140b63b70(&r12_1[1], &var_68)
    int16_t* const r8_2
    
    if (rax_8[1].d == 0)
        r8_2 = &data_142d40450
    else
        r8_2 = *rax_8
    
    sub_140a2e390(&var_78, u"%s (GPUMask 0x%x)", r8_2)
    rax_7[3]
    int64_t* rcx_11 = var_78
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    int64_t rcx_12 = var_68
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int64_t rdi_2 = sx.q(r12_1[3].d)
    int32_t rax_9 = (rdi_2 + 1).d
    r12_1[3].d = rax_9
    
    if (rax_9 s> *(r12_1 + 0x1c))
        sub_1405c4e40(&r12_1[2])
    
    int64_t rax_10 = rax_7[1]
    i += 1
    int32_t* rcx_16 = (rdi_2 << 5) + r12_1[2]
    r14_1 += 4
    *rcx_16 = rbx_1
    *(rcx_16 + 8) = rax_10
    *(rcx_16 + 0x10) = rax_10
    *(rcx_16 + 0x18) = rax_7
while (i s< data_1439c7ad0)

return r12_1
