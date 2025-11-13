// 函数: sub_141c95970
// 地址: 0x141c95970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t* r8 = *rcx
int32_t arg_8

if (&r8[1] u> rcx[1])
    int32_t* rdx = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx, 4)
else
    arg_8 = *r8
    *rcx += 4

int64_t rax_3 = sx.q(arg_8)

if (rax_3.d s< 0 || rax_3.d s>= arg1[0x15].d)
    *(arg1 + 0x29) |= 1
    arg1[0x12] = &data_143f354a0
    arg_8.q = 0
else
    int32_t rbx_1 = *(arg1[0x14] + (rax_3 << 2))
    int64_t* rcx_3 = arg1[1]
    int32_t* rdx_1 = *rcx_3
    int32_t arg_18
    
    if (&rdx_1[1] u> rcx_3[1])
        int32_t* rdx_2 = &arg_18
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_2, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_2, 4)
    else
        arg_18 = *rdx_1
        *rcx_3 += 4
    
    int32_t rax_8 = 0
    arg_8 = rbx_1
    
    if (rbx_1 != 0)
        rax_8 = arg_18
    
    int32_t arg_c = rax_8

*arg2 = arg_8.q
return arg1
