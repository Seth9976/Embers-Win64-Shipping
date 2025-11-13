// 函数: sub_140976730
// 地址: 0x140976730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s> *(arg1 + 0xc))
    return sub_14095cd40(arg1, arg2) __tailcall

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
        
        rdi_1 = &rdi_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0
