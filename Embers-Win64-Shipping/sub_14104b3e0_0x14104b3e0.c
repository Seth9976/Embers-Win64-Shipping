// 函数: sub_14104b3e0
// 地址: 0x14104b3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x88) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int64_t rcx = *(*(arg1 + 0x10) + 0xa8)
        int64_t* rbx_1 = *(r14_1 + rcx)
        void* rdx_1 = *(r14_1 + *(arg1 + 0x80))
        *(r14_1 + rcx) = rdx_1
        
        if (rdx_1 != 0)
            *(rdx_1 + 8) += 1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                char rax_4
                
                if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_4 = sub_1405949a0()
                
                if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_4 != 0))
                    (**rbx_1)(rbx_1, 1)
                else
                    bool z_1
                    
                    if (0 == *(rbx_1 + 0xc))
                        *(rbx_1 + 0xc) = 1
                        z_1 = true
                    else
                        *(rbx_1 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        arg2 = sub_1405dcc10(&data_143f02390, rbx_1)
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg1 + 0x88))

return sub_14105b290(*(arg1 + 0x10) + 0x40, arg1 + 0x18, arg2) __tailcall
