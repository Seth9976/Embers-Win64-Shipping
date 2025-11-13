// 函数: sub_140d10980
// 地址: 0x140d10980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg3[1]
int64_t* r14 = *(*arg2 + 8)
sub_140d11050()
int64_t* var_28 = r14
int64_t* rcx = &var_28
int64_t* var_20 = arg3

if (rdi != &data_143e1b9d0)
    sub_140bb37e0(rcx)
    (*(*arg3 + 0x88))(arg3, arg2, arg4, arg5)
else
    sub_140bb37e0(rcx)
    (*(*r14 + 0x150))(r14, 0, 0)
    
    if ((r14[5].b & 1) != 0)
        uint64_t rcx_2 = zx.q(*(arg3 + 0x79))
        
        if (*(arg1 + 0x10) == 0)
            *(rcx_2 + arg4) &= not.b(*(arg3 + 0x7b))
        else
            *(rcx_2 + arg4) = (not.b(*(arg3 + 0x7b)) & *(rcx_2 + arg4)) | *(arg3 + 0x7a)

return sub_140bafac0(&var_28)
