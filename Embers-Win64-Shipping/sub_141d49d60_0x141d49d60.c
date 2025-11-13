// 函数: sub_141d49d60
// 地址: 0x141d49d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
uint64_t* rbp = arg2

if (arg4 != 0)
    int64_t* rdi_1 = arg3 + 0x10
    int32_t i
    
    do
        uint64_t* rbx_1 = rbp
        rbp = &rbp[4]
        sub_140597df0(rbx_1, &rdi_1[-2])
        int64_t* rbx_2 = rdi_1[1]
        int64_t var_28 = *rdi_1
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        if (&var_28 != &rbx_1[2])
            var_28.o = *(rbx_1 + 0x10)
            *(rbx_1 + 0x10) = var_28.o
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp2_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        rdi_1 = &rdi_1[4]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
