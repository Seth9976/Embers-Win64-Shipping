// 函数: sub_142cc0f20
// 地址: 0x142cc0f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143e1a488

if (data_143e1a490 == 0)
label_142cc0f6b:
    
    if (rcx != 0)
        return sub_140a74f90(rcx) __tailcall
else if (rcx != 0)
    (*(*rcx + 0x38))(rcx, 0)
    rcx = data_143e1a488
    
    if (rcx != 0)
        int64_t* rax = sub_140a84c80(rcx, 0, 0)
        rcx = rax
        data_143e1a488 = rax
    
    data_143e1a490 = 0
    goto label_142cc0f6b
