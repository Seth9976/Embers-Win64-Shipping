// 函数: sub_141dd03e0
// 地址: 0x141dd03e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* i = *(arg2 + 0xe8)
int64_t rbx
rbx.b = 0

for (void* rdx_1 = sx.q(*(arg2 + 0xf0)) * 0x88 + i; i != rdx_1; i = &i[0x88])
    if ((*i & 1) != 0)
        rbx.b = 1
        break

uint64_t result = zx.q(data_143a2cfb8)

if (result.d != data_143a2cfe4)
    int64_t r9_1 = *arg1
    uint64_t result_1 = data_143a2cff0
    result = &data_143a2cfe8
    
    if (result_1 != 0)
        result = result_1
    
    int32_t rdx_4 =
        *(result + ((sx.q((r9_1 u>> 0x20).d * 0x17 + r9_1.d) & sx.q(data_143a2cff8 - 1)) << 2))
    
    if (rdx_4 != 0xffffffff)
        int64_t r8 = data_143a2cfb0
        int64_t rcx_3
        
        while (true)
            rcx_3 = sx.q(rdx_4)
            result = rcx_3 << 5
            
            if (r9_1 == *(result + r8))
                break
            
            rdx_4 = *(result + r8 + 0x18)
            
            if (rdx_4 == 0xffffffff)
                return result
        
        if (rdx_4 != 0xffffffff)
            int128_t zmm0 = *((rcx_3 << 5) + r8 + 8)
            sub_1405c3390(&data_143a2cfb0, rdx_4)
            result = sub_1423dcff0(data_143f5b298)
            
            if (result != 0)
                result = sub_141e7ca00(result, zmm0.d)
                
                if (result != 0)
                    int64_t var_60_1 = zmm0:8.q
                    void** const var_28_1 = &data_142e345d8
                    int64_t (* var_48)(int64_t* arg1) = sub_141dbb9a0
                    int64_t var_38_1 = 0
                    int128_t var_20_1 = result.o
                    int64_t var_10_1 = rbx.b.q
                    return sub_141e85cb0(&var_48, arg3)

return result
