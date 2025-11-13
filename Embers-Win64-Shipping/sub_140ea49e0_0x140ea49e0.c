// 函数: sub_140ea49e0
// 地址: 0x140ea49e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = (**(arg1 + 0x2a8))(arg1 + 0x2a8)

if (result s> 0)
    int32_t rdi_1 = 0
    result = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
    
    if (result s> 0)
        int64_t* rbx_1 = nullptr
        
        do
            int64_t rcx_2 = *arg2
            
            if (rcx_2 != 0 && rcx_2 == *(rbx_1 + *(arg1 + 0x2b8)))
                result = sub_140ea45d0(arg1, rdi_1)
                break
            
            rdi_1 += 1
            rbx_1 = &rbx_1[2]
            result = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
        while (rdi_1 s< result)

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
