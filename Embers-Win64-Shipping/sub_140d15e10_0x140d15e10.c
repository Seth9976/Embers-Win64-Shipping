// 函数: sub_140d15e10
// 地址: 0x140d15e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d44b10
sub_140cda860()
char arg_8 = 0
char* var_10 = &arg_8
void*** (* var_18)() = sub_140884c50
void* rax
int64_t r9
rax, r9 = sub_140a756e0(&var_18, &data_14397f5f0)
void**** rbx

if (*(rax + 0x18) == 0)
    rbx = nullptr
label_140d15e82:
    int64_t arg_10 = arg1[3]
    int16_t* var_28
    sub_140b63b70(&arg_10, &var_28)
    int16_t* const r9_1 = &data_142d40450
    int32_t var_20
    
    if (var_20 != 0)
        r9_1 = var_28
    
    sub_140af98a0("Unknown", 0x9d6, u"%s is not being constructed with NewObject.", r9_1)
    int16_t* rcx_3 = var_28
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    r9 = sub_140afbb40()
else
    rbx = *(*(rax + 0x10) + (sx.q(*(rax + 0x18)) << 3) - 8)
    
    if (rbx == 0)
        goto label_140d15e82

void*** rax_3 = *rbx

if (rax_3 != 0 && rax_3 != arg1)
    sub_140af98a0("Unknown", 0x9d8, 
        UObject() constructor called but it's not the object that's currently being constructed with "
    "NewObject. Maybe you are trying to construct it on the stack, whic", r9)
    sub_140afbb40()

*rbx = arg1
*(rbx + 0x12) = 0
return arg1
