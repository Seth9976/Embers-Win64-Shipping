// 函数: sub_140d1e4f0
// 地址: 0x140d1e4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x38) s<= 0)
    return 

do
    int64_t* rbx_2 = *(sx.q(i * *(arg1 + 0x3c)) + arg2 + 8)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t rax = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    i += 1
while (i s< *(arg1 + 0x38))
