// 函数: sub_140b55580
// 地址: 0x140b55580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = zx.q(*arg2) ^ zx.q(data_1439a93a0)

if (((*(arg2 + 4) ^ data_1439a93a4) | (*(arg2 + 8) ^ data_1439a93a8)
        | (*(arg2 + 0xc) ^ data_1439a93ac) | result.d) != 0)
    result = sub_140b4b580(arg1, arg2)
    
    if (result == 0)
        int128_t zmm0_1 = *arg2
        int64_t var_10_1 = arg4
        int64_t rbx_1 = sx.q(arg1[1].d)
        int32_t var_14_1 = 1
        int32_t rax_5 = (rbx_1 + 1).d
        arg1[1].d = rax_5
        
        if (rax_5 s> *(arg1 + 0xc))
            sub_1405c4e40(arg1)
        
        result = *arg1
        int128_t* rcx_2 = rbx_1 << 5
        *(rcx_2 + result) = zmm0_1
        *(rcx_2 + result + 0x10) = arg3.o
    else
        *(result + 0x10) = arg3
        *(result + 0x18) = arg4

return result
