// 函数: sub_142186f70
// 地址: 0x142186f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg2
arg2.b = 1
int128_t zmm6 = sub_142185b40(arg1, arg2.b)
int64_t rbp = 0
int64_t* r14 = arg1[0xc0]
void* result = &r14[arg1[0xc1]]
uint64_t r15_1 = sx.q(arg1[0xc1].d) << 3 u>> 3

if (r14 u> result)
    r15_1 = 0

if (r15_1 != 0)
    int128_t var_28_1 = zmm6
    
    do
        int64_t* rsi_1 = *r14
        
        if (rsi_1 != 0)
            (*(*rsi_1 + 0x1f8))(rsi_1)
            result = (*(*rsi_1 + 0x208))(rsi_1, rdi, arg3, zx.q(arg4), arg5.d)
        
        r14 = &r14[1]
        rbp += 1
    while (rbp != r15_1)

return result
