// 函数: sub_140eb96e0
// 地址: 0x140eb96e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140eadd30(arg1)

if (result != 0)
    int512_t zmm1_1 = sub_140ebd660()
    void* rcx = nullptr
    void* rdx_1 = data_143e2a070
    int64_t* rbx_1 = *(rdx_1 + 0x168)
    
    if (rbx_1 != 0)
        int32_t rax = rbx_1[1].d
        
        if (rax != 0)
            rbx_1[1].d = rax + 1
            rax.b = 1
        
        if (rax.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            rcx = *(rdx_1 + 0x160)
    
    result = sub_140f14f00(rcx, zmm1_1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                jump(*(*rbx_1 + 8))

return result
