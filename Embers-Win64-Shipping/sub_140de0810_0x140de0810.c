// 函数: sub_140de0810
// 地址: 0x140de0810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x150)
int32_t i_1 = *(arg1 + 0x158)

if (i_1 != 0)
    int64_t* rdi_1 = rcx + 8
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_1 = &rdi_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *(arg1 + 0x150)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rbx_2 = *(arg1 + 0x148)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return sub_140d94d20(arg1 + 8) __tailcall
