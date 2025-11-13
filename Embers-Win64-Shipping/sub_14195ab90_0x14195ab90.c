// 函数: sub_14195ab90
// 地址: 0x14195ab90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == *(arg1 + 0x28) && arg3 == *(arg1 + 0x2c) && arg4 == *(arg1 + 0x30))
    return 

int64_t* rcx = *(arg1 + 0x68)

if (rcx != 0)
    (*(*rcx + 8))(rcx)

int64_t* rdi_1 = *(arg1 + 0x40)
*(arg1 + 0x40) = 0

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        char rax_3
        
        if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
            rax_3 = sub_1405949a0()
        
        if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_3 != 0))
            (**rdi_1)(rdi_1, 1)
        else
            bool z_1
            
            if (0 == *(rdi_1 + 0xc))
                *(rdi_1 + 0xc) = 1
                z_1 = true
            else
                *(rdi_1 + 0xc)
                z_1 = false
            
            if (z_1)
                sub_1405dcc10(&data_143f02390, rdi_1)

int64_t rdi_2 = *(arg1 + 0x18)
void*** rdi_3

if (data_143eff5c7 == 0)
    rdi_3 = nullptr
else
    void*** rax_6 = j_sub_140a82f30(0xf0)
    
    if (rax_6 == 0)
        rdi_3 = nullptr
        sub_141941370(nullptr, 1)
    else
        int128_t* var_30_1 = &data_1439c7b20
        int64_t var_38_1 = 0
        void*** rax_7 =
            sub_141928d30(rax_6, rdi_2, 0, 0x8d41, 0x8ce0, arg2, arg3, 0, 1, 1, 1, 1, 2, 0, 0, 1)
        rdi_3 = rax_7
        sub_141941370(rax_7, 1)

sub_14081d930(arg1 + 0x40, rdi_3)
void* rdx_3 = *(arg1 + 0x40)
int32_t var_90

if (rdx_3 == 0)
    int32_t var_68_1 = 1
    int32_t var_70_1 = 1
    int32_t var_88
    var_88.b = *(arg1 + 0x34)
    var_90.b = 0
    sub_14081d930(arg1 + 0x40, sub_141935f90(*(arg1 + 0x18), arg2, arg3, 0, 0, 0, var_88, 1, 1))
    rdx_3 = *(arg1 + 0x40)

var_90.b = *(arg1 + 0x30)
sub_141958440(*(*(arg1 + 0x18) + 0x15bb8), *(arg1 + 0x20), arg2, arg3, arg4, var_90.b, 
    *(rdx_3 + 0x84), *(rdx_3 + 0x80))
*(arg1 + 0x28) = arg2
*(arg1 + 0x2c) = arg3
*(arg1 + 0x30) = arg4
