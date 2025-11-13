// 函数: sub_140ecf3d0
// 地址: 0x140ecf3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140e90ee0(arg1 + 0x150, arg2)

if (result != 0xffffffff)
    void* rcx_1 = nullptr
    void* rdx_2 = (sx.q(result) << 5) + *(arg1 + 0x150)
    int64_t* rbx_1 = *(rdx_2 + 0x18)
    
    if (rbx_1 != 0)
        int32_t rax = rbx_1[1].d
        
        if (rax != 0)
            rbx_1[1].d = rax + 1
            rax.b = 1
        
        if (rax.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            rcx_1 = *(rdx_2 + 0x10)
    
    int64_t* rcx_2 = **(rcx_1 + 0xd8)
    result = (*(*rcx_2 + 0x40))(rcx_2)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                jump(*(*rbx_1 + 8))

return result
