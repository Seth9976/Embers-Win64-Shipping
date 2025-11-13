// 函数: sub_14095cca0
// 地址: 0x14095cca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rdi_1 = *arg1 + 8
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
        
        rdi_1 = &rdi_1[3]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) != arg2)
    sub_1405a5130(arg1, arg2)
