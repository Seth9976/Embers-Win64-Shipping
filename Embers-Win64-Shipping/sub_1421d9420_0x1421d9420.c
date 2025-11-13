// 函数: sub_1421d9420
// 地址: 0x1421d9420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421dfc30(&data_143f50880)
int32_t rax = data_143f50948
uint64_t result = zx.q(rax - 1)
int64_t rbx = sx.q(result.d)

if (rax - 1 s>= 0)
    int64_t temp1_1
    
    do
        result = data_143f50940
        int64_t* rcx_1 = *(result + (rbx << 3))
        
        if (rcx_1[0x29].b != 0)
            result = (**rcx_1)(rcx_1, 1)
        
        temp1_1 = rbx
        rbx -= 1
    while (temp1_1 - 1 s>= 0)

bool cond:1 = data_143f5094c == 0
data_143f50948 = 0

if (cond:1)
    return result

return sub_1405c5570(&data_143f50940, 0) __tailcall
