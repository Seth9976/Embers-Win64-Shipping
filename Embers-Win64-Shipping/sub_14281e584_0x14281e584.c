// 函数: sub_14281e584
// 地址: 0x14281e584
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1
int64_t rsi = arg1[1]

if (rdi != rsi)
    do
        int64_t* rcx = *rdi
        (*(*rcx + 8))(rcx)
        rdi = &rdi[1]
    while (rdi != rsi)
    
    rdi = *arg1

int64_t result = sub_14281d950(rdi, arg1[1])
int64_t* rcx_2 = *arg1
arg1[1] = rcx_2

if (rcx_2 != 0)
    sub_14281d950(rcx_2, rcx_2)
    result = sub_14058ba50(*arg1, (arg1[2] - *arg1) & 0xfffffffffffffff8)
    __builtin_memset(arg1, 0, 0x18)

return result
