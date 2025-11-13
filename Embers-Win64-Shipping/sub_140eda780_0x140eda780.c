// 函数: sub_140eda780
// 地址: 0x140eda780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d += 1

arg1[0x72] = *arg2
int64_t* rcx = arg1[0x73]

if (rbx != rcx)
    if (rbx != 0)
        *(rbx + 0xc) += 1
        rcx = arg1[0x73]
    
    if (rcx != 0)
        int32_t temp2_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rcx + 8))(rcx, 1)
    
    arg1[0x73] = rbx

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

void var_18
(*(*arg1 + 0x258))(arg1, &var_18)
int64_t* rbx_1 = arg1[0x85]
int64_t var_28 = arg1[0x84]
int64_t* var_20 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

void* result = sub_140693600(arg1[0x83], &var_28)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        result = (**var_10)(var_10)
        int32_t temp7_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp7_1 == 1)
            result = (*(*var_10 + 8))(var_10, 1)

int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp8_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp8_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
