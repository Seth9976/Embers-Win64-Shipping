// 函数: sub_141953150
// 地址: 0x141953150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t entry_r9
sub_14195b4b0(*arg1, arg1[3], zx.q(arg1[4].d), entry_r9)
int32_t i = 0

if (arg1[2].d s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int64_t rcx_1 = *(*arg1 + 0x40)
        int64_t* rbx_1 = *(r14_1 + rcx_1)
        void* rdx_1 = *(r14_1 + arg1[1])
        *(r14_1 + rcx_1) = rdx_1
        
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
                        sub_1405dcc10(&data_143f02390, rbx_1)
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< arg1[2].d)

int32_t result = *(arg1 + 0x24)
*(*arg1 + 0x38) = result
return result
