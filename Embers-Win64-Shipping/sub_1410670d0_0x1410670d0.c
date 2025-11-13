// 函数: sub_1410670d0
// 地址: 0x1410670d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx
int64_t var_10 = rbx
void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
void* r9 = **(arg1 + 0x20)
int64_t* var_198 = nullptr
int64_t* rcx = *(r9 + 0x4d8)

if ((*(*rcx + 0x38))(rcx, zx.q(*(r9 + 0x58)), &var_198) s>= 0)
    int64_t* rcx_1 = var_198
    void var_178
    
    if ((*(*rcx_1 + 0x40))(rcx_1, &var_178) s>= 0)
        int32_t r12_1 = 0
        
        while (true)
            int64_t* rcx_2 = var_198
            int64_t* var_1a0 = nullptr
            int32_t rax_8 = (*(*rcx_2 + 0x38))(rcx_2, zx.q(r12_1), &var_1a0)
            
            if (rax_8 == 0x887a0002)
                int64_t* rcx_17 = var_1a0
                
                if (rcx_17 != 0)
                    (*(*rcx_17 + 0x10))(rcx_17)
                
                rbx.b = 1
                goto label_141067351
            
            if (rax_8 s>= 0)
                int64_t* rcx_3 = var_1a0
                int32_t var_1a8 = 0
                int64_t* var_1b0
                int32_t rax_10 = (*(*rcx_3 + 0x40))(rcx_3, 0x1c, 0, &var_1a8, 0, var_1b0, var_1a8)
                
                if (rax_10 == 0x887a0002)
                label_141067321:
                    int64_t* rcx_12 = var_1a0
                    
                    if (rcx_12 != 0)
                        (*(*rcx_12 + 0x10))(rcx_12)
                    
                    if (r12_1 s< 1)
                        continue
                    
                    rbx.b = 1
                    goto label_141067351
                else if (rax_10 != 0x887a0022)
                    uint64_t rcx_4 = zx.q(var_1a8)
                    int64_t rax_11 = 0x1c * rcx_4
                    
                    if (mulu.dp.q(0x1c, rcx_4) u>> 0x40 != zx.o(0))
                        rax_11 = -1
                    
                    int64_t rax_12 = j_sub_140a82f30(rax_11)
                    int64_t* rcx_6 = var_1a0
                    int32_t rax_13 = (*(*rcx_6 + 0x40))(rcx_6, 0x1c, 0, &var_1a8, rax_12)
                    
                    if (rax_13 s< 0)
                        int64_t var_190 = 0
                        var_1b0 = &var_190
                        int64_t var_188_1 = 0
                        sub_14106a020(rax_13, 
                            "Output->GetDisplayModeList(Format, 0, &NumModes, ModeList)", 
                            "D:"
                        "/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12Device."
                        "cpp", 
                            0x384, nullptr)
                    
                    int32_t r10_2 = var_1a8
                    int32_t r14_1 = 0
                    
                    if (r10_2 != 0)
                        do
                            int32_t* rbx_2 = zx.q(r14_1) * 0x1c + rax_12
                            int32_t r9_3 = *rbx_2
                            
                            if (r9_3 u<= 0x28f0)
                                int32_t r8_2 = rbx_2[1]
                                
                                if (r8_2 u<= 0x28f0)
                                    if (arg3 != 0)
                                        int32_t rdx_3 = arg2[1].d
                                        int32_t rcx_8 = 0
                                        
                                        if (rdx_3 s> 0)
                                            int32_t* rax_16 = *arg2
                                            
                                            do
                                                if (*rax_16 == r9_3 && rax_16[1] == r8_2)
                                                    goto label_141067303
                                                
                                                rcx_8 += 1
                                                rax_16 = &rax_16[3]
                                            while (rcx_8 s< rdx_3)
                                        
                                        goto label_1410672b5
                                    
                                    if (rbx_2[2] u<= rbx_2[3] * 0x28f0)
                                    label_1410672b5:
                                        int64_t rdi_1 = sx.q(arg2[1].d)
                                        int32_t rax_17 = (rdi_1 + 1).d
                                        arg2[1].d = rax_17
                                        
                                        if (rax_17 s> *(arg2 + 0xc))
                                            sub_14083a7e0(arg2)
                                        
                                        int64_t rax_18 = *arg2
                                        int64_t rcx_10 = rdi_1 * 3
                                        *(rax_18 + (rcx_10 << 2)) = 0
                                        *(rax_18 + (rcx_10 << 2) + 8) = 0
                                        int32_t* r8_3 = *arg2 + (rcx_10 << 2)
                                        *r8_3 = *rbx_2
                                        r8_3[1] = rbx_2[1]
                                        r8_3[2] = divu.dp.d(0:(rbx_2[2]), rbx_2[3])
                                        r10_2 = var_1a8
                            
                        label_141067303:
                            r14_1 += 1
                        while (r14_1 u< r10_2)
                    
                    j_sub_140a74f90(rax_12)
                    r12_1 += 1
                    goto label_141067321
            
            int64_t* rcx_13 = var_1a0
            
            if (rcx_13 != 0)
                (*(*rcx_13 + 0x10))(rcx_13)
            
            break

rbx.b = 0
label_141067351:
int64_t* rcx_14 = var_198

if (rcx_14 != 0)
    int64_t rdx_6 = *rcx_14
    (*(rdx_6 + 0x10))(rcx_14, rdx_6)

__security_check_cookie(rax_1 ^ &var_1d8)
return zx.q(rbx.b)
