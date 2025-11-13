// 函数: sub_1427e73d0
// 地址: 0x1427e73d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr
uint64_t i_2 = 0
int32_t rbp = 0
int64_t* var_38 = nullptr
int32_t r15 = 0
int64_t var_30 = 0

if ((*(*arg1 + 0x38))() != 0)
    int32_t rax_13
    
    do
        int64_t* rax_3 = (*(*arg1 + 0x40))(arg1, zx.q(r15))
        int64_t* rcx_1 = nullptr
        int64_t* arg_8 = rax_3
        
        if (rax_3[1].w == 0x12)
            rcx_1 = rax_3
        
        if (rcx_1 == 0)
            if ((*(*rax_3 + 0x10))(rax_3) != 0)
                if (arg2 != 0)
                label_1427e74c1:
                    
                    if ((rbp & 0x7fffffff) u> i_2.d)
                        void* rcx_7 = &rsi[i_2]
                        
                        if (rcx_7 != 0)
                            *rcx_7 = rax_3
                        
                        i_2 = zx.q(i_2.d + 1)
                        var_30.d = i_2.d
                    else
                        sub_1427e8250(&var_38, &arg_8)
                        rbp = var_30:4.d
                        i_2 = zx.q(var_30.d)
                        rsi = var_38
                else
                    int64_t* rcx_5 = nullptr
                    
                    if (rax_3[1].w == 8)
                        rcx_5 = rax_3
                    
                    if (rcx_5 == 0)
                        goto label_1427e74c1
                    
                    if ((*(*rcx_5 + 0x110))(rcx_5) == 0)
                        goto label_1427e74c1
        else if (i_2.d != 0)
            int64_t* rcx_2 = *rsi
            arg_8 = rcx_2
            
            if ((rbp & 0x7fffffff) u> i_2.d)
                void* rdx_2 = &rsi[i_2]
                
                if (rdx_2 != 0)
                    *rdx_2 = rcx_2
                
                i_2 = zx.q(i_2.d + 1)
                *rsi = rax_3
                var_30.d = i_2.d
            else
                sub_1427e8250(&var_38, &arg_8)
                rsi = var_38
                rbp = var_30:4.d
                i_2 = zx.q(var_30.d)
                *rsi = rax_3
        
        r15 += 1
        rax_13 = (*(*arg1 + 0x38))(arg1)
    while (r15 u< rax_13)

if (i_2.d != 0)
    int64_t* rdi_2 = rsi
    uint64_t i
    
    do
        int64_t* rcx_9 = *rdi_2
        (**rcx_9)(rcx_9)
        rdi_2 = &rdi_2[1]
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t i_1

for (i_1 = (*(*arg1 + 0x38))(arg1); i_1 != 0; i_1 = (*(*arg1 + 0x38))(arg1))
    int64_t rbx = *arg1
    (*(rbx + 0x18))(arg1, (*(rbx + 0x40))(arg1, 0))

if ((rbp & 0x7fffffff) == 0 || rbp s< 0 || rsi == 0)
    return i_1

class physx::PxAllocatorCallback* rax_18 = physx::shdfnd::getAllocator()
int64_t r8_1 = *rax_18
return (*(r8_1 + 0x10))(rax_18, rsi, r8_1)
