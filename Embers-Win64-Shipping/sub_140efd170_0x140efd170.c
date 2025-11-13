// 函数: sub_140efd170
// 地址: 0x140efd170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1

if (arg1[1].d != *(arg1 + 0x34))
    int32_t rax_1 = sub_140f04ad0(arg3)
    void* r9_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    rbx_1 = *(r11_1 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_1 == 0xffffffff)
label_140efd226:
    *arg2 = 0xffffffff
else
    void* rsi_1 = *arg1
    int32_t rbp_1 = *arg3
    
    while (true)
        int32_t* rdi_1 = sx.q(rbx_1) * 0x78
        
        if (*(rdi_1 + rsi_1) == rbp_1 && *(rdi_1 + rsi_1 + 4) == arg3[1]
                && not(arg3[2] f!= *(rdi_1 + rsi_1 + 8)) && *(rdi_1 + rsi_1 + 0xc) == arg3[3].b
                && *(rdi_1 + rsi_1 + 0xd) == *(arg3 + 0xd)
                && sub_140f07570(rsi_1 + 0x10 + rdi_1, &arg3[4]) != 0)
            *arg2 = rbx_1
            break
        
        rbx_1 = *(rdi_1 + rsi_1 + 0x70)
        
        if (rbx_1 == 0xffffffff)
            goto label_140efd226

return arg2
