// 函数: sub_1405bc3d0
// 地址: 0x1405bc3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result

if ((arg1[0x5c].b & 1) != 0)
    int64_t rax_24
    
    if (*data_143cd5f28 != 0)
        rax_24 = 0x420
    
    if (*data_143cd5f28 == 0 || (arg1[1].b & 0x30) != 0)
        rax_24 = 0x250
    
    result = sub_1405a8d50(arg1 + rax_24, &arg1[0x8b])
    
    if (result != 0)
        return sub_1405c6c80(arg1, result)
else
    uint32_t rdi_1 = zx.d(*(arg1 + 0x2ac))
    void* rcx
    
    if (arg1[0x54].d != 1)
        rcx = arg1[0x62]
    
    int64_t var_a8
    
    if (arg1[0x54].d == 1 || rcx == 0)
        var_a8 = *(arg1 + 0x2a4)
    else
        sub_1405be000(rcx, &var_a8)
    
    int64_t* rax_2 = sub_1405be050(arg1)
    int64_t rbx_1 = var_a8
    int64_t rcx_2 = *rax_2
    int64_t* rcx_3 = rax_2[1]
    
    if (rcx_3 != 0)
        *(rcx_3 + 0xc) += 1
    
    int64_t var_90
    sub_140d3a3a0(&var_90, arg1)
    int32_t rcx_5 = 1
    int32_t var_88_1 = 1
    var_a8.d = 1
    int64_t rax_4
    
    if (*data_143cd5f28 != 0)
        rax_4 = 0x420
    
    if (*data_143cd5f28 == 0 || (arg1[1].b & 0x30) != 0)
        rax_4 = 0x250
    
    int64_t* r12_1 = *(arg1 + rax_4)
    int64_t r13_1 = 0
    uint64_t rbx_3 = sx.q(*(arg1 + rax_4 + 8)) << 3 u>> 3
    
    if (r12_1 u> &r12_1[sx.q(*(arg1 + rax_4 + 8))])
        rbx_3 = 0
    
    uint64_t var_68_1 = rbx_3
    
    if (rbx_3 != 0)
        uint64_t r14
        uint64_t var_20_1 = r14
        
        do
            int64_t* rdi_2 = *r12_1
            
            if (rdi_2 != 0)
                if (rdi_2[0xc].b != 0)
                    if (*data_143cd5f40 == 0)
                        r14.b = 1
                    else
                        r14.b = arg1[0x65].b | 1
                else if (*(rdi_2 + 0x2c) != 0 || *data_143cd5f40 == 0)
                    r14.b = 1
                else
                    r14.b = arg1[0x65].b | 1
                
                void* r15_1 = nullptr
                
                if (rdi_2[5].b != 0)
                    int64_t var_78 = rcx_2
                    
                    if (rcx_3 != 0)
                        *(rcx_3 + 0xc) += 1
                    
                    if (&var_78 != &rdi_2[7])
                        var_78.o = *(rdi_2 + 0x38)
                        *(rdi_2 + 0x38) = var_78.o
                    
                    if (rcx_3 != 0)
                        int32_t temp1_1 = *(rcx_3 + 0xc)
                        *(rcx_3 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*(*rcx_3 + 8))(rcx_3, 1)
                    
                    rdi_2[9] = var_90
                    rdi_2[0xa].d = zx.d(r14.b) | rcx_5
                    *(rdi_2 + 0x54) = rbx_1.d
                    rdi_2[0xb].d = rbx_1:4.d
                    *(rdi_2 + 0x5c) = rdi_1
                    r15_1 = sub_1405c9580(rdi_2)
                    int32_t var_50_1 = 0xffffffff
                    int32_t var_4c_1 = 0
                    void var_38
                    
                    if (&var_38 != &rdi_2[7])
                        uint128_t zmm0_2 = *(rdi_2 + 0x38)
                        *(rdi_2 + 0x38) = zx.o(0)
                        int64_t* rcx_8 = _mm_bsrli_si128(zmm0_2, 8).q
                        
                        if (rcx_8 != 0)
                            int32_t temp2_1 = *(rcx_8 + 0xc)
                            *(rcx_8 + 0xc) -= 1
                            
                            if (temp2_1 == 1)
                                (*(*rcx_8 + 8))(rcx_8, 1)
                    
                    rdi_2[9] = var_50_1.q
                    int32_t rax_20 = var_a8.d
                    rdi_2[0xa].d = 0
                    *(rdi_2 + 0x54) = 0x780
                    rdi_2[0xb].d = 0x438
                    *(rdi_2 + 0x5c) = 6
                    rbx_3 = var_68_1
                    var_88_1 = rax_20
                
                sub_1405bffc0(arg1, *(rdi_2 + 0x2c), r15_1, r14.b)
                sub_1405c6c80(arg1, r15_1)
                rcx_5 = var_88_1
                var_a8.d = rcx_5
            
            r12_1 = &r12_1[1]
            r13_1 += 1
        while (r13_1 != rbx_3)
    
    result = pdb_internal::Map<unsigned long,struct ClsData,class pdb_internal::HashClass<unsigned long,0>,void,class CriticalSectionNop>::grow(
        arg1)
    
    if (rcx_3 != 0)
        int32_t temp0_2 = *(rcx_3 + 0xc)
        *(rcx_3 + 0xc) -= 1
        
        if (temp0_2 == 1)
            return (*(*rcx_3 + 8))(rcx_3, 1)

return result
