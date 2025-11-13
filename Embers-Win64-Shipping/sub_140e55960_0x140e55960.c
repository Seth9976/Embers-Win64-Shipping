// 函数: sub_140e55960
// 地址: 0x140e55960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *arg1
int64_t var_18 = *r8
int64_t* rax_1 = r8[1]

if (rax_1 != 0)
    rax_1[1].d += 1

char result = sub_140d9c250(arg2 + 0x58, &var_18)
int64_t rsi
rsi.b = result == 0

if (rax_1 != 0)
    rax_1[1].d -= 1
    
    if (rax_1[1].d == 1)
        result = (**rax_1)(rax_1)
        int32_t temp1_1 = *(rax_1 + 0xc)
        *(rax_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rax_1 + 8))(rax_1, 1)

if (rsi.b == 0)
    return result

return sub_140e89df0(arg1[1], arg2, arg1[2], *arg1[3], arg3)
