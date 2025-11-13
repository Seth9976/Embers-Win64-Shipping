// 函数: sub_140a97620
// 地址: 0x140a97620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = *arg4
int64_t var_40 = arg4[1]
arg4[1] = 0
*arg4 = 0
bool cond:0 = arg2[0xa].b == 0
int64_t var_30 = *(arg2 + 8)
int32_t var_38 = *arg2
char var_10 = 0

if (not(cond:0))
    int64_t var_28_1 = *(arg2 + 0x10)
    void* rax_4 = *(arg2 + 0x18)
    void* var_20_1 = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1
    
    int32_t var_18_1 = arg2[8]
    char var_10_1 = 1

sub_140a97930(arg1, &var_38, arg3, &var_48)
*arg1 = &data_142e63938

if (arg2[0xa].b != 0)
    arg2[0xa].b = 0
    int64_t* rbx_1 = *(arg2 + 0x18)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax_8 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_8 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg4[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

return arg1
