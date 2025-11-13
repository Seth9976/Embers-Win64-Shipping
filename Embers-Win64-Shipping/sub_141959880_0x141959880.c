// 函数: sub_141959880
// 地址: 0x141959880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = nullptr
int64_t rbp = 0
int64_t* rcx = *(arg5 + 8)

if (rcx != 0)
    rbp = (*(*rcx + 0x10))(rcx)

void*** rax_3 = j_sub_140a82f30(0x68)

if (rax_3 != 0)
    void*** rax_4 = sub_141905b60(rax_3, 0, arg3, arg4, rbp, 0, 0, 0)
    rbx = rax_4
    
    if (rax_4 != 0)
        rax_4[1].d += 1

int64_t* rcx_2 = *(arg5 + 8)

if (rcx_2 != 0)
    (*(*rcx_2 + 0x20))(rcx_2)

*arg2 = rbx

if (rbx != 0)
    rbx[1].d += 1
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        char rax_7
        
        if (rbx[2].b == 0 && data_143f0f1d0 == 0)
            rax_7 = sub_1405949a0()
        
        if (rbx[2].b != 0 || (data_143f0f1d0 == 0 && rax_7 != 0))
            (**rbx)(rbx, 1)
        else
            bool z_1
            
            if (0 == *(rbx + 0xc))
                *(rbx + 0xc) = 1
                z_1 = true
            else
                *(rbx + 0xc)
                z_1 = false
            
            if (z_1)
                sub_1405dcc10(&data_143f02390, rbx)

return arg2
