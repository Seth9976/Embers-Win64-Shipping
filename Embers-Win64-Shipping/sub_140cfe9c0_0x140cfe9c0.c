// 函数: sub_140cfe9c0
// 地址: 0x140cfe9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(arg1[6].d)
void* r9 = arg1[5]

if ((r9.b & 1) != 0)
    r9 = (r9 s>> 1) + &arg1[5]

void* rsi_2

for (int32_t i = *(r9 + (((rcx - 1) & sx.q((rcx - 1).d & arg4)) << 2)); i != 0xffffffff; 
        i = *(sx.q(*arg3) + rsi_2))
    void* rax_3 = *arg1
    
    if ((rax_3.b & 1) != 0)
        rax_3 = (rax_3 s>> 1) + arg1
    
    int32_t rcx_4 = arg3[4] * i
    int64_t var_28 = arg2
    int64_t rcx_5 = *(arg5 + 8)
    rsi_2 = sx.q(rcx_4) + rax_3
    void* arg_8 = rsi_2
    
    if ((*arg5)(rcx_5, &var_28, &arg_8) != 0)
        return zx.q(i)

return 0xffffffff
