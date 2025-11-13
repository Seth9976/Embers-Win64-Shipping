// 函数: sub_142814080
// 地址: 0x142814080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = *(arg1 + 0x28)

if (i_2 != 0)
    int64_t* rsi_1 = nullptr
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rbx_1 = *(rsi_1 + *(arg1 + 0x20))
        
        if (rbx_1 != 0)
            int32_t rax_1 = *(rbx_1 + 0x4c)
            
            if ((rax_1 & 0x7fffffff) != 0 && rax_1 s>= 0)
                int64_t rbp_1 = *(rbx_1 + 0x40)
                
                if (rbp_1 != 0)
                    class physx::PxAllocatorCallback* rax_2 = physx::shdfnd::getAllocator()
                    int64_t r8_1 = *rax_2
                    (*(r8_1 + 0x10))(rax_2, rbp_1, r8_1)
            
            int32_t rax_3 = *(rbx_1 + 0x3c)
            
            if ((rax_3 & 0x7fffffff) != 0 && rax_3 s>= 0)
                int64_t rbp_2 = *(rbx_1 + 0x30)
                
                if (rbp_2 != 0)
                    class physx::PxAllocatorCallback* rax_4 = physx::shdfnd::getAllocator()
                    int64_t r8_2 = *rax_4
                    (*(r8_2 + 0x10))(rax_4, rbp_2, r8_2)
            
            class physx::PxAllocatorCallback* rax_5 = physx::shdfnd::getAllocator()
            int64_t r8_3 = *rax_5
            (*(r8_3 + 0x10))(rax_5, rbx_1, r8_3)
        
        rsi_1 = &rsi_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t rbx_2 = *(arg1 + 0x18)

if (rbx_2 != 0)
    class physx::PxAllocatorCallback* rax_6 = physx::shdfnd::getAllocator()
    int64_t r8_4 = *rax_6
    (*(r8_4 + 0x10))(rax_6, rbx_2, r8_4)

int64_t rbx_3 = *(arg1 + 0x10)

if (rbx_3 != 0)
    class physx::PxAllocatorCallback* rax_7 = physx::shdfnd::getAllocator()
    int64_t r8_5 = *rax_7
    (*(r8_5 + 0x10))(rax_7, rbx_3, r8_5)

*(arg1 + 0x10) = 0
int32_t rax_8 = *(arg1 + 0x5c)

if ((rax_8 & 0x7fffffff) != 0 && rax_8 s>= 0)
    int64_t rbx_4 = *(arg1 + 0x50)
    
    if (rbx_4 != 0)
        class physx::PxAllocatorCallback* rax_9 = physx::shdfnd::getAllocator()
        int64_t r8_6 = *rax_9
        (*(r8_6 + 0x10))(rax_9, rbx_4, r8_6)

int32_t result = *(arg1 + 0x2c)

if ((result & 0x7fffffff) != 0 && result s>= 0)
    int64_t rbx_5 = *(arg1 + 0x20)
    
    if (rbx_5 != 0)
        class physx::PxAllocatorCallback* rax_10 = physx::shdfnd::getAllocator()
        int64_t r8_7 = *rax_10
        return (*(r8_7 + 0x10))(rax_10, rbx_5, r8_7)

return result
