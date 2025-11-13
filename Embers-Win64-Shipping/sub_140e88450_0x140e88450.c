// 函数: sub_140e88450
// 地址: 0x140e88450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result_1 = arg3
void** i = *(arg1 + 0x2b8)
void* rsi_2 = &i[sx.q(*(arg1 + 0x2c0)) * 2]
void* var_28 = arg1
void* var_20 = arg2
char* var_18 = &result_1

for (; i != rsi_2; i = &i[2])
    void* rdx = *i
    
    if (rdx != 0 && *(rdx + 0x20) != 0)
        arg4 = sub_140e5a340(&var_28, rdx, arg4)

if (sub_140db3500(arg2) != 0)
    void* rdx_1 = arg2 + 8
    void* rax_1 = *(rdx_1 + 0x120)
    
    if (rax_1 != 0)
        rdx_1 = rax_1
    
    int64_t rcx_2 = sx.q(*(arg2 + 0x130)) * 9
    int64_t* rbx = *(rdx_1 + (rcx_2 << 3) - 8)
    
    if (rbx != 0)
        rbx[1].d += 1
    
    *(arg1 + 0x2d8) = *(rdx_1 + (rcx_2 << 3) - 0x10)
    int64_t* rcx_3 = *(arg1 + 0x2e0)
    
    if (rbx != rcx_3)
        if (rbx != 0)
            *(rbx + 0xc) += 1
            rcx_3 = *(arg1 + 0x2e0)
        
        if (rcx_3 != 0)
            int32_t temp3_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rcx_3 + 8))(rcx_3, 1)
        
        *(arg1 + 0x2e0) = rbx
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx + 8))(rbx, 1)
else if (arg1 + 0x2d8 != &var_28)
    *(arg1 + 0x2d8) = 0
    int64_t* rcx_5 = *(arg1 + 0x2e0)
    *(arg1 + 0x2e0) = 0
    
    if (rcx_5 != 0)
        int32_t temp0_1 = *(rcx_5 + 0xc)
        *(rcx_5 + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx_5 + 8))(rcx_5, 1)

char result = result_1
*(arg1 + 0x2e8) = result
return result
