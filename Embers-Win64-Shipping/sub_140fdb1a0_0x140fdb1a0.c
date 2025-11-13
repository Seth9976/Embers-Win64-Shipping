// 函数: sub_140fdb1a0
// 地址: 0x140fdb1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140ffea80(arg1[1], *arg1, arg1[2], arg1[5], arg1[6].d)
int32_t i = 0

if (arg1[4].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t rcx_1 = *(arg1[2] + 0x48)
        result = arg1[3]
        int64_t* rbx_1 = *(rsi_1 + rcx_1)
        void* rdx_1 = *(rsi_1 + result)
        *(rsi_1 + rcx_1) = rdx_1
        
        if (rdx_1 != 0)
            *(rdx_1 + 8) += 1
        
        if (rbx_1 != 0)
            result = zx.q(rbx_1[1].d)
            rbx_1[1].d -= 1
            
            if (result.d == 1)
                char rax_2
                
                if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_2 = sub_1405949a0()
                
                if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
                    result = (**rbx_1)(rbx_1, 1)
                else
                    result = 0
                    bool z_1
                    
                    if (0 == *(rbx_1 + 0xc))
                        *(rbx_1 + 0xc) = 1
                        z_1 = true
                    else
                        result = zx.q(*(rbx_1 + 0xc))
                        z_1 = false
                    
                    if (z_1)
                        result = sub_1405dcc10(&data_143f02390, rbx_1)
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< arg1[4].d)

return result
