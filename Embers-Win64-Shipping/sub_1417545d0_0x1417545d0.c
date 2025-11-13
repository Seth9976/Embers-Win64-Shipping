// 函数: sub_1417545d0
// 地址: 0x1417545d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_1417537e0(arg1, arg2, arg3)
sub_14152fd00(sub_14152fd00(arg2, arg1 + 0x1b8, zmm1), arg1 + 0x1d0, zmm1)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9538)
int32_t rax_2
int512_t zmm1_1
rax_2, zmm1_1 = sub_140b4e7c0(arg2, &data_1439a9538)

if (rax_2 s>= 9)
    int64_t* rcx_4 = arg2[1]
    int32_t arg_8 = *(arg1 + 0x1f0)
    int32_t* rdx_2 = *rcx_4
    
    if (&rdx_2[1] u> rcx_4[1])
        int32_t* rdx_3 = &arg_8
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_3, zmm1_1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_3, 4)
    else
        arg_8 = *rdx_2
        *rcx_4 += 4
    
    int32_t rdx_4 = arg_8
    
    if (rdx_4 s> *(arg1 + 0x1f4))
        sub_1405a52a0(arg1 + 0x1e8, rdx_4)
        rdx_4 = arg_8
    
    int512_t zmm1_2 = sub_141755ff0(arg1 + 0x1e8, rdx_4, 1)
    int32_t rbx_1 = 0
    
    if (arg_8 s> 0)
        int64_t rsi_1 = 0
        
        do
            int32_t* rdx_6 = *(arg1 + 0x1e8) + rsi_1
            int64_t* rax_7
            rax_7, zmm1_2 = sub_141707780(arg2, rdx_6, zmm1_2)
            int64_t* rdx_7 = rax_7[1]
            int32_t* rax_8 = *rdx_7
            
            if (&rax_8[1] u<= rdx_7[1])
                rdx_6[0xc] = *rax_8
                int64_t* rax_9 = rax_7[1]
                *rax_9 += 4
            else if ((*(rax_7 + 0x29) & 0x20) != 0)
                sub_140b54070(rax_7, &rdx_6[0xc], zmm1_2)
            else
                (*(*rax_7 + 0x150))(rax_7, &rdx_6[0xc], 4)
            
            rbx_1 += 1
            rsi_1 += 0x40
        while (rbx_1 s< arg_8)

int32_t result
int512_t zmm1_3
result, zmm1_3 = sub_140b4e7c0(arg2, &data_1439a9538)

if (result s< 0x15)
    return result

sub_14152fd00(arg2, arg1 + 0x200, zmm1_3)
return sub_14152fb00(arg2, arg1 + 0x218, zmm1_3) __tailcall
