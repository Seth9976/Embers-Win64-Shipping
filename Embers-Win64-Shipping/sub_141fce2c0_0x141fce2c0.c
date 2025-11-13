// 函数: sub_141fce2c0
// 地址: 0x141fce2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x20) != 0)
    return 

void var_18
void* rdx_1 = &var_18
int64_t* rax

if (*(arg1 + 0x30) == 0)
    rax = sub_142169af0(*(arg1 + 8), rdx_1, *(arg1 + 0x18))
else
    rax = sub_142168ae0(*(arg1 + 8), rdx_1, *(arg1 + 0x10))

if (arg1 + 0x20 != rax)
    *(arg1 + 0x20) = *rax
    *rax = 0
    int64_t* rbx_1 = *(arg1 + 0x28)
    int64_t rdx_2 = rax[1]
    
    if (rdx_2 != rbx_1)
        rax[1] = 0
        *(arg1 + 0x28) = rdx_2
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_10

if (var_10 == 0)
    return 

var_10[1].d -= 1

if (var_10[1].d != 1)
    return 

(**var_10)(var_10)
int32_t temp1_1 = *(var_10 + 0xc)
*(var_10 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*var_10 + 8))(var_10, 1)
