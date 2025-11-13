// 函数: sub_140af8ab0
// 地址: 0x140af8ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax = sub_140b13b30(&var_18)
int64_t rcx_1 = *rax
int32_t rdx = rax[1].d
int32_t rdx_1 = neg.d(rdx)
*rax = 0
int32_t r8 = rax[1].d
int64_t var_28 = rcx_1
int32_t rcx_2 = *(rax + 0xc)
int32_t rdx_4 = sbb.d(rdx_1, rdx_1, rdx != 0) + 0x1c + r8
int32_t var_20 = r8
int32_t var_1c = rcx_2
rax[1] = 0

if (rdx_4 s> rcx_2)
    sub_1405947f0(&var_28, rdx_4)

sub_140a20ba0(&var_28, u"Config/ConsoleVariables.ini", 0x1b)
int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int16_t* const rdx_5 = &data_142d40450

if (data_143de5788 != 0)
    rdx_5 = data_143de5780

sub_140aeaee0(u"ConsoleVariables", rdx_5, 0x4000000, 0)
int64_t* rcx_6 = data_143db18d0

if (rcx_6 == 0)
    sub_140a53c40()
    rcx_6 = data_143db18d0

int64_t result = (*(*rcx_6 + 0x50))(rcx_6)
int64_t rcx_7 = var_28

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7) __tailcall
