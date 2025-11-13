// 函数: sub_1408571b0
// 地址: 0x1408571b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x68)
int32_t rsi = 0
int32_t arg_8 = 0
void* rbp_2 = sx.q(*(arg1 + 0x70)) * 0x30 + rbx

if (rbx == rbp_2)
    int64_t result
    result.b = 0
    return result

int64_t* rdi
int64_t* arg_10 = rdi

do
    int64_t var_28
    
    if (sub_140790310(rbx) == 0)
        rdi.b = 0
    else
        rsi |= 1
        int64_t* rax_2 = (*(*arg2 + 0x38))(arg2, &var_28)
        
        if (sub_140834940(sub_1407faf10(rbx) + 0x118, rax_2) == 0)
            rdi.b = 0
        else
            rdi.b = 1
    
    if ((rsi.b & 1) != 0)
        int64_t rcx_4 = var_28
        rsi &= 0xfffffffe
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
    
    if (rdi.b != 0)
        return 1
    
    rbx += 0x30
while (rbx != rbp_2)

return 0
