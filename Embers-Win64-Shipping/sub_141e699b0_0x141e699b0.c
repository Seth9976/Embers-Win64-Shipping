// 函数: sub_141e699b0
// 地址: 0x141e699b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1

if (rcx != 0)
    if (*(rcx + 0x12) == 0 && *(rcx + 0x11) == 0 && arg2 != 0)
        sub_142386180(rcx, arg3)
    
    void var_18
    
    if (arg1 != &var_18)
        *arg1 = 0
        int64_t* rbx_1 = arg1[1]
        
        if (rbx_1 != 0)
            arg1[1] = 0
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

arg1[3].d = 0

if (*(arg1 + 0x1c) s> 0xffffffff)
    return 

return sub_140638c50(&arg1[2], 0) __tailcall
