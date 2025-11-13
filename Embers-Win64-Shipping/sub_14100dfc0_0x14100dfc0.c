// 函数: sub_14100dfc0
// 地址: 0x14100dfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int32_t i
    
    do
        void* rcx = rbx[1]
        *rbx = &data_142efcd90
        
        if (rcx != 0)
            int32_t rax = *(rcx + 0x14)
            *(rcx + 0x14) -= 1
            
            if (rax == 1)
                int64_t* rcx_1 = rbx[1]
                
                if (rcx_1 != 0)
                    sub_141011360(rcx_1, rax.b)
        
        rbx = &rbx[3]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *arg1

if (rbx == 0)
    return 

return sub_140a74f90(rbx) __tailcall
