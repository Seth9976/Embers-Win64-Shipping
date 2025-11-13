// 函数: sub_142334ea0
// 地址: 0x142334ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x27f) == 0 && *(arg1 + 0x280) == 0)
    int64_t rax = sx.q(data_143f0f1a0)
    
    if (((rax - 0x11).d & 0xfffffff3) != 0 || rax.d == 0x19)
        int64_t rdx = rax * 5
        
        if (*(&data_143f025f0 + (rdx << 2)) != data_143f025c0
                || (*((rdx << 2) + &data_143f025fc) & 1) == 0
                || (rax.d u<= 0x1b && test_bit(0x857c041, rax.d))
                || ((*(rax * 0x14 + &data_143f025fc) u>> 2).b & 1) != 0)
            sub_1410e0370(arg2)
    else if ((rax.d u<= 0x1b && test_bit(0x857c041, rax.d))
            || ((*(rax * 0x14 + &data_143f025fc) u>> 2).b & 1) != 0)
        sub_1410e0370(arg2)
    
    sub_1405d16e0(arg1 + 0x2e0, nullptr)
    void* rcx_5 = *(arg1 + 0x2e8)
    int64_t arg_8 = 0
    return sub_142376dc0(rcx_5, &arg_8, 0, 0)

int64_t result = *(arg1 + 0x2b0)

if (*(result + (sx.q(*(arg1 + 0x2f4)) << 3)) != 0)
    int64_t* r14_1 = *(arg1 + 0x2e0)
    void*** rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int128_t var_38_1 = data_142d57d10
    int128_t zmm0 = data_142d57920
    void* rax_3 = &rbx_3[0xa]
    int128_t var_28_1 = data_142d3f800
    
    if (rax_3 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x58)
        rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_3 = &rbx_3[0xa]
    
    *(arg2 + 0x30) = rax_3
    int64_t* rax_4 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_4 = rbx_3
    *(arg2 + 8) = &rbx_3[1]
    rbx_3[1] = 0
    *rbx_3 = &data_142d56628
    rbx_3[2].d = var_38_1.d
    __builtin_memset(rbx_3 + 0x14, 0xff, 0x20)
    *(rbx_3 + 0x34) = zmm0:4.d
    rbx_3[7].d = zmm0:8.d
    *(rbx_3 + 0x3c) = zmm0:0xc.d
    rbx_3[8] = r14_1
    rbx_3[9] = r14_1
    
    if ((*(*r14_1 + 8))(r14_1) == 0)
        int64_t* rcx_9 = rbx_3[8]
        
        if ((*(*rcx_9 + 0x18))(rcx_9) == 0)
            int64_t* rcx_10 = rbx_3[8]
            
            if ((*(*rcx_10 + 0x20))(rcx_10) == 0)
                int64_t* rcx_11 = rbx_3[8]
                (*(*rcx_11 + 0x10))(rcx_11)
    
    int64_t* rcx_12 = rbx_3[9]
    result = (*(*rcx_12 + 8))(rcx_12)
    
    if (result == 0)
        int64_t* rcx_13 = rbx_3[9]
        result = (*(*rcx_13 + 0x18))(rcx_13)
        
        if (result == 0)
            int64_t* rcx_14 = rbx_3[9]
            result = (*(*rcx_14 + 0x20))(rcx_14)
            
            if (result == 0)
                int64_t* rcx_15 = rbx_3[9]
                return (*(*rcx_15 + 0x10))(rcx_15)

return result
