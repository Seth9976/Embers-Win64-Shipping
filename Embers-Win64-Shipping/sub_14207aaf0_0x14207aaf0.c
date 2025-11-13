// 函数: sub_14207aaf0
// 地址: 0x14207aaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_10 = nullptr
int64_t var_18

if (&arg1[0x18] != &var_18)
    arg1[0x18] = 0
    var_18 = 0
    sub_1405aeff0(&arg1[0x19], &var_10)
    int64_t* rcx_2 = var_10
    
    if (rcx_2 != 0)
        rcx_2[1].d -= 1
        
        if (rcx_2[1].d == 1)
            int64_t* rbx_1 = var_10
            (**rbx_1)(rbx_1)
            int32_t rax_3 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_3 == 1)
                int64_t* rcx_4 = var_10
                (*(*rcx_4 + 8))(rcx_4, 1)

(*(arg1[3] + 0x30))(&arg1[3])
int64_t* rbx_2 = arg1[0x19]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rsi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q(rsi_1))

sub_1420798e0(&arg1[3])
sub_140fda0a0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
