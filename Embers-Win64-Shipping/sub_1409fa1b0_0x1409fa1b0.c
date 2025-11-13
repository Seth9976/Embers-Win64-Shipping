// 函数: sub_1409fa1b0
// 地址: 0x1409fa1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_14090a150(arg1, &var_18)
int32_t* var_10
*var_10 = *arg2
var_10[1] = *arg3
var_10[2] = 0xffffffff
int32_t rdi_1 = *var_10
char rax_2 = sub_1409b3740(arg1, arg1[1].d - *(arg1 + 0x34), 0)
int64_t r10 = sx.q(var_18)

if (rax_2 == 0)
    void* r9_1 = &arg1[7]
    int32_t r8_2 = (arg1[9].d - 1) & rdi_1
    var_10[3] = r8_2
    void* rcx_1 = *(r9_1 + 8)
    void* rax_4 = r9_1
    
    if (rcx_1 != 0)
        rax_4 = rcx_1
    
    var_10[2] = *(rax_4 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_2)) << 2))
    void* rcx_2 = *(r9_1 + 8)
    
    if (rcx_2 != 0)
        r9_1 = rcx_2
    
    *(r9_1 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_2)) << 2)) = r10.d

return *arg1 + 4 + (r10 << 4)
