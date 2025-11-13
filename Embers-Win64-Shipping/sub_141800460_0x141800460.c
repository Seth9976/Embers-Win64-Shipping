// 函数: sub_141800460
// 地址: 0x141800460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
void* rcx = arg1[0x14]
int32_t rcx_1

if (rcx == 0)
    rcx_1 = 0
else
    int32_t rax_1 = 0
    
    if (0 == *(rcx + 0x20))
        *(rcx + 0x20) = 0
    else
        rax_1 = *(rcx + 0x20)
    
    rcx_1 = rax_1

int32_t result = 0

if (0 == *(arg1 + 0x11c))
    *(arg1 + 0x11c) = 0
else
    result = *(arg1 + 0x11c)

int32_t result_1 = result
int64_t r9 = arg1[0x14]
result.b = result != arg1[0x25].d
char rdx

if (r9 == 0 || rcx_1 == *(arg1 + 0x124))
    rdx = 0
else
    rdx = 1

if (result.b != 0 || rdx != 0)
    result.b = 1

if (*(arg1 + 0xbc) == 1 && result.b != 0)
    arg1[0x25].d = result_1
    
    if (r9 != 0)
        *(arg1 + 0x124) = rcx_1
    
    int64_t* rbx_1 = arg1[2]
    
    if (rbx_1 != 0)
        int32_t rax_2 = rbx_1[1].d
        
        if (rax_2 != 0)
            rbx_1[1].d = rax_2 + 1
            rax_2.b = 1
        
        if (rax_2.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            int32_t rax_3 = rbx_1[1].d
            rsi = arg1[1]
            rbx_1[1].d = rax_3
            
            if (rax_3 == 0)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t var_18 = rsi
    int64_t* var_10_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    result = sub_1418013f0((*(*arg1 + 0x98))(arg1), &var_18, arg1[0x25].d, *(arg1 + 0x124))
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*rbx_1 + 8))(rbx_1, 1)

return result
