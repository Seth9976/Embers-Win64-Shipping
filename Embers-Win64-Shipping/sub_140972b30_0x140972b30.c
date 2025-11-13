// 函数: sub_140972b30
// 地址: 0x140972b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
int32_t result_1 = -1
int32_t result

if (rbp.d u< arg1[9].d)
    char* rdi_1 = arg1[0xa] + rbp * 0xc
    (*(*arg1 + 0x28))(arg3, zx.q(rbp.b))
    int64_t* rcx = arg1[7]
    
    if (rcx == 0)
        *rdi_1 = 0
    else if (*rdi_1 != 0)
        result_1 = 0
    else
        result = (*(*rcx + 0x30))(rcx, zx.q(rbp.d))
        result_1 = result
        
        if (result == 0)
            *rdi_1 = 1

result.b = result_1 == 0
return result
