// 函数: sub_140e99b50
// 地址: 0x140e99b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x18)

if (rdi != 0)
    rdi[1].d += 1

sub_140e0dfc0(arg1)
int64_t* rbx_1 = arg2[1]
int64_t var_18 = *arg2

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (&var_18 != arg1 + 0x10)
    var_18.o = *(arg1 + 0x10)
    *(arg1 + 0x10) = var_18.o

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_140de7bf0(arg1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_2 = *rdi
            (*(r8_2 + 8))(rdi, 1, r8_2)

return arg1
