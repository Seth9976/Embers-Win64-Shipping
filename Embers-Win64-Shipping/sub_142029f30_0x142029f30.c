// 函数: sub_142029f30
// 地址: 0x142029f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14202a030(arg1, arg2)
void* rax = sub_1424bfe50()
sub_1424bfe50()
void arg_18
int64_t* rax_1 = sub_140b58260(&arg_18, u"MatchState", 1)
int64_t var_18
sub_140b63b70(rax_1, &var_18)
int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

void* rax_2 = sub_1408f7ec0(rax, *rax_1)
int64_t var_28 = 0
int32_t var_20 = 0
sub_14241daa0(rax_2, arg2, &var_28)
var_28 = 1
var_20.b = 0
void* rax_3 = sub_1424bfe50()
sub_1424bfe50()
int64_t* rax_4 = sub_140b58260(&arg_18, u"ElapsedTime", 1)
sub_140b63b70(rax_4, &var_18)
int64_t rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return sub_14241daa0(sub_1408f7ec0(rax_3, *rax_4), arg2, &var_28)
