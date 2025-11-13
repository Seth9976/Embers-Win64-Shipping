// 函数: sub_140de18c0
// 地址: 0x140de18c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

*arg1 = *arg2
*arg2 = 0
int64_t rax_1 = arg2[1]
int64_t* rdi = arg1[1]

if (rax_1 != rdi)
    arg2[1] = 0
    arg1[1] = rax_1
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp1_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi + 8))(rdi, 1)

return arg1
