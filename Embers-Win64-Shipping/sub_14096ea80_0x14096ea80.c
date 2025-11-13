// 函数: sub_14096ea80
// 地址: 0x14096ea80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg1 + 0x50)

if (rax != 0)
    void* rax_1 = sub_14226dd50(rax)
    
    if (rax_1 != 0)
        void* rcx_2 = arg2[1]
        int64_t var_18 = *arg2
        void* var_10_1 = rcx_2
        
        if (rcx_2 != 0)
            *(rcx_2 + 8) += 1
        
        sub_142102240(rax_1, &var_18)
    
    int64_t* rcx_4 = *(rax + 0x228)
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x698))(rcx_4, arg2)

bool cond:0 = *arg2 != 0
void* arg_8 = rax
int64_t* rcx_5 = arg1 + 0x30

if (not(cond:0))
    rcx_5 = arg1 + 0x40

int64_t result = sub_1405a9f90(rcx_5, &arg_8)
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
