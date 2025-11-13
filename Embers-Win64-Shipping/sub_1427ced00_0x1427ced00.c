// 函数: sub_1427ced00
// 地址: 0x1427ced00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1427f5ea0(&arg1[0x21])
int64_t rdi = arg1[0x18]

if (rdi != 0)
    class physx::PxAllocatorCallback* rax_1 = physx::shdfnd::getAllocator()
    int64_t r8_1 = *rax_1
    (*(r8_1 + 0x10))(rax_1, rdi, r8_1)

int64_t rdi_1 = arg1[0x11]

if (rdi_1 != 0)
    class physx::PxAllocatorCallback* rax_2 = physx::shdfnd::getAllocator()
    int64_t r8_2 = *rax_2
    (*(r8_2 + 0x10))(rax_2, rdi_1, r8_2)

int64_t rdi_2 = arg1[0xa]

if (rdi_2 != 0)
    class physx::PxAllocatorCallback* rax_3 = physx::shdfnd::getAllocator()
    int64_t r8_3 = *rax_3
    (*(r8_3 + 0x10))(rax_3, rdi_2, r8_3)

int32_t rax_4 = *(arg1 + 0x4c)

if ((rax_4 & 0x7fffffff) != 0 && rax_4 s>= 0)
    int64_t rdi_3 = arg1[8]
    
    if (rdi_3 != 0)
        class physx::PxAllocatorCallback* rax_5 = physx::shdfnd::getAllocator()
        int64_t r8_4 = *rax_5
        (*(r8_4 + 0x10))(rax_5, rdi_3, r8_4)

int64_t rdi_4 = arg1[1]

if (rdi_4 != 0)
    class physx::PxAllocatorCallback* rax_6 = physx::shdfnd::getAllocator()
    int64_t r8_5 = *rax_6
    (*(r8_5 + 0x10))(rax_6, rdi_4, r8_5)

*arg1 = &data_1434cd8e0
return &data_1434cd8e0
