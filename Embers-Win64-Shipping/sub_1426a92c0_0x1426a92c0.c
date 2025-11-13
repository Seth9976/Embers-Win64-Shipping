// 函数: sub_1426a92c0
// 地址: 0x1426a92c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t var_28
int64_t* rax
int32_t rdx_1
rax, rdx_1 = sub_140b63b70(&arg_18, &var_28)
int16_t* r8 = *rax
int32_t r9 = rax[1].d
*rax = 0
int32_t rcx_1 = *(rax + 0xc)
int16_t* var_38 = r8
int32_t r8_1 = rax[1].d
int32_t rdx_4 = sbb.d(rdx_1, rdx_1, r9 != 0) + 5 + r8_1
int32_t var_2c = rcx_1
rax[1] = 0

if (rdx_4 s> rcx_1)
    sub_1405947f0(&var_38, rdx_4)

sub_140a20ba0(&var_38, u"_Int", 4)
int64_t rcx_4 = var_28

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int16_t* const rdx_5 = &data_142d40450

if (r8_1 != 0)
    rdx_5 = var_38

void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, rdx_5, 1)
uint32_t rcx_8
rcx_8.b = (rbx u>> 0x20).d == 0

if ((rcx_8.b & sub_140b5b8a0(rbx.d, 0)) != 0)
    sub_140d19010(arg2, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* rax_4 = sub_140d2dfc0(sub_14272e220(), arg2, rbx, 0, 0, 0, 0, 0, 0)
int64_t rbx_1 = sx.q(arg1[1].d)
int32_t rcx_11 = (rbx_1 + 1).d
arg1[1].d = rcx_11

if (rcx_11 s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

int64_t result = *arg1
*(result + (rbx_1 << 3)) = rax_4

if (var_38 == 0)
    return result

return sub_140a74f90(var_38)
