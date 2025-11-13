// 函数: sub_140776e80
// 地址: 0x140776e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
float zmm6[0x4] = arg3
uint64_t rax

if (not(zmm6[0] f== *(arg1 + 0x1f4)))
    int32_t rax_1 = 0
    
    if (0 == *(arg1 + 0x1e8))
        *(arg1 + 0x1e8) = 0
    else
        rax_1 = *(arg1 + 0x1e8)
    
    rax, zmm6 = sub_140774a30(arg1, *(arg1 + 0x1e0), *(arg1 + 0x1e4), arg3, rax_1)

if (arg2 != *(arg1 + 0x1f0))
    int32_t rax_2 = 0
    
    if (0 == *(arg1 + 0x1e8))
        *(arg1 + 0x1e8) = 0
    else
        rax_2 = *(arg1 + 0x1e8)
    
    sub_140775a20(arg1, arg2, rax_2)

if (zmm6[0] f!= *(arg1 + 0x1f4) || arg2 != *(arg1 + 0x1f0))
    int64_t* rcx_1 = *(arg1 + 0x230)
    
    if (rcx_1 != 0)
        rsi = (*(*rcx_1 + 8))(rcx_1)
    
    rax, zmm6 = sub_140775dd0(arg1, arg2, rsi)

*(arg1 + 0x1f4) = zmm6[0]
*(arg1 + 0x1f0) = arg2
