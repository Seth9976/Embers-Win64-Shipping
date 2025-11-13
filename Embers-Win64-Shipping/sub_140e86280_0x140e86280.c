// 函数: sub_140e86280
// 地址: 0x140e86280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x2b8)
void* rdi_2 = &i[sx.q(*(arg1 + 0x2c0)) * 2]
int64_t* arg_8 = arg2

for (; i != rdi_2; i = &i[2])
    void* rdx = *i
    
    if (rdx != 0 && *(rdx + 0x20) != 0)
        j_sub_140e56210(&arg_8, rdx)

int64_t var_18 = *arg2
void* rax_1 = arg2[1]
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

void** result = sub_140e5e280(arg1, arg3, sub_140e6a9b0(&var_18, arg1 + 0x1c0))
int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
