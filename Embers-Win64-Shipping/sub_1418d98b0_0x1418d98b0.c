// 函数: sub_1418d98b0
// 地址: 0x1418d98b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i

if (*(arg2 + 0x190) s> 0)
    int128_t zmm1 = *(arg2 + 0x1b8)
    int64_t* r9_1 = *arg1[4]
    uint128_t var_38 = *(arg2 + 0x1a8)
    int128_t var_28_1 = zmm1
    var_28_1.q = r9_1[4]
    uint64_t var_18_1 = *(arg2 + 0x1c8)
    
    if (data_143efb8d8(*(*r9_1 + 8), &var_38) != 0)
        do
            int64_t* rax_4 = *(arg1[4] + 8)
            int64_t* rax_5
            
            if (rax_4 == 0)
                rax_5 = sub_1418e5810(arg1)
            else
                arg1[4] = rax_4
                rax_5 = *rax_4
            
            int64_t rcx_2 = rax_5[4]
            void* rax_6 = *rax_5
            zmm1 = *(arg2 + 0x1b8)
            var_38 = *(arg2 + 0x1a8)
            int128_t var_28_2 = zmm1
            var_28_2.q = rcx_2
            uint64_t var_18_2 = *(arg2 + 0x1c8)
            i = data_143efb8d8(*(rax_6 + 8), &var_38, arg3)
        while (i != 0)

i.b = 1
return i
