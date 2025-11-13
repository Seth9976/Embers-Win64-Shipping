// 函数: sub_140f5acf0
// 地址: 0x140f5acf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result
int64_t r8
int64_t r9
result, r8, r9 = sub_140eb8900(arg1 + 0x620, 0)

if (*(arg1 + 0x490) != 0)
    int64_t* rcx_1 = *(arg1 + 0x488)
    
    if (rcx_1 != 0)
        result, r8, r9 = (*(*rcx_1 + 0x28))(rcx_1)
        
        if (result.b != 0)
            int64_t* rcx_2
            
            if (*(arg1 + 0x490) == 0)
                rcx_2 = nullptr
            else
                rcx_2 = *(arg1 + 0x488)
            
            result, r8, r9 = (*(*rcx_2 + 0x48))(rcx_2)
            *(arg1 + 0x480) = result

if (*(arg1 + 0x480) != 0)
    int64_t var_18 = *arg2
    void* rax_3 = arg2[1]
    void* var_10_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    r8.b = 1
    r9.b = arg3 != 3
    (*(*(arg1 + 0x4e8) + 0x28))(arg1 + 0x4e8, &var_18, r8, r9)
    result = (*(*(arg1 + 0x4e8) + 0x40))(arg1 + 0x4e8, zx.q(arg3))

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
