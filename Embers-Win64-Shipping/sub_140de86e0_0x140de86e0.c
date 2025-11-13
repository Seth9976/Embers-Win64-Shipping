// 函数: sub_140de86e0
// 地址: 0x140de86e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg2
*(arg1 + 0x268) = result
int64_t* rsi = arg2
void* rbx = arg2[1]
int64_t* rcx = *(arg1 + 0x270)

if (rbx != rcx)
    if (rbx != 0)
        *(rbx + 0xc) += 1
        rcx = *(arg1 + 0x270)
    
    if (rcx != 0)
        int32_t temp0_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp0_1 == 1)
            result, arg2 = (*(*rcx + 8))(rcx, 1)
    
    *(arg1 + 0x270) = rbx

void* rbx_1 = data_143e20d08

if (rbx_1 != 0)
    result = *(rbx_1 + 0xa8)
    int64_t* rbx_2 = *(rbx_1 + 0xb0)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    *(result + 0x78) = 1
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            result, arg2 = (**rbx_2)(rbx_2)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                result, arg2 = (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rcx_3 = *rsi

if (rcx_3 != 0)
    arg2.b = 8
    result = sub_140e19ef0(rcx_3, arg2.b)

int64_t* rbx_3 = rsi[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
