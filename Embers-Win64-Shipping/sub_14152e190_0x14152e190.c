// 函数: sub_14152e190
// 地址: 0x14152e190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1416f2c40(arg1, &arg2[1], sub_1416f2970(arg1, arg2, arg3))
(*(*arg1 + 0x1d8))(arg1, &data_1439a9538)

if (sub_140b4e7c0(arg1, &data_1439a9538) s>= 0xe)
    int32_t rax_2
    int512_t zmm1_1
    rax_2, zmm1_1 = sub_140b4e7c0(arg1, &data_1439a9538)
    
    if (rax_2 s< 0x22)
        int64_t* rcx_4 = arg1[1]
        int32_t* rdx_1 = *rcx_4
        int32_t arg_8
        
        if (&rdx_1[1] u> rcx_4[1])
            int32_t* rdx_2 = &arg_8
            
            if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdx_2, zmm1_1)
            else
                (*(*arg1 + 0x150))(arg1, rdx_2, 4)
        else
            arg_8 = *rdx_1
            *rcx_4 += 4

int64_t* rax_6 = arg2[1]

if (rax_6 == 0)
    void* rax_9 = *arg2
    
    if (rax_9 != 0)
        arg2[2].d = *(rax_9 + 0x24)
else
    arg2[2].d = *(*(*rax_6 + 0x50) + (sx.q(rax_6[1].d) << 2))

return arg1
