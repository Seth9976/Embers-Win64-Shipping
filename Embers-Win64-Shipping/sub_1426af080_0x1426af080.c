// 函数: sub_1426af080
// 地址: 0x1426af080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (void* i = *(arg1 + 0xc0); i != 0; i = *(i + 0x30))
    int32_t j = 0
    
    if (*(i + 0x40) s> 0)
        int64_t r15_1 = 0
        
        do
            int64_t* r14_1 = *(r15_1 + *(i + 0x38) + 8)
            
            if (r14_1 != 0)
                uint64_t rcx
                
                if (*(arg1 + 0xd0) != 0)
                    rcx = zx.q(*(i + 0x4c) + j.b)
                
                int32_t* rbx_2
                
                if (*(arg1 + 0xd0) == 0 || rcx.d s>= *(arg1 + 0xe0))
                    rbx_2 = nullptr
                else
                    rbx_2 = zx.q(*(*(arg1 + 0xd8) + (rcx << 1))) + *(arg1 + 0xc8)
                
                if ((*(r14_1 + 0x2b) & 2) != 0)
                    int64_t rax_4
                    
                    if (rbx_2 != 0)
                        rax_4 = sx.q(*rbx_2)
                    
                    int64_t* rcx_2
                    
                    if (rbx_2 == 0 || rax_4.d s< 0 || rax_4.d s>= *(arg1 + 0xf0))
                        rcx_2 = nullptr
                    else
                        rcx_2 = *(*(arg1 + 0xe8) + (rax_4 << 3))
                    
                    (*(*rcx_2 + 0x2a0))(rcx_2, arg1, &rbx_2[1])
                
                (*(*r14_1 + 0x2a0))(r14_1, arg1, rbx_2)
            
            j += 1
            r15_1 += 0x18
        while (j s< *(i + 0x40))

*(arg1 + 0xe0) = 0

if (*(arg1 + 0xe4) s<= 0xffffffff)
    sub_1405947f0(arg1 + 0xd8, 0)

int32_t result = *(arg1 + 0xd4)
*(arg1 + 0xd0) = 0

if (result s< 0 && result != 0)
    return sub_1405c5510(arg1 + 0xc8, 0) __tailcall

return result
