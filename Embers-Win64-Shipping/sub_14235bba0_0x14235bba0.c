// 函数: sub_14235bba0
// 地址: 0x14235bba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = nullptr
int32_t arg_10 = 0xffffffff
int32_t arg_14 = 0
int32_t result_1

if (arg2 != 0)
    sub_140d3a3a0(&result_1, arg2)
    arg_10.q = result_1.q

sub_1423611b0(arg1 + 0x40, &result_1, &arg_10)
int64_t result = sx.q(result_1)
int64_t rbx_2
void* rbx_3

if (result.d != 0xffffffff)
    rbx_2 = result << 5
    rbx_3 = rbx_2 + *(arg1 + 0x40)

int64_t* rbx_4

if (result.d == 0xffffffff || rbx_2 == neg.q(*(arg1 + 0x40)))
    rbx_4 = nullptr
else
    rdi = *(rbx_3 + 8)
    rbx_4 = *(rbx_3 + 0x10)
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1

if (rdi != 0)
    result = sub_140de8fc0(*(rdi + 0x10))

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp3_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_4 + 8))(rbx_4, 1)

return result
