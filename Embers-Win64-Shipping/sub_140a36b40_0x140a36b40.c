// 函数: sub_140a36b40
// 地址: 0x140a36b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_1408cdcc0(arg1, &var_18)
int64_t* var_10
*var_10 = *arg2
var_10[1] = *arg3
var_10[2].d = 0xffffffff
int64_t rax_2 = *var_10
int32_t rax_3 = sub_140b5ead0(rax_2.d)
char rax_4 = sub_1405b6730(arg1, arg1[1].d - *(arg1 + 0x34), 0)
int64_t r10 = sx.q(var_18)

if (rax_4 == 0)
    void* r9_1 = &arg1[7]
    int32_t rax_7 = (arg1[9].d - 1) & (rax_3 + rax_2:4.d)
    *(var_10 + 0x14) = rax_7
    void* rdx_3 = *(r9_1 + 8)
    int64_t r8 = sx.q(rax_7)
    void* rax_8 = r9_1
    
    if (rdx_3 != 0)
        rax_8 = rdx_3
    
    var_10[2].d = *(rax_8 + (((sx.q(arg1[9].d) - 1) & r8) << 2))
    void* rax_10 = *(r9_1 + 8)
    
    if (rax_10 != 0)
        r9_1 = rax_10
    
    *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8) << 2)) = r10.d

return *arg1 + r10 * 0x18 + 8
