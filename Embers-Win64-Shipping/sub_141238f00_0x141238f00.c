// 函数: sub_141238f00
// 地址: 0x141238f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = arg6
int128_t zmm0 = data_142d3f660
int128_t var_48 = zmm0
void* rdi = arg4
int64_t* rcx = *(r13 + 0x20)
uint32_t rdx = zx.d(*(rcx + 0x13c))
uint64_t result = zx.q(rdx - 1)
int128_t var_58

if ((result.b & 0xfd) == 0)
    int32_t* rax_21 = (*(*rcx + 0x10))(rcx, &var_58)
    zmm0.d = (*(rdi + 0x600)).d f+ *rax_21
    var_48.d = zmm0.d
    var_48:4.d = rax_21[1] f+ *(rdi + 0x604)
    var_48:8.d = rax_21[2] f+ *(rdi + 0x608)
    var_48:0xc.d = rax_21[3] f* 1.03527617f
    arg6 = *(arg2 + 0x188)
    sub_1405d0e10(arg2, &arg6, arg1, &var_48, 0)
    arg6 = *(arg2 + 0x188)
    var_58 = zx.o(0)
    return sub_1405d0e10(arg2, &arg6, &arg1[3], &var_58, 0)

if (rdx.b == 2)
    uint64_t rbp_1 = zx.q(arg1[8])
    
    if (rbp_1.d u>= 0x40)
        rbp_1 = 0x40
    
    if (rbp_1.d != 0)
        uint32_t rax_1 = zx.d(arg1[7])
        int64_t rdi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        arg6.d = zx.d(arg1[6])
        var_58.q = *(arg2 + 0x188)
        int64_t rax_4 = rdi_3 + rbp_1
        
        if (rax_4 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, (rbp_1 + 0x10).d)
            rdi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
            rax_4 = rdi_3 + rbp_1
        
        *(arg2 + 0x30) = rax_4
        zmm0 = memcpy(rdi_3, &rcx[0x10], rbp_1.d)
        void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_5 = &rcx_5[6]
        
        if (rax_5 u> *(arg2 + 0x38))
            zmm0 = sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_5 = &rcx_5[6]
        
        *(arg2 + 0x30) = rax_5
        void**** rax_6 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_6 = rcx_5
        *(arg2 + 8) = &rcx_5[1]
        rcx_5[1] = 0
        *rcx_5 = &data_142d549d8
        rcx_5[2] = var_58.q
        rcx_5[4].d = arg6.d
        rcx_5[3] = rdi_3
        rdi = arg4
        *(rcx_5 + 0x24) = rax_1
        rcx_5[5].d = rbp_1.d
    
    int64_t* rcx_9 = *(r13 + 0x20)
    arg6 = *(arg2 + 0x188)
    (*(*rcx_9 + 0x18))(rcx_9)
    int64_t* rcx_10 = *(r13 + 0x20)
    (*(*rcx_10 + 0x20))(rcx_10)
    var_58.d = 0x41900000
    var_58:4.d = 0x41400000
    var_58:8.d = zmm0.d
    var_58:0xc.d = zmm0.d
    sub_1405d0e10(arg2, &arg6, &arg1[3], &var_58, 0)
    uint64_t rbp_2 = zx.q(arg1[0xb])
    int512_t zmm6
    zmm6.o = arg5
    arg6 = rdi + 0x600
    result = 0xc
    
    if (rbp_2.d u>= 0xc)
        rbp_2 = 0xc
    
    if (rbp_2.d != 0)
        uint32_t r12_1 = zx.d(arg1[0xa])
        uint32_t r13_1 = zx.d(arg1[9])
        int64_t rdi_8 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        var_58.q = *(arg2 + 0x188)
        int64_t rax_16 = rdi_8 + rbp_2
        
        if (rax_16 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, (rbp_2 + 0x10).d)
            rdi_8 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
            rax_16 = rdi_8 + rbp_2
        
        *(arg2 + 0x30) = rax_16
        memcpy(rdi_8, arg6, rbp_2.d)
        void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_17 = &rcx_16[6]
        
        if (rax_17 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_17 = &rcx_16[6]
        
        *(arg2 + 0x30) = rax_17
        void** rax_18 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_18 = rcx_16
        *(arg2 + 8) = &rcx_16[1]
        rcx_16[1] = 0
        *rcx_16 = &data_142d549d8
        result = var_58.q
        rcx_16[2] = result
        rcx_16[3] = rdi_8
        rcx_16[4].d = r13_1
        *(rcx_16 + 0x24) = r12_1
        rcx_16[5].d = rbp_2.d

return result
