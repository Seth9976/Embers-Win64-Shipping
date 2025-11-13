// 函数: sub_1427d06d0
// 地址: 0x1427d06d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1434cdb90
int32_t rax = *(arg1 + 0x6c)

if ((rax & 0x7fffffff) != 0 && rax s>= 0)
    int64_t rdi_1 = arg1[0xc]
    
    if (rdi_1 != 0)
        class physx::PxAllocatorCallback* rax_1 = physx::shdfnd::getAllocator()
        int64_t r8_1 = *rax_1
        (*(r8_1 + 0x10))(rax_1, rdi_1, r8_1)

void* rcx_1 = arg1[8]
sub_1427d0df0(rcx_1, rcx_1 + zx.q(arg1[9].d) * 0x28)
int32_t rax_3 = *(arg1 + 0x4c)

if ((rax_3 & 0x7fffffff) != 0 && rax_3 s>= 0)
    int64_t rdi_2 = arg1[8]
    
    if (rdi_2 != 0)
        class physx::PxAllocatorCallback* rax_4 = physx::shdfnd::getAllocator()
        int64_t r8_2 = *rax_4
        (*(r8_2 + 0x10))(rax_4, rdi_2, r8_2)

int64_t rdi_3 = arg1[1]

if (rdi_3 != 0)
    class physx::PxAllocatorCallback* rax_5 = physx::shdfnd::getAllocator()
    int64_t r8_3 = *rax_5
    (*(r8_3 + 0x10))(rax_5, rdi_3, r8_3)

*arg1 = &data_1434cd078
return &data_1434cd078
