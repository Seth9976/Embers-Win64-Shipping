// 函数: sub_1422770e0
// 地址: 0x1422770e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x150))()
int32_t arg_24 = 0
void arg_8
int32_t result = sub_141f8dba0(arg1, (*sub_140b5e500(&arg_8, 0x142)).q)
int64_t zmm0

if (result.b == 0)
    zmm0 = *(arg1 + 0x314)
    
    if (not(zmm0.d f== *(rax_1 + 0x520)))
        if (arg1[0x54] == arg1[0x4a])
            sub_142569290(arg1, *sub_141f8b910(arg1, &arg_8))
            int64_t rax_8 = *arg1
            int512_t zmm0_1
            zmm0_1.o = zx.o(0)
            int32_t var_2c
            int32_t var_2c_1 = var_2c & 0xfffffffe
            int32_t var_28 = 0
            zmm0_1.o = 0x40000000
            int32_t var_24_1 = 1.d
            int32_t var_20_1 = 0x40000000
            int32_t var_1c_1 = var_2c_1
            sub_142569970(arg1, (*(rax_8 + 0x698))(zmm0_1, var_2c_1), &var_28)
        else
            (*(*arg1 + 0xb78))(arg1, zmm0)
        
        result = *(rax_1 + 0x520)
        *(arg1 + 0x314) = result
else
    int32_t rax_3 = arg2[1].d
    arg1[0x63] = *arg2
    *(arg1 + 0x324) = *arg3
    arg1[0x64].d = rax_3
    result = arg3[1].d
    *(arg1 + 0x32c) = result
    zmm0.d = (*(rax_1 + 0x520)).d f- *(arg1 + 0x314)
    
    if (not(zmm0.d f<= 2f))
        sub_142569290(arg1, *sub_141f8b910(arg1, &arg_8))
        result = *(rax_1 + 0x520)
        *(arg1 + 0x314) = result
return result
