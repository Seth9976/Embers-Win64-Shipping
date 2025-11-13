// 函数: sub_1405b4df0
// 地址: 0x1405b4df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result

if ((arg1[0x5c].b & 2) != 0)
    int64_t rax_9
    
    if (*data_143cd5f28 != 0)
        rax_9 = 0x430
    
    if (*data_143cd5f28 == 0 || (arg1[1].b & 0x30) != 0)
        rax_9 = 0x260
    
    result = sub_1405a8d50(arg1 + rax_9, &arg1[0x8b])
    
    if (result != 0)
        return sub_1405c6c80(arg1, result) __tailcall
else
    void* rax = sub_1405bb370(arg1)
    void* r13_1 = arg1[0x48]
    void* r9_1 = rax
    void* r13_2
    
    if (r13_1 == 0)
        r13_2 = nullptr
    else
        r13_2 = *(r13_1 + 0xb8)
    
    int64_t* rax_2
    
    if (*data_143cd5f28 != 0)
        rax_2 = 0x430
    
    if (*data_143cd5f28 == 0 || (arg1[1].b & 0x30) != 0)
        rax_2 = 0x260
    
    int64_t* r15_1 = *(rax_2 + arg1)
    int64_t r12_1 = 0
    result = &r15_1[sx.q(*(rax_2 + arg1 + 8))]
    uint64_t rdi_2 = sx.q(*(rax_2 + arg1 + 8)) << 3 u>> 3
    
    if (r15_1 u> result)
        rdi_2 = 0
    
    uint64_t arg_18 = rdi_2
    
    if (rdi_2 != 0)
        uint64_t r14
        uint64_t var_30_1 = r14
        
        do
            int64_t* rcx = *r15_1
            
            if (rcx != 0)
                if (rcx[0xc].b != 0)
                    if (*data_143cd5f40 != 0)
                        r14.b = arg1[0x65].b | 2
                    else
                        r14.b = 2
                else if (*(rcx + 0x2c) != 0 || *data_143cd5f40 == 0)
                    r14.b = 2
                else
                    r14.b = arg1[0x65].b | 2
                
                void* rbp_1 = nullptr
                
                if (rcx[5].b != 0)
                    void* var_40_1 = arg2
                    int32_t rdi_3 = *(arg2 + 0x18)
                    *(arg2 + 0x18) = zx.d(r14.b) | rdi_3
                    rbp_1 = sub_1405b3ec0(rcx, r13_2, &arg1[0x8b], arg1[0x49], r9_1)
                    *(arg2 + 0x18) = rdi_3
                    rdi_2 = arg_18
                
                result = sub_1405bffc0(arg1, *(rcx + 0x2c), rbp_1, r14.b)
                
                if (rbp_1 != 0 && rbp_1 != r13_2)
                    r13_2 = rbp_1
                    sub_1405c6c80(arg1, rbp_1)
                    result = pdb_internal::Map<unsigned long,struct ClsData,class pdb_internal::HashClass<unsigned long,0>,void,class CriticalSectionNop>::grow(
                        arg1)
                
                r9_1 = rax
            
            r15_1 = &r15_1[1]
            r12_1 += 1
        while (r12_1 != rdi_2)

return result
