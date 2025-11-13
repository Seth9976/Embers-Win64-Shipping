// 函数: sub_1420fb380
// 地址: 0x1420fb380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0xa]
int64_t* rdi = arg1[0xb]

if (rdi != 0)
    rdi[1].d += 1

char rax_2

if (rcx != 0)
    rax_2 = (*(*rcx + 0x28))(rcx)

int64_t rbp

if (rcx == 0 || rax_2 == 0)
    rbp.b = 0
else
    rbp.b = 1

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (rbp.b == 0)
    sub_1420fc400(arg1, arg2)
else
    *arg2 = &data_142e25968
    arg2[1] = arg1[0xa]
    void* rax_6 = arg1[0xb]
    arg2[2] = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    *arg2 = &data_142e259e0
    arg2[3] = 0
    arg2[4] = 0

return arg2
