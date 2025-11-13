// 函数: sub_140a9eae0
// 地址: 0x140a9eae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = *arg2
int64_t* rax_1 = arg2[1]

if (rax_1 != 0)
    rax_1[1].d += 1

int32_t var_18 = arg2[2].d
int32_t result = sub_140aa2570(arg1, &var_28)

if (rax_1 != 0)
    result = rax_1[1].d
    rax_1[1].d -= 1
    
    if (result == 1)
        result = (**rax_1)(rax_1)
        int32_t rdi_1 = *(rax_1 + 0xc)
        *(rax_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rax_1 + 8))(rax_1, zx.q(rdi_1))

return result
