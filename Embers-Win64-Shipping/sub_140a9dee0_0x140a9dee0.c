// 函数: sub_140a9dee0
// 地址: 0x140a9dee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = &arg1[0x10]

for (int64_t i = 6; i != 0; )
    int64_t* rbx_1 = *(rsi - 0x10)
    rsi -= 0x10
    i -= 1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax_3 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_3 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

*arg1 = &data_142e52080

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
