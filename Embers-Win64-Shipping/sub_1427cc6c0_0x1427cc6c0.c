// 函数: sub_1427cc6c0
// 地址: 0x1427cc6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x24)

if ((rax & 0x7fffffff) != 0 && rax s>= 0)
    int64_t rdi_1 = arg1[3]
    
    if (rdi_1 != 0)
        class physx::PxAllocatorCallback* rax_1 = physx::shdfnd::getAllocator()
        int64_t r8_1 = *rax_1
        (*(r8_1 + 0x10))(rax_1, rdi_1, r8_1)

int32_t rax_2 = *(arg1 + 0x14)

if ((rax_2 & 0x7fffffff) != 0 && rax_2 s>= 0)
    int64_t rdi_2 = arg1[1]
    
    if (rdi_2 != 0)
        class physx::PxAllocatorCallback* rax_3 = physx::shdfnd::getAllocator()
        int64_t r8_2 = *rax_3
        (*(r8_2 + 0x10))(rax_3, rdi_2, r8_2)

*arg1 = &data_142d40888
return &data_142d40888
