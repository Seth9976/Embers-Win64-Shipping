// 函数: sub_14139b920
// 地址: 0x14139b920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141096650(arg2)
void*** rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int32_t var_54 = *arg3
int32_t var_50 = arg3[1]
int32_t var_4c = arg3[2]
int32_t var_48 = arg3[3]
int32_t var_58 = 0
int64_t var_34 = 0
int32_t var_2c = 0
int128_t var_44 = data_142d3f800
void* rax_31

if (*(arg1 + 0x3d0) s> 1)
    rax_31 = *(arg1 + 0xe0)
else
    void* rax_1 = *(arg1 + 0xe8)
    int64_t rcx_2 = *(rax_1 + 0x10)
    int64_t* r12_1 = *(rax_1 + 8)
    void* rax_2 = &rbx_2[0xa]
    
    if (rax_2 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x58)
        rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_2 = &rbx_2[0xa]
    
    *(arg2 + 0x30) = rax_2
    int64_t* rax_3 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_3 = rbx_2
    *(arg2 + 8) = &rbx_2[1]
    rbx_2[1] = 0
    *rbx_2 = &data_142d56628
    rbx_2[2].d = 0
    *(rbx_2 + 0x14) = var_54
    rbx_2[3].d = var_50
    *(rbx_2 + 0x1c) = var_4c
    rbx_2[4].d = var_48
    *(rbx_2 + 0x24) = var_44.d
    rbx_2[5].d = var_44:4.d
    *(rbx_2 + 0x2c) = var_44:8.d
    rbx_2[6].d = var_44:0xc.d
    *(rbx_2 + 0x34) = 0
    rbx_2[7].d = 0
    *(rbx_2 + 0x3c) = 0
    rbx_2[9] = rcx_2
    rbx_2[8] = r12_1
    
    if ((*(*r12_1 + 8))(r12_1) == 0)
        int64_t* rcx_5 = rbx_2[8]
        
        if ((*(*rcx_5 + 0x18))(rcx_5) == 0)
            int64_t* rcx_6 = rbx_2[8]
            
            if ((*(*rcx_6 + 0x20))(rcx_6) == 0)
                int64_t* rcx_7 = rbx_2[8]
                (*(*rcx_7 + 0x10))(rcx_7)
    
    int64_t* rcx_8 = rbx_2[9]
    
    if ((*(*rcx_8 + 8))(rcx_8) == 0)
        int64_t* rcx_9 = rbx_2[9]
        
        if ((*(*rcx_9 + 0x18))(rcx_9) == 0)
            int64_t* rcx_10 = rbx_2[9]
            
            if ((*(*rcx_10 + 0x20))(rcx_10) == 0)
                int64_t* rcx_11 = rbx_2[9]
                (*(*rcx_11 + 0x10))(rcx_11)
    
    var_54 = *arg3
    rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    var_50 = arg3[1]
    var_4c = arg3[2]
    var_48 = arg3[3]
    rax_31 = *(arg1 + 0xf0)
    int32_t var_58_1 = 0
    var_44 = data_142d3f800
    int64_t var_34_1 = 0
    int32_t var_2c_1 = 0

int64_t r12_2 = *(rax_31 + 0x10)
int64_t* r15_1 = *(rax_31 + 8)
void* rax_32 = &rbx_2[0xa]

if (rax_32 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_32 = &rbx_2[0xa]

*(arg2 + 0x30) = rax_32
void**** rax_33 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_33 = rbx_2
*(arg2 + 8) = &rbx_2[1]
rbx_2[1] = 0
*rbx_2 = &data_142d56628
rbx_2[2].d = 0
*(rbx_2 + 0x14) = var_54
rbx_2[3].d = var_50
*(rbx_2 + 0x1c) = var_4c
rbx_2[4].d = var_48
*(rbx_2 + 0x24) = var_44.d
rbx_2[5].d = var_44:4.d
*(rbx_2 + 0x2c) = var_44:8.d
rbx_2[6].d = var_44:0xc.d
*(rbx_2 + 0x34) = 0
rbx_2[7].d = 0
*(rbx_2 + 0x3c) = 0
rbx_2[8] = r15_1
rbx_2[9] = r12_2

if ((*(*r15_1 + 8))(r15_1) == 0)
    int64_t* rcx_14 = rbx_2[8]
    
    if ((*(*rcx_14 + 0x18))(rcx_14) == 0)
        int64_t* rcx_15 = rbx_2[8]
        
        if ((*(*rcx_15 + 0x20))(rcx_15) == 0)
            int64_t* rcx_16 = rbx_2[8]
            (*(*rcx_16 + 0x10))(rcx_16)

int64_t* rcx_17 = rbx_2[9]
int64_t result = (*(*rcx_17 + 8))(rcx_17)

if (result == 0)
    int64_t* rcx_18 = rbx_2[9]
    result = (*(*rcx_18 + 0x18))(rcx_18)
    
    if (result == 0)
        int64_t* rcx_19 = rbx_2[9]
        result = (*(*rcx_19 + 0x20))(rcx_19)
        
        if (result == 0)
            int64_t* rcx_20 = rbx_2[9]
            result = (*(*rcx_20 + 0x10))(rcx_20)

*(arg1 + 0x1d9) = 1
return result
