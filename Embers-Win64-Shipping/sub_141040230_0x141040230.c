// 函数: sub_141040230
// 地址: 0x141040230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[8]

if (rcx != 0)
    rcx[1].d -= 1
    
    if (rcx[1].d == 1 && rcx != 0)
        (**rcx)(rcx, 1)

int32_t i_1 = arg1[7].d
void*** rbx = arg1[6]

if (i_1 != 0)
    int32_t i
    
    do
        void* rcx_1 = rbx[1]
        *rbx = &data_142efcd90
        
        if (rcx_1 != 0)
            int32_t rax_3 = *(rcx_1 + 0x14)
            *(rcx_1 + 0x14) -= 1
            
            if (rax_3 == 1)
                int64_t* rdi_1 = rbx[1]
                
                if (rdi_1 != 0)
                    sub_14100eba0(rdi_1)
                    j_sub_140a74f90(rdi_1)
        
        rbx = &rbx[3]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[6]

if (rbx != 0)
    sub_140a74f90(rbx)

return sub_1419948a0(arg1) __tailcall
