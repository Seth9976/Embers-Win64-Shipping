// 函数: sub_141bbeac0
// 地址: 0x141bbeac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
int64_t* result = sub_141bab3c0(arg1, &var_18)
void* rbx = var_18
uint8_t rdi_1

if (rbx == 0)
    rdi_1 = *(arg1 + 0xb4) u>> 2 & 1
else
    if (*(rbx + 0x1a0) != 0)
        int64_t* rcx = *(rbx + 0x198)
        
        if (rcx != 0)
            result = (*(*rcx + 0x28))(rcx)
            
            if (result.b != 0)
                int64_t* rcx_1
                
                if (*(rbx + 0x1a0) == 0)
                    rcx_1 = nullptr
                else
                    rcx_1 = *(rbx + 0x198)
                
                result = (*(*rcx_1 + 0x48))(rcx_1)
                *(rbx + 0x190) = result.b
    
    rdi_1 = *(rbx + 0x190)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        result = (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*var_10 + 8))(var_10, 1)

if (rdi_1 != 0)
    int32_t rcx_4
    rcx_4.b = sub_140b5b8a0(arg2[2], 0).b == 0
    result.b = arg2[3] != 0
    result.b |= rcx_4.b
    
    if (result.b != 0)
        result = sub_140d3c6e0(arg2)
        
        if (result != 0)
            result = sub_140d1fd20(result, *(arg2 + 8))
            
            if (result != 0)
                int64_t* rax_4 = sub_140d3c6e0(arg2)
                int64_t rax_5 = sub_140d1fd30(rax_4, *(arg2 + 8))
                int64_t r9_1 = *rax_4
                return (*(r9_1 + 0x210))(rax_4, rax_5, 0, r9_1)

return result
