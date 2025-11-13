// 函数: sub_1417d4100
// 地址: 0x1417d4100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_20 = &arg_8
void*** (* var_28)() = sub_140884c50
int64_t rax = sub_140a756e0(&var_28, &data_14397f5f0)
int64_t* rsi = arg1[0x89]
int64_t rdi = 0
int64_t r14 = sx.q(arg1[0x8a].d) << 3
void* rax_2 = &rsi[arg1[0x8a]]

if (*(rax + 0x38) != arg1)
    uint64_t r14_2 = r14 u>> 3
    
    if (rsi u> rax_2)
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            sub_142221760(*rsi, arg2)
            rdi += 1
            rsi = &rsi[1]
        while (rdi != r14_2)
else
    uint64_t r14_1 = r14 u>> 3
    
    if (rsi u> rax_2)
        r14_1 = 0
    
    if (r14_1 != 0)
        do
            sub_142221800(*rsi, arg2)
            rdi += 1
            rsi = &rsi[1]
        while (rdi != r14_1)

return sub_1422ac390(arg1, arg2, arg3) __tailcall
