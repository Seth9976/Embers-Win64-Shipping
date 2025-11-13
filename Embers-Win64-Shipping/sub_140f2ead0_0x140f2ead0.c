// 函数: sub_140f2ead0
// 地址: 0x140f2ead0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x2e0)

if (*(arg1 + 0x2b8) != 0)
    int64_t* rcx = *(arg1 + 0x2b0)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x2b8) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x2b0)
        
        (*(*rcx_1 + 0x48))(rcx_1)
        *(arg1 + 0x2a8) = arg3

void arg_8
int64_t* rax_4 = sub_140e13cf0(rsi, &arg_8)
float zmm1 = *(arg1 + 0x2a8)
float zmm0 = zmm1 f* *rax_4
zmm1 = zmm1 f* *(rax_4 + 4)
*arg2 = zmm0
arg2[1] = zmm1
return arg2
