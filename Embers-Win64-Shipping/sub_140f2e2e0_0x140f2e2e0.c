// 函数: sub_140f2e2e0
// 地址: 0x140f2e2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x490) != 0)
    int64_t* rcx = *(arg1 + 0x488)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x490) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x488)
        
        int64_t arg_8
        (*(*rcx_1 + 0x48))(rcx_1, &arg_8)
        *(arg1 + 0x478) = arg_8

int32_t arg_10
int32_t* rax_4 = sub_140de9310(arg1, &arg_10)
float zmm1 = rax_4[1] f* *(arg1 + 0x47c)
*arg2 = *rax_4 f* *(arg1 + 0x478)
arg2[1] = zmm1
return arg2
