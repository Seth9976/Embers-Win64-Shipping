// 函数: sub_140851500
// 地址: 0x140851500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = 0
int32_t arg_8 = 0

if (*(arg1 + 0xe70) s> 1)
    return arg1 + 0xe68

void* rax = sub_140d3c6e0(arg1 + 0x20)
int64_t var_58
int64_t var_50
int64_t var_38
int64_t* rax_1
int32_t rsi
int64_t r14

if (rax == 0)
    var_58 = 0
    var_50 = 0
    sub_1405947f0(&var_58, 8)
    int32_t rax_2 = var_50.d + 8
    var_50.d = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_58)
    
    r14 = var_58
    UnDecorator::getReferenceType(r14, u"nullptr", 0x10)
    rax_1 = &var_58
    rsi = 2
else
    rax_1 = sub_140d21830(rax, &var_38, 0, 0)
    r14 = var_58
    rsi = 1

int32_t r15 = rax_1[1].d
int64_t r12 = *rax_1
uint64_t var_48 = 0

if (r15 != 0)
    sub_1405a4c70(&var_48, r15, 0)
    rbx = var_48
    memcpy(rbx, r12, r15 * 2)

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    
    if (r14 != 0)
        sub_140a74f90(r14)

if ((rsi.b & 1) != 0)
    int64_t rcx_8 = var_38
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

uint64_t r8_3 = &data_142d40450

if (r15 != 0)
    r8_3 = rbx

*(arg1 + 0xd68)
sub_140a2e390(&var_58, u"SystemSimulation | System: %s | bSolo: %s |", r8_3)

if (arg1 + 0xe68 == &var_58)
    int64_t rcx_11 = var_58
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
else
    int64_t rcx_10 = *(arg1 + 0xe68)
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    *(arg1 + 0xe68) = var_58
    *(arg1 + 0xe70) = var_50.d
    *(arg1 + 0xe74) = var_50:4.d

if (rbx != 0)
    sub_140a74f90(rbx)

return arg1 + 0xe68
