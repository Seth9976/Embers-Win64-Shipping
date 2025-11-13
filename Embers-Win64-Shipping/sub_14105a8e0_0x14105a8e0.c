// 函数: sub_14105a8e0
// 地址: 0x14105a8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x7d8)
uint32_t rbp = 0
int32_t arg_8 = 0
uint64_t result
uint64_t rdi
int32_t r15

if (rax == 0)
    result = 0
    rdi = nullptr
    arg4 = nullptr
    r15 = 2
else
    uint64_t rax_1 = *(rax + 0x18)
    arg3 = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    rdi = arg3
    r15 = 1
    result = arg4

if ((r15.b & 2) != 0)
    r15 &= 0xfffffffd
    
    if (result != 0)
        int32_t rcx = *(result + 8)
        *(result + 8) -= 1
        
        if (rcx == 1)
            if (arg4[2].b != 0)
                result = (**arg4)(arg4, 1)
            else
                char rax_2
                
                if (data_143f0f1d0 == 0)
                    rax_2 = sub_1405949a0()
                
                if (data_143f0f1d0 == 0 && rax_2 != 0)
                    result = (**arg4)(arg4, 1)
                else
                    result = 0
                    bool z_1
                    
                    if (0 == *(arg4 + 0xc))
                        *(arg4 + 0xc) = 1
                        z_1 = true
                    else
                        result = zx.q(*(arg4 + 0xc))
                        z_1 = false
                    
                    if (z_1)
                        result = sub_1405dcc10(&data_143f02390, arg4)

if ((1 & r15.b) != 0)
    result = arg3
    
    if (result != 0)
        int32_t r12_1 = *(result + 8)
        *(result + 8) -= 1
        
        if (r12_1 == 1)
            if (*(arg3 + 0x10) != 0)
                result = (**arg3)(arg3, 1)
            else
                char rax_4
                
                if (data_143f0f1d0 == 0)
                    rax_4 = sub_1405949a0()
                
                if (data_143f0f1d0 == 0 && rax_4 != 0)
                    result = (**arg3)(arg3, 1)
                else
                    result = 0
                    bool z_2
                    
                    if (0 == *(arg3 + 0xc))
                        *(arg3 + 0xc) = 1
                        z_2 = true
                    else
                        result = zx.q(*(arg3 + 0xc))
                        z_2 = false
                    
                    if (z_2)
                        result = sub_1405dcc10(&data_143f02390, arg3)

if (rdi != arg2)
    int64_t rcx_3
    
    if (rdi == 0)
        rcx_3 = 0
    else
        rcx_3 = *(rdi + 0xe8)
    
    int64_t rax_6
    
    if (arg2 == 0)
        rax_6 = 0
    else
        rax_6 = *(arg2 + 0xe8)
    
    if (rcx_3 != rax_6)
        *(arg1 + 0x7e0) = 1
    
    uint32_t rax_7
    
    if (arg2 == 0)
        rax_7 = 0
    else
        rax_7 = zx.d(*(arg2 + 0xe1))
    
    *(arg1 + 0x2fc8) = rax_7
    uint32_t rax_8
    
    if (arg2 == 0)
        rax_8 = 0
    else
        rax_8 = zx.d(*(arg2 + 0xe2))
    
    *(arg1 + 0x2fe0) = rax_8
    uint32_t rax_9
    
    if (arg2 == 0)
        rax_9 = 0
    else
        rax_9 = zx.d(*(arg2 + 0xe3))
    
    *(arg1 + 0x2ff8) = rax_9
    
    if (arg2 != 0)
        rbp = zx.d(*(arg2 + 0xe4))
    
    *(arg1 + 0x3010) = rbp
    result = *(arg1 + 0x28)
    *(result + 0x3b6a) = 0xffff

return result
