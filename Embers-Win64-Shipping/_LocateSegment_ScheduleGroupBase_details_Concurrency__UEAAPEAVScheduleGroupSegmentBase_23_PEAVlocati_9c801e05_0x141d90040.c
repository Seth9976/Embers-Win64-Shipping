// 函数: ?LocateSegment@ScheduleGroupBase@details@Concurrency@@UEAAPEAVScheduleGroupSegmentBase@23@PEAVlocation@3@_N@Z
// 地址: 0x141d90040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
int64_t* rax = sub_141d8fd20(&var_28, arg2)
int16_t* const rbx = &data_142d40450
int16_t* const rsi

if (rax[1].d == 0)
    rsi = &data_142d40450
else
    rsi = *rax

int16_t* var_58
sub_141d8fd20(&var_58, arg2)
int16_t* const r14_1 = &data_142d40450
int32_t var_50

if (var_50 != 0)
    r14_1 = var_58

int64_t* rax_1 = sub_140b257f0()
int16_t* const rcx_2

if (rax_1[1].d == 0)
    rcx_2 = &data_142d40450
else
    rcx_2 = *rax_1

int16_t* const var_48 = rcx_2
uint64_t var_78 = 0
wchar16 const* const var_40 = u"Demos/"
int32_t var_70 = 0
sub_140b0f5f0(&var_78, &var_48, 2)
int16_t* const rax_2 = &data_142d40450
int16_t* const var_30 = r14_1

if (var_70 != 0)
    rax_2 = var_78

int16_t* const var_38 = rax_2
uint64_t var_68 = 0
int32_t var_60 = 0
sub_140b0f5f0(&var_68, &var_38, 2)
uint64_t rcx_5 = var_78

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int16_t* rcx_6 = var_58

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

*arg1 = 0

if (var_60 != 0)
    rbx = var_68

var_38 = rbx
int16_t* const var_30_1 = rsi
arg1[1] = 0
sub_140b0f5f0(arg1, &var_38, 2)
uint64_t rcx_8 = var_68

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = var_28

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

return arg1
