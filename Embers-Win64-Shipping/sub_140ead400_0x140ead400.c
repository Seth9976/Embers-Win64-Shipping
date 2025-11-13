// 函数: sub_140ead400
// 地址: 0x140ead400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140ead4e0(arg1, arg2, arg3)
int32_t i = 0
char rsi = rax

if (rax == 0)
    return zx.q(rsi)

int64_t rbp = 0

while (i s< *(arg1 + 0x158))
    void* rax_1 = *(arg1 + 0x150)
    int64_t* rbx_1 = *(rax_1 + rbp + 0x18)
    
    if (rbx_1 != 0)
        int32_t rax_2 = rbx_1[1].d
        
        if (rax_2 != 0)
            rbx_1[1].d = rax_2 + 1
            
            if (rbx_1 != 0)
                int64_t* rcx_1 = *(rax_1 + rbp + 0x10)
                
                if (rcx_1 != 0)
                    rsi = (*(*rcx_1 + 0x48))(rcx_1, arg2)
                
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
    
    i += 1
    rbp += 0x20
    
    if (rsi == 0)
        break

return zx.q(rsi)
