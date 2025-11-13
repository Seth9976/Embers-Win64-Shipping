// 函数: sub_142684120
// 地址: 0x142684120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_1426569e0(arg1, zx.d(arg3))

if (rax != 0)
    void* rax_1 = rax[0x23]
    
    if (rax_1 != 0)
        *arg2 = *(rax_1 + 0x38)
        return arg2
    
    (*(*rax + 0x390))(rax)
    rax_1 = rax[0x23]
    
    if (rax_1 != 0)
        *arg2 = *(rax_1 + 0x38)
        return arg2

*arg2 = data_14399f638
return arg2
