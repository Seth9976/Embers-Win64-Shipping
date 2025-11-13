// 函数: sub_141c93310
// 地址: 0x141c93310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b4c2a0(arg1)
*arg1 = &data_14320fe98
int64_t rdx
rdx.b = 1
arg1[0x14] = 0
arg1[0x15] = 0
(*arg1)[0x14](arg1, rdx)
sub_140a464c0()
int16_t* const rdx_1

if (arg3[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *arg3

int64_t* rax_2 = (*(data_14399ea08 + 0x18))(&data_14399ea08, rdx_1, 2)
arg1[0x13] = rax_2

if (rax_2 == 0 || (*(rax_2 + 0x29) & 1) != 0)
    *(arg1 + 0x29) |= 1
    arg1[0x12] = &data_143f354a0
else
    int64_t rdx_2 = *rax_2
    
    if ((*(rdx_2 + 0x28))(rax_2, rdx_2) s<= 0)
        *(arg1 + 0x29) |= 1
        arg1[0x12] = &data_143f354a0
    else
        int64_t* rcx_2 = arg1[1]
        arg1[0x12] = arg1[0x13]
        int32_t arg_8 = 0
        int32_t* rdx_3 = *rcx_2
        
        if (&rdx_3[1] u> rcx_2[1])
            int32_t* rdx_4 = &arg_8
            
            if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdx_4, arg4)
            else
                (*arg1)[0x2a](arg1, rdx_4, 4)
        else
            arg_8 = *rdx_3
            *rcx_2 += 4
        
        char rdx_5 = *(arg1 + 0x29)
        
        if ((rdx_5 & 1) != 0 || arg_8 != 0x9e2a83c1)
            *(arg1 + 0x29) |= 1
            arg1[0x12] = &data_143f354a0
        else
            int64_t* rcx_4 = arg1[1]
            int32_t arg_18 = 0
            int32_t* r8 = *rcx_4
            
            if (&r8[1] u> rcx_4[1])
                int32_t* rdx_6 = &arg_18
                
                if ((rdx_5 & 0x20) != 0)
                    sub_140b54070(arg1, rdx_6, arg4)
                else
                    (*arg1)[0x2a](arg1, rdx_6, 4)
            else
                arg_18 = *r8
                *rcx_4 += 4
            
            if ((*(arg1 + 0x29) & 1) != 0 || arg_18 != arg2)
                *(arg1 + 0x29) |= 1
                arg1[0x12] = &data_143f354a0
            else if (sub_141cb3870(arg1, arg4) == 0)
                *(arg1 + 0x29) |= 1
                arg1[0x12] = &data_143f354a0

return arg1
