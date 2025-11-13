// 函数: sub_141f348b0
// 地址: 0x141f348b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f08cb0(arg1)
int64_t result_2 = arg1[0xca]
char arg_8 = 0
int64_t result_1

if (result_2 != 0)
    result_1 = result_2
    sub_141f35d10(&arg_8, &result_1)

int64_t rdi = 0
int64_t* rbx = arg1[0xd8]
uint64_t rsi_1 = sx.q(arg1[0xd9].d) << 3 u>> 3

if (rbx u> &rbx[arg1[0xd9]])
    rsi_1 = 0

if (rsi_1 != 0)
    do
        int64_t result_3 = *rbx
        
        if (result_3 != 0)
            result_1 = result_3
            sub_141f35d10(&arg_8, &result_1)
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != rsi_1)

int64_t result = arg1[0xcb]

if (result == 0)
    return result

result_1 = result
return sub_141f35d10(&arg_8, &result_1)
