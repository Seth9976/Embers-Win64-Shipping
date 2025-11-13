// 函数: sub_1411e8d60
// 地址: 0x1411e8d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x1a].d -= 1

if (arg1[0x1a].d != 1)
    return zx.q(arg1[0x1a].d)

int64_t* rdi = *arg1
*arg1 = 0

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        char rax_2
        
        if (rdi[2].b == 0 && data_143f0f1d0 == 0)
            rax_2 = sub_1405949a0()
        
        if (rdi[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
            (**rdi)(rdi, 1)
        else
            bool z_1
            
            if (0 == *(rdi + 0xc))
                *(rdi + 0xc) = 1
                z_1 = true
            else
                *(rdi + 0xc)
                z_1 = false
            
            if (z_1)
                sub_1405dcc10(&data_143f02390, rdi)

int64_t* rdi_1 = arg1[1]
arg1[1] = 0

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        char rax_6
        
        if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
            rax_6 = sub_1405949a0()
        
        if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_6 != 0))
            (**rdi_1)(rdi_1, 1)
        else
            bool z_2
            
            if (0 == *(rdi_1 + 0xc))
                *(rdi_1 + 0xc) = 1
                z_2 = true
            else
                *(rdi_1 + 0xc)
                z_2 = false
            
            if (z_2)
                sub_1405dcc10(&data_143f02390, rdi_1)

int64_t* rdi_2 = arg1[2]
arg1[2] = 0

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        char rax_9
        
        if (rdi_2[2].b == 0 && data_143f0f1d0 == 0)
            rax_9 = sub_1405949a0()
        
        if (rdi_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_9 != 0))
            (**rdi_2)(rdi_2, 1)
        else
            bool z_3
            
            if (0 == *(rdi_2 + 0xc))
                *(rdi_2 + 0xc) = 1
                z_3 = true
            else
                *(rdi_2 + 0xc)
                z_3 = false
            
            if (z_3)
                sub_1405dcc10(&data_143f02390, rdi_2)

sub_141096260(&arg1[3], 0)
sub_141096040(&arg1[0xd], 0)
return zx.q(arg1[0x1a].d)
