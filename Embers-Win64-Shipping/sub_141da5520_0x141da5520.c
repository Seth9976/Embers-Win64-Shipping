// 函数: sub_141da5520
// 地址: 0x141da5520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = arg2
*arg1 = &data_143239db0
arg1[2] = *arg3
void* rax_1 = arg3[1]
arg1[3] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[4] = 0
arg1[5].d = 0
arg1[6] = 0
int64_t* rdi = arg3[1]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return arg1
