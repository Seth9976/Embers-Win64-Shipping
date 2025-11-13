// 函数: sub_14094f540
// 地址: 0x14094f540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e33178
arg1[0xb].d = 0

if (*(arg1 + 0x5c) != 0)
    sub_14083ad30(&arg1[0xa], 0)

sub_14095cca0(&arg1[0xc], 0)
int64_t* var_20 = nullptr
int64_t var_28

if (&arg1[7] != &var_28)
    arg1[7] = 0
    var_28 = 0
    sub_1405aeff0(&arg1[8], &var_20)
    int64_t* rcx_4 = var_20
    
    if (rcx_4 != 0)
        rcx_4[1].d -= 1
        
        if (rcx_4[1].d == 1)
            int64_t* rbx_1 = var_20
            (**rbx_1)(rbx_1)
            int32_t rax_3 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_3 == 1)
                int64_t* rcx_6 = var_20
                (*(*rcx_6 + 8))(rcx_6, 1)

sub_14094c130(&arg1[0x13])
sub_14094b310(&arg1[0x10])
sub_14094b310(&arg1[0xe])
sub_14094b1d0(&arg1[0xc])
int64_t rcx_11 = arg1[0xa]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t* rbx_2 = arg1[8]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rsi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q(rsi_1))

*arg1 = &data_142e2d570
sub_140596eb0(&arg1[1])

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
