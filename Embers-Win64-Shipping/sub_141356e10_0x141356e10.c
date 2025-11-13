// 函数: sub_141356e10
// 地址: 0x141356e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    int64_t* rax_2 = (*(*arg1 + 0x280))()
    int64_t r8 = *rax_2
    int64_t* rax_3 = (*(r8 + 0x48))(rax_2, zx.q(arg2), r8)
    
    if (rax_3 != 0)
        int64_t rdx_1 = *rax_3
        
        if ((*(rdx_1 + 0x20))(rax_3, rdx_1) == 4 && sub_1405948b0(rax_3) != 0)
            if ((*(*rax_3 + 0x318))(rax_3) == 0)
                (*(*rax_3 + 0x310))(rax_3)
            
            int64_t result = sub_1405948b0(rax_3)
            *arg4 = rax_3
            *arg5 = rax_2
            *arg6 = result
            return result
    
    arg1 = sub_14210f630(4)
