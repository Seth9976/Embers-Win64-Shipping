// 函数: sub_142570e80
// 地址: 0x142570e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
int32_t rdx_2 = arg_10.d
int64_t rdi
rdi.b = rax_2 != 0
*(arg2 + 0x20) = rdi + rax_2
bool result = sub_142276d30(arg1, rdx_2)

if (result != 0)
    return sub_142276ea0(arg1, arg_10)

sub_140be4120(u"ServerNotifyLoadedWorld_Validate")
return result
