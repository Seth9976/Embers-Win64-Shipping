// 函数: sub_140b93730
// 地址: 0x140b93730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_48 = nullptr
int32_t var_40 = 0
sub_1405947f0(&var_48, 0x13)
int32_t rsi = var_40 + 0x13

if (rsi s> 0)
    sub_140594770(&var_48)

int16_t* rbp = var_48
UnDecorator::getReferenceType(rbp, u"PLACEHOLDER-CLASS_", 0x26)
int16_t* const rbx = &data_142d40450
int16_t* const r8 = &data_142d40450

if (rsi != 0)
    r8 = rbp

int16_t* var_38
sub_140a2e390(&var_38, u"%s_%s", r8)
int32_t var_30

if (var_30 != 0)
    rbx = var_38

uint64_t arg_20
sub_140b58260(&arg_20, rbx, 1)
int16_t* rcx_5 = var_38

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

if (rbp != 0)
    sub_140a74f90(rbp)

arg_20 = *sub_140d25240(&var_48, arg1, sub_140cddb10(), arg_20)
int64_t* rax_2 = sub_140cddb10()
uint64_t rbx_1 = arg_20
var_48 = rbx_1
char rax_3 = sub_140b5b8a0(rbx_1.d, 0)
int32_t rcx_9
rcx_9.b = var_48:4.d == 0

if ((rcx_9.b & rax_3) != 0)
    sub_140d19010(arg1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* result = sub_140d2dfc0(rax_2, arg1, rbx_1, 0x41, 0, 0, 0, 0, 0)

if (arg3 != 0xffffffff)
    *(result + 0x238) = not.d(arg3)

int64_t rdx_4 = *result
(*(rdx_4 + 0x268))(result, rdx_4)
sub_140ca8970(result, 1)
return result
