// 函数: sub_1406e52a0
// 地址: 0x1406e52a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t var_18 = 0
int32_t var_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t var_28 = 0
int32_t var_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rax_3 = *(arg2 + 0x20)
int64_t var_38 = 0
int32_t result_1 = 0
int64_t rcx_2
rcx_2.b = rax_3 != 0
int32_t rax_4 = var_10
*(arg2 + 0x20) = rcx_2 + rax_3
int32_t rcx_4 = rax_4 - 1

if (rax_4 == 0)
    rcx_4 = 0

int32_t rdx_5

if (var_20 == 0)
    rdx_5 = 0
else
    rdx_5 = var_20 - 1

int32_t var_30 = 0

if (rdx_5 + 2 != neg.d(rcx_4))
    sub_1405947f0(&var_38, rdx_5 + 2 + rcx_4)
    rax_4 = var_10

int32_t r8_4 = rax_4 - 1

if (rax_4 == 0)
    r8_4 = 0

sub_140a20ba0(&var_38, var_18, r8_4)
sub_140a20b00(&var_38, U"|", 1)

if (var_20 != 0)
    rbx = var_20 - 1

sub_140a20ba0(&var_38, var_28, rbx)
int32_t result = &var_38

if (arg3 == &var_38)
    int64_t rcx_10 = var_38
    
    if (rcx_10 != 0)
        result = sub_140a74f90(rcx_10)
else
    int64_t rcx_9 = *arg3
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    *arg3 = var_38
    arg3[1].d = var_30
    result = result_1
    *(arg3 + 0xc) = result

int64_t rcx_11 = var_28

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = var_18

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
