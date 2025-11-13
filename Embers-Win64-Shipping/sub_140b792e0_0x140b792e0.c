// 函数: sub_140b792e0
// 地址: 0x140b792e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    void* rbx_1 = &arg1[7]
    int64_t rdi_1 = sx.q(arg2[9].d)
    sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
    void* rax_1 = arg2[8]
    void* rdx = &arg2[7]
    void* r9_1 = *(rbx_1 + 8)
    
    if (rax_1 != 0)
        rdx = rax_1
    
    if (r9_1 != 0)
        rbx_1 = r9_1
    
    memcpy(rbx_1, rdx, (rdi_1 << 2).d)
    arg1[9].d = rdi_1.d
    sub_140b79370(arg1, arg2)

return arg1
