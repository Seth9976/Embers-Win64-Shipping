// 函数: sub_140f7fc20
// 地址: 0x140f7fc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

Dbg1::Reset(&arg1[0x95])
int64_t* rdi = *(arg4 + 0x48)

if (rdi != 0)
    rdi[1].d += 1

int64_t rbp
rbp.b = *(arg4 + 0x38) == data_143e1e020

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (rbp.b != 0)
    (*(*arg1 + 0x270))(arg1, arg4)

int64_t* rdi_1 = *(arg4 + 0x48)
int64_t rax_4 = *(arg4 + 0x38)

if (rdi_1 != 0)
    rdi_1[1].d += 1

char rax_5

if (rax_4 == data_143e1e020)
    rax_5 = sub_140f4a5f0(arg1[0x76])

void* rsi

if (rax_4 != data_143e1e020 || rax_5 == 0)
    rsi.b = 0
else
    rsi.b = 1

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

if (rsi.b == 0)
    if (sub_140e19840(arg1, arg5) == 0)
        *arg2 = 0
    else
        *arg2 = 1
else
    *(arg1 + 0x3fc) = 0
    *arg2 = 1

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
