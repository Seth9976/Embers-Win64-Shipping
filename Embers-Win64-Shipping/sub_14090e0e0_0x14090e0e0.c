// 函数: sub_14090e0e0
// 地址: 0x14090e0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0xe] == 0
*arg1 = &data_142e1cf30

if (not(cond:0))
    int64_t* rax_1 = sub_140d3c6e0(&arg1[0x15])
    
    if (rax_1 != 0)
        int64_t r9_1 = *rax_1
        (*(r9_1 + 0x2a8))(rax_1, arg1[0xe], 1, r9_1)
    
    sub_140a74f90(arg1[0xe])
    arg1[0xe] = 0

int64_t rcx_3 = arg1[0xf]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* rdi = arg1[0xc]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

arg1[0xa].d = 0
int64_t rcx_6 = arg1[9]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_140597460(&arg1[1])
*arg1 = &data_142e1cdc8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
