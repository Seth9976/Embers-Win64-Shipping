// 函数: sub_141cff460
// 地址: 0x141cff460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int16_t* var_38 = nullptr
int32_t rdx = 0
int32_t var_30 = 0
int32_t var_2c = 0
int32_t r8 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        r8 = var_2c
        rdx = var_30
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    var_30 = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, arg2, (rbx_1.d + 1) * 2)

sub_140b20c40(&var_38)
uint64_t var_28 = 0
int32_t var_20 = 0
uint64_t rbp = 0
int32_t rsi_1 = 0
EnterCriticalSection(arg1 + 0x38)
int64_t r14 = sx.q(*(arg1 + 0x18))
int32_t r15 = 0
int32_t temp0 = r14.d

if (temp0 != 0)
    if (temp0 s> 0)
        sub_1405a5410(&var_28, r14.d)
        rsi_1 = var_20
        rbp = var_28
    
    memcpy((sx.q(rsi_1) << 4) + rbp, *(arg1 + 0x10), (r14 << 4).d)
    rsi_1 += r14.d
    r15 = rsi_1

if (arg1 != -0x38)
    LeaveCriticalSection(arg1 + 0x38)

void* rbx_3

if (r15 s<= 0)
label_141cff5a9:
    rbx_3.b = 0
else
    rbx_3 = rbp + 8
    
    while (true)
        int16_t* const rdx_5 = &data_142d40450
        
        if (var_30 != 0)
            rdx_5 = var_38
        
        if (sub_141d01fc0(*rbx_3, rdx_5) != 0)
            rbx_3.b = 1
            break
        
        rdi += 1
        rbx_3 += 0x10
        
        if (rdi s>= rsi_1)
            goto label_141cff5a9

if (rbp != 0)
    sub_140a74f90(rbp)

int16_t* rcx_12 = var_38

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

return zx.q(rbx_3.b)
