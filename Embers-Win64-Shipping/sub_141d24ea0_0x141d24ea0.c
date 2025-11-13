// 函数: sub_141d24ea0
// 地址: 0x141d24ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x48))()
int64_t rdi = sx.q(rax_1)
int32_t var_30 = rdi.d
int64_t* rbx = nullptr
int64_t* var_38 = nullptr
int32_t var_2c = 0

if (rax_1 s> 0)
    sub_1405a4f90(&var_38)
    rbx = var_38

memset(rbx, 0, rdi << 4)

if (rdi.d s> 0)
    int64_t rdi_1 = 0
    
    do
        int64_t* rdx_3 = (sx.q(*(*arg2 + (rdi_1 << 2))) << 4) + arg1[1]
        
        if (rbx != rdx_3)
            *rbx = *rdx_3
            *rdx_3 = 0
            sub_1405aeff0(&rbx[1], &rdx_3[1])
        
        rdi_1 += 1
        rbx = &rbx[2]
    while (rdi_1 s< rdi)

if (&arg1[1] != &var_38)
    var_38.o = *(arg1 + 8)
    *(arg1 + 8) = var_38.o

return sub_140596e10(&var_38)
