// 函数: sub_141be9260
// 地址: 0x141be9260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = 0
int16_t* const r12 = &data_142d40450
char rbx = 0
int32_t arg_10 = 0
int16_t* const rcx

if (arg2[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg2

uint64_t result = sub_140a54510(rcx, &data_142e1b5d8)
uint64_t var_48
uint64_t rsi
int64_t r15

if (result.d != 0)
    rsi = var_48
    r15.b = 0
else
    var_48 = 0
    int32_t var_40_1 = 0
    sub_1405947f0(&var_48, (result + 3).d)
    int32_t rax = var_40_1 + 3
    var_40_1 = rax
    
    if (rax s> 0)
        sub_140594770(&var_48)
    
    rsi = var_48
    UnDecorator::getReferenceType(rsi, &data_142e14158, 6)
    rbx = 1
    
    if (*sub_1408f1b50(&arg2[4], &arg_10, &var_48) == 0xffffffff)
        r15.b = 0
    else
        r15 = 1

if ((rbx & 1) != 0 && rsi != 0)
    sub_140a74f90(rsi)

if (r15.b == 0)
    result.b = 0
    return result

var_48 = 0
int64_t var_40_2 = 0
sub_1405947f0(&var_48, 3)
int32_t rax_1 = var_40_2.d + 3
var_40_2.d = rax_1

if (rax_1 s> 0)
    sub_140594770(&var_48)

uint64_t rsi_1 = var_48
UnDecorator::getReferenceType(rsi_1, &data_142e14158, 6)
sub_1408f1b50(&arg2[4], &arg_10, &var_48)
int64_t rax_2 = sx.q(arg_10)
void* const rbx_3

if (rax_2.d == 0xffffffff)
    rbx_3 = nullptr
else
    rbx_3 = (rax_2 << 5) + arg2[4]

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

int64_t rax_3 = sx.q(*(rbx_3 + 0x10))
int32_t r8_2 = *(rbx_3 + 0x14)

if (r8_2 - rax_3.d s>= 0)
    int32_t r9_1 = arg3[1].d
    int32_t rbx_4 = r9_1 - 1
    
    if (r9_1 == 0)
        rbx_4 = 0
    
    int32_t rcx_11
    
    if (rax_3.d s>= 0)
        rcx_11 = rbx_4
        
        if (rax_3.d s< rbx_4)
            rcx_11 = rax_3.d
    else
        rcx_11 = 0
    
    int64_t r10_1 = sx.q(rcx_11)
    int64_t rdx_6 = rax_3 + sx.q(r8_2 - rax_3.d)
    
    if (rdx_6 s< r10_1)
        rbx_4 = rcx_11
    else if (rdx_6 s< sx.q(rbx_4))
        rbx_4 = rdx_6.d
    
    int16_t* const rax_6
    
    if (r9_1 == 0)
        rax_6 = &data_142d40450
    else
        rax_6 = *arg3
    
    int16_t* r15_1 = &rax_6[r10_1]
    var_48 = 0
    int32_t rbx_5 = rbx_4 - rcx_11
    var_40_2.d = 0
    int32_t rax_7 = 0
    uint64_t r14_1 = 0
    var_40_2:4.d = 0
    int32_t rsi_2 = 0
    
    if (r15_1 != 0 && *r15_1 != 0 && rbx_5 s> 0)
        if (rbx_5 + 1 s> 0)
            sub_1405947f0(&var_48, rbx_5 + 1)
            rax_7 = var_40_2:4.d
            rsi_2 = var_40_2.d
            r14_1 = var_48
        
        rsi_2 = rsi_2 + 1 + rbx_5
        var_40_2.d = rsi_2
        
        if (rsi_2 s> rax_7)
            sub_140594770(&var_48)
            rsi_2 = var_40_2.d
            r14_1 = var_48
        
        UnDecorator::getReferenceType(r14_1, r15_1, rbx_5 * 2)
        *(r14_1 + (sx.q(rsi_2) << 1) - 2) = 0
    
    rdi = r14_1
    
    if (rsi_2 != 0)
        r12 = r14_1

int64_t rbx_6 = **(arg1 + 0x10)
int64_t* rax_10 = sub_140b58260(&arg_10, r12, 1)
rbx_6.b = (*(rbx_6 + 0x268))(*(arg1 + 0x10), *rax_10, 0) != 0

if (rdi != 0)
    sub_140a74f90(rdi)

return zx.q(rbx_6.b)
