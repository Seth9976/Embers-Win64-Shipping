// 函数: sub_140b5d000
// 地址: 0x140b5d000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const var_28
int64_t* rax = sub_140b252d0(&var_28)
int16_t* rcx_1 = *rax
int32_t rdx = rax[1].d
int32_t rdx_1 = neg.d(rdx)
*rax = 0
int32_t r8 = rax[1].d
int16_t* var_48 = rcx_1
int32_t rcx_2 = *(rax + 0xc)
int32_t rdx_4 = sbb.d(rdx_1, rdx_1, rdx != 0) + 0xf + r8
int32_t var_3c = rcx_2
rax[1] = 0

if (rdx_4 s> rcx_2)
    sub_1405947f0(&var_48, rdx_4)

sub_140a20ba0(&var_48, u"CrashVideo.avi", 0xe)
int16_t* const rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_140a464c0()
int16_t* const rbx = &data_142d40450
int16_t* const rdx_5 = &data_142d40450

if (r8 != 0)
    rdx_5 = var_48

(*(data_14399ea08 + 0x30))(&data_14399ea08, rdx_5, 0, 0, 0)
int64_t var_18
int64_t* rax_1 = sub_140b252d0(&var_18)

if (rax_1[1].d == 0)
    var_28 = &data_142d40450
else
    var_28 = *rax_1

wchar16 const* const var_20 = u"UE4AftermathD3D12.nv-gpudmp"
uint64_t var_38 = 0
int32_t var_30 = 0
sub_140b0f5f0(&var_38, &var_28, 2)
int64_t rcx_8 = var_18

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_140a464c0()

if (var_30 != 0)
    rbx = var_38

int64_t result = (*(data_14399ea08 + 0x30))(&data_14399ea08, rbx, 0, 0, 0)
uint64_t rcx_9 = var_38

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

if (var_48 == 0)
    return result

return sub_140a74f90(var_48)
