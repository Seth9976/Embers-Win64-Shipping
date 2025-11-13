// 函数: sub_14097e1c0
// 地址: 0x14097e1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2
int32_t rsi = 0
*(arg1 + 0x70) = 1
void* const rax_1

if (arg2 == 0)
    rax_1 = nullptr
else
    rax_1 = (*(*arg2 + 0x150))(arg2)

sub_140d3a3a0(arg1 + 0x7c, rax_1)
void* r14_1

if (rbx != 0)
    r14_1 = rbx[0x45]

int32_t result

if (rbx == 0 || r14_1 == 0)
    int64_t var_98_1 = 0
    result = sub_140d23f50(ULeaderboardQueryCallbackProxy::TriggerQuery - Invalid player state", 3)
else
    int64_t rax_2 = *(r14_1 + 0x258)
    int64_t* r14_2 = *(r14_1 + 0x260)
    
    if (r14_2 != 0)
        r14_2[1].d += 1
    
    if (rax_2 == 0)
        int64_t var_a0_1 = 0
        result = sub_140d23f50(
            ULeaderboardQueryCallbackProxy::TriggerQuery - Cannot map local player to uniqu", 3)
    else
        int64_t arg_8 = 0
        void var_58
        int64_t* rax_3
        int512_t zmm1_1
        rax_3, zmm1_1 = sub_140b58170(&var_58, "OnlineSubsystem", 1)
        j_sub_140b3db50()
        int64_t var_a8_1
        
        if (sub_140b404d0(&data_143de7d78, *rax_3, zmm1_1) == 0)
            var_a8_1 = 0
            result = sub_140d23f50(ULeaderboardQueryCallbackProxy::TriggerQuery - Invalid or uninitialized OnlineSubsystem", 
                3)
        else
            void var_50
            int64_t rbx_2 = *sub_140b58170(&var_50, "OnlineSubsystem", 1)
            j_sub_140b3db50()
            int64_t* rax_6 = sub_140b3da90(&data_143de7d78, rbx_2)
            int64_t r8 = *rax_6
            
            if ((*(r8 + 0x70))(rax_6, 0, r8) == 0)
                var_a8_1 = 0
                result = sub_140d23f50(ULeaderboardQueryCallbackProxy::TriggerQuery - Invalid or "
                "uninitialized OnlineSubsystem", 3)
            else
                int64_t var_b8 = 0
                int64_t* rax_8 = sub_14093f850(&var_b8)
                
                if (rax_8 == 0)
                    var_a8_1 = 0
                    result = sub_140d23f50(ULeaderboardQueryCallbackProxy::TriggerQuery - Invalid or "
                    "uninitialized OnlineSubsystem", 3)
                else
                    int64_t r8_1 = *rax_8
                    int64_t* var_90
                    (*(r8_1 + 0x60))(rax_8, &var_90, r8_1)
                    
                    if (var_90 == 0)
                        int64_t var_b0_1 = 0
                        result = sub_140d23f50(ULeaderboardQueryCallbackProxy::TriggerQuery - "
                        "Leaderboards not supported by Online Subsystem", 3)
                    else
                        *(arg1 + 0x70) = 0
                        *(arg1 + 0x74) = arg3
                        int64_t rax_9 = j_sub_140a82f30(0x38)
                        int64_t rdi_1 = rax_9
                        
                        if (rax_9 == 0)
                            rdi_1 = 0
                        else
                            __builtin_memset(rax_9, 0, 0x34)
                        
                        void*** rax_10 = j_sub_140a82f30(0x18)
                        void*** rbx_3 = rax_10
                        
                        if (rax_10 == 0)
                            rbx_3 = nullptr
                        else
                            rax_10[1].d = 1
                            *(rax_10 + 0xc) = 1
                            *rbx_3 = &data_142e22dd8
                            rbx_3[2] = rdi_1
                        
                        int64_t var_c8 = rdi_1
                        void*** var_c0 = rbx_3
                        
                        if (arg1 + 0x60 != &var_c8)
                            *(arg1 + 0x60) = rdi_1
                            var_c8 = 0
                            sub_1405aeff0(arg1 + 0x68, &var_c0)
                            rbx_3 = var_c0
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d -= 1
                            
                            if (rbx_3[1].d == 1)
                                (**rbx_3)(rbx_3)
                                int32_t rax_13 = *(rbx_3 + 0xc)
                                *(rbx_3 + 0xc) -= 1
                                
                                if (rax_13 == 1)
                                    (*rbx_3)[1](rbx_3, 1)
                        
                        **(arg1 + 0x60) = *(arg1 + 0x74)
                        *(*(arg1 + 0x60) + 8) = *(arg1 + 0x74)
                        void* rbx_4 = *(arg1 + 0x60)
                        int64_t rdi_2 = sx.q(*(rbx_4 + 0x18))
                        int32_t rax_17 = (rdi_2 + 1).d
                        *(rbx_4 + 0x18) = rax_17
                        
                        if (rax_17 s> *(rbx_4 + 0x1c))
                            sub_14083a7e0(rbx_4 + 0x10)
                        
                        int64_t* rdx_9 = *(rbx_4 + 0x10) + rdi_2 * 0xc
                        
                        if (rdx_9 != 0)
                            *rdx_9 = *(arg1 + 0x74)
                            rdx_9[1].d = arg4
                        
                        void*** rax_21 = sub_140a84c80(0, 0x30, 0)
                        void*** var_68 = rax_21
                        
                        if (rax_21 != 0)
                            *rax_21 = &data_142e33668
                            sub_140d3a3a0(&rax_21[1], arg1)
                            rax_21[2] = sub_14096eed0
                            rax_21[4] = sub_140a387b0()
                            *rax_21 = &data_142e336c0
                        
                        if (&var_68 != arg1 + 0x48)
                            if (rax_21 != 0)
                                (*rax_21)[8](rax_21, arg1 + 0x48)
                            else if (*(arg1 + 0x50) != 0)
                                int64_t* rcx_16 = *(arg1 + 0x48)
                                
                                if (rcx_16 != 0)
                                    (*(*rcx_16 + 0x38))(rcx_16, 0)
                                    int64_t rcx_17 = *(arg1 + 0x48)
                                    
                                    if (rcx_17 != 0)
                                        *(arg1 + 0x48) = sub_140a84c80(rcx_17, 0, 0)
                                    
                                    *(arg1 + 0x50) = 0
                        
                        if (rax_21 != 0)
                            (*rax_21)[7](rax_21, 0)
                            void*** rax_27 = sub_140a84c80(rax_21, 0, 0)
                            var_68 = rax_27
                            
                            if (rax_27 != 0)
                                sub_140a74f90(rax_27)
                        
                        int64_t* rcx_21 = var_90
                        void var_48
                        *(arg1 + 0x58) = *(*(*rcx_21 + 0x28))(rcx_21, &var_48, arg1 + 0x48)
                        int32_t rcx_23 = 0
                        int32_t var_cc_1 = 0
                        int64_t var_d8 = 0
                        
                        if (r14_2 != 0)
                            r14_2[1].d += 1
                            rcx_23 = var_cc_1
                            rsi = 0
                        
                        int32_t var_d0_2 = rsi + 1
                        
                        if (rsi + 1 s> rcx_23)
                            sub_1405a4f90(&var_d8)
                        
                        int64_t* rax_33 = (sx.q(rsi) << 4) + var_d8
                        *rax_33 = rax_2
                        rax_33[1] = r14_2
                        
                        if (r14_2 != 0)
                            int32_t rax_34 = r14_2[1].d
                            r14_2[1].d = rax_34
                            
                            if (rax_34 == 0)
                                (**r14_2)(r14_2)
                                int32_t temp3_1 = *(r14_2 + 0xc)
                                *(r14_2 + 0xc) -= 1
                                
                                if (temp3_1 == 1)
                                    (*(*r14_2 + 8))(r14_2, 1)
                        
                        int64_t var_78 = *(arg1 + 0x60)
                        int64_t* rax_38 = *(arg1 + 0x68)
                        
                        if (rax_38 != 0)
                            rax_38[1].d += 1
                        
                        int64_t* rcx_28 = var_90
                        (*(*rcx_28 + 8))(rcx_28, &var_d8, &var_78)
                        
                        if (rax_38 != 0)
                            rax_38[1].d -= 1
                            
                            if (rax_38[1].d == 1)
                                (**rax_38)(rax_38)
                                int32_t rax_42 = *(rax_38 + 0xc)
                                *(rax_38 + 0xc) -= 1
                                
                                if (rax_42 == 1)
                                    (*(*rax_38 + 8))(rax_38, 1)
                        
                        result = sub_140627040(&var_d8)
                    
                    int64_t* var_88
                    
                    if (var_88 != 0)
                        result = var_88[1].d
                        var_88[1].d -= 1
                        
                        if (result == 1)
                            result = (**var_88)(var_88)
                            int32_t r12_1 = *(var_88 + 0xc)
                            *(var_88 + 0xc) -= 1
                            
                            if (r12_1 == 1)
                                result = (*(*var_88 + 8))(var_88, zx.q(r12_1))
        rbx = arg2
    
    if (r14_2 != 0)
        r14_2[1].d -= 1
        
        if (r14_2[1].d == 1)
            result = (**r14_2)(r14_2)
            int32_t temp2_1 = *(r14_2 + 0xc)
            *(r14_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                result = (*(*r14_2 + 8))(r14_2, 1)

if (*(arg1 + 0x70) != 0 && rbx != 0)
    return sub_14096eed0(arg1, 0)

return result
