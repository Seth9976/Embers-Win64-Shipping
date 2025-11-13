// 函数: sub_140f756b0
// 地址: 0x140f756b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr

if (*(arg1 + 0x2f8) != 0)
    int64_t* rcx = *(arg1 + 0x2f0)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x2f8) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x2f0)
        
        (*(*rcx_1 + 0x48))(rcx_1)
        *(arg1 + 0x2e8) = arg3

if (*(arg1 + 0x2e0) != 0)
    int64_t* rcx_2 = *(arg1 + 0x2d8)
    
    if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
        if (*(arg1 + 0x2e0) != 0)
            rsi = *(arg1 + 0x2d8)
        
        (*(*rsi + 0x48))(rsi)
        *(arg1 + 0x2d0) = arg3

int32_t rax_7 = *(arg1 + 0x340)
arg3 = *(arg1 + 0x2d0)
int32_t zmm2 = *(arg1 + 0x2e8)
*arg2 = rax_7
int32_t zmm1

if (rax_7 != 1)
    zmm1 = arg3
    arg3 = zmm2
else
    zmm1 = zmm2

arg2[2] = arg3
arg2[1] = zmm1
return arg2
