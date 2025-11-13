// 函数: sub_140f4ad10
// 地址: 0x140f4ad10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x3a0) != 0)
    void* rax_1 = *(arg1 + 0x3a8)
    
    if (rax_1 != 0 && *(rax_1 + 8) s> 0)
        *(arg1 + 0x418) = 1
        return rax_1

int64_t var_18 = *arg2
int64_t* rax_3 = arg2[1]

if (rax_3 != 0)
    rax_3[1].d += 1

uint64_t rax_4 = sub_140e213d0(*(arg1 + 0x390), &var_18)

if (rax_3 != 0)
    rax_3[1].d -= 1
    
    if (rax_3[1].d == 1)
        rax_4 = (**rax_3)(rax_3)
        int32_t temp1_1 = *(rax_3 + 0xc)
        *(rax_3 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rax_3 + 8))(rax_3, 1)

return rax_4
