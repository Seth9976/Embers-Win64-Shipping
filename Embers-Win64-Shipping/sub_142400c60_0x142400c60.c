// 函数: sub_142400c60
// 地址: 0x142400c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[1]
*arg1 = &data_143344340

if (rdi != 0)
    int64_t* rcx = rdi[0x46]
    
    if (rcx != 0)
        rcx[1].d -= 1
        
        if (rcx[1].d == 1)
            (**rcx)(rcx, 1)
    
    sub_141412c30(rdi)
    j_sub_140a74f90(rdi)

*arg1 = &data_143344310

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
