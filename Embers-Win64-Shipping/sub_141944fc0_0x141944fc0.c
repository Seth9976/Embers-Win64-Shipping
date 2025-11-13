// 函数: sub_141944fc0
// 地址: 0x141944fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = nullptr
int64_t rbx = 0
int64_t* rcx = *(arg6 + 8)

if (rcx != 0)
    rbx = (*(*rcx + 0x10))(rcx)

void*** rax_3 = j_sub_140a82f30(0x68)
void*** rbx_1

if (rax_3 == 0)
    rbx_1 = nullptr
else
    void*** rax_4 = sub_141927700(rax_3, arg3, arg4, arg5 & 6, rbx, 0, 0, 0)
    rbx_1 = rax_4
    
    if (rax_4 != 0)
        rax_4[1].d += 1

*arg2 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        char rax_6
        
        if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
            rax_6 = sub_1405949a0()
        
        if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_6 != 0))
            (**rbx_1)(rbx_1, 1)
        else
            bool z_1
            
            if (0 == *(rbx_1 + 0xc))
                *(rbx_1 + 0xc) = 1
                z_1 = true
            else
                *(rbx_1 + 0xc)
                z_1 = false
            
            if (z_1)
                int32_t rax_8 = sub_140a20af0()
                
                if (rax_8 != 0)
                    rsi = *(&data_143cf0bf8 + (zx.q(rax_8) u>> 0xe << 3))
                        + (zx.q(rax_8) & 0x3fff) * 0x18
                
                *(rsi + 8) = rbx_1
                sub_1405a42f0(&data_143f02390, rax_8)

return arg2
