// 函数: sub_140d23180
// 地址: 0x140d23180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = *arg2
int64_t* rax_1 = arg2[1]

if (rax_1 != 0)
    rax_1[1].d += 1

int32_t var_28 = arg2[2].d
uint64_t rsi

if (arg3 == 0)
    rsi.b = *(sub_140a4c340(&var_38) + 8) s<= 1
else
    int64_t var_20 = *arg3
    int64_t* rax_4 = arg3[1]
    
    if (rax_4 != 0)
        rax_4[1].d += 1
    
    int32_t var_10_1 = arg3[2].d
    rsi = zx.q(sub_140d23290(&var_38, &var_20, arg6, arg5))
    
    if (rax_4 != 0)
        rax_4[1].d -= 1
        
        if (rax_4[1].d == 1)
            (**rax_4)(rax_4)
            int32_t rax_10 = *(rax_4 + 0xc)
            *(rax_4 + 0xc) -= 1
            
            if (rax_10 == 1)
                (*(*rax_4 + 8))(rax_4, 1)

if (rax_1 != 0)
    rax_1[1].d -= 1
    
    if (rax_1[1].d == 1)
        (**rax_1)(rax_1)
        int32_t rdi_1 = *(rax_1 + 0xc)
        *(rax_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_2 = *rax_1
            (*(r8_2 + 8))(rax_1, zx.q(rdi_1), r8_2)

return zx.q(rsi.b)
