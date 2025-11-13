// 函数: sub_140feff50
// 地址: 0x140feff50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg3
int64_t rax_1 = (*(*rdi + 8))(rdi)
int64_t rdx = *rdi
void*** rax_3

if (rax_1 == 0)
    int64_t rax_5 = (*(rdx + 0x10))(rdi, rdx)
    int64_t rdx_2 = *rdi
    
    if (rax_5 != 0)
        rax_3 = sub_140fd05e0(arg1, (*(rdx_2 + 0x10))(rdi, rdx_2))
        goto label_140feff8a
    
    if ((*(rdx_2 + 0x20))(rdi, rdx_2) != 0)
        rax_3 = sub_140fd09b0(arg1, (*(*rdi + 0x20))(rdi))
        goto label_140feff8a
    
    *arg2 = nullptr
else
    rax_3 = sub_140fd0210(arg1, (*(rdx + 8))(rdi, rdx))
label_140feff8a:
    *arg2 = rax_3
    
    if (rax_3 != 0)
        rax_3[1].d += 1
return arg2
