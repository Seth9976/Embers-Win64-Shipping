// 函数: sub_141a28a60
// 地址: 0x141a28a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_14186d450(arg1, &var_18)
int128_t* var_10
*var_10 = *arg2
var_10[1].d = *arg3
*(var_10 + 0x14) = 0xffffffff
int32_t rax_1 = sub_140a6b260(var_10, 0x10)
char rax_2 = sub_141a407a0(arg1, arg1[1].d - *(arg1 + 0x34), 0)
int64_t r10 = sx.q(var_18)

if (rax_2 == 0)
    void* r9_1 = &arg1[7]
    int32_t rax_5 = (arg1[9].d - 1) & rax_1
    *(var_10 + 0x18) = rax_5
    void* rdx_3 = *(r9_1 + 8)
    int64_t r8 = sx.q(rax_5)
    void* rax_6 = r9_1
    
    if (rdx_3 != 0)
        rax_6 = rdx_3
    
    *(var_10 + 0x14) = *(rax_6 + (((sx.q(arg1[9].d) - 1) & r8) << 2))
    void* rax_8 = *(r9_1 + 8)
    
    if (rax_8 != 0)
        r9_1 = rax_8
    
    *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8) << 2)) = r10.d

return *arg1 + r10 * 0x1c + 0x10
