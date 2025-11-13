// 函数: sub_1417b5440
// 地址: 0x1417b5440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int64_t rdi = sx.q(arg1[1].d)
int64_t r8 = rdi << 3
*(r8 + *(rbx + 0x80)) = *arg2
int64_t* r9_1 = *(rbx + 0xb0) + r8

if (r9_1 != arg2)
    int64_t* rcx_1 = *r9_1
    *r9_1 = *arg2
    *arg2 = 0
    
    if (rcx_1 != 0)
        (**rcx_1)(rcx_1, 1)

sub_14175b390(rbx, rdi.d)
return sub_141744270(rbx, rdi.d) __tailcall
