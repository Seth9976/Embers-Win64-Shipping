// 函数: sub_142cca310
// 地址: 0x142cca310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 0x110
int128_t* rsi = &data_143e242d0

do
    int64_t* rbx_1 = rsi[-3].q
    rsi = &rsi[-3]
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
