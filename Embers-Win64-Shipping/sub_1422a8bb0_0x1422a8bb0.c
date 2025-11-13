// 函数: sub_1422a8bb0
// 地址: 0x1422a8bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_141dcdc50(arg1)

if (result != 0)
    int64_t* rcx = arg1[0x4b]
    
    if (rcx != 0)
        result = (*(*rcx + 0x28))(rcx)
        
        if (result.b != 0)
            int64_t* rax_1 = sub_142574490()
            void* rbp_1 = rax_1[0x23]
            
            if (rbp_1 == 0)
                int64_t rdx = *rax_1
                (*(rdx + 0x390))(rax_1, rdx)
                rbp_1 = rax_1[0x23]
            
            int64_t* rax_2 = sub_142168400()
            int64_t rdx_1 = *arg1
            return (*(*rax_2 + 0x2f8))(rax_2, (*(rdx_1 + 0x150))(arg1, rdx_1), *(rbp_1 + 0x278), 
                arg1[0x4b], arg2)

return result
