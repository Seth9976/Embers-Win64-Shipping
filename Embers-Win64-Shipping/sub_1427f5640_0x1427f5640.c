// 函数: sub_1427f5640
// 地址: 0x1427f5640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 u>= arg2)
    return 

int32_t* rbx_1 = arg1 + 0x14
int64_t i_1 = (arg2 - arg1 - 1) u/ 0x18 + 1
int64_t i

do
    int32_t rax = *rbx_1
    
    if ((rax & 0x7fffffff) != 0 && rax s>= 0)
        int64_t rdi_1 = *(rbx_1 - 0xc)
        
        if (rdi_1 != 0)
            class physx::PxAllocatorCallback* rax_2 = physx::shdfnd::getAllocator()
            int64_t r8_1 = *rax_2
            (*(r8_1 + 0x10))(rax_2, rdi_1, r8_1)
    
    rbx_1 = &rbx_1[6]
    i = i_1
    i_1 -= 1
while (i != 1)
