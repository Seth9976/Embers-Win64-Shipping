// 函数: sub_1420b2c70
// 地址: 0x1420b2c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 8)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t rdx = *rbx
        (*rdx)(rbx, rdx)
        int32_t rdx_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdx_1 == 1)
            int64_t r8_1 = *rbx
            (*(r8_1 + 8))(rbx, rdx_1, r8_1)

return 0xffffffff
