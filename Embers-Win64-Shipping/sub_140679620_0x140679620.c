// 函数: sub_140679620
// 地址: 0x140679620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = sub_140666cd0()
int64_t* rdi = *(arg1 + 0x30)
int64_t rdx_1 = *(arg1 + 0x28)
*(arg1 + 0x28) = &result_1[2]
void*** result = result_1
*(arg1 + 0x30) = result
int64_t var_18_1 = rdx_1
int64_t* var_10_1 = rdi

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        result = (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rdi + 8))(rdi, 1)

return result
