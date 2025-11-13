// 函数: sub_141f76d00
// 地址: 0x141f76d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = data_143f56338
char arg_10

if (r9 == 0 || (*(r9 + 0x68) s<= 0 && *(r9 + 0xa0) - *(r9 + 0xcc) s<= 0 && *(r9 + 0x10) s<= 0
        && *(r9 + 0x6c) s<= 0))
    arg_10 = 0
else
    arg_10 = 1

int32_t rsi = arg2[1].d
int32_t rsi_1 = rsi - 1

if (rsi - 1 s< 0)
    return 

int64_t r15_1 = sx.q(rsi_1) << 3
int64_t r12_1 = r15_1
int64_t rbp_2 = sx.q(rsi_1 + 1) << 3
int32_t temp1_1

do
    int64_t* rbx_1 = *(r15_1 + *arg2)
    void* rdi_1 = rbx_1[0x14]
    
    if (rdi_1 == 0)
    label_141f76dd5:
        uint64_t rax = rbx_1[0x15]
        
        if (rax == 0)
            rax = sub_141ee69e0(rbx_1)
        
        if (rax == arg1 && (arg_10 == 0 || rbx_1[0x44].b == 1))
            if (rbx_1[0x44].b != 1 || rbx_1[0x45] != 0)
                void* var_48_1
                int64_t rax_17
                void* rdx_4
                int64_t r9_3
                
                if (arg3 == 0)
                    int64_t* rdi_5 = rbx_1[0x64]
                    
                    if (rdi_5 == 0)
                    label_141f76fef:
                        void*** rax_22 = j_sub_140a82f30(0x70)
                        
                        if (rax_22 != 0)
                            rax_22[1].d = 0xffffffff
                            *(rax_22 + 0xc) = 4
                            __builtin_memset(&rax_22[2], 0, 0x18)
                            rax_22[5] = -0x3810000020000000
                            __builtin_memset(&rax_22[6], 0, 0x14)
                            *rax_22 = &data_14327d598
                            rax_22[9] = &data_14327d5f0
                            *(rax_22 + 0x44) = 0
                            *(rax_22 + 0x46) = 0
                            rax_22[0xa] = 0
                            rax_22[0xb].d = 0
                            rax_22[0xc] = 0
                            rax_22[0xd].d = 0
                        
                        int64_t* rdi_7 = rbx_1[0x64]
                        rbx_1[0x64] = rax_22
                        
                        if (rax_22 != 0)
                            rax_22[0xd].d += 1
                        
                        bool cond:0_1 = rdi_7 == 0
                        
                        if (rdi_7 != 0)
                            int32_t temp5_1 = rdi_7[0xd].d
                            rdi_7[0xd].d -= 1
                            cond:0_1 = temp5_1 == 1
                            
                            if (temp5_1 == 1)
                                sub_141997f50(rdi_7)
                                sub_141997870(&rdi_7[9])
                        
                        int32_t r9_2 = *(rbx_1 + 0x234)
                        uint64_t rflags_3
                        int32_t temp0_3
                        temp0_3, rflags_3 = _bit_scan_reverse(r9_2)
                        int32_t rdx_5
                        
                        rdx_5 = cond:0_1 ? 0x20 : 0x1f - temp0_3
                        
                        int32_t rdx_7 = rdx_5 << 0x1a s>> 0x1f
                        uint64_t rflags_4
                        int32_t temp0_4
                        temp0_4, rflags_4 = _bit_scan_reverse(r9_2 - 1)
                        int32_t r8_1
                        
                        if (rdx_7 == 0)
                            r8_1 = 0x20
                        else
                            r8_1 = 0x1f - temp0_4
                        
                        void* rcx_18 = rbx_1[0x64]
                        *(rcx_18 + 0x54) = ((0x20 - r8_1) & not.d(rdx_7)) + 1
                        *(rcx_18 + 0x50) = r9_2
                        *(rcx_18 + 0x58) = 0xa
                        sub_141997e80(rbx_1[0x64])
                        sub_141ee8490(rbx_1)
                    else
                        (*(*rdi_5 + 0x48))(rdi_5)
                        (*(*rdi_5 + 0x40))(rdi_5)
                        int64_t* rdi_6 = rbx_1[0x64]
                        
                        if (rdi_6 == 0)
                            goto label_141f76fef
                        
                        if ((*(*rdi_6 + 0x40))(rdi_6) != *(rbx_1 + 0x234))
                            goto label_141f76fef
                    
                    r9_3 = rbx_1[0x63]
                    int64_t var_40_2 = 0
                    rdx_4 = &rbx_1[0x78]
                    var_48_1 = &rbx_1[0x66]
                    rax_17 = rbx_1[0x64]
                else
                    int64_t* rdi_2 = rbx_1[0x4d]
                    
                    if (rdi_2 == 0)
                    label_141f76e72:
                        void*** rax_10 = j_sub_140a82f30(0x70)
                        
                        if (rax_10 != 0)
                            rax_10[1].d = 0xffffffff
                            *(rax_10 + 0xc) = 4
                            __builtin_memset(&rax_10[2], 0, 0x18)
                            rax_10[5] = -0x3810000020000000
                            __builtin_memset(&rax_10[6], 0, 0x14)
                            *rax_10 = &data_14327d598
                            rax_10[9] = &data_14327d5f0
                            *(rax_10 + 0x44) = 0
                            *(rax_10 + 0x46) = 0
                            rax_10[0xa] = 0
                            rax_10[0xb].d = 0
                            rax_10[0xc] = 0
                            rax_10[0xd].d = 0
                        
                        int64_t* rdi_4 = rbx_1[0x4d]
                        rbx_1[0x4d] = rax_10
                        
                        if (rax_10 != 0)
                            rax_10[0xd].d += 1
                        
                        bool cond:1_1 = rdi_4 == 0
                        
                        if (rdi_4 != 0)
                            int32_t temp6_1 = rdi_4[0xd].d
                            rdi_4[0xd].d -= 1
                            cond:1_1 = temp6_1 == 1
                            
                            if (temp6_1 == 1)
                                sub_141997f50(rdi_4)
                                sub_141997870(&rdi_4[9])
                        
                        int32_t r9_1 = *(rbx_1 + 0x234)
                        uint64_t rflags_1
                        int32_t temp0_1
                        temp0_1, rflags_1 = _bit_scan_reverse(r9_1)
                        int32_t rdx
                        
                        rdx = cond:1_1 ? 0x20 : 0x1f - temp0_1
                        
                        int32_t rdx_2 = rdx << 0x1a s>> 0x1f
                        uint64_t rflags_2
                        int32_t temp0_2
                        temp0_2, rflags_2 = _bit_scan_reverse(r9_1 - 1)
                        int32_t r8
                        
                        if (rdx_2 == 0)
                            r8 = 0x20
                        else
                            r8 = 0x1f - temp0_2
                        
                        void* rcx_9 = rbx_1[0x4d]
                        *(rcx_9 + 0x54) = ((0x20 - r8) & not.d(rdx_2)) + 1
                        *(rcx_9 + 0x50) = r9_1
                        *(rcx_9 + 0x58) = 0xa
                        sub_141997e80(rbx_1[0x4d])
                        sub_141ee8490(rbx_1)
                    else
                        (*(*rdi_2 + 0x48))(rdi_2)
                        (*(*rdi_2 + 0x40))(rdi_2)
                        int64_t* rdi_3 = rbx_1[0x4d]
                        
                        if (rdi_3 == 0)
                            goto label_141f76e72
                        
                        if ((*(*rdi_3 + 0x40))(rdi_3) != *(rbx_1 + 0x234))
                            goto label_141f76e72
                    
                    r9_3 = rbx_1[0x45]
                    int64_t var_40_1 = 0
                    rdx_4 = &rbx_1[0x60]
                    var_48_1 = &rbx_1[0x4e]
                    rax_17 = rbx_1[0x4d]
                
                int64_t* rcx_21 = *(arg1 + 0x1b0)
                (*(*rcx_21 + 0xe0))(rcx_21, rbx_1, zx.q(*(rbx_1 + 0x23c)), r9_3, rax_17, rdx_4, 
                    var_48_1, 0)
                arg4 = sub_141997ac0(&rbx_1[0x79], 0, sub_141f758a0(rbx_1), arg4)
                *(rbx_1 + 0x266) = 1
                sub_141ee8490(rbx_1)
            
            int32_t rax_30 = arg2[1].d
            int32_t rcx_26 = rax_30 - rsi_1
            
            if (rcx_26 != 1)
                int64_t rax_29 = *arg2
                memmove(rax_29 + r12_1, rax_29 + rbp_2, (rcx_26 - 1) << 3)
                rax_30 = arg2[1].d
            
            arg2[1].d = rax_30 - 1
            sub_1405c53d0(arg2)
    else
        if (sub_141dc9840(rdi_1) == 0)
            goto label_141f76dd5
        
        if ((*(sub_141dc9840(rdi_1) + 0x1f4) & 0x20) != 0)
            goto label_141f76dd5
    
    rbp_2 -= 8
    r12_1 -= 8
    r15_1 -= 8
    temp1_1 = rsi_1
    rsi_1 -= 1
while (temp1_1 - 1 s>= 0)
