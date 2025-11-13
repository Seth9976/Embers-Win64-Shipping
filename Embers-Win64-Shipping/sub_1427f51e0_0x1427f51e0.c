// 函数: sub_1427f51e0
// 地址: 0x1427f51e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1434d04e8
sub_142817330(arg1)
sub_142811560(arg1)
sub_142815900(arg1)
sub_142816640(arg1)
sub_142811270(&arg1[0x2d])
void* rcx_4 = arg1[0x25]
sub_1427f5640(rcx_4, rcx_4 + zx.q(arg1[0x26].d) * 0x18)
int32_t rax_1 = *(arg1 + 0x134)

if ((rax_1 & 0x7fffffff) != 0 && rax_1 s>= 0)
    int64_t rdi_1 = arg1[0x25]
    
    if (rdi_1 != 0)
        class physx::PxAllocatorCallback* rax_2 = physx::shdfnd::getAllocator()
        int64_t r8_1 = *rax_2
        (*(r8_1 + 0x10))(rax_2, rdi_1, r8_1)

int32_t rax_3 = *(arg1 + 0x24)

if ((rax_3 & 0x7fffffff) != 0 && rax_3 s>= 0)
    int64_t rdi_2 = arg1[3]
    
    if (rdi_2 != 0)
        class physx::PxAllocatorCallback* rax_4 = physx::shdfnd::getAllocator()
        int64_t r8_2 = *rax_4
        (*(r8_2 + 0x10))(rax_4, rdi_2, r8_2)

*arg1 = &data_1434d04c0
return &data_1434d04c0
