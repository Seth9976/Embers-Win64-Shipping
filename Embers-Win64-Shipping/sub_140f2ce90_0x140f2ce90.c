// 函数: sub_140f2ce90
// 地址: 0x140f2ce90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg2
*(arg1 + 0x10) = result
int64_t* rsi = arg2
void* rdi = arg2[1]
int64_t* rcx = *(arg1 + 0x18)

if (rdi != rcx)
    if (rdi != 0)
        *(rdi + 0xc) += 1
        rcx = *(arg1 + 0x18)
    
    if (rcx != 0)
        int32_t temp0_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp0_1 == 1)
            result, arg2 = (*(*rcx + 8))(rcx, 1)
    
    *(arg1 + 0x18) = rdi

int64_t* rcx_1 = *(arg1 + 8)

if (rcx_1 != 0)
    arg2.b = 8
    sub_140e19ef0(rcx_1, arg2.b)
    result = *rsi
    
    if (result != 0 && result != data_143e244b0)
        void* rdx = *(arg1 + 8)
        int64_t rcx_2 = 0
        int64_t* rbx_1 = *(rdx + 0x10)
        
        if (rbx_1 != 0)
            int32_t rax_1 = rbx_1[1].d
            
            if (rax_1 != 0)
                rbx_1[1].d = rax_1 + 1
                rax_1.b = 1
            
            if (rax_1.b == 0)
                rbx_1 = nullptr
            
            if (rbx_1 != 0)
                rcx_2 = *(rdx + 8)
        
        int64_t var_18 = rcx_2
        int64_t* var_10_1 = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        result = sub_140de86e0(*rsi, &var_18)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    return (*(*rbx_1 + 8))(rbx_1, 1)

return result
