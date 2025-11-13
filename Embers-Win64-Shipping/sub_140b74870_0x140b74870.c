// 函数: sub_140b74870
// 地址: 0x140b74870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_14062d6e0(arg1, &arg_8, arg3)
int64_t rax = sx.q(arg_8)
void* const rcx

if (rax.d == 0xffffffff)
    rcx = nullptr
else
    rcx = *arg1 + rax * 0x28

int64_t* rax_2 = rcx + 0x10

if (rcx == 0)
    rax_2 = nullptr

if (rax_2 != 0)
    int64_t rcx_1 = *rax_2
    
    if (rcx_1 != 0)
        *arg2 = rcx_1
        void* rcx_2 = rax_2[1]
        arg2[1] = rcx_2
        
        if (rcx_2 == 0)
            return arg2
        
        *(rcx_2 + 8) += 1
        return arg2

void*** rax_4 = j_sub_140a82f30(0x20)

if (rax_4 == 0)
    rax_4 = nullptr
else
    rax_4[1].d = 1
    *rax_4 = &data_142d85518
    *(rax_4 + 0xc) = 1
    rax_4[2] = &data_142d84e10
    rax_4[3].d = 1

*arg2 = &rax_4[2]
arg2[1] = rax_4

if (rax_4 != 0)
    rax_4[1].d += 1
    
    if (rax_4 != 0)
        rax_4[1].d -= 1
        
        if (rax_4[1].d == 1)
            (**rax_4)(rax_4)
            int32_t temp1_1 = *(rax_4 + 0xc)
            *(rax_4 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rax_4)[1](rax_4, 1)

return arg2
