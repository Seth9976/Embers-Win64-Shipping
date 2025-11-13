// 函数: sub_142652400
// 地址: 0x142652400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_2

if (arg1[1].d != *(arg1 + 0x34))
    void* r11_1 = arg1[8]
    void* rbx_1 = &arg1[7]
    int64_t r10_4 = ((sx.q(sx.d((int.d(fconvert.t(*(arg3 + 4)))).w) << 0x10)
        | sx.q((int.d(fconvert.t(*(arg3 + 8)))).w)) ^ sx.q(int.d(fconvert.t(*(arg3 + 0xc)))))
        & (sx.q(arg1[9].d) - 1)
    
    if (r11_1 != 0)
        rbx_1 = r11_1
    
    rbx_2 = *(rbx_1 + (r10_4 << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_2 == 0xffffffff)
label_1426524a3:
    *arg2 = 0xffffffff
else
    int64_t rax_6 = *arg1
    
    while (true)
        int64_t rdi_2 = sx.q(rbx_2) << 6
        
        if (sub_142645ba0(rdi_2 + rax_6, arg3) != 0)
            *arg2 = rbx_2
            break
        
        rax_6 = *arg1
        rbx_2 = *(rdi_2 + rax_6 + 0x38)
        
        if (rbx_2 == 0xffffffff)
            goto label_1426524a3

return arg2
