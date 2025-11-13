// 函数: sub_1426b3560
// 地址: 0x1426b3560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x64)
int16_t* const rsi = &data_142d40450
int16_t* rbx = nullptr
int16_t* r15 = nullptr
int32_t r14 = 0
int16_t* var_58
int64_t var_38

if (rax != 0)
    int64_t var_48
    int64_t* rax_2 = sub_140a35790(sub_1426ad0b0(&var_38, zx.d(rax)), &var_48)
    int16_t* const r8_1
    
    if (rax_2[1].d == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *rax_2
    
    sub_140a2e390(&var_58, u"aborts %s", r8_1)
    int64_t rcx_3 = var_48
    r15 = var_58
    int32_t var_50
    r14 = var_50
    var_58 = nullptr
    int64_t var_50_1 = 0
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t rcx_4 = var_38
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

int32_t rax_3 = *(arg1 + 0x60)
int16_t* rdi = nullptr
var_58 = nullptr
int32_t rcx_5 = 0
int32_t var_50_2 = 0

if ((rax_3.b & 0x40) != 0 && ((rax_3 u>> 7).b & 1) != 0)
    sub_1405947f0(&var_58, 9)
    rcx_5 = var_50_2 + 9
    var_50_2 = rcx_5
    
    if (rcx_5 s> 0)
        sub_140594770(&var_58)
        rcx_5 = var_50_2
    
    rdi = var_58
    __builtin_wcscpy(rdi, u"inversed")

int32_t r14_1

if ((r14 == 0 || r14 == 1) && (rcx_5 == 0 || rcx_5 == 1))
    r14_1 = 0
else
    int16_t* rax_7 = &data_142d40450
    
    if (rcx_5 != 0)
        rax_7 = rdi
    
    int16_t* r8_2 = &data_142d40450
    int16_t* var_68_1 = rax_7
    
    if (r14 != 0)
        r8_2 = r15
    
    sub_140a2e390(&var_58, u"( %s%s%s )\n", r8_2)
    rbx = var_58
    r14_1 = var_50_2

int64_t* rax_8 = sub_1426b3350(&var_38, arg1)

if (rax_8[1].d != 0)
    *rax_8

if (r14_1 != 0)
    rsi = rbx

sub_140a2e390(arg2, u"%s%s", rsi)
int64_t rcx_11 = var_38

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

if (rbx != 0)
    sub_140a74f90(rbx)

if (rdi != 0)
    sub_140a74f90(rdi)

if (r15 != 0)
    sub_140a74f90(r15)

return arg2
