// 函数: sub_1426f12a0
// 地址: 0x1426f12a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *arg1
int64_t* rbx = rsi
void* rdi = &rsi[sx.q(arg1[1].d)]

if (rsi != rdi)
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            int64_t* arg_8
            (*(*rcx + 0x260))(rcx, &arg_8)
            char var_18
            sub_142702060(&var_18, arg_8)
            
            if (var_18 == *arg2)
                return zx.q(((rbx - rsi) s>> 3).d)
        
        rbx = &rbx[1]
    while (rbx != rdi)

return 0xffffffff
