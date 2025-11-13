// 函数: sub_140eda530
// 地址: 0x140eda530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x430)
int64_t var_18 = *arg2
void* rax_1 = arg2[1]
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

(*(*rcx + 0x240))(rcx, &var_18)
int64_t* rbx_1 = arg3[1]
var_18 = *arg3
int64_t* var_10_1 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

sub_140693600(*(arg1 + 0x400), &var_18)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg4[1]
var_18 = *arg4
int64_t* var_10_2 = rbx_2

if (rbx_2 != 0)
    rbx_2[1].d += 1

sub_140693600(*(arg1 + 0x408), &var_18)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return sub_140de1aa0(*(arg1 + 0x410), arg5) __tailcall
