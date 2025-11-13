// 函数: sub_140f605f0
// 地址: 0x140f605f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x560) = *arg2
void* rbx = arg2[1]
int64_t* rcx = *(arg1 + 0x568)

if (rbx != rcx)
    if (rbx != 0)
        *(rbx + 0xc) += 1
        rcx = *(arg1 + 0x568)
    
    if (rcx != 0)
        int32_t temp1_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx + 8))(rcx, 1)
    
    *(arg1 + 0x568) = rbx

*(arg1 + 0x558) = 0
int64_t* rbx_1 = arg2[1]
int64_t var_18 = *arg2
int64_t* var_10 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

void* result = sub_140de1b90(arg1 + 0x2c0, &var_18)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp4_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp4_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
