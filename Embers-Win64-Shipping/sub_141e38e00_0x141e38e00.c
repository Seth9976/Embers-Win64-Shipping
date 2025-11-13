// 函数: sub_141e38e00
// 地址: 0x141e38e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1 = (*(*arg1 + 0x140))()
int64_t* r8 = rax_1[1]
int32_t* rax_2 = *r8

if (&rax_2[1] u<= r8[1])
    *(arg2 + 8) = *rax_2
    int64_t* rax_3 = rax_1[1]
    *rax_3 += 4
else if ((*(rax_1 + 0x29) & 0x20) != 0)
    sub_140b54070(rax_1, arg2 + 8, arg3)
else
    (*(*rax_1 + 0x150))(rax_1, arg2 + 8, 4)

if ((arg1[5].b & 1) != 0 && arg1[8].d s< 0x136)
    int64_t* rcx_2 = arg1[1]
    int32_t arg_8 = data_14399f630
    int32_t* rdx_2 = *rcx_2
    
    if (&rdx_2[1] u<= rcx_2[1])
        arg_8 = *rdx_2
        *rcx_2 += 4
        return arg1
    
    int32_t* rdx_3 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) == 0)
        (*(*arg1 + 0x150))(arg1, rdx_3, 4)
        return arg1
    
    sub_140b54070(arg1, rdx_3, arg3)

return arg1
