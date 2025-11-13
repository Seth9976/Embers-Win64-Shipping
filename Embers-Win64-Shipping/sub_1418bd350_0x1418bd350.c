// 函数: sub_1418bd350
// 地址: 0x1418bd350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1418fe410(arg1, 1)
int64_t result = sub_1418bdb70(arg1)
int32_t i = 0

if (arg1[4].d s> 0)
    int64_t* rbx_1 = nullptr
    
    do
        result = arg1[3]
        int64_t* rbp_1 = *(rbx_1 + result)
        
        if (rbp_1 != 0)
            sub_1418b9750(rbp_1)
            j_sub_140a74f90(rbp_1)
            result = arg1[3]
        
        *(rbx_1 + result) = 0
        i += 1
        rbx_1 = &rbx_1[1]
    while (i s< arg1[4].d)

arg1[4].d = 0

if (*(arg1 + 0x24) == 0)
    return result

return sub_1405c5570(&arg1[3], 0) __tailcall
