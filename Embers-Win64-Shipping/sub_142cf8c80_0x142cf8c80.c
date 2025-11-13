// 函数: sub_142cf8c80
// 地址: 0x142cf8c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143f38c60

if (data_143f38c68 == 0)
label_142cf8ccb:
    
    if (rcx != 0)
        return sub_140a74f90(rcx) __tailcall
else if (rcx != 0)
    (*(*rcx + 0x38))(rcx, 0)
    rcx = data_143f38c60
    
    if (rcx != 0)
        int64_t* rax = sub_140a84c80(rcx, 0, 0)
        rcx = rax
        data_143f38c60 = rax
    
    data_143f38c68 = 0
    goto label_142cf8ccb
