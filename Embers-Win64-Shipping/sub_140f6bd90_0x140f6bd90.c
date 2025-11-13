// 函数: sub_140f6bd90
// 地址: 0x140f6bd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x7b8) = 0xffffffff
int32_t i_1 = *(arg1 + 0x7b0)

if (i_1 != 0)
    char* rdi_1 = *(arg1 + 0x7a8) + 0x20
    int32_t i
    
    do
        if (*rdi_1 != 0)
            *rdi_1 = 0
        
        int64_t* rbx_1 = *(rdi_1 - 0x18)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_1 = &rdi_1[0x40]
        i = i_1
        i_1 -= 1
    while (i != 1)

bool cond:0 = *(arg1 + 0x7b4) == 0
*(arg1 + 0x7b0) = 0

if (cond:0)
    return 

return sub_1405a52a0(arg1 + 0x7a8, 0) __tailcall
