// 函数: sub_140d01750
// 地址: 0x140d01750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_18
int64_t* rdx = &var_18
int64_t arg_8 = *(*(arg1 + 0x78) + 0x18)
int32_t* rcx_1 = &arg_8
int64_t rax_2
wchar16 const* const rdx_1

if ((*(arg1 + 0x40) & 0x4000000000) == 0)
    sub_140b63b70(rcx_1, rdx)
    int64_t* rcx_3 = *(arg1 + 0x78)
    rax_2 = (*(*rcx_3 + 0x2c0))(rcx_3)
    rdx_1 = u"TWeakObjectPtr<%s%s>"
else
    sub_140b63b70(rcx_1, rdx)
    int64_t* rcx_2 = *(arg1 + 0x78)
    rax_2 = (*(*rcx_2 + 0x2c0))(rcx_2)
    rdx_1 = u"TAutoWeakObjectPtr<%s%s>"

sub_140a2e390(arg2, rdx_1, rax_2)
int16_t* rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return arg2
