// 函数: sub_140fe64d0
// 地址: 0x140fe64d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ffb040(data_143e2b8b8, *(arg1 + 0x10), *(arg1 + 0x18), arg1 + 0x1c, *(arg1 + 0x40), 
    *(arg1 + 0x44), *(arg1 + 0x48))
int64_t* rbx = *(arg1 + 0x10)
rbx[1].d -= 1

if (rbx[1].d == 1)
    char rax_4
    
    if (rbx[2].b == 0 && data_143f0f1d0 == 0)
        rax_4 = sub_1405949a0()
    
    if (rbx[2].b != 0 || (data_143f0f1d0 == 0 && rax_4 != 0))
        (**rbx)(rbx, 1)
    else
        bool z_1
        
        if (0 == *(rbx + 0xc))
            *(rbx + 0xc) = 1
            z_1 = true
        else
            *(rbx + 0xc)
            z_1 = false
        
        if (z_1)
            sub_1405dcc10(&data_143f02390, rbx)

return sub_140a74f90(*(arg1 + 0x48)) __tailcall
