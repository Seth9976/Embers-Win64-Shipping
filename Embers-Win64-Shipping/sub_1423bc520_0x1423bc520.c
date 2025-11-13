// 函数: sub_1423bc520
// 地址: 0x1423bc520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1423c7510()
void* rax = sub_140963350(arg2)
int64_t i_1 = 0x2710

if (data_143f5a704 s< 0x2710)
    sub_1405c5660(&data_143f5a6f8, 0x2710)

char* result
int64_t i

do
    int64_t rbx_1 = sx.q(data_143f5a700)
    int32_t rax_1 = (rbx_1 + 1).d
    bool cond:0_1 = rax_1 s<= data_143f5a704
    data_143f5a700 = rax_1
    
    if (not(cond:0_1))
        sub_1405c4ec0(&data_143f5a6f8)
    
    void*** rcx_2 = data_143f5a6f8 + rbx_1 * 0x28
    
    if (rcx_2 == 0)
        rcx_2 = nullptr
    else
        char rax_3 = *(rcx_2 + 0xa)
        rcx_2[1].w = 0
        *(rcx_2 + 0xb) = 1
        *(rcx_2 + 0xa) = (rax_3 & 0xc8) | 8
        __builtin_memset(rcx_2 + 0xc, 0, 0x1c)
        *(rcx_2 + 0xa) |= 1
        *rcx_2 = &data_14333a1b0
    
    result = sub_1423c6c10(rcx_2, rax)
    i = i_1
    i_1 -= 1
while (i != 1)
return result
