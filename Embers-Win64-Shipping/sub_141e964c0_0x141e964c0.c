// 函数: sub_141e964c0
// 地址: 0x141e964c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t rsi = arg4
void* rdi = arg3
void** rbx = arg2
void* rbp = arg1
void* rax_1
int64_t rax_2
void* r10_1

if (arg3 != 0)
    rax_1, arg2 = sub_140bdf2e0()
    r10_1 = *(rdi + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

void* const rax_4

if (arg3 == 0 || rax_2.d s> *(r10_1 + 0x38) || *(*(r10_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rax_4 = nullptr
else
    rax_4 = rdi

int64_t* i = *(rdi + 0x70)
void* const var_50 = rax_4

while (i != 0)
    int64_t rcx_1 = i[8]
    
    if (not(test_bit(rcx_1, 0xe)) || (rax_4 != 0 && ((*(rax_4 + 0xcc) u>> 0xa).b & 1) != 0))
        arg2.b = 0
    else
        arg2.b = 1
    
    if (arg2.b == 0 && ((rcx_1 & 0x800000202000) == 0 || (0x8000080000 & rcx_1) == 0))
        int32_t r8 = i[7].d
        int32_t r12_1 = 0
        
        if (r8 s> 0)
            do
                int32_t rdx = *(i + 0x3c)
                int64_t r10_2 = sx.q(*(i + 0x4c))
                int64_t r9_1 = sx.q(rdx * r12_1) + r10_2
                void* r13_1 = r9_1 + rsi
                void** r15_1
                
                if (arg5 == 0 || rdx * r8 + r10_2.d s> *(rdi + 0x58))
                    r15_1 = nullptr
                else
                    r15_1 = r9_1 + arg5
                
                int64_t rcx_2 = *(i[1] + 0x10)
                void** var_68
                int32_t var_60
                
                if (((rcx_2 u>> 0x14).b & 1) != 0)
                    void** rax_15 = j_sub_140a82f30(0x20)
                    void* const rdi_1 = rax_15
                    
                    if (rax_15 == 0)
                        rdi_1 = nullptr
                    else
                        *rax_15 = i
                        rax_15[1].d = r12_1
                        *(rdi_1 + 0x10) = 0
                        *(rdi_1 + 0x18) = 0
                    
                    int64_t* rsi_1 = rbp + 0x2f0
                    *rbx = rdi_1
                    int64_t rbp_1 = sx.q(rsi_1[1].d)
                    int32_t rax_16 = (rbp_1 + 1).d
                    rsi_1[1].d = rax_16
                    
                    if (rax_16 s> *(rsi_1 + 0xc))
                        sub_140638870(rsi_1)
                    
                    *(*rsi_1 + (rbp_1 << 3)) = rdi_1
                    int64_t* rdi_2 = nullptr
                    void* rax_18 = i[0xf]
                    
                    if (rax_18 != 0)
                        rdi_2 = *(rax_18 + 0xb8)
                    
                    bool var_58 = false
                    bool rax_23
                    
                    if (rdi_2 == 0)
                    label_141e966a6:
                        rbp = arg1
                        var_68 = r15_1
                        rax_23, arg2 =
                            sub_141e964c0(rbp, *rbx + 0x10, i[0xf], r13_1, var_68, var_60)
                        rax_23 = rax_23 == 0
                        var_58 = rax_23
                    else
                        if ((*(*rdi_2 + 0xb0))(rdi_2) == 0)
                            goto label_141e966a6
                        
                        var_68 = &var_58
                        char rax_22
                        rax_22, arg2 = (*(*rdi_2 + 0xb8))(rdi_2, r13_1, r15_1, 0, var_68, var_60)
                        
                        if (rax_22 == 0)
                            goto label_141e966a6
                        
                        rax_23 = var_58
                        rbp = arg1
                    
                    if (rax_23 == 0)
                        goto label_141e968ac
                    
                    int64_t rax_24 = sx.q(*(rbp + 0x2f8))
                    int32_t rdi_3 = (rax_24 - 1).d
                    j_sub_140a74f90(*((rax_24 << 3) + -fffffffffffffff8 + *rsi_1))
                    int32_t rax_26 = rsi_1[1].d
                    int32_t rcx_9 = rax_26 - rdi_3
                    
                    if (rcx_9 != 1)
                        int64_t r9_3 = *rsi_1
                        memmove((rax_24 << 3) + -fffffffffffffff8 + r9_3, 
                            r9_3 + (sx.q(rdi_3 + 1) << 3), (rcx_9 - 1) << 3)
                        rax_26 = rsi_1[1].d
                    
                    rsi_1[1].d = rax_26 - 1
                    sub_1405c53d0(rsi_1)
                    *rbx = nullptr
                    rdi = arg3
                    rsi = arg4
                else if (((rcx_2 u>> 0x15).b & 1) == 0)
                    char rax_39
                    rax_39, arg2 = (*(*i + 0x80))(i, r13_1, r15_1, 0, var_68, var_60)
                    
                    if (rax_39 == 0)
                        void** rax_40
                        rax_40, arg2 = j_sub_140a82f30(0x20)
                        void** rdi_6 = rax_40
                        
                        if (rax_40 == 0)
                            rdi_6 = nullptr
                        else
                            *rax_40 = i
                            rax_40[1].d = r12_1
                            rax_40[2] = 0
                            rax_40[3] = 0
                        
                        *rbx = rdi_6
                        int64_t rbp_3 = sx.q(*(rbp + 0x2f8))
                        int32_t rax_41 = (rbp_3 + 1).d
                        *(rbp + 0x2f8) = rax_41
                        
                        if (rax_41 s> *(rbp + 0x2fc))
                            sub_140638870(rbp + 0x2f0)
                        
                        *(*(rbp + 0x2f0) + (rbp_3 << 3)) = rdi_6
                        rbp = arg1
                        goto label_141e968ac
                else
                    void** rax_29 = j_sub_140a82f30(0x20)
                    void** rdi_4 = rax_29
                    
                    if (rax_29 == 0)
                        rdi_4 = nullptr
                    else
                        *rax_29 = i
                        rax_29[1].d = r12_1
                        rdi_4[2] = 0
                        rdi_4[3] = 0
                    
                    void* rsi_2 = rbp + 0x2f0
                    *rbx = rdi_4
                    int64_t rbp_2 = sx.q(*(rsi_2 + 8))
                    int32_t rax_30 = (rbp_2 + 1).d
                    *(rsi_2 + 8) = rax_30
                    
                    if (rax_30 s> *(rsi_2 + 0xc))
                        sub_140638870(rsi_2)
                    
                    var_60 = 0
                    var_68 = r15_1
                    *(*rsi_2 + (rbp_2 << 3)) = rdi_4
                    rbp = arg1
                    char rax_32
                    rax_32, arg2 = sub_141e95ff0(rbp, i, *rbx + 0x10, r13_1, var_68, 0)
                    
                    if (rax_32 != 0)
                    label_141e968ac:
                        rbx = *rbx + 0x18
                        rdi = arg3
                        rsi = arg4
                    else
                        int64_t rax_33 = sx.q(*(rbp + 0x2f8))
                        int32_t rdi_5 = (rax_33 - 1).d
                        j_sub_140a74f90(*((rax_33 << 3) + -fffffffffffffff8 + *rsi_2))
                        int32_t rax_35 = *(rsi_2 + 8)
                        int32_t rcx_18 = rax_35 - rdi_5
                        
                        if (rcx_18 != 1)
                            int64_t r9_5 = *rsi_2
                            memmove((rax_33 << 3) + -fffffffffffffff8 + r9_5, 
                                r9_5 + (sx.q(rdi_5 + 1) << 3), (rcx_18 - 1) << 3)
                            rax_35 = *(rsi_2 + 8)
                        
                        *(rsi_2 + 8) = rax_35 - 1
                        sub_1405c53d0(rsi_2)
                        *rbx = nullptr
                        rdi = arg3
                        rsi = arg4
                r8 = i[7].d
                r12_1 += 1
            while (r12_1 s< r8)
    
    i = i[0xb]
    rax_4 = var_50

int64_t* result
result.b = *arg_10 != 0
return result
