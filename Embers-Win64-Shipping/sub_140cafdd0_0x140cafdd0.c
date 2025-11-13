// 函数: sub_140cafdd0
// 地址: 0x140cafdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10 = 0
*arg1 = &data_142e9fb28
void*** (* var_18)() = sub_140884c50
arg1[0x40] = &data_142e9fb30
char* var_10 = &arg_10
void* rax
int64_t r9
rax, r9 = sub_140a756e0(&var_18, &data_14397f5f0)

if (*(rax + 0x30) == 0)
    sub_140af98a0("Unknown", 0x370, u"Linkers can only be deleted by FLinkerManager.", r9)
    sub_140afbb40()

sub_140cb70e0(arg1)
arg_10 = 0
char* var_10_1 = &arg_10
var_18 = sub_140884c50
sub_140a756e0(&var_18, &data_14397f5f0)
sub_1405ae080(&arg1[0x6c])
int64_t rcx_4 = arg1[0x6a]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_1405d5770(&arg1[0x60])
int64_t rcx_6 = arg1[0x5e]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

j_sub_140a74f90(arg1[0x5d])
int64_t rcx_8 = arg1[0x59]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

if (arg1[0x58].b != 0)
    arg1[0x58].b = 0

sub_140b4cb40(&arg1[0x40])
sub_140cad7d0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
