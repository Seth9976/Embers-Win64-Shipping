// 函数: sub_1418cf420
// 地址: 0x1418cf420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
int32_t r13 = (arg3 * 2).d
int64_t var_70 = 1
int32_t rax = arg3.d
arg1[2] = 0
arg1[1].d = rax
uint32_t r12_1 = arg3.d u>> 1
uint32_t r15_1 = arg3.d u>> 2
int64_t* var_78 = nullptr
sub_1405a4d70(&var_78)
int64_t* rbx = var_78
int64_t rdi = sx.q(var_70.d)
int32_t rcx_2 = var_70:4.d
*rbx = 0
int32_t rsi = (rdi + 1).d
*rbx = 6
*(rbx + 4) = r13
var_70.d = rsi

if (rsi s> rcx_2)
    sub_1405a4d70(&var_78)
    rcx_2 = var_70:4.d
    rsi = var_70.d
    rbx = var_78

rbx[rdi].d = 8
*(&rbx[rdi] + 4) = r13
int32_t rdi_1 = rsi + 1
var_70.d = rdi_1

if (rdi_1 s> rcx_2)
    sub_1405a4d70(&var_78)
    rcx_2 = var_70:4.d
    rdi_1 = var_70.d
    rbx = var_78

int64_t rax_2 = sx.q(rsi)
int32_t rsi_1 = rdi_1 + 1
var_70.d = rsi_1
rbx[rax_2].d = 0
*(&rbx[rax_2] + 4) = r12_1

if (rsi_1 s> rcx_2)
    sub_1405a4d70(&var_78)
    rcx_2 = var_70:4.d
    rsi_1 = var_70.d
    rbx = var_78

int64_t rax_3 = sx.q(rdi_1)
int32_t rdi_2 = rsi_1 + 1
var_70.d = rdi_2
rbx[rax_3].d = 1
*(&rbx[rax_3] + 4) = (arg3 * 3).d

if (rdi_2 s> rcx_2)
    sub_1405a4d70(&var_78)
    rcx_2 = var_70:4.d
    rdi_2 = var_70.d
    rbx = var_78

int64_t rax_4 = sx.q(rsi_1)
int32_t rsi_2 = rdi_2 + 1
var_70.d = rsi_2
rbx[rax_4].d = 2
*(&rbx[rax_4] + 4) = r13

if (rsi_2 s> rcx_2)
    sub_1405a4d70(&var_78)
    rcx_2 = var_70:4.d
    rsi_2 = var_70.d
    rbx = var_78

int64_t rax_5 = sx.q(rdi_2)
int32_t rdi_3 = rsi_2 + 1
var_70.d = rdi_3
rbx[rax_5].d = 4
*(&rbx[rax_5] + 4) = r12_1

if (rdi_3 s> rcx_2)
    sub_1405a4d70(&var_78)
    rcx_2 = var_70:4.d
    rdi_3 = var_70.d
    rbx = var_78

int64_t rax_6 = sx.q(rsi_2)
int32_t rsi_3 = rdi_3 + 1
var_70.d = rsi_3
rbx[rax_6].d = 5
*(&rbx[rax_6] + 4) = r15_1

if (rsi_3 s> rcx_2)
    sub_1405a4d70(&var_78)
    rcx_2 = var_70:4.d
    rsi_3 = var_70.d
    rbx = var_78

int64_t rax_7 = sx.q(rdi_3)
int32_t rdi_4 = rsi_3 + 1
var_70.d = rdi_4
rbx[rax_7].d = 7
*(&rbx[rax_7] + 4) = r15_1

if (rdi_4 s> rcx_2)
    sub_1405a4d70(&var_78)
    rcx_2 = var_70:4.d
    rdi_4 = var_70.d
    rbx = var_78

int64_t rax_8 = sx.q(rsi_3)
int32_t rdx_9 = rdi_4 + 1
var_70.d = rdx_9
rbx[rax_8].d = 3
*(&rbx[rax_8] + 4) = r15_1

if (rdx_9 s> rcx_2)
    sub_1405a4d70(&var_78)
    rdx_9 = var_70.d
    rbx = var_78

int64_t rax_9 = sx.q(rdi_4)
rbx[rax_9].d = 0xa
*(&rbx[rax_9] + 4) = rax u>> 4
int64_t var_64
__builtin_memset(&var_64, 0, 0x20)
int64_t var_54
var_54.d = arg1[1].d
void* rax_11 = *arg1
var_54:4.d = rdx_9
int32_t var_68 = 0x21
int64_t var_4c = rbx
int32_t rax_12 = data_143efb8c0(*(rax_11 + 8), &var_68, 0, &arg1[2])

if (rax_12 != 0)
    sub_141903f80(rax_12, 
        "VulkanRHI::vkCreateDescriptorPool(Device->GetInstanceHandle(), &PoolInfo, VULKAN_CPU_ALLOCATOR, "
    "&DescriptorPool)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanPendingState.cpp")

if (rbx != 0)
    sub_140a74f90(rbx)

return arg1
