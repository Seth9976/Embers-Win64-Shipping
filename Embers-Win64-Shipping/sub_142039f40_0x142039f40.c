// 函数: sub_142039f40
// 地址: 0x142039f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = *(arg1 + 0xf0)
int64_t* result = result_1

if (result_1 != 0)
    int32_t rax = result_1[1].d
    
    if (rax == 0)
        result_1 = nullptr
    else
        result_1[1].d = rax + 1
    
    result = result_1

if (result != 0)
    int64_t* rcx = *(arg1 + 0xe8)
    
    if (rcx != 0)
        int64_t var_18 = *arg3
        void* rax_3 = arg3[1]
        void* var_10_1 = rax_3
        
        if (rax_3 != 0)
            *(rax_3 + 8) += 1
        
        result = (*(*rcx + 0x30))(rcx, arg2, &var_18)

if (result_1 != 0)
    result_1[1].d -= 1
    
    if (result_1[1].d == 1)
        result = (**result_1)(result_1)
        int32_t temp2_1 = *(result_1 + 0xc)
        *(result_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*result_1 + 8))(result_1, 1)

int64_t* rbx = arg3[1]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
