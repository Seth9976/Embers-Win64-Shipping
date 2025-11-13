// 函数: sub_140ae5000
// 地址: 0x140ae5000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_14093d370(arg1, &var_18)
int64_t* var_10
*var_10 = *arg3
var_10[1] = 0
var_10[1] = *arg4
__builtin_memset(arg4, 0, 0x20)
var_10[2].d = arg4[1].d
*(var_10 + 0x14) = *(arg4 + 0xc)
var_10[3] = 0
var_10[3] = arg4[2]
var_10[4].d = arg4[3].d
*(var_10 + 0x24) = *(arg4 + 0x1c)
var_10[5].d = 0xffffffff
char rax_7 = sub_140a6d3f0(arg1, arg1[1].d - *(arg1 + 0x34), 0)
int64_t r10 = sx.q(var_18)

if (rax_7 == 0)
    void* r9 = &arg1[7]
    int32_t r8_2 = (arg1[9].d - 1) & arg2
    *(var_10 + 0x2c) = r8_2
    void* rcx_1 = *(r9 + 8)
    void* rax_9 = r9
    
    if (rcx_1 != 0)
        rax_9 = rcx_1
    
    var_10[5].d = *(rax_9 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_2)) << 2))
    void* rcx_2 = *(r9 + 8)
    
    if (rcx_2 != 0)
        r9 = rcx_2
    
    *(r9 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_2)) << 2)) = r10.d

return *arg1 + 8 + r10 * 0x30
