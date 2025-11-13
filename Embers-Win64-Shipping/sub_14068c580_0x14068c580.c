// 函数: sub_14068c580
// 地址: 0x14068c580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = arg2[1]
int64_t* i = *arg2
__builtin_memset(arg1, 0, 0x18)
int64_t rsi_2 = (rbp - i) s>> 5

if (rsi_2 != 0)
    if (rsi_2 u> 0x7ffffffffffffff)
        sub_140610c20()
        noreturn
    
    void* rax_1 = sub_1406aff30(arg1, rsi_2)
    void* rdi_1 = rax_1
    *arg1 = rax_1
    arg1[1] = rax_1
    arg1[2] = (rsi_2 << 5) + rax_1
    
    for (; i != rbp; i = &i[4])
        sub_140592d30(rdi_1, i)
        rdi_1 += 0x20
    
    arg1[1] = rdi_1

return arg1
