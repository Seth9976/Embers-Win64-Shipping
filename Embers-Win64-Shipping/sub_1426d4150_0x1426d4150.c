// 函数: sub_1426d4150
// 地址: 0x1426d4150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x10)
void* rbx = rdi[0x23]

if (rbx != 0)
label_1426d418a:
    
    if (*(rbx + 0x88) != 0)
        sub_142732d30()
        sub_1426ae190(arg1, rbx + 0x80, arg2)
else
    (*(*rdi + 0x390))(rdi)
    rbx = rdi[0x23]
    
    if (rbx != 0)
        goto label_1426d418a
