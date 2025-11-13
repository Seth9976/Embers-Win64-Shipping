// 函数: sub_140f60e50
// 地址: 0x140f60e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax = sub_140ed2370(arg1, &var_18, arg2)

if (arg2 != rax)
    *arg2 = *rax
    *rax = 0
    int64_t rcx = rax[1]
    int64_t* rbx_1 = arg2[1]
    
    if (rcx != rbx_1)
        rax[1] = 0
        arg2[1] = rcx
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

var_18 = *arg2
void* rax_6 = arg2[1]
void* var_10_1 = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

int64_t result = sub_140f5acf0(arg1, &var_18, arg3)
int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp5_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
