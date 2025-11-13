// 函数: sub_1427fe240
// 地址: 0x1427fe240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (*(arg1 + 0xa) & 1) == 0
*arg1 = &data_1434d1760
arg1[3] = &data_1434d18e0

if (not(cond:0))
    int64_t rdi_1 = arg1[0xd]
    
    if (rdi_1 != 0)
        class physx::PxAllocatorCallback* rax_1 = physx::shdfnd::getAllocator()
        int64_t r8_1 = *rax_1
        (*(r8_1 + 0x10))(rax_1, rdi_1, r8_1)

arg1[3] = &data_1434cfe68
*arg1 = &data_1434cfe40
return &data_1434cfe40
