// 函数: sub_14200afa0
// 地址: 0x14200afa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140e8d080(data_143e29f28)
int64_t* rcx_1 = *(arg1 + 0xe00)
int64_t rbx = *(*(arg1 + 0x788) + 0x28)
int64_t rax_2 = (**rcx_1)(rcx_1)
(*(rbx + 0x100))(*(arg1 + 0x788) + 0x28, rax_2)
void var_18
void* result = &var_18

if (arg1 + 0xe00 != &var_18)
    result = nullptr
    *(arg1 + 0xe00) = 0
    int64_t* rbx_1 = *(arg1 + 0xe08)
    
    if (rbx_1 != 0)
        *(arg1 + 0xe08) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*rbx_1 + 8))(rbx_1, 1)

return result
