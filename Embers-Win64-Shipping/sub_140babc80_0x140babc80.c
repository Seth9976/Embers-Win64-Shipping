// 函数: sub_140babc80
// 地址: 0x140babc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int128_t zmm2 = *arg1
    int128_t zmm3 = arg1[1]
    int128_t zmm4 = arg1[2]
    int128_t zmm5 = arg1[3]
    *arg1 = *arg2
    arg1[1] = arg2[1]
    arg1[2] = arg2[2]
    arg1[3] = arg2[3]
    *arg2 = zmm2
    arg2[1] = zmm3
    arg2[2] = zmm4
    arg2[3] = zmm5

void* result = &arg1[4]
void var_18

if (result != &var_18)
    *result = 0
    int64_t* rbx_1 = *(result + 8)
    
    if (rbx_1 != 0)
        *(result + 8) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)

if (*arg2 == 0)
    return result

void* rax_2 = arg2[1].q
void* rcx_2 = &arg2[2]

if (rax_2 != 0)
    rcx_2 = rax_2

jump(*(*rcx_2 + 0x10))
