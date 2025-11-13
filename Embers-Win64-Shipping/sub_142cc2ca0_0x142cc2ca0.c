// 函数: sub_142cc2ca0
// 地址: 0x142cc2ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143e1d768

if (data_143e1d770 == 0)
label_142cc2ceb:
    
    if (rcx != 0)
        return sub_140a74f90(rcx) __tailcall
else if (rcx != 0)
    (*(*rcx + 0x38))(rcx, 0)
    rcx = data_143e1d768
    
    if (rcx != 0)
        int64_t* rax = sub_140a84c80(rcx, 0, 0)
        rcx = rax
        data_143e1d768 = rax
    
    data_143e1d770 = 0
    goto label_142cc2ceb
