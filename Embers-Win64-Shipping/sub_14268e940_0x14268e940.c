// 函数: sub_14268e940
// 地址: 0x14268e940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = (*(*arg1 + 0x40))() s> 0
*arg2 = 0
arg2[1] = 0
int64_t var_18
int64_t* rax_2 = sub_14268ea10(arg1, &var_18, arg3)

if (arg2 != rax_2)
    int64_t rcx_1 = *arg2
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *arg2 = *rax_2
    *rax_2 = 0
    arg2[1].d = rax_2[1].d
    *(arg2 + 0xc) = *(rax_2 + 0xc)
    rax_2[1] = 0

int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int32_t rax_6
rax_6.b = (*(*arg1 + 0x40))(arg1) s> 0

if (rbp.b != 0 && rax_6.b == 0)
    int64_t* rcx_5 = arg1[0x1d]
    (*(*rcx_5 + 0x788))(rcx_5)

return arg2
