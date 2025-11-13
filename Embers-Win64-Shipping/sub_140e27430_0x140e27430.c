// 函数: sub_140e27430
// 地址: 0x140e27430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = (arg1[5].b & 0x7f) | arg2 << 7
arg1[5].b = rcx

if ((rcx & 0x40) == 0 || rcx s< 0)
    *(arg1 + 0x2e) &= 0xbf
else
    *(arg1 + 0x2e) |= 0x40

if (sub_140db3510(&arg1[3]) != 0)
    sub_140dc03a0(&arg1[3], *(arg1 + 0x2e))

int64_t* rax_3 = (*(*arg1 + 0x190))(arg1)
int64_t rdx_1 = *rax_3
int32_t result = (*rdx_1)(rax_3, rdx_1)
int32_t rdi = 0
int32_t result_1 = result

if (result s> 0)
    do
        int64_t r9_1 = *rax_3
        int64_t var_28
        (*(r9_1 + 0x10))(rax_3, &var_28, zx.q(rdi), r9_1)
        int64_t rdx_3
        
        if (arg2 != 0 || (arg1[5].b & 0x40) != 0)
            rdx_3.b = 1
        else
            rdx_3 = 0
        
        result = sub_140e27430(var_28, rdx_3)
        int64_t* var_20
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                result = (**var_20)(var_20)
                int32_t temp1_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    result = (*(*var_20 + 8))(var_20, 1)
        
        rdi += 1
    while (rdi s< result_1)

return result
