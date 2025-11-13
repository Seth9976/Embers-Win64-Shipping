// 函数: sub_140ae48f0
// 地址: 0x140ae48f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_14093d370(arg1, &var_18)
int64_t* var_10
*var_10 = *arg2
sub_140596d10(&var_10[1], arg3)
sub_140596d10(&var_10[3], &arg3[2])
var_10[5].d = 0xffffffff
int64_t rax_1 = *var_10
int32_t rax_2 = sub_140b5ead0(rax_1.d)
char rax_3 = sub_140a6d3f0(arg1, arg1[1].d - *(arg1 + 0x34), 0)
int64_t r10 = sx.q(var_18)

if (rax_3 == 0)
    void* r9_1 = &arg1[7]
    int32_t rax_6 = (arg1[9].d - 1) & (rax_2 + rax_1:4.d)
    *(var_10 + 0x2c) = rax_6
    void* rdx_5 = *(r9_1 + 8)
    int64_t r8 = sx.q(rax_6)
    void* rax_7 = r9_1
    
    if (rdx_5 != 0)
        rax_7 = rdx_5
    
    var_10[5].d = *(rax_7 + (((sx.q(arg1[9].d) - 1) & r8) << 2))
    void* rax_9 = *(r9_1 + 8)
    
    if (rax_9 != 0)
        r9_1 = rax_9
    
    *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8) << 2)) = r10.d

return *arg1 + 8 + r10 * 0x30
