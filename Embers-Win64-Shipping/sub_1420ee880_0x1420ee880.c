// 函数: sub_1420ee880
// 地址: 0x1420ee880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0xa0)

if (rdx == 0)
    return 

int32_t rsi_1 = 0
int32_t r12_1 = 0
int32_t r14_1 = 0
uint64_t r15_1 = 0
uint64_t var_68
__builtin_memset(&var_68, 0, 0x20)
int64_t var_60
int64_t var_58
int64_t var_50

if (rdx s> 0)
    sub_140638c50(&var_68, rdx)
    int32_t rdx_1 = *(arg1 + 0xa0)
    r12_1 = var_60:4.d
    rsi_1 = var_60.d
    r15_1 = var_68
    
    if (rdx_1 s> 0)
        sub_140638c50(&var_58, rdx_1)
        r14_1 = var_50.d

int64_t rdi_1 = *(arg1 + 0x240)

if (rdi_1 != 0)
    int64_t rbx_1 = sx.q(rsi_1)
    rsi_1 = (rbx_1 + 1).d
    var_60.d = rsi_1
    
    if (rsi_1 s> r12_1)
        sub_1405a4d70(&var_68)
        r12_1 = var_60:4.d
        rsi_1 = var_60.d
        r15_1 = var_68
    
    *(r15_1 + (rbx_1 << 3)) = rdi_1
    void* rcx_3 = *(arg1 + 0xb8)
    
    if (rcx_3 != 0)
        sub_14242c0c0(rcx_3, *(arg1 + 0x240))

void* rdi_2 = arg1 + 0x98
int64_t arg_10 = 0
int64_t* rcx_4 = *rdi_2
int64_t rdx_4 = 0
int64_t* arg_8 = rcx_4
uint64_t r8_2 = sx.q(*(rdi_2 + 8)) << 3 u>> 3

if (rcx_4 u> &rcx_4[sx.q(*(rdi_2 + 8))])
    r8_2 = 0

if (r8_2 != 0)
    do
        int64_t* rdi_3 = *rcx_4
        
        if (rdi_3 != 0 && rdi_3 != *(arg1 + 0x240))
            int32_t rax_4 = *(rdi_3 + 0xc)
            void* const rax_8
            
            if (rax_4 s>= data_143e1d9b4)
                rax_8 = nullptr
            else
                uint32_t rdx_5 = zx.d(rax_4.w)
                
                if (rax_4 s< 0)
                    rax_4 += 0xffff
                    rdx_5 -= 0x10000
                
                rax_8 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(rdx_5) * 0x18
                rcx_4 = arg_8
                rdx_4 = arg_10
            
            if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0)
                int32_t rbx_2 = *(rdi_3 + 0xec)
                char rax_11 = sub_140b5b8a0(rdi_3[0x1d].d, 0)
                int32_t rcx_7
                rcx_7.b = rbx_2 == 0
                char rax_12
                int32_t rcx_8
                
                if ((rcx_7.b & rax_11) == 0)
                    int32_t rbx_3 = *(rdi_3 + 0xec)
                    rax_12 = sub_140b5b8a0(rdi_3[0x1d].d, 0x11a)
                    rcx_8.b = rbx_3 == 0
                
                char rax_14
                
                if ((rcx_7.b & rax_11) != 0 || (rcx_8.b & rax_12) != 0)
                    if (sub_141dcdc50(rdi_3) != 3)
                        rax_14 = *(rdi_3 + 0x5f)
                    else
                        rax_14 = rdi_3[0x1e].b
                else if (sub_141dcdc50(rdi_3) == 3)
                    rax_14 = rdi_3[0x1e].b
                else
                    rax_14 = *(rdi_3 + 0x5f)
                
                if (rax_14 == 0)
                    int64_t rbx_5 = sx.q(rsi_1)
                    rsi_1 = (rbx_5 + 1).d
                    var_60.d = rsi_1
                    
                    if (rsi_1 s> r12_1)
                        sub_1405a4d70(&var_68)
                        r12_1 = var_60:4.d
                        rsi_1 = var_60.d
                        r15_1 = var_68
                    
                    *(r15_1 + (rbx_5 << 3)) = rdi_3
                else
                    int64_t rbx_4 = sx.q(r14_1)
                    r14_1 = (rbx_4 + 1).d
                    var_50.d = r14_1
                    
                    if (r14_1 s> var_50:4.d)
                        sub_1405a4d70(&var_58)
                        r14_1 = var_50.d
                    
                    *(var_58 + (rbx_4 << 3)) = rdi_3
                    void* rcx_12 = *(arg1 + 0xb8)
                    
                    if (rcx_12 != 0)
                        sub_14242c0c0(rcx_12, rdi_3)
                
                rcx_4 = arg_8
                rdx_4 = arg_10
        
        rcx_4 = &rcx_4[1]
        rdx_4 += 1
        arg_8 = rcx_4
        arg_10 = rdx_4
    while (rdx_4 != r8_2)

int64_t rbx_6

if (r14_1 == 0)
    rbx_6 = var_58
else
    int32_t rdx_10 = r14_1 + rsi_1
    
    if (rdx_10 s> r12_1)
        sub_140638c50(&var_68, rdx_10)
        r12_1 = var_60:4.d
        rsi_1 = var_60.d
        r15_1 = var_68
    
    rbx_6 = var_58
    memmove(r15_1 + (sx.q(rsi_1) << 3), rbx_6, r14_1 << 3)
    rsi_1 += r14_1

if (rdi_2 != &var_68)
    int64_t rcx_17 = *rdi_2
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    *rdi_2 = r15_1
    r15_1 = 0
    *(rdi_2 + 8) = rsi_1
    *(rdi_2 + 0xc) = r12_1

if (rbx_6 != 0)
    sub_140a74f90(rbx_6)

if (r15_1 != 0)
    sub_140a74f90(r15_1)
