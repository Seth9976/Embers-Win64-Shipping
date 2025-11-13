// 函数: sub_1413a9350
// 地址: 0x1413a9350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = data_142d3f800
int32_t rdx = *arg3
int128_t var_38 = data_142d57d10
int128_t zmm0 = data_142d57920
int128_t var_18 = zmm0
int128_t var_28 = zmm1

if (rdx s>= 0)
    int32_t rcx = arg3[1]
    
    if (rcx s>= 0 && arg3[2] - rdx s> 0 && arg3[3] - rcx s> 0)
        zmm0 = *arg3
        var_28 = zmm0
        var_38 = zmm0

int64_t* rax_5 = *(arg2 + 0x98)
int64_t* rbx = &data_143ec4c60

if (rax_5 != 0)
    rbx = rax_5

if (*((*(**(arg1 + 0x40) + 0x10))(zmm0, rdx) + 0x28) u> 1)
    int64_t rdx_1 = sx.q((*U"1111")[sx.q(rbx[0x7a].d)])
    
    if (rdx_1.d != 0xb && rdx_1.d != 0x1e)
        int64_t rcx_2 = rdx_1 * 5
        
        if ((*((rcx_2 << 2) + &data_143f025f0) != data_143f025b8
                || (*((rcx_2 << 2) + &data_143f025fc) & 1) == 0) && rdx_1.d != 0x18
                && ((*((rcx_2 << 2) + &data_143f025fc) u>> 4).b & 1) == 0 && data_1439b6a00 != 0)
            return sub_1413a8be0(arg2, *(arg1 + 0x40) + 8, sub_1410f83c0(arg1), &var_38)

int64_t* rax_14 = sub_1410f83c0(arg1)
void*** rbx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rbp = *rax_14
int64_t* r14 = *(*(arg1 + 0x40) + 8)
void* rax_16 = &rbx_4[0xa]

if (rax_16 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rbx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_16 = &rbx_4[0xa]

*(arg2 + 0x30) = rax_16
int64_t* rax_17 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_17 = rbx_4
*(arg2 + 8) = &rbx_4[1]
rbx_4[1] = 0
*rbx_4 = &data_142d56628
rbx_4[2].d = var_38.d
*(rbx_4 + 0x14) = var_38:4.d
rbx_4[3].d = var_38:8.d
*(rbx_4 + 0x1c) = var_38:0xc.d
rbx_4[4].d = var_28.d
*(rbx_4 + 0x24) = var_28:4.d
rbx_4[5].d = var_28:8.d
*(rbx_4 + 0x2c) = var_28:0xc.d
rbx_4[6].d = var_18.d
*(rbx_4 + 0x34) = var_18:4.d
rbx_4[7].d = var_18:8.d
*(rbx_4 + 0x3c) = var_18:0xc.d
rbx_4[8] = r14
rbx_4[9] = rbp

if ((*(*r14 + 8))(r14) == 0)
    int64_t* rcx_8 = rbx_4[8]
    
    if ((*(*rcx_8 + 0x18))(rcx_8) == 0)
        int64_t* rcx_9 = rbx_4[8]
        
        if ((*(*rcx_9 + 0x20))(rcx_9) == 0)
            int64_t* rcx_10 = rbx_4[8]
            (*(*rcx_10 + 0x10))(rcx_10)

int64_t* rcx_11 = rbx_4[9]
int64_t result = (*(*rcx_11 + 8))(rcx_11)

if (result == 0)
    int64_t* rcx_12 = rbx_4[9]
    result = (*(*rcx_12 + 0x18))(rcx_12)
    
    if (result == 0)
        int64_t* rcx_13 = rbx_4[9]
        result = (*(*rcx_13 + 0x20))(rcx_13)
        
        if (result == 0)
            int64_t* rcx_14 = rbx_4[9]
            return (*(*rcx_14 + 0x10))(rcx_14)

return result
