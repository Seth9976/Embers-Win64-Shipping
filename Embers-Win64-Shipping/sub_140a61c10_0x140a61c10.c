// 函数: sub_140a61c10
// 地址: 0x140a61c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rdi_1 = *(rbx + 0x30)
        
        if (rdi_1 != 0)
            int64_t* rcx = data_143ddb3f0
            
            if (rcx == 0)
                sub_140a750a0()
                rcx = data_143ddb3f0
            
            (*(*rcx + 0x30))(rcx, rdi_1)
        
        int64_t rdi_2 = *(rbx + 0x20)
        
        if (rdi_2 != 0)
            int64_t* rcx_1 = data_143ddb3f0
            
            if (rcx_1 == 0)
                sub_140a750a0()
                rcx_1 = data_143ddb3f0
            
            (*(*rcx_1 + 0x30))(rcx_1, rdi_2)
        
        int64_t rdi_3 = *(rbx + 0x10)
        
        if (rdi_3 != 0)
            int64_t* rcx_2 = data_143ddb3f0
            
            if (rcx_2 == 0)
                sub_140a750a0()
                rcx_2 = data_143ddb3f0
            
            (*(*rcx_2 + 0x30))(rcx_2, rdi_3)
        
        int64_t rdi_4 = *rbx
        
        if (rdi_4 != 0)
            int64_t* rcx_3 = data_143ddb3f0
            
            if (rcx_3 == 0)
                sub_140a750a0()
                rcx_3 = data_143ddb3f0
            
            (*(*rcx_3 + 0x30))(rcx_3, rdi_4)
        
        rbx += 0x40
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *arg1

if (rbx == 0)
    return 

int64_t* rcx_4 = data_143ddb3f0

if (rcx_4 == 0)
    sub_140a750a0()
    rcx_4 = data_143ddb3f0

jump(*(*rcx_4 + 0x30))
