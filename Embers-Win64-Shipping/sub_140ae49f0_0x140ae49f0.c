// 函数: sub_140ae49f0
// 地址: 0x140ae49f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_14093d370(arg1, &var_18)
int64_t* var_10
*var_10 = *arg2
var_10[1] = 0
var_10[1] = *arg3
__builtin_memset(arg3, 0, 0x20)
var_10[2].d = arg3[1].d
*(var_10 + 0x14) = *(arg3 + 0xc)
var_10[3] = 0
var_10[3] = arg3[2]
var_10[4].d = arg3[3].d
*(var_10 + 0x24) = *(arg3 + 0x1c)
var_10[5].d = 0xffffffff
int64_t rax_7 = *var_10
int32_t rax_8 = sub_140b5ead0(rax_7.d)
char rax_9 = sub_140a6d3f0(arg1, arg1[1].d - *(arg1 + 0x34), 0)
int64_t r10 = sx.q(var_18)

if (rax_9 == 0)
    void* r9_1 = &arg1[7]
    int32_t rax_12 = (arg1[9].d - 1) & (rax_8 + rax_7:4.d)
    *(var_10 + 0x2c) = rax_12
    void* rdx_3 = *(r9_1 + 8)
    int64_t r8 = sx.q(rax_12)
    void* rax_13 = r9_1
    
    if (rdx_3 != 0)
        rax_13 = rdx_3
    
    var_10[5].d = *(rax_13 + (((sx.q(arg1[9].d) - 1) & r8) << 2))
    void* rax_15 = *(r9_1 + 8)
    
    if (rax_15 != 0)
        r9_1 = rax_15
    
    *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8) << 2)) = r10.d

return *arg1 + 8 + r10 * 0x30
