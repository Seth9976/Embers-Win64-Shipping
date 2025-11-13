// 函数: sub_1408f9f50
// 地址: 0x1408f9f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142029f30(arg1, arg2)
void* rax = sub_1408fb610()
sub_1408fb610()
void arg_18
int64_t* rax_1 = sub_140b58260(&arg_18, u"SharedWorldData", 1)
int64_t var_18
sub_140b63b70(rax_1, &var_18)
int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

void* rax_2 = sub_1408f7ec0(rax, *rax_1)
int64_t var_28 = 0
int32_t var_20 = 0
sub_14241daa0(rax_2, arg2, &var_28)
void* rax_3 = sub_1408fb610()
sub_1408fb610()
int64_t* rax_4 = sub_140b58260(&arg_18, u"AlignmentTransforms", 1)
sub_140b63b70(rax_4, &var_18)
int64_t rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

void* rax_5 = sub_1408f7ec0(rax_3, *rax_4)
var_28 = 0
int32_t var_20_1 = 0
return sub_14241daa0(rax_5, arg2, &var_28)
