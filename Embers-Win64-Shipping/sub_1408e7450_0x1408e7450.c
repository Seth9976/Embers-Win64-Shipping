// 函数: sub_1408e7450
// 地址: 0x1408e7450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a94b8)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9478)
void* arg_18 = arg1
int32_t rax_2
int512_t zmm1
rax_2, zmm1 = sub_140b4e7c0(arg2, &data_1439a94b8)

if (rax_2 s< 0x11)
    sub_1408dc5a0(arg2, arg1 + 0x40, zmm1)
    int64_t* rcx_6 = arg2[1]
    int32_t* rdx_2 = *rcx_6
    int32_t arg_8
    
    if (&rdx_2[1] u> rcx_6[1])
        int32_t* rdx_3 = &arg_8
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_3, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_3, 4)
    else
        arg_8 = *rdx_2
        *rcx_6 += 4
    int64_t* rcx_8 = arg2[1]
    int32_t* rdx_4 = *rcx_8
    int32_t arg_10
    
    if (&rdx_4[1] u> rcx_8[1])
        int32_t* rdx_5 = &arg_10
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_5, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_5, 4)
    else
        arg_10 = *rdx_4
        *rcx_8 += 4
    int32_t rax_9
    int512_t zmm1_1
    rax_9, zmm1_1 = sub_140b4e7c0(arg2, &data_1439a9418)
    
    if (rax_9 s>= 0x11)
        sub_1408dc5a0(arg2, arg1 + 0x30, zmm1_1)
else
    sub_140ce8e10(arg1, arg2)
    int32_t result = sub_140b4e7c0(arg2, &data_1439a9478)
    
    if (result s>= 0x1c)
        return result

return sub_1408dcf20(&arg_18)
