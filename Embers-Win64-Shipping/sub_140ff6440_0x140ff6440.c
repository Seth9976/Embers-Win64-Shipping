// 函数: sub_140ff6440
// 地址: 0x140ff6440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx
int32_t* var_8 = rbx
void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
uint64_t rdx = zx.q(*(arg1 + 0x17df8))
int64_t* rcx = *(arg1 + 0x140)
int64_t* var_188 = nullptr

if ((*(*rcx + 0x38))(rcx, rdx, &var_188) s>= 0)
    int64_t* rcx_1 = var_188
    void var_178
    
    if ((*(*rcx_1 + 0x40))(rcx_1, &var_178) s>= 0)
        int32_t r15_1 = 0
        
        while (true)
            int64_t* rcx_2 = var_188
            int64_t* var_190 = nullptr
            int32_t rax_7 = (*(*rcx_2 + 0x38))(rcx_2, zx.q(r15_1), &var_190)
            
            if (rax_7 == 0x887a0002)
                int64_t* rcx_17 = var_190
                
                if (rcx_17 != 0)
                    (*(*rcx_17 + 0x10))(rcx_17)
            else
                if (rax_7 s< 0)
                label_140ff6542:
                    int64_t* rcx_5 = var_190
                    
                    if (rcx_5 != 0)
                        (*(*rcx_5 + 0x10))(rcx_5)
                    
                    break
                
                int32_t var_180 = 0x1c
                rbx = &var_180
                int32_t var_17c_1 = 0x57
                int32_t var_198 = 0
                uint64_t rcx_4
                int32_t rdi_1
                
                while (true)
                    int64_t* rcx_3 = var_190
                    rdi_1 = *rbx
                    int32_t rax_9 = (*(*rcx_3 + 0x40))(rcx_3, zx.q(rdi_1), 0, &var_198, 0)
                    rcx_4 = zx.q(var_198)
                    
                    if (rax_9 s>= 0)
                        if (rcx_4.d != 0)
                            break
                    else if (rax_9 + 0x7785fffe u> 1)
                        goto label_140ff6542
                    
                    rbx = &rbx[1]
                    
                    if (rbx == &var_178)
                        rdi_1 = 0x1c
                        break
                
                int64_t rax_13 = 0x1c * rcx_4
                
                if (mulu.dp.q(0x1c, rcx_4) u>> 0x40 != zx.o(0))
                    rax_13 = -1
                
                int64_t rax_14 = j_sub_140a82f30(rax_13)
                int64_t* rcx_10 = var_190
                int32_t rax_15 = (*(*rcx_10 + 0x40))(rcx_10, zx.q(rdi_1), 0, &var_198, rax_14)
                
                if (rax_15 s< 0)
                    int64_t var_1a8_3 = 0
                    sub_140fff020(rax_15, 
                        "Output->GetDisplayModeList(Format, 0, &NumModes, ModeList)", 
                        "D:"
                    "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Device."
                    "cpp", 
                        0x896)
                
                int32_t r10_2 = var_198
                int32_t rbp_1 = 0
                
                if (r10_2 != 0)
                    do
                        rbx = zx.q(rbp_1) * 0x1c + rax_14
                        int32_t r9_3 = *rbx
                        
                        if (r9_3 u<= 0x28f0)
                            int32_t r8_2 = rbx[1]
                            
                            if (r8_2 u<= 0x28f0)
                                if (arg3 != 0)
                                    int32_t rdx_6 = arg2[1].d
                                    int32_t rcx_12 = 0
                                    
                                    if (rdx_6 s> 0)
                                        int32_t* rax_18 = *arg2
                                        
                                        do
                                            if (*rax_18 == r9_3 && rax_18[1] == r8_2)
                                                goto label_140ff66f1
                                            
                                            rcx_12 += 1
                                            rax_18 = &rax_18[3]
                                        while (rcx_12 s< rdx_6)
                                    
                                    goto label_140ff66a5
                                
                                if (rbx[2] u<= rbx[3] * 0x28f0)
                                label_140ff66a5:
                                    int64_t rdi_2 = sx.q(arg2[1].d)
                                    int32_t rax_19 = (rdi_2 + 1).d
                                    arg2[1].d = rax_19
                                    
                                    if (rax_19 s> *(arg2 + 0xc))
                                        sub_14083a7e0(arg2)
                                    
                                    int64_t rax_20 = *arg2
                                    int64_t rcx_14 = rdi_2 * 3
                                    *(rax_20 + (rcx_14 << 2)) = 0
                                    *(rax_20 + (rcx_14 << 2) + 8) = 0
                                    int32_t* r8_3 = *arg2 + (rcx_14 << 2)
                                    *r8_3 = *rbx
                                    r8_3[1] = rbx[1]
                                    r8_3[2] = divu.dp.d(0:(rbx[2]), rbx[3])
                                    r10_2 = var_198
                        
                    label_140ff66f1:
                        rbp_1 += 1
                    while (rbp_1 u< r10_2)
                
                j_sub_140a74f90(rax_14)
                int64_t* rcx_16 = var_190
                r15_1 += 1
                
                if (rcx_16 != 0)
                    (*(*rcx_16 + 0x10))(rcx_16)
                
                if (r15_1 s< 1)
                    continue
            
            rbx.b = 1
            goto label_140ff6554

rbx.b = 0
label_140ff6554:
int64_t* rcx_6 = var_188

if (rcx_6 != 0)
    int64_t rdx_4 = *rcx_6
    (*(rdx_4 + 0x10))(rcx_6, rdx_4)

__security_check_cookie(rax_1 ^ &var_1c8)
return zx.q(rbx.b)
