// 函数: sub_142217760
// 地址: 0x142217760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dc98e0(arg1, arg2)
void* rax = sub_14255d000()
sub_14255d000()
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
void* rax_3 = sub_14255d000()
sub_14255d000()
int64_t* rax_4 = sub_140b58260(&arg_18, u"Controller", 1)
sub_140b63b70(rax_4, &var_18)
int64_t rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

void* rax_5 = sub_1408f7ec0(rax_3, *rax_4)
var_28 = 0
int32_t var_20_1 = 0
sub_14241daa0(rax_5, arg2, &var_28)
var_28 = 3
var_20_1.b = 0
void* rax_6 = sub_14255d000()
sub_14255d000()
int64_t* rax_7 = sub_140b58260(&arg_18, u"RemoteViewPitch", 1)
sub_140b63b70(rax_7, &var_18)
int64_t rcx_12 = var_18

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

return sub_14241daa0(sub_1408f7ec0(rax_6, *rax_7), arg2, &var_28)
