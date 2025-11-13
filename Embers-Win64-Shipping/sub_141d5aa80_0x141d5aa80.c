// 函数: sub_141d5aa80
// 地址: 0x141d5aa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x49) = 0
void var_18

if (arg1 + 0xb8 != &var_18)
    *(arg1 + 0xb8) = 0
    int64_t* rbx_1 = *(arg1 + 0xc0)
    
    if (rbx_1 != 0)
        *(arg1 + 0xc0) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

sub_1405d16e0(arg1 + 0x70, nullptr)
sub_1405d16e0(arg1 + 0x78, nullptr)
sub_1405d16e0(arg1 - 8, nullptr)
sub_1408c8cf0(arg1 + 0x10, nullptr)
int128_t entry_zmm2
int128_t entry_zmm3
return sub_141d5dba0(arg1 - 0x10, nullptr, entry_zmm2, entry_zmm3) __tailcall
