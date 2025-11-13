// 函数: sub_142a85c50
// 地址: 0x142a85c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[1]

if (rdi == 0)
    arg1[1] = arg3
    *arg1 = arg2
    return 

rdi[1].d -= 1

if (rdi[1].d != 1)
    arg1[1] = arg3
    *arg1 = arg2
    return 

(**rdi)(rdi)
int32_t r14_1 = *(rdi + 0xc)
*(rdi + 0xc) -= 1

if (r14_1 == 1)
    (*(*rdi + 8))(rdi)

arg1[1] = arg3
*arg1 = arg2
