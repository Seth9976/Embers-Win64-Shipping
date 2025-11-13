// 函数: sub_140e68260
// 地址: 0x140e68260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x270) != 0)
    void* const r8_1 = *(arg1 + 0x278)
    
    if (r8_1 != 0)
        int32_t rax_1 = *(r8_1 + 8)
        
        if (rax_1 s> 0)
            int64_t rcx = 0
            
            if (r8_1 != 0)
                if (rax_1 != 0)
                    *(r8_1 + 8) = rax_1 + 1
                    rax_1.b = 1
                
                if (rax_1.b == 0)
                    r8_1 = nullptr
                
                if (r8_1 != 0)
                    rcx = *(arg1 + 0x270)
            
            *arg2 = rcx
            arg2[1] = r8_1
            return arg2

int64_t* var_38
sub_140e1c050(&var_38)
*(arg1 + 0x270) = var_38
int64_t* var_30
int64_t* rax_4 = var_30
int64_t* rcx_2 = *(arg1 + 0x278)
int64_t* rsi = rax_4

if (rax_4 != rcx_2)
    if (rax_4 != 0)
        *(rax_4 + 0xc) += 1
        rcx_2 = *(arg1 + 0x278)
        rax_4 = var_30
    
    if (rcx_2 != 0)
        int32_t temp1_1 = *(rcx_2 + 0xc)
        *(rcx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx_2 + 8))(rcx_2, 1)
        
        rax_4 = var_30
    
    *(arg1 + 0x278) = rsi

int64_t* rcx_3 = data_143e29f28
int128_t var_28 = var_38.o

if (rax_4 != 0)
    rax_4[1].d += 1

void var_18
(*(*rcx_3 + 0x10))(rcx_3, &var_18, &var_28, 0)
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp2_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

*arg2 = var_38
arg2[1] = var_30

if (var_30 != 0)
    var_30[1].d += 1
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp4_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_30 + 8))(var_30, 1)

return arg2
