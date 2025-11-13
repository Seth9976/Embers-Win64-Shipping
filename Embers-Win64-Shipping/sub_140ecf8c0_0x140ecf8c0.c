// 函数: sub_140ecf8c0
// 地址: 0x140ecf8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x158) s<= 0)
    return 

int64_t rsi_1 = 0

do
    int64_t* rcx = *(arg1 + 0x150)
    int64_t* rbx_1 = *(rcx + rsi_1 + 8)
    
    if (rbx_1 != 0)
        int32_t rax = rbx_1[1].d
        
        if (rax != 0)
            rbx_1[1].d = rax + 1
            
            if (rbx_1 != 0)
                void* rcx_1 = *(rcx + rsi_1)
                
                if (rcx_1 != 0)
                    sub_140f14cf0(rcx_1)
                
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
    
    i += 1
    rsi_1 += 0x20
while (i s< *(arg1 + 0x158))
