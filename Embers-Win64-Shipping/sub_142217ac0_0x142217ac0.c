// 函数: sub_142217ac0
// 地址: 0x142217ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result_1 = *(arg1 + 0xa0)
void* result = arg1

if (result_1 != 0)
    result = result_1

int64_t* rdi = *(result + 0x120)
int64_t* rax_1

if (rdi == 0)
    rax_1 = nullptr
else
    int32_t arg_8
    sub_1422159c0(rdi, &arg_8, arg2)
    int64_t rax = sx.q(arg_8)
    
    if (rax.d == 0xffffffff)
        rax_1 = nullptr
    else
        void* rdx_3 = rax * 0x60 + *rdi
        rax_1 = rdx_3 + 0x10
        
        if (rdx_3 == 0)
            rax_1 = nullptr

if (rax_1 == 0)
    return result

return *rax_1
