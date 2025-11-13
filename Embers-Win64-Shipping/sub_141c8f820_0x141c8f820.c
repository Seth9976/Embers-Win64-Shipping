// 函数: sub_141c8f820
// 地址: 0x141c8f820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_14098dfb0(arg1, &var_18)
int64_t* var_10
*var_10 = *arg2
var_10[3].b = 0

if (arg3[2].b != 0)
    var_10[1] = 0
    var_10[1] = *arg3
    *arg3 = 0
    var_10[2].d = arg3[1].d
    *(var_10 + 0x14) = *(arg3 + 0xc)
    arg3[1] = 0
    var_10[3].b = 1

var_10[4].d = 0xffffffff
int64_t rax_4 = *var_10
int32_t rax_5 = sub_140b5ead0(rax_4.d)
char rax_6 = sub_14093d550(arg1, arg1[1].d - *(arg1 + 0x34), 0)
int64_t r10 = sx.q(var_18)

if (rax_6 == 0)
    void* r9_1 = &arg1[7]
    int32_t rax_9 = (arg1[9].d - 1) & (rax_5 + rax_4:4.d)
    *(var_10 + 0x24) = rax_9
    void* rdx_3 = *(r9_1 + 8)
    int64_t r8 = sx.q(rax_9)
    void* rax_10 = r9_1
    
    if (rdx_3 != 0)
        rax_10 = rdx_3
    
    var_10[4].d = *(rax_10 + (((sx.q(arg1[9].d) - 1) & r8) << 2))
    void* rax_12 = *(r9_1 + 8)
    
    if (rax_12 != 0)
        r9_1 = rax_12
    
    *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8) << 2)) = r10.d

return *arg1 + r10 * 0x28 + 8
