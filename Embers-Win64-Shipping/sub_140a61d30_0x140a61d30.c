// 函数: sub_140a61d30
// 地址: 0x140a61d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rdi_1 = rbx + 8
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_1 = &rdi_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *arg1

if (rbx == 0)
    return 

int64_t* rcx_2 = data_143ddb3f0

if (rcx_2 == 0)
    sub_140a750a0()
    rcx_2 = data_143ddb3f0

jump(*(*rcx_2 + 0x30))
