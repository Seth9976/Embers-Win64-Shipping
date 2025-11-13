// 函数: sub_1427e75a0
// 地址: 0x1427e75a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = nullptr
int32_t r15 = 0
int32_t rbp = 0
int64_t* var_38 = nullptr
int32_t var_2c = 0
uint64_t i_1 = 0
int32_t i_2 = 0
int32_t result = (*(*arg1 + 0x38))()

if (result != 0)
    do
        void* rax_2 = (*(*arg1 + 0x40))(arg1, zx.q(rbp))
        
        if (arg2 == *(rax_2 + 8))
            if (arg3 != 0)
                int64_t r9_1 = *arg3
                (*(r9_1 + 8))(arg3, rax_2, 0, r9_1)
            
            void* arg_8 = rax_2
            
            if ((r15 & 0x7fffffff) u> i_1.d)
                void** rcx_3 = &r14[i_1]
                
                if (rcx_3 != 0)
                    *rcx_3 = rax_2
                
                i_1 = zx.q(i_1.d + 1)
                i_2 = i_1.d
            else
                sub_1427e8250(&var_38, &arg_8)
                r15 = var_2c
                i_1 = zx.q(i_2)
                r14 = var_38
        
        rbp += 1
        result = (*(*arg1 + 0x38))(arg1)
    while (rbp u< result)

if (i_1.d != 0)
    int64_t* rsi_2 = r14
    uint64_t i
    
    do
        result = (*(*arg1 + 0x18))(arg1, *rsi_2)
        rsi_2 = &rsi_2[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

if ((r15 & 0x7fffffff) == 0 || r15 s< 0 || r14 == 0)
    return result

class physx::PxAllocatorCallback* rax_7 = physx::shdfnd::getAllocator()
int64_t r8 = *rax_7
return (*(r8 + 0x10))(rax_7, r14, r8)
