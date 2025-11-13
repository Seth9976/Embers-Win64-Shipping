// 函数: sub_1425e8c20
// 地址: 0x1425e8c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int32_t rdi = 0
int32_t var_38 = 0
int32_t rax_1 = (*(rax + 0x20))(arg1, arg2, &var_38)
int64_t* pv

if (rax_1 == 0)
    if (var_38 != 0)
        if (var_38 != 2)
            int32_t var_20 = 0
            sub_1425eabd0(&var_20, &var_38, 2)
            int32_t rcx_1 = var_20
            int32_t var_18
            
            if (rcx_1 != 0)
                rdi = var_18
            
            if (rcx_1 == 0xa || rcx_1 == 0xb)
                CoTaskMemFree(var_18.q)
            else if (rcx_1 == 0xc)
                int64_t* rcx_4 = var_18.q
                
                if (rcx_4 != 0)
                    (*(*rcx_4 + 8))(rcx_4)
        else
            rdi = pv.d
    
    *arg3 = rdi

int32_t rcx_6 = var_38

if (rcx_6 == 0xa || rcx_6 == 0xb)
    CoTaskMemFree(pv)
else if (rcx_6 == 0xc && pv != 0)
    (*(*pv + 8))(pv)

return zx.q(rax_1)
