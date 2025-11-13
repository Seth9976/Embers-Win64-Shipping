// 函数: sub_1428bc150
// 地址: 0x1428bc150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x150)
int32_t rdi = arg2
void* const result

while (true)
    int32_t* rcx = data_143fecb20
    int32_t var_128
    int32_t* arg_8 = &var_128
    var_128 = rdi
    int32_t rax_1
    
    if (rcx != 0)
        rax_1 = sub_1428989f0(rcx, &var_128)
    
    if (rcx == 0 || rax_1 s< 0)
        void** rax_3 = sub_1428a8f00(&arg_8, &data_143b856b0, 0x14, 8, sub_142859050)
        
        if (rax_3 != 0)
            result = *rax_3
        
        if (rax_3 == 0 || result == 0)
            result = nullptr
            break
    else
        result = sub_142898ea0(data_143fecb20, rax_1)
    
    if (result == 0)
        break
    
    if ((*(result + 8) & 1) == 0)
        break
    
    rdi = *(result + 4)

if (arg1 != 0)
    void* rax_4 = sub_142910960(rdi)
    
    if (rax_4 != 0)
        *arg1 = rax_4
        return sub_142910900(rax_4, rdi)
    
    *arg1 = nullptr

return result
