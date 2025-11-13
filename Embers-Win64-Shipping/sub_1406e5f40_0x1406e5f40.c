// 函数: sub_1406e5f40
// 地址: 0x1406e5f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int32_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rax_2 = *(arg2 + 0x20)
int64_t r15 = 0
int64_t var_48 = 0
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
int64_t rbx_1 = var_38

if (var_30 != 0)
    sub_1405a4c70(&var_48, var_30, 0)
    r15 = var_48
    memcpy(r15, rbx_1, var_30 * 2)

var_48 = 0
int32_t var_40
var_40.q = 0
sub_1405947f0(&var_48, 3)
int32_t rbx_2 = var_40 + 3
int32_t var_3c

if (rbx_2 s> var_3c)
    sub_140594770(&var_48)

int64_t r14 = var_48
sub_1405a7220(r14, 3, "+?", 3, 0x3f)
int64_t rdi_1

if (var_30 s> 1)
    int32_t rbx_3
    
    if (rbx_2 == 0)
        rbx_3 = 0
    else
        rbx_3 = rbx_2 - 1
    
    int32_t rax_3
    
    if (var_30 == 0)
        rax_3 = var_30 + 1
    
    if (var_30 != 0 || rbx_3 == 0)
        rax_3 = 0
    
    var_48 = 0
    int32_t rcx_8 = rax_3 + rbx_3
    
    if (var_30 != 0 || rcx_8 != 0)
        sub_1405a4c70(&var_48, var_30 + rcx_8, 0)
        memcpy(var_48, r15, var_30 * 2)
    else
        int32_t var_3c_1 = 0
    
    sub_140a20ba0(&var_48, r14, rbx_3)
    rdi_1 = var_48
    rbx_2 = var_30
    var_48 = 0
    int32_t var_40_2
    var_40_2.q = 0
    
    if (r14 != 0)
        sub_140a74f90(r14)
else
    rdi_1 = r14

if (r15 != 0)
    sub_140a74f90(r15)

void var_28
void* result = &var_28

if (arg3 != &var_28)
    int32_t r8_7 = *(arg3 + 0xc)
    arg3[1].d = rbx_2
    
    if (rbx_2 != 0 || r8_7 != 0)
        sub_1405a4c70(arg3, rbx_2, r8_7)
        result = memcpy(*arg3, rdi_1, rbx_2 * 2)
    else
        *(arg3 + 0xc) = 0

if (rdi_1 != 0)
    result = sub_140a74f90(rdi_1)

int64_t rcx_17 = var_38

if (rcx_17 == 0)
    return result

return sub_140a74f90(rcx_17)
