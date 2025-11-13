// 函数: sub_140a54280
// 地址: 0x140a54280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x10) += 1
*(arg1 + 0x20) = arg3

if (arg2 != 0)
    *(arg1 + 0x20) = 0
    arg3 = 0

void*** rcx = *(arg1 + 0x18)

if (arg3 == 0)
    sub_140a4fc50(rcx)
    *(arg1 + 0x18) = 0
    int64_t* rcx_5 = *(arg1 + 8)
    int64_t result = (*(*rcx_5 + 0x18))(rcx_5)
    *(arg1 + 0x10) -= 1
    return result

if (rcx == 0)
    void*** rax_2 = sub_14059e7c0(sub_140a46310())
    void*** rdi_1 = rax_2
    
    if (rax_2 == 0)
        rdi_1 = sub_140b662c0(1)
    
    void*** rax_4 = j_sub_140a82f30(0x18)
    rcx = rax_4
    
    if (rax_4 == 0)
        rcx = nullptr
    else
        rcx[1].d = 0
        *rcx = &data_142e5bfb0
        *(rcx + 0xc) = 0
        *rcx = &data_142e5e778
        rcx[2] = rdi_1
    
    *(arg1 + 0x18) = rcx

(*rcx)[3](rcx)
jump(*(**(arg1 + 0x20) + 0x10))
