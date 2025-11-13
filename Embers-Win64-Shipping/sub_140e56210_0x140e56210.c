// 函数: sub_140e56210
// 地址: 0x140e56210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *arg1
char rdi = 0
int32_t arg_8 = 0
int64_t* rbx = result[1]
int64_t rbp = *result

if (rbx != 0)
    rbx[1].d += 1

void* rcx = *(arg2 + 0x78)
void var_18

if (rcx == 0)
    rbp.b = 0
else
    result = sub_140db3500(rcx)
    
    if (result.b == 0)
        rbp.b = 0
    else
        result = sub_140db22a0(*(arg2 + 0x78), &var_18)
        rdi = 1
        
        if (rbp != *result)
            rbp.b = 0
        else
            rbp = 1

int64_t* var_10

if ((rdi & 1) != 0 && var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        result = (**var_10)(var_10)
        int32_t temp2_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*var_10 + 8))(var_10, 1)

if (rbp.b != 0)
    result = &var_18
    
    if (arg2 + 0x78 != &var_18)
        *(arg2 + 0x78) = 0
        int64_t* rdi_2 = *(arg2 + 0x80)
        
        if (rdi_2 != 0)
            *(arg2 + 0x80) = 0
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                result = (**rdi_2)(rdi_2)
                int32_t temp5_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    result = (*(*rdi_2 + 8))(rdi_2, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
