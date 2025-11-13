// 函数: sub_141fca5e0
// 地址: 0x141fca5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
uint64_t result

if (*(arg1 + 0x24) == 0 && sub_140d3e110(arg1 + 0x18).b != 0)
    if (*(arg1 + 0x48) == 0)
        result.b = 0
        return result
    
    result = sub_140d3c6e0(arg1 + 0x18)
    int64_t rsi_1 = data_143f3d650
    zmm6 = *(result + 0xe20)
    int64_t rcx_2
    
    if (data_143de5480 == 0)
        rcx_2 = 0
    else
        rcx_2.b = GetCurrentThreadId().d != data_143de5470
    
    if (*(rsi_1 + (rcx_2 << 2)) == 0)
        zmm6.d = zmm6.d f* 1000f
    else
        zmm6.d = float.s(zx.q(*(arg1 + 0x20)))
    
    if (*(arg1 + 0x30) == 0)
        if (*(arg1 + 0x38) s<= 0)
            return sub_141fb0f20(sub_140d3c6e0(arg1 + 0x18)) __tailcall
        
        int64_t* rcx_4 = *(sub_140d3c6e0(arg1 + 0x18) + 0x770)
        
        if ((*(*rcx_4 + 0x68))(rcx_4).b != 0)
            int64_t* rcx_6 = *(sub_140d3c6e0(arg1 + 0x18) + 0x770)
            
            if ((*(*rcx_6 + 0x78))(rcx_6, zx.q(*(arg1 + 0x20) - *(arg1 + 0x38)), int.q(zmm6.d)).b
                    != 0)
                return sub_141fb0f20(sub_140d3c6e0(arg1 + 0x18)) __tailcall
        
        result.b = 0
        return result

result.b = 1
return result
