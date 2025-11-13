// 函数: sub_142cc9a30
// 地址: 0x142cc9a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 4
void* rsi = &data_143e20668

do
    int64_t* rbx_1 = *(rsi - 0x18)
    rsi -= 0x18
    i -= 1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
while (i != 0)
