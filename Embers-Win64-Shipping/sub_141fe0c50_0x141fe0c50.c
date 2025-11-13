// 函数: sub_141fe0c50
// 地址: 0x141fe0c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = data_143f3d6b0

if (result != 0)
    return result

if (data_143f3e9c4 != result.b && arg1 != 0)
    return 3

data_143f3e9c4 = 1
void* rax_1 = sub_140cde0b0()
sub_140d19010(rax_1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_10 = 0
void* rax_3 = sub_140d2dfc0(sub_14249aaa0(), rax_1, 0, 0, 0, 0, 0, 0, 0)
data_143f3d6b0 = rax_3
int32_t rax_4 = *(rax_3 + 0xc)
void* const rax_11

if (rax_4 s>= data_143e1d9b4)
    rax_11 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_4)
    uint32_t rdx_3 = zx.d(temp0_1)
    int32_t rax_6 = temp1_1 + rdx_3
    rax_11 = *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_3) * 0x18

*(rax_11 + 8) |= 0x40000000
struct IDelegateInstance::VTable** var_28
int64_t* rax_12 = sub_141fe3cc0(&var_28)
int64_t* rax_13 = sub_141fe07d0(data_143f3d6b0, rax_12, 1)
struct IDelegateInstance::VTable** rcx_8 = var_28

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_141fec910(data_143f3d6b0, rax_13)
int64_t* rdi_1 = data_143f3d6d8
var_28 = nullptr
struct IDelegateInstance::VTable** rax_14 = sub_140a84c80(0, 0x20, 0)
var_28 = rax_14
int32_t var_20_1 = 2

if (rax_14 != 0)
    *rax_14 = &IDelegateInstance::`vftable'
    *rax_14 = &data_1432968b0
    rax_14[2] = sub_140a387b0()
    *rax_14 = &data_143296908

(*(*rdi_1 + 0xa8))(rdi_1, &var_28)
struct IDelegateInstance::VTable** rax_18

if (var_20_1 == 0)
    rax_18 = var_28
label_141fe0e09:
    
    if (rax_18 != 0)
        sub_140a74f90(rax_18)
else
    struct IDelegateInstance::VTable** rcx_11 = var_28
    
    if (rcx_11 != 0)
        (*rcx_11)->`scalar deleting destructor'(rcx_11, 0)
        rax_18 = var_28
        
        if (rax_18 != 0)
            rax_18 = sub_140a84c80(rax_18, 0, 0)
            var_28 = rax_18
        
        int32_t var_20_2 = 0
        goto label_141fe0e09
int64_t* rbx_4 = data_143db18d0

if (rbx_4 == 0)
    sub_140a53c40()
    rbx_4 = data_143db18d0

var_28 = nullptr
struct IDelegateInstance::VTable** rax_19 = sub_140a84c80(0, 0x20, 0)
var_28 = rax_19
int32_t var_20_3 = 2

if (rax_19 != 0)
    *rax_19 = &IDelegateInstance::`vftable'
    *rax_19 = &data_143296960
    rax_19[2] = sub_140a387b0()
    *rax_19 = &data_1432969b8

(*(*rbx_4 + 0x98))(rbx_4, dp.Override.Restore", 
    Restores any cvars set by dp.Override to their previous value", &var_28, 0)
struct IDelegateInstance::VTable** rax_23

if (var_20_3 == 0)
    rax_23 = var_28
label_141fe0ee0:
    
    if (rax_23 != 0)
        sub_140a74f90(rax_23)
else
    struct IDelegateInstance::VTable** rcx_15 = var_28
    
    if (rcx_15 != 0)
        (*rcx_15)->`scalar deleting destructor'(rcx_15, 0)
        rax_23 = var_28
        
        if (rax_23 != 0)
            rax_23 = sub_140a84c80(rax_23, 0, 0)
            var_28 = rax_23
        
        int32_t var_20_4 = 0
        goto label_141fe0ee0
sub_1422eb200()
return data_143f3d6b0
