// 函数: sub_14062e690
// 地址: 0x14062e690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax = sub_140b63b70(arg1 + 0xa0, &var_18)
int16_t* const rsi = &data_142d40450
int16_t* const r8

if (rax[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax

int16_t* var_28
sub_140a2e390(&var_28, u"FBufferArchive %s", r8)
int16_t* rax_1 = var_28
int32_t rcx_2 = 0
*arg2 = 0
arg2[1] = 0
int32_t var_20

if (var_20 != 0)
    rsi = rax_1

if ((var_20 == 0 || rax_1 != 0) && *rsi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rsi[rbx_1] != 0)
    
    int32_t rdx_1 = 0
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(arg2, rbx_1.d + 1)
        rcx_2 = arg2[1].d
        rdx_1 = *(arg2 + 0xc)
    
    int32_t rax_2 = rcx_2 + rbx_1.d + 1
    arg2[1].d = rax_2
    
    if (rax_2 s> rdx_1)
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, rsi, (rbx_1.d + 1) * 2)
    rax_1 = var_28

if (rax_1 != 0)
    sub_140a74f90(rax_1)

int64_t rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return arg2
