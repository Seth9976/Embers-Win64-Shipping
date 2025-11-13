// 函数: sub_140b3d910
// 地址: 0x140b3d910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = 0
int32_t rdx = 0
int32_t rcx = 0
int32_t var_40 = 0
int32_t var_3c = 0

if (arg1 != 0 && *arg1 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg1[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_48, rbx_1.d + 1)
        rcx = var_3c
        rdx = var_40
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    int32_t var_40_1 = rax_1
    
    if (rax_1 s> rcx)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, arg1, (rbx_1.d + 1) * 2)

int64_t var_38
int64_t var_28
int64_t* rax_3 = sub_140a35790(sub_140b187e0(&var_28, &var_48), &var_38)
void* rbx_3 = &data_1439a92a0

if (arg3 != 0)
    rbx_3 = &data_1439a9250

int32_t result_1
sub_1408f1b50(rbx_3, &result_1, rax_3)
int64_t result = sx.q(result_1)
void* const rcx_9

if (result.d == 0xffffffff)
    rcx_9 = nullptr
else
    rcx_9 = (result << 5) + *rbx_3

int128_t** rbx_4 = rcx_9 + 0x10
int64_t rcx_10 = var_38

if (rcx_9 == 0)
    rbx_4 = nullptr

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = var_28

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = var_48

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

bool cond:2 = rbx_4 != 0

if (rbx_4 != 0)
    if (arg2 != 0)
        int128_t* rax_4 = *rbx_4
        *arg2 = *rax_4
        arg2[1].d = rax_4[1].d
    
    cond:2 = rbx_4 != 0

result.b = cond:2
return result
