// 函数: sub_140837d00
// 地址: 0x140837d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (rcx != 0)
    int32_t rax = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax = *(rcx + 8)
    
    if (rax == 1)
        void* rbx_1 = *arg1
        
        if (*(rbx_1 + 0x11) != 0)
            if (data_143f0f1c7 != 0)
                int64_t* rcx_1 = data_143f0f180
                (*(*rcx_1 + 0x628))(rcx_1, rbx_1)
            
            *(rbx_1 + 0x11) = 0

arg1[3].d = 0
int64_t* rbx_2 = *arg1
*arg1 = 0

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        char rax_2
        
        if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
            rax_2 = sub_1405949a0()
        
        if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
            (**rbx_2)(rbx_2, 1)
        else
            bool z_1
            
            if (0 == *(rbx_2 + 0xc))
                *(rbx_2 + 0xc) = 1
                z_1 = true
            else
                *(rbx_2 + 0xc)
                z_1 = false
            
            if (z_1)
                sub_1405dcc10(&data_143f02390, rbx_2)

int64_t* rbx_3 = arg1[1]
arg1[1] = 0

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        char rax_4
        
        if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
            rax_4 = sub_1405949a0()
        
        if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_4 != 0))
            (**rbx_3)(rbx_3, 1)
        else
            bool z_2
            
            if (0 == *(rbx_3 + 0xc))
                *(rbx_3 + 0xc) = 1
                z_2 = true
            else
                *(rbx_3 + 0xc)
                z_2 = false
            
            if (z_2)
                sub_1405dcc10(&data_143f02390, rbx_3)

int64_t* rbx_4 = arg1[2]
arg1[2] = 0

if (rbx_4 == 0)
    return 

rbx_4[1].d -= 1

if (rbx_4[1].d != 1)
    return 

char rax_6

if (rbx_4[2].b == 0 && data_143f0f1d0 == 0)
    rax_6 = sub_1405949a0()

if (rbx_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_6 != 0))
    (**rbx_4)(rbx_4, 1)
    return 

bool z_3

if (0 == *(rbx_4 + 0xc))
    *(rbx_4 + 0xc) = 1
    z_3 = true
else
    *(rbx_4 + 0xc)
    z_3 = false

if (z_3)
    sub_1405dcc10(&data_143f02390, rbx_4)
