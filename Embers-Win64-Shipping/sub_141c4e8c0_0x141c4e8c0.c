// 函数: sub_141c4e8c0
// 地址: 0x141c4e8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int64_t* arg_8
(*(*arg4 + 0x278))(arg4, &arg_8)

if (&arg1[1] == &arg_8)
    goto label_141c4e91e

int64_t* rcx_1 = arg1[1]
arg1[1] = arg_8
arg_8 = nullptr

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)
label_141c4e91e:
    int64_t* rcx_2 = arg_8
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)

if (arg4[5] == 0)
    (*(*arg4 + 0x270))(arg4)

sub_140af98a0(
    "d:\build\++ue4\sync\engine\source\runtime\audioextensions\public\ISoundfieldFormat.h", 0x154, 
    Pure virtual not implemented (%s)", USoundfieldEffectSettingsBase::GetProxy")
sub_140afbb40()

if (arg1 != &arg_8)
    int64_t* rcx_4 = *arg1
    *arg1 = 0
    
    if (rcx_4 != 0)
        (**rcx_4)(rcx_4, 1)

return arg1
