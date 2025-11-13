// 函数: sub_141917580
// 地址: 0x141917580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x14)
int64_t* rbx = *(arg1 + 8)
int32_t i_2 = *(arg1 + 0x10)

if (rax s< 0)
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t* rcx_1 = *rbx
            
            if (rcx_1 != 0)
                rcx_1[1].d -= 1
                
                if (rcx_1[1].d == 1)
                    (**rcx_1)(rcx_1, 1)
            
            rbx = &rbx[1]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rax = *(arg1 + 0x14)
    
    *(arg1 + 0x10) = 0
    
    if (rax != 0)
        sub_1405c5570(arg1 + 8, 0)
else
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t* rcx = *rbx
            
            if (rcx != 0)
                rcx[1].d -= 1
                
                if (rcx[1].d == 1)
                    (**rcx)(rcx, 1)
            
            rbx = &rbx[1]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x10) = 0

return sub_14194e210(arg1 + 0x18) __tailcall
