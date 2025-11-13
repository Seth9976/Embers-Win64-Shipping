// 函数: sub_1425c52d0
// 地址: 0x1425c52d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && ((zx.q(*(*(arg2 + 8) + 0x10)) u>> 0x15).b & 1) != 0)
    void* rax_2 = *(arg2 + 0x78)
    
    if (rax_2 != arg1)
        rax_2.b = 0
        return rax_2
    
    int32_t rcx = *(arg2 + 0x80)
    int64_t var_20_1 = sx.q(*(arg2 + 0x4c)) + arg3
    void* var_28 = rax_2
    int32_t var_14_1 = rcx
    int32_t var_18_1 = *(rax_2 + 0x3c)
    arg4 = sub_140cd78f0(&var_28, 1)

if ((arg1[8] & 0x1000000200) != 0x1000000200)
    int64_t r8_1 = *arg1
    (*(r8_1 + 0xe0))(arg1, sx.q(*(arg1 + 0x4c)) + sx.q(*(arg1 + 0x3c) * arg4) + arg3, r8_1)
    int64_t rax_15
    rax_15.b = 1
    return rax_15

int64_t count = sx.q(*(arg1 + 0x3c))
memset(sx.q(*(arg1 + 0x4c)) + sx.q(count.d * arg4) + arg3, 0, count)
int64_t rax_10
rax_10.b = 1
return rax_10
