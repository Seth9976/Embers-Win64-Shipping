// 函数: sub_140647400
// 地址: 0x140647400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2

if (&arg1[1] == &arg2[1])
    return arg1

arg1[1] = arg2[1]
arg2[1] = 0
int64_t rax_2 = arg2[2]
int64_t* rdi = arg1[2]

if (rax_2 != rdi)
    arg2[2] = 0
    arg1[2] = rax_2
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp1_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi + 8))(rdi, 1)

return arg1
