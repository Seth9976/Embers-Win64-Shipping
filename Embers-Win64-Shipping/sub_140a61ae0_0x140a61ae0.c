// 函数: sub_140a61ae0
// 地址: 0x140a61ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rdi_1 = *rbx
        
        if (rdi_1 != 0)
            int64_t* rcx = data_143ddb3f0
            
            if (rcx == 0)
                sub_140a750a0()
                rcx = data_143ddb3f0
            
            (*(*rcx + 0x30))(rcx, rdi_1)
        
        rbx = &rbx[5]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *arg1

if (rbx == 0)
    return 

int64_t* rcx_1 = data_143ddb3f0

if (rcx_1 == 0)
    sub_140a750a0()
    rcx_1 = data_143ddb3f0

jump(*(*rcx_1 + 0x30))
