// 函数: sub_1428c4100
// 地址: 0x1428c4100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rax = *arg2
int64_t* rdi = arg1
int32_t rbp_1 = rax & 0x1000

if (rbp_1 != 0)
    int64_t* arg_10 = arg1
    rdi = &arg_10

if ((rax.b & 6) == 0)
    return sub_1428c3d90(rdi, (*(arg2 + 0x18))(), rbp_1)

int32_t rbx = 0
int32_t* rsi = *rdi

if (sub_142898c70(rsi) s> 0)
    int32_t rax_4
    
    do
        int64_t arg_18 = sub_142898ea0(rsi, rbx)
        sub_1428c3d90(&arg_18, (*(arg2 + 0x18))(), rbp_1)
        rbx += 1
        rax_4 = sub_142898c70(rsi)
    while (rbx s< rax_4)

int64_t result = sub_142898a10(rsi)
*rdi = 0
return result
