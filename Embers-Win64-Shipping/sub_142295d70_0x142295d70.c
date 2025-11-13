// 函数: sub_142295d70
// 地址: 0x142295d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[0x44].d = arg1[0x44].d
arg2[0x45].b = arg1[0x45].b
arg2[0x47].d = arg1[0x47].d
*(arg2 + 0x224) = *(arg1 + 0x224)
(*(*arg2 + 0x698))(arg2, &arg1[0x4b])
int64_t var_18
(*(*arg2 + 0x678))(arg2, sub_1422a12b0(arg1, &var_18))
int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

*(arg2 + 0x22c) = *(arg1 + 0x22c)
return sub_140597df0(&arg2[0x48], &arg1[0x48]) __tailcall
