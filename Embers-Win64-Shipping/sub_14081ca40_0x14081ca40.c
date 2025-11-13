// 函数: sub_14081ca40
// 地址: 0x14081ca40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[2]
arg1[2] = 0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        char rax_2
        
        if (rbx[2].b == 0 && data_143f0f1d0 == 0)
            rax_2 = sub_1405949a0()
        
        if (rbx[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
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

int64_t* rbx_1 = *arg1
*arg1 = 0

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        char rax_6
        
        if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
            rax_6 = sub_1405949a0()
        
        if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_6 != 0))
            (**rbx_1)(rbx_1, 1)
        else
            bool z_2
            
            if (0 == *(rbx_1 + 0xc))
                *(rbx_1 + 0xc) = 1
                z_2 = true
            else
                *(rbx_1 + 0xc)
                z_2 = false
            
            if (z_2)
                sub_1405dcc10(&data_143f02390, rbx_1)

int64_t* rbx_2 = arg1[1]
arg1[1] = 0

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        char rax_9
        
        if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
            rax_9 = sub_1405949a0()
        
        if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_9 != 0))
            (**rbx_2)(rbx_2, 1)
        else
            bool z_3
            
            if (0 == *(rbx_2 + 0xc))
                *(rbx_2 + 0xc) = 1
                z_3 = true
            else
                *(rbx_2 + 0xc)
                z_3 = false
            
            if (z_3)
                sub_1405dcc10(&data_143f02390, rbx_2)

sub_1405d1550(&arg1[2])
sub_1405d1550(&arg1[1])
return sub_1405d1550(arg1) __tailcall
