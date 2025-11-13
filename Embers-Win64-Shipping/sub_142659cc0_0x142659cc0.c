// 函数: sub_142659cc0
// 地址: 0x142659cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg3
void* rdx

if (*(arg1 + 0xa0) == 0)
label_142659d24:
    void arg_20
    int64_t* rax_4 = sub_141deba60(&arg_20)
    
    if (*rax_4 == 0)
        rdx = nullptr
    else
        void* rax_5 = sub_1425492f0()
        
        if (rax_5 == 0)
            rdx = nullptr
        else
            rdx = *rax_4
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                rdx = nullptr
    
    rdi = arg3
else
    void* rax_1 = sub_14269ce80()
    
    if (rax_1 == 0)
        goto label_142659d24
    
    rdx = *(arg1 + 0xa0)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30 || rdx == 0)
        goto label_142659d24

bool cond:2 = (*(arg1 + 0x28) & 2) != 0
void* arg_8 = rdx

if (not(cond:2))
    sub_142653360(arg1, arg4)

int32_t* r8_2 = arg2
int64_t* r15 = &r8_2[6]
int32_t result = *(arg1 + 0x78)
int32_t rdx_1
rdx_1.b = *(arg1 + 0x38) != 0
int32_t rdx_3 = rdx_1 + r8_2[8] + result

if (rdx_3 s> *(r15 + 0xc))
    sub_1405a5310(r15, rdx_3)
    result = *(arg1 + 0x78)
    r8_2 = arg2

void* var_a8 = rdi
int32_t rdi_2 = 0
int32_t* var_b8 = r8_2
void** var_b0 = &arg_8

if (result s> 0)
    int32_t rsi_1 = 1
    int32_t* r12_1 = 4
    
    do
        int32_t r14_1 = rdi_2
        
        if (rsi_1 s< 0 || rsi_1 s>= result)
            rdi_2 = *(arg1 + 0x58)
        else
            rdi_2 = *(r12_1 + *(arg1 + 0x70))
        
        if (r14_1 s< rdi_2)
            int32_t rax_9 = data_143dbb200
            int64_t zmm0 = data_143dbb1f8.q
            int32_t var_98 = var_98 & 0xfffffffe
            char var_4e
            char var_4e_1 = var_4e & 0xfc
            int32_t var_68_1 = rax_9
            int32_t var_74_1 = rax_9
            int64_t var_60
            __builtin_memset(&var_60, 0, 0x12)
            int64_t var_94_1 = 0
            int32_t var_8c_1 = 0xffffffff
            int32_t var_88_1 = 0
            int32_t var_84_1 = 0xffffffff
            int32_t var_80_1 = 0
            int64_t var_70_1 = zmm0
            int64_t var_7c_1 = zmm0
            char var_64_1 = 0
            
            if (((r8_2[0x12] u>> 3).b & 1) == 0)
                void* rdx_6
                
                if (arg_8 == 0)
                    rdx_6 = nullptr
                else
                    void* rax_15 = sub_14269ce80()
                    
                    if (rax_15 == 0)
                        rdx_6 = nullptr
                    else
                        rdx_6 = arg_8
                        int64_t rax_16 = sx.q(*(rax_15 + 0x38))
                        
                        if (rax_16.d s> *(rdx_6 + 0x38)
                                || *(*(rdx_6 + 0x30) + (rax_16 << 3)) != rax_15 + 0x30)
                            rdx_6 = nullptr
                
                sub_141dcd870(&var_98, arg1 + 0x50, r14_1, rdi_2, arg3, rdx_6)
            else
                void* rdx_4
                
                if (arg_8 == 0)
                    rdx_4 = nullptr
                else
                    void* rax_12 = sub_14269ce80()
                    
                    if (rax_12 == 0)
                        rdx_4 = nullptr
                    else
                        rdx_4 = arg_8
                        int64_t rax_13 = sx.q(*(rax_12 + 0x38))
                        
                        if (rax_13.d s> *(rdx_4 + 0x38)
                                || *(*(rdx_4 + 0x30) + (rax_13 << 3)) != rax_12 + 0x30)
                            rdx_4 = nullptr
                
                sub_141dcda00(&var_98, arg1 + 0x50, r14_1, rdi_2, rdx_4)
            
            var_4e = var_4e_1 | 1
            int64_t r14_2 = sx.q(r15[1].d)
            int32_t rax_19 = (r14_2 + 1).d
            r15[1].d = rax_19
            
            if (rax_19 s> *(r15 + 0xc))
                sub_1405c5060(r15)
            
            sub_141db6cf0(r14_2 * 0x50 + *r15, &var_98)
            r8_2 = arg2
            int32_t rax_20 = *r8_2
            int32_t rax_21 = r8_2[0x12]
            *r8_2 = (((var_98 | rax_20) ^ rax_20) & 1) ^ rax_20
            int32_t rcx_23 = ((((zx.d(var_4e) * 2) | rax_21) ^ rax_21) & 2) ^ rax_21
            r8_2[0x12] = rcx_23
            r8_2[0x12] = ((((zx.d(var_4e) * 2) | rcx_23) ^ rcx_23) & 4) ^ rcx_23
            int64_t rcx_24 = var_60
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
                r8_2 = arg2
        
        result = *(arg1 + 0x78)
        rsi_1 += 1
        r12_1 = &r12_1[1]
    while (rsi_1 s<= result)

int32_t r9_3 = *(arg1 + 0x38)

if (r9_3 s<= 0)
    return result

return sub_142645f90(&var_b8, arg1 + 0x30, 0, r9_3 - 1)
