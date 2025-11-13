// 函数: sub_142276470
// 地址: 0x142276470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = *arg1
int32_t* rbx = rsi
void* rdi = &rsi[sx.q(arg1[1].d) * 2]

if (rsi != rdi)
    do
        if (sub_14077a170(rbx, arg2) != 0)
            int32_t rbx_2 = ((rbx - rsi) s>> 3).d
            
            if (rbx_2 == 0xffffffff)
                break
            
            int64_t rcx_2 = *arg1 + (sx.q(rbx_2) << 3)
            memmove(rcx_2, rcx_2 + 8, (arg1[1].d - rbx_2 - 1) << 3)
            arg1[1].d -= 1
            return 1
        
        rbx = &rbx[2]
    while (rbx != rdi)

return 0
