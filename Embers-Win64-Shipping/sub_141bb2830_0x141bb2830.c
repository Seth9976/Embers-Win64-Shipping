// 函数: sub_141bb2830
// 地址: 0x141bb2830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140d3c6e0(arg1 + 0x228)

if (rax != 0)
    return rax

if (((*(arg1 + 8) u>> 4).b & 1) == 0)
    char rax_3 = sub_1420fea90(arg1 + 0x218)
    void* rax_4
    void* rdi_1
    
    if (rax_3 != 0)
        rax_4 = sub_1420fc960(arg1 + 0x218)
        rdi_1 = rax_4
    
    if (rax_3 != 0 && rax_4 != 0)
        sub_140d3a3a0(arg1 + 0x228, rdi_1)
        return rdi_1
    
    int64_t* rbx_1 = *(arg1 + 0x20)
    
    if (rbx_1 != 0)
        void* rax_6
        
        while (true)
            rax_6 = (*(*rbx_1 + 0x150))(rbx_1)
            
            if (rax_6 != 0)
                break
            
            rbx_1 = rbx_1[4]
            
            if (rbx_1 == 0)
                return 0
        
        sub_140d3a3a0(arg1 + 0x228, rax_6)
        return rax_6

return 0
