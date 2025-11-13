// 函数: sub_140fe6750
// 地址: 0x140fe6750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = data_143e2b8b8
int64_t* arg_20
int64_t* rax_2 =
    sub_140fe41c0(&arg_20, *(rax + 0x168), *(rax + 0x150), *(arg1 + 0x18), *(arg1 + 0x20))
int64_t* r8_2 = *(arg1 + 0x10) + 0x28

if (r8_2 != rax_2)
    int64_t* rcx_1 = *r8_2
    *r8_2 = *rax_2
    *rax_2 = 0
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x10))(rcx_1)

int64_t* rcx_2 = arg_20

if (rcx_2 != 0)
    (*(*rcx_2 + 0x10))(rcx_2)

int64_t* rbx = *(arg1 + 0x10)
rbx[1].d -= 1

if (rbx[1].d == 1)
    char rax_6
    
    if (rbx[2].b == 0 && data_143f0f1d0 == 0)
        rax_6 = sub_1405949a0()
    
    if (rbx[2].b != 0 || (data_143f0f1d0 == 0 && rax_6 != 0))
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
            return sub_140a74f90(*(arg1 + 0x18)) __tailcall

return sub_140a74f90(*(arg1 + 0x18)) __tailcall
