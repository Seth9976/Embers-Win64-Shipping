// 函数: sub_141010000
// 地址: 0x141010000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14100e300(&arg1[0x16])
void* rcx_1 = arg1[0x14]
arg1[0x13] = &data_142efcd90

if (rcx_1 != 0)
    int32_t rax_1 = *(rcx_1 + 0x14)
    *(rcx_1 + 0x14) -= 1
    
    if (rax_1 == 1)
        int64_t* rcx_2 = arg1[0x14]
        
        if (rcx_2 != 0)
            sub_141011360(rcx_2, rax_1.b)

int64_t* rcx_3 = arg1[0x12]

if (rcx_3 != 0)
    (*(*rcx_3 + 0x10))(rcx_3)

sub_14100e3b0(&arg1[0x10])
return sub_14100f2e0(arg1) __tailcall
