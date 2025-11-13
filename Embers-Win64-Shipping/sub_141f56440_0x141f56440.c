// 函数: sub_141f56440
// 地址: 0x141f56440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm2
int128_t zmm3
zmm2, zmm3 = sub_141f08a30(arg1)
int32_t i = 0

if (arg1[0xaf].d s> 0)
    int64_t rbx_1 = 0
    
    do
        int64_t rax_1 = arg1[0xae]
        int64_t* rcx = *(rbx_1 + rax_1 + 0x10)
        
        if (rcx != 0)
            zmm2 = sub_141997f50(rcx)
            rax_1 = arg1[0xae]
        
        int64_t* rcx_1 = *(rbx_1 + rax_1 + 0x18)
        
        if (rcx_1 != 0)
            zmm2 = sub_1422b9a40(rcx_1)
        
        i += 1
        rbx_1 += 0x28
    while (i s< arg1[0xaf].d)

int64_t* result = sub_141997ac0(&arg1[0x7e], 0, zmm2, zmm3)
int64_t* rbx_2 = arg1[0xa4]

if (rbx_2 != 0)
    int64_t rcx_3 = rbx_2[2]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t rcx_4 = *rbx_2
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    result = j_sub_140a74f90(rbx_2)
    arg1[0xa4] = 0

int32_t rbx_3 = arg1[0x95].d
int32_t rbx_4 = rbx_3 - 1

if (rbx_3 - 1 s>= 0)
    int64_t rdi_1 = sx.q(rbx_4) << 3
    int32_t temp1_1
    
    do
        result = sub_140d3c6e0(arg1[0x94] + rdi_1)
        
        if (result != 0)
            result = sub_141f70fe0(result, nullptr, 0)
        
        rdi_1 -= 8
        temp1_1 = rbx_4
        rbx_4 -= 1
    while (temp1_1 - 1 s>= 0)

return result
