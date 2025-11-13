// 函数: sub_1410400d0
// 地址: 0x1410400d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 8)
void* rdi = arg1
int32_t i_1 = *(arg1 + 0x10)

if (rcx != 0)
    rdi = rcx

if (i_1 != 0)
    int32_t i
    
    do
        void* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            int32_t rax = *(rbx_1 + 0x68)
            *(rbx_1 + 0x68) -= 1
            
            if (rax == 1)
                char rax_1
                
                if (*(rbx_1 + 0x70) == 0 && data_143f0f1d0 == 0)
                    rax_1 = sub_1405949a0()
                
                if (*(rbx_1 + 0x70) != 0 || (data_143f0f1d0 == 0 && rax_1 != 0))
                    (**(rbx_1 + 0x60))(rbx_1 + 0x60, 1)
                else
                    bool z_1
                    
                    if (0 == *(rbx_1 + 0x6c))
                        *(rbx_1 + 0x6c) = 1
                        z_1 = true
                    else
                        *(rbx_1 + 0x6c)
                        z_1 = false
                    
                    if (z_1)
                        sub_1405dcc10(&data_143f02390, rbx_1 + 0x60)
        
        rdi += 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *(arg1 + 8)

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
