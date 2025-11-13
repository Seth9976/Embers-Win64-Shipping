// 函数: sub_140b3d580
// 地址: 0x140b3d580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *arg2
int64_t rbp = sx.q(arg2[1].d)
void* rbx = rdi + (rbp << 1)

if (rdi == rbx)
label_140b3d5ca:
    *arg1 = *arg2
else
    while (true)
        int16_t rcx = *(rbx - 2)
        rbx -= 2
        
        if (sub_140b40740(rcx) != 0)
            break
        
        if (rdi == rbx)
            goto label_140b3d5ca_1
    
    if (rbx == 0)
    label_140b3d5ca_1:
        *arg1 = *arg2
    else
        int32_t rcx_1 = arg2[1].d
        int32_t rax_4 = rcx_1 - ((rbx - rdi) s>> 1).d
        
        if (rax_4 - 1 s< 0)
            rcx_1 = 0
        else if (rax_4 s<= rcx_1)
            rcx_1 = rax_4 - 1
        
        *(arg1 + 8) = rcx_1
        *arg1 = rdi + ((rbp - sx.q(rcx_1)) << 1)

return arg1
