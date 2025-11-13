// 函数: sub_140bd0050
// 地址: 0x140bd0050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140b51c20(arg1[0x13], arg2, arg1[0x14], arg3)

if (result != 0)
    arg1[0x14] += arg3
    return result

void* rax_1 = (*(*arg1 + 0x90))(arg1)
int64_t var_18
int64_t* rax_2 = sub_140cbc3c0(&var_18, arg1[0xf])
int16_t* const rbx_1 = &data_142d40450
int16_t* const rdi_1

if (rax_2[1].d == 0)
    rdi_1 = &data_142d40450
else
    rdi_1 = *rax_2

void* rcx_3 = *(rax_1 + 0x80)
int16_t* var_28
int32_t var_20

if (rcx_3 == 0 || *(rcx_3 + 0x10) == 0)
    var_28 = nullptr
    var_20 = 0
    sub_1405947f0(&var_28, 5)
    int32_t rax_3 = var_20 + 5
    var_20 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, u"None", 0xa)
else
    sub_140d21830(rcx_3, &var_28, 0, 0)

int16_t* const var_38 = rdi_1

if (var_20 != 0)
    rbx_1 = var_28

sub_140af98a0("Unknown", 0x2d, 
    FDuplicateDataReader Overread. SerializedObject = %s SerializedProperty = %s", rbx_1)
int16_t* rcx_7 = var_28

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = var_18

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return sub_140afbb40() __tailcall
