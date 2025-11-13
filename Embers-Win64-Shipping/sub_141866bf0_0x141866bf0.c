// 函数: sub_141866bf0
// 地址: 0x141866bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[5].b != 0)
    arg1[5].b = 0
    int64_t* rbx_1 = arg1[4]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rsi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

if (arg1[2].b == 0)
    return 

arg1[2].b = 0
int64_t rcx_2 = *arg1

if (rcx_2 != 0)
    return sub_140a74f90(rcx_2) __tailcall
