// 函数: sub_140a556b0
// 地址: 0x140a556b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x68)

if (rbx == 0)
    return 

if (arg2 > 0f)
    if (*(rbx + 0x20) == 0)
        goto label_140a5570d
    
    int64_t* rcx_1 = *(rbx + 0x18)
    int64_t r9_1 = *rcx_1
    
    if ((*(r9_1 + 0x20))(rcx_1, zx.q((int.q(arg2 * 1000f)).d + 1), 0, r9_1) != 0)
        *(rbx + 0x20) = 0
        goto label_140a5570d
else
    sub_140a433d0(rbx, 1)
label_140a5570d:
    int64_t* rcx_2 = *(arg1 + 0x68)
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x10))(rcx_2, 1)
    
    *(arg1 + 0x68) = 0
