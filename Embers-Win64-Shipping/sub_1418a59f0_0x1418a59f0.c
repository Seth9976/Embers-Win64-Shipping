// 函数: sub_1418a59f0
// 地址: 0x1418a59f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_20 = arg4

if (arg4 == 0)
    *(arg1 + 0x1c) += 1
    int64_t* rcx = *(arg1 + 0x10)
    return (*(*rcx + 0x28))(rcx, arg5, 7)

int16_t* rax_2 = sub_141851730(&arg_20)
int64_t var_38 = 0
int32_t rdx = 0
int32_t var_30 = 0
int32_t rcx_2 = 0
int32_t var_2c = 0

if (rax_2 != 0 && *rax_2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rax_2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        rcx_2 = var_2c
        rdx = var_30
    
    int32_t rax_3 = rbx_1.d + 1 + rdx
    int32_t var_30_1 = rax_3
    
    if (rax_3 s> rcx_2)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, rax_2, (rbx_1.d + 1) * 2)

int64_t var_48 = 0
int32_t var_40 = 0
sub_1405947f0(&var_48, 0x13)
int32_t rax_4 = var_40 + 0x13
var_40 = rax_4

if (rax_4 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"DiskChunkStoreSave", 0x26)
int64_t rbx_3 = **(arg1 + 8)
enum WIN32_ERROR rax_6 = GetLastError()
int64_t result = (*(rbx_3 + 0x18))(*(arg1 + 8), arg2, arg3, zx.q(rax_6), &var_48, &var_38)
int64_t rcx_10 = var_48

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = var_38

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

*(arg1 + 0x24) += 1
return result
