// 函数: sub_141f89d80
// 地址: 0x141f89d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dc98e0(arg1, arg2)
void* rax = sub_142497110()
sub_142497110()
void arg_18
int64_t* rax_1 = sub_140b58260(&arg_18, u"PlayerState", 1)
int64_t var_18
sub_140b63b70(rax_1, &var_18)
int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

void* rax_2 = sub_1408f7ec0(rax, *rax_1)
int64_t var_28 = 0
int32_t var_20 = 0
sub_14241daa0(rax_2, arg2, &var_28)
var_20.b = 0
var_28.d = 0
var_28:4.d = 1
void* rax_3 = sub_142497110()
sub_142497110()
int64_t* rax_4 = sub_140b58260(&arg_18, u"Pawn", 1)
sub_140b63b70(rax_4, &var_18)
int64_t rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return sub_14241daa0(sub_1408f7ec0(rax_3, *rax_4), arg2, &var_28)
