// 函数: sub_142375220
// 地址: 0x142375220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* result = sub_140ce8e10(arg1, arg2)
void arg_10

if (arg2[8].d s>= 0x1e5)
    result = sub_141ff4780(&arg_10, arg2, 0, 0xd6)

if ((arg2[5].b & 1) != 0 && arg2[8].d s< 0x12b)
    int32_t i_1 = 0
    void arg_18
    int512_t zmm3
    
    if (*(arg1 + 0x60) != 0)
        char r9_1 = sub_141f98e50(arg1 + 0x70)
        result = *(arg1 + 0x60)
        int32_t i = 0
        
        if (*(result + 0x40) s> 0)
            int64_t rbp_1 = 0
            
            do
                int32_t* rbx_1 = *(result + 0x38)
                int32_t* rax = sub_141f79930(&arg_10)
                zmm3.o = *(rbx_1 + rbp_1 + 4)
                int32_t var_30_1 = *rax
                char var_38_1 = 0
                r9_1, zmm3 = sub_141f7f6d0(arg1 + 0x70, &arg_18, *(rbx_1 + rbp_1), r9_1)
                result = *(arg1 + 0x60)
                rbp_1 += 0x14
                i += 1
            while (i s< *(result + 0x40))
    
    if (*(arg1 + 0x68) != 0)
        char r9_2 = sub_141f98e50(arg1 + 0xf8)
        result = *(arg1 + 0x68)
        
        if (*(result + 0x40) s> 0)
            int64_t rbp_2 = 0
            
            do
                int32_t* rbx_2 = *(result + 0x38)
                int32_t* rax_1 = sub_141f79930(&arg_10)
                zmm3.o = *(rbx_2 + rbp_2 + 4)
                int32_t var_30_2 = *rax_1
                char var_38_2 = 0
                r9_2, zmm3 = sub_141f7f6d0(arg1 + 0xf8, &arg_18, *(rbx_2 + rbp_2), r9_2)
                result = *(arg1 + 0x68)
                rbp_2 += 0x14
                i_1 += 1
            while (i_1 s< *(result + 0x40))

return result
