// 函数: sub_141bbc0f0
// 地址: 0x141bbc0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20
sub_140d3a3a0(&arg_20, arg2)
int32_t arg_18
sub_1417f0130(&data_1439ec470, &arg_18, arg_20)
int64_t rax = sx.q(arg_18)
void* const rcx_3

if (rax.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = (rax << 5) + data_1439ec470

int64_t* rdx_1 = rcx_3 + 8

if (rcx_3 == 0)
    rdx_1 = nullptr

void* rax_1

if (rdx_1 != 0 && *rdx_1 != 0)
    rax_1 = rdx_1[1]

if (rdx_1 == 0 || *rdx_1 == 0 || rax_1 == 0 || *(rax_1 + 8) s<= 0)
    *arg1 = 0
    arg1[1] = 0
else
    *arg1 = 0
    void* rcx_4 = rdx_1[1]
    arg1[1] = rcx_4
    
    if (rcx_4 != 0)
        int32_t rax_2 = *(rcx_4 + 8)
        
        if (rax_2 == 0)
            arg1[1] = 0
        else
            *(rcx_4 + 8) = rax_2 + 1
            
            if (arg1[1] != 0)
                *arg1 = *rdx_1

return arg1
