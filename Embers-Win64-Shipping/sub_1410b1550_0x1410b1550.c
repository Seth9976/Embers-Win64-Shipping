// 函数: sub_1410b1550
// 地址: 0x1410b1550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*(arg1 + 0x3b0))

if (data_1439b5208 == 0 || data_1439b5200 == 0 || rcx.d s< 3 || sub_1410959f0((*1111")[rcx]).b == 0
        || (*(arg1 + 0x38) & 0x1000000) == 0)
    return 

int64_t i_2 = sx.q(*(arg1 + 0xa8))
uint32_t rcx_1
rcx_1.b = 0

if (i_2 s<= 0)
    return 

int64_t rax = *(arg1 + 0xa0) + 0x15a8
int64_t i

do
    if (*(rax + 0x3bc8) s> 0)
        rcx_1 = zx.d(rcx_1.b)
        
        if (*rax != 0)
            rcx_1 = 1
    
    rax += 0x5240
    i = i_2
    i_2 -= 1
while (i != 1)

if (rcx_1.b == 0)
    return 

int64_t* var_98 = nullptr
int32_t var_108_1 = 0
sub_14111ddc0(arg2, &var_98, u"CapsuleBentNormal", (i_2 + 0xa).d)
int32_t i_1 = 0
int64_t* rcx_3 = var_98

if (*(arg1 + 0xa8) s> 0)
    int64_t rdi_1 = 0
    int64_t var_70_1 = 0
    
    do
        int64_t* rdi_2 = rdi_1 + *(arg1 + 0xa0)
        
        if (rdi_2[0xa2e].d s> 0 && rdi_2[0x2b5] != 0)
            int32_t arg_8 = 0
            int32_t var_90 = 0
            int32_t arg_20 = 0
            var_108_1.q = &var_90
            int64_t var_88 = 0
            sub_1410b7da0(arg1, arg2, rdi_2, &arg_8, var_108_1, &arg_20, &var_88)
            rax = zx.q(arg_8)
            var_90 = rax.d
            
            if (rax.d s<= 0)
                rcx_3 = var_98
            else
                sub_1410e0370(arg2)
                uint128_t zmm1_1 = *(rdi_2 + 0x1598)
                int64_t r8_1 = zmm1_1.q
                int64_t rcx_6 = _mm_bsrli_si128(zmm1_1, 8).q
                int32_t rax_2 = rcx_6.d
                int32_t rax_3 = rax_2 - r8_1.d
                uint128_t var_58 = zmm1_1
                
                if (rax_2 - r8_1.d s< 0)
                    rax_3 += 1
                
                int32_t r9_3 = data_1439b520c
                uint32_t r8_2 = (r8_1 u>> 0x20).d
                uint32_t rcx_7 = (rcx_6 u>> 0x20).d
                uint32_t rcx_8 = rcx_7 - r8_2
                arg_20 = divs.dp.d(sx.q((rax_3 s>> 1) - 1 + r9_3), r9_3)
                
                if (rcx_7 - r8_2 s< 0)
                    rcx_8 += 1
                
                int64_t* rcx_10 = rdi_2[0xa2a]
                arg_8 = divs.dp.d(sx.q(r9_3 - 1 + (rcx_8 s>> 1)), r9_3)
                void* rax_14 = &var_98[1]
                void* var_68
                sub_1419a2ec0(rcx_10, &var_68, &data_143e39100, 0)
                void* r13_1 = var_68
                void* r15_1 = nullptr
                
                if (r13_1 != 0)
                    int64_t rdx_6 = sx.q(*(r13_1 + 0x10c))
                    void* var_60
                    int64_t* rbx_1 = *(var_60 + 0x10)
                    int64_t rax_16 = rbx_1[3]
                    
                    if (*(rax_16 + (rdx_6 << 3)) == 0)
                        sub_1419ccf30(rbx_1, rdx_6.d)
                        rax_16 = rbx_1[3]
                    
                    r15_1 = *(rax_16 + (rdx_6 << 3))
                
                *(arg2 + 0x1b0) = r15_1
                sub_14198aa60(r15_1)
                void*** rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_17 = &rcx_15[3]
                
                if (rax_17 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x20)
                    rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_17 = &rcx_15[3]
                
                *(arg2 + 0x30) = rax_17
                *(arg2 + 0x14) += 1
                uint64_t r8_3 = zx.q(arg_20)
                int32_t var_80_1 = r8_3.d
                **(arg2 + 8) = rcx_15
                *(arg2 + 8) = &rcx_15[1]
                rcx_15[1] = 0
                *rcx_15 = &data_142dd5b40
                rcx_15[2] = r15_1
                void* rdx_7 = rdi_2[0x2b5]
                uint64_t rcx_19 = zx.q(arg_8)
                int32_t var_7c_1 = rcx_19.d
                int64_t zmm2_1
                zmm2_1.d = float.s(rcx_19)
                zmm1_1.d = float.s(r8_3)
                int64_t var_a0_1 = *(*arg3 + 0x10)
                int64_t var_a8_1 = var_88
                int64_t var_b0_1 = *(rdx_7 + 0xef8)
                int32_t var_b8_1 = 0
                int64_t var_c0_1 = *(rdx_7 + 0xee8)
                int32_t var_c8_1 = var_90
                int32_t var_d0_1 = 2
                sub_1410b54c0(r13_1, arg2, *(arg1 + 8), rdi_2, nullptr, rax_14, var_80_1.q, 0, 
                    (_mm_unpacklo_ps(zmm1_1, zmm2_1)).q, data_1439b5214, &var_58)
                var_108_1 = 1
                sub_1419cd1c0(arg2, r13_1, arg_20, arg_8, 1)
                sub_14077cfd0(r13_1 + 0x118, arg2, *(arg2 + 0x1b0))
                sub_14077cfd0(r13_1 + 0x12e, arg2, *(arg2 + 0x1b0))
                sub_14077cfd0(r13_1 + 0x120, arg2, *(arg2 + 0x1b0))
                int64_t* rdi_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                int64_t rax_27 = *(rax_14 + 0x10)
                void* rcx_27 = &rdi_5[1]
                
                if (rcx_27 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x10)
                    rdi_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rcx_27 = &rdi_5[1]
                
                *(arg2 + 0x30) = rcx_27
                *rdi_5 = rax_27
                void*** rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_28 = &rcx_31[6]
                
                if (rax_28 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x38)
                    rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_28 = &rcx_31[6]
                
                *(arg2 + 0x30) = rax_28
                void**** rax_29 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_29 = rcx_31
                *(arg2 + 8) = &rcx_31[1]
                rcx_31[1] = 0
                *rcx_31 = &data_142da7798
                rcx_31[2].d = 1
                rcx_31[3] = rdi_5
                rcx_31[4].d = 0
                *(rcx_31 + 0x24) = 3
                rcx_31[5] = 0
                rcx_3 = var_98
                int64_t* rbx_2 = *arg3
                *arg3 = rcx_3
                
                if (rcx_3 != 0)
                    (*(*rcx_3 + 0x30))()
                    rcx_3 = var_98
                
                if (rbx_2 != 0)
                    (*(*rbx_2 + 0x38))(rbx_2)
                    rcx_3 = var_98
        
        i_1 += 1
        rdi_1 = var_70_1 + 0x5240
        var_70_1 = rdi_1
    while (i_1 s< *(arg1 + 0xa8))

if (rcx_3 != 0)
    (*(*rcx_3 + 0x38))()
