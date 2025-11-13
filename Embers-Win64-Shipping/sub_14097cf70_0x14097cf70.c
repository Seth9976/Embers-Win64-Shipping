// 函数: sub_14097cf70
// 地址: 0x14097cf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
*(arg1 + 0x60) = 1
void* rsi_1

if (arg2 != 0)
    rsi_1 = *(arg2 + 0x228)

int32_t result

if (arg2 == 0 || rsi_1 == 0)
    int64_t var_88_1 = 0
    arg2.b = 3
    result =
        sub_140d23f50(ULeaderboardQueryCallbackProxy::TriggerFlush - Invalid player state", arg2.b)
else
    int64_t* rsi_2 = *(rsi_1 + 0x260)
    
    if (rsi_2 != 0)
        rsi_2[1].d += 1
    
    if (*(rsi_1 + 0x258) == 0)
        int64_t var_90_1 = 0
        arg2.b = 3
        result = sub_140d23f50(ULeaderboardFlushCallbackProxy::TriggerFlush - Cannot map local player to unique net ID", 
            arg2.b)
    else
        int64_t arg_8 = 0
        void var_58
        int64_t* rax_1
        int512_t zmm1_1
        rax_1, zmm1_1 = sub_140b58170(&var_58, "OnlineSubsystem", 1)
        j_sub_140b3db50()
        char rax_2
        rax_2, arg2 = sub_140b404d0(&data_143de7d78, *rax_1, zmm1_1)
        
        if (rax_2 == 0)
        label_14097d1bb:
            int64_t var_98_1 = 0
            arg2.b = 3
            result = sub_140d23f50(ULeaderboardFlushCallbackProxy::TriggerFlush - Invalid or uninitialized OnlineSubsystem", 
                arg2.b)
        else
            void var_50
            int64_t rbx_2 = *sub_140b58170(&var_50, "OnlineSubsystem", 1)
            j_sub_140b3db50()
            int64_t* rax_4 = sub_140b3da90(&data_143de7d78, rbx_2)
            int64_t r8 = *rax_4
            char rax_5
            rax_5, arg2 = (*(r8 + 0x70))(rax_4, 0, r8)
            
            if (rax_5 == 0)
                goto label_14097d1bb
            
            int64_t arg_10 = 0
            int64_t* rax_6
            rax_6, arg2 = sub_14093f850(&arg_10)
            
            if (rax_6 == 0)
                goto label_14097d1bb
            
            int64_t r8_1 = *rax_6
            int64_t* var_80
            (*(r8_1 + 0x60))(rax_6, &var_80, r8_1)
            
            if (var_80 == 0)
                int64_t arg_20 = 0
                result = sub_140d23f50(ULeaderboardFlushCallbackProxy::TriggerFlush - Leaderboards "
                "not supported by Online Subsystem", 3)
            else
                void*** rax_7 = sub_140a84c80(0, 0x30, 0)
                void*** var_68 = rax_7
                
                if (rax_7 != 0)
                    *rax_7 = &data_142e335b8
                    sub_140d3a3a0(&rax_7[1], arg1)
                    rax_7[2] = sub_14096cb80
                    rax_7[4] = sub_140a387b0()
                    *rax_7 = &data_142e33610
                
                if (&var_68 != arg1 + 0x48)
                    if (rax_7 != 0)
                        (*rax_7)[8](rax_7, arg1 + 0x48)
                    else if (*(arg1 + 0x50) != 0)
                        int64_t* rcx_7 = *(arg1 + 0x48)
                        
                        if (rcx_7 != 0)
                            (*(*rcx_7 + 0x38))(rcx_7, 0)
                            int64_t rcx_8 = *(arg1 + 0x48)
                            
                            if (rcx_8 != 0)
                                *(arg1 + 0x48) = sub_140a84c80(rcx_8, 0, 0)
                            
                            *(arg1 + 0x50) = 0
                
                if (rax_7 != 0)
                    (*rax_7)[7](rax_7, 0)
                    void*** rax_13 = sub_140a84c80(rax_7, 0, 0)
                    var_68 = rax_13
                    
                    if (rax_13 != 0)
                        sub_140a74f90(rax_13)
                
                int64_t* rcx_12 = var_80
                void var_48
                *(arg1 + 0x58) = *(*(*rcx_12 + 0x60))(rcx_12, &var_48, arg1 + 0x48)
                int64_t* rcx_14 = var_80
                result = (*(*rcx_14 + 0x58))(rcx_14, &arg_18)
            
            int64_t* var_78
            
            if (var_78 != 0)
                result = var_78[1].d
                var_78[1].d -= 1
                
                if (result == 1)
                    result = (**var_78)(var_78)
                    int32_t rdi_1 = *(var_78 + 0xc)
                    *(var_78 + 0xc) -= 1
                    
                    if (rdi_1 == 1)
                        result = (*(*var_78 + 8))(var_78, zx.q(rdi_1))
    
    if (rsi_2 != 0)
        rsi_2[1].d -= 1
        
        if (rsi_2[1].d == 1)
            result = (**rsi_2)(rsi_2)
            int32_t temp2_1 = *(rsi_2 + 0xc)
            *(rsi_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                result = (*(*rsi_2 + 8))(rsi_2, 1)

if (*(arg1 + 0x60) == 0)
    return result

int64_t rbx_5 = arg_18
sub_140975370(arg1)
int64_t var_70 = rbx_5
return sub_1405a9f90(arg1 + 0x38, &var_70)
