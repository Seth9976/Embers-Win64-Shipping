// 函数: sub_140d949f0
// 地址: 0x140d949f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rsi_1 = rcx + 8
    int32_t i
    
    do
        int64_t j = 4
        void* rdi_1 = &rsi_1[0xd]
        
        do
            int64_t* rcx_1 = *(rdi_1 - 0x10)
            rdi_1 -= 0x10
            j -= 1
            
            if (rcx_1 != 0)
                int32_t temp0_1 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (temp0_1 == 1)
                    (*(*rcx_1 + 8))(rcx_1, 1)
        while (j != 0)
        
        int64_t* rbx_1 = *rsi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rsi_1 = &rsi_1[0xd]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
