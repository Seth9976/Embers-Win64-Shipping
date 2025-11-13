// 函数: sub_1423c6d10
// 地址: 0x1423c6d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x20))()
int128_t entry_zmm2
int128_t entry_zmm3
sub_14198ac20(&data_143f02b98, *(arg1[0x10] + 0x90), 0, entry_zmm3, entry_zmm2)
sub_1405d16e0(&arg1[0x11], nullptr)
sub_1405d16e0(&arg1[0xa], nullptr)
void* result = &arg1[0x16]
void var_18

if (result != &var_18)
    *result = 0
    int64_t* rdi_1 = *(result + 8)
    
    if (rdi_1 != 0)
        *(result + 8) = 0
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            result = (**rdi_1)(rdi_1)
            int32_t temp1_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                result = (*(*rdi_1 + 8))(rdi_1, 1)

void* rcx_4 = arg1[0xc]

if (rcx_4 != 0)
    result = arg1[0xd]
    *(rcx_4 + 8) = result

void** rcx_5 = arg1[0xd]

if (rcx_5 != 0)
    result = arg1[0xc]
    *rcx_5 = result

arg1[0xd] = 0
arg1[0xc] = 0
return result
