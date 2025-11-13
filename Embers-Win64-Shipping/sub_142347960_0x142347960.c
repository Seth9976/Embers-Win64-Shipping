// 函数: sub_142347960
// 地址: 0x142347960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = nullptr

if (*(arg1 + 0x2c0) != 0)
    int64_t* rcx = *(arg1 + 0x2b8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x2c0) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x2b8)
        
        *(arg1 + 0x2a8) = (*(*rcx_1 + 0x48))(rcx_1)

void* rcx_2 = *(arg1 + 0x2a8)
void* var_28

if (rcx_2 != 0)
    var_28.o = zx.o(0)
    sub_142346510(rcx_2, &var_28)

var_28 = arg2
char var_20 = 1
int64_t var_18 = 0
int32_t var_10 = 0
*(arg1 + 0x2a8) = arg2
*(arg1 + 0x2b0) = 1
sub_1407473e0(arg1 + 0x2b8, &var_18)
uint64_t result = sub_140745b20(&var_18)

if (arg2 != 0)
    int64_t* rbx_1 = *(arg1 + 0x10)
    
    if (rbx_1 != 0)
        int32_t rax_5 = rbx_1[1].d
        
        if (rax_5 != 0)
            rbx_1[1].d = rax_5 + 1
            rax_5.b = 1
        
        if (rax_5.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            int32_t rax_6 = rbx_1[1].d
            rsi = *(arg1 + 8)
            rbx_1[1].d = rax_6
            
            if (rax_6 == 0)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    var_28 = rsi
    var_20.q = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    result = sub_142346510(arg2, &var_28)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*rbx_1 + 8))(rbx_1, 1)

return result
