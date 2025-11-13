// 函数: sub_140db2960
// 地址: 0x140db2960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140865c40(arg1, &arg_8, *arg2)
int64_t rax = sx.q(arg_8)
void* const rcx

if (rax.d == 0xffffffff)
    rcx = nullptr
else
    rcx = *arg1 + rax * 0x18

int64_t result = *arg3
void* rdi_2 = (sx.q(*(rcx + 8)) << 6) + arg1[0xa]
*(rdi_2 + 0x10) = result
void* rbx_1 = arg3[1]
int64_t* rcx_1 = *(rdi_2 + 0x18)

if (rbx_1 != rcx_1)
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
        rcx_1 = *(rdi_2 + 0x18)
    
    if (rcx_1 != 0)
        int32_t temp3_1 = *(rcx_1 + 0xc)
        *(rcx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rcx_1 + 8))(rcx_1, 1)
    
    *(rdi_2 + 0x18) = rbx_1

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp2_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = arg3[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp4_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp4_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
