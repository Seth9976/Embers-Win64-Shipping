// 函数: sub_1413e84a0
// 地址: 0x1413e84a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = data_142d57d10
void* rdx = data_143ec4d80
void* r14 = data_143ec4d88
void*** rbx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int128_t var_38
__builtin_memset(&var_38, 0xff, 0x20)
void* rax = &rbx_2[0xa]
int64_t* r15 = *(rdx + 8)

if (rax u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x58)
    rbx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &rbx_2[0xa]

*(arg1 + 0x30) = rax
int64_t* rax_1 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_1 = rbx_2
*(arg1 + 8) = &rbx_2[1]
rbx_2[1] = 0
*rbx_2 = &data_142d56628
rbx_2[2].d = zmm0.d
*(rbx_2 + 0x14) = zmm0:4.d
rbx_2[3].d = zmm0:8.d
*(rbx_2 + 0x1c) = zmm0:0xc.d
rbx_2[4].d = var_38.d
*(rbx_2 + 0x24) = var_38:4.d
rbx_2[5].d = var_38:8.d
*(rbx_2 + 0x2c) = var_38:0xc.d
int128_t var_28
rbx_2[6].d = var_28.d
*(rbx_2 + 0x34) = var_28:4.d
rbx_2[7].d = var_28:8.d
*(rbx_2 + 0x3c) = var_28:0xc.d
rbx_2[8] = r15
rbx_2[9] = r15

if ((*(*r15 + 8))(r15) == 0)
    int64_t* rcx_2 = rbx_2[8]
    
    if ((*(*rcx_2 + 0x18))(rcx_2) == 0)
        int64_t* rcx_3 = rbx_2[8]
        
        if ((*(*rcx_3 + 0x20))(rcx_3) == 0)
            int64_t* rcx_4 = rbx_2[8]
            (*(*rcx_4 + 0x10))(rcx_4)

int64_t* rcx_5 = rbx_2[9]

if ((*(*rcx_5 + 8))(rcx_5) == 0)
    int64_t* rcx_6 = rbx_2[9]
    
    if ((*(*rcx_6 + 0x18))(rcx_6) == 0)
        int64_t* rcx_7 = rbx_2[9]
        
        if ((*(*rcx_7 + 0x20))(rcx_7) == 0)
            int64_t* rcx_8 = rbx_2[9]
            (*(*rcx_8 + 0x10))(rcx_8)

int64_t* r14_1 = *(r14 + 8)
void*** rbx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_29 = &rbx_7[0xa]

if (rax_29 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x58)
    rbx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_29 = &rbx_7[0xa]

*(arg1 + 0x30) = rax_29
int64_t* rax_30 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_30 = rbx_7
*(arg1 + 8) = &rbx_7[1]
rbx_7[1] = 0
*rbx_7 = &data_142d56628
rbx_7[2].d = zmm0.d
*(rbx_7 + 0x14) = zmm0:4.d
rbx_7[3].d = zmm0:8.d
*(rbx_7 + 0x1c) = zmm0:0xc.d
rbx_7[4].d = var_38.d
*(rbx_7 + 0x24) = var_38:4.d
rbx_7[5].d = var_38:8.d
*(rbx_7 + 0x2c) = var_38:0xc.d
rbx_7[6].d = var_28.d
*(rbx_7 + 0x34) = var_28:4.d
rbx_7[7].d = var_28:8.d
*(rbx_7 + 0x3c) = var_28:0xc.d
rbx_7[8] = r14_1
rbx_7[9] = r14_1

if ((*(*r14_1 + 8))(r14_1) == 0)
    int64_t* rcx_11 = rbx_7[8]
    
    if ((*(*rcx_11 + 0x18))(rcx_11) == 0)
        int64_t* rcx_12 = rbx_7[8]
        
        if ((*(*rcx_12 + 0x20))(rcx_12) == 0)
            int64_t* rcx_13 = rbx_7[8]
            (*(*rcx_13 + 0x10))(rcx_13)

int64_t* rcx_14 = rbx_7[9]
int64_t result = (*(*rcx_14 + 8))(rcx_14)

if (result == 0)
    int64_t* rcx_15 = rbx_7[9]
    result = (*(*rcx_15 + 0x18))(rcx_15)
    
    if (result == 0)
        int64_t* rcx_16 = rbx_7[9]
        result = (*(*rcx_16 + 0x20))(rcx_16)
        
        if (result == 0)
            int64_t* rcx_17 = rbx_7[9]
            return (*(*rcx_17 + 0x10))(rcx_17)

return result
