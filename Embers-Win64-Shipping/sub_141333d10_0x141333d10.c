// 函数: sub_141333d10
// 地址: 0x141333d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x18)
*(arg1 + 0x18) = 0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        char rax_1
        
        if (rbx[2].b == 0 && data_143f0f1d0 == 0)
            rax_1 = sub_1405949a0()
        
        if (rbx[2].b != 0 || (data_143f0f1d0 == 0 && rax_1 != 0))
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

int64_t* rbx_1 = *(arg1 + 0x20)
*(arg1 + 0x20) = 0

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        char rax_3
        
        if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
            rax_3 = sub_1405949a0()
        
        if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_3 != 0))
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

int64_t* rbx_2 = *(arg1 + 0x10)
*(arg1 + 0x10) = 0

if (rbx_2 == 0)
    return 

rbx_2[1].d -= 1

if (rbx_2[1].d != 1)
    return 

char rax_5

if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
    rax_5 = sub_1405949a0()

if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_5 != 0))
    (**rbx_2)(rbx_2, 1)
    return 

bool z_3

if (0 == *(rbx_2 + 0xc))
    *(rbx_2 + 0xc) = 1
    z_3 = true
else
    *(rbx_2 + 0xc)
    z_3 = false

if (z_3)
    sub_1405dcc10(&data_143f02390, rbx_2)
