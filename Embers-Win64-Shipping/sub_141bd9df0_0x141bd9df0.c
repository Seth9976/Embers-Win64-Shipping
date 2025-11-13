// 函数: sub_141bd9df0
// 地址: 0x141bd9df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_28

if (arg2 != 0)
    int64_t rax_1 = *(arg1 + 0x108)
    var_28 = nullptr
    int32_t var_20_1 = 0
    (*(rax_1 + 0x10))(arg1 + 0x108, &var_28)
    int64_t* rbx_1 = var_28
    void* rsi_1 = &rbx_1[sx.q(var_20_1)]
    
    if (rbx_1 != rsi_1)
        do
            int64_t* rax_4 = (*(*(arg1 + 0x108) + 0x18))(arg1 + 0x108, *rbx_1)
            
            if (rax_4 != 0)
                int64_t r8_1 = *rax_4
                (*(r8_1 + 0x260))(rax_4, zx.q(arg2), r8_1)
            
            rbx_1 = &rbx_1[1]
        while (rbx_1 != rsi_1)
        
        rbx_1 = var_28
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)

void* result = arg1 + 0x328

if (result != &var_28)
    *result = 0
    int64_t* rbx_2 = *(result + 8)
    
    if (rbx_2 != 0)
        *(result + 8) = 0
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            result = (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*rbx_2 + 8))(rbx_2, 1)

return result
