// 函数: sub_140a82d20
// 地址: 0x140a82d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *arg2
int32_t i_1 = arg2[1].d

if (i_1 != 0)
    int32_t i
    
    do
        int32_t j_1 = r14[1].d
        int64_t* rbx_1 = *r14
        
        if (j_1 != 0)
            int32_t j
            
            do
                int64_t rdi_1 = *rbx_1
                
                if (rdi_1 != 0)
                    int64_t* rcx = data_143ddb3f0
                    
                    if (rcx == 0)
                        sub_140a750a0()
                        rcx = data_143ddb3f0
                    
                    (*(*rcx + 0x30))(rcx, rdi_1)
                
                rbx_1 = &rbx_1[2]
                j = j_1
                j_1 -= 1
            while (j != 1)
            rbx_1 = *r14
        
        if (rbx_1 != 0)
            int64_t* rcx_1 = data_143ddb3f0
            
            if (rcx_1 == 0)
                sub_140a750a0()
                rcx_1 = data_143ddb3f0
            
            (*(*rcx_1 + 0x30))(rcx_1, rbx_1)
        
        r14 = &r14[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    r14 = *arg2

if (r14 == 0)
    return 

int64_t* rcx_2 = data_143ddb3f0

if (rcx_2 == 0)
    sub_140a750a0()
    rcx_2 = data_143ddb3f0

jump(*(*rcx_2 + 0x30))
