// 函数: sub_141d68fd0
// 地址: 0x141d68fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = 0
int64_t arg_18 = 0

if ((1 & sub_140b5b8a0(0, 0)) != 0)
    sub_140d19010(arg1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* rax_2 = sub_140d2dfc0(sub_141a6e000(), arg1, 0, 8, 0, 0, 0, 0, 0)
*(arg1 + 0x348) = rax_2
int32_t rdx_1 = *data_143f37fc0
int32_t* rcx_2
rcx_2.b = rdx_1 == 0
*(rax_2 + 0x118) = rcx_2.b

if (rdx_1 != 0 && *(rax_2 + 0x119) == 0)
    *(rax_2 + 0x119) = 1

int64_t* rax_3 = data_143f37fd8
int32_t arg_10 = 0xea60
int32_t arg_14 = 1
uint64_t var_38 = 0
int32_t rbx = rax_3[1].d
int64_t rbp = *rax_3
int16_t* rbp_1

if (rbx != 0)
    sub_1405a4c70(&var_38, rbx, 0)
    rbp_1 = var_38
    memcpy(rbp_1, rbp, rbx * 2)
else
    rbp_1 = nullptr

int16_t* const r14 = &data_142d40450
int16_t* const rdx_4 = &data_142d40450

if (rbx != 0)
    rdx_4 = rbp_1

sub_140b29b90(&arg_10, rdx_4)

if (rbp_1 != 0)
    sub_140a74f90(rbp_1)

int64_t rax_4 = arg_10.q
void* rcx_7 = *(arg1 + 0x348)
var_38 = 0
*(rcx_7 + 0x108) = rax_4
int64_t* rax_5 = data_143f37ff0
int32_t arg_8 = 0x1e
int32_t arg_c = 1
int32_t rbx_1 = rax_5[1].d
int64_t rbp_2 = *rax_5
bool cond:1 = rbx_1 != 0

if (rbx_1 != 0)
    sub_1405a4c70(&var_38, rbx_1, 0)
    rdi = var_38
    memcpy(rdi, rbp_2, rbx_1 * 2)
    cond:1 = rbx_1 != 0

if (cond:1)
    r14 = rdi

sub_140b29b90(&arg_8, r14)

if (rdi != 0)
    sub_140a74f90(rdi)

int64_t result = arg_8.q
*(*(arg1 + 0x348) + 0x110) = result
return result
