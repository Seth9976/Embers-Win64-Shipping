// 函数: sub_1409806d0
// 地址: 0x1409806d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = arg2
void* r14_1

if (arg1 != 0)
    r14_1 = *(arg1 + 0x228)

if (arg1 == 0 || r14_1 == 0)
    int64_t var_68_1 = 0
    arg2.b = 3
    sub_140d23f50(u"WriteLeaderboardObject - Invalid player state", arg2.b)
else
    int64_t* rsi_1 = *(r14_1 + 0x260)
    int64_t r15_1 = *(r14_1 + 0x258)
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    if (r15_1 == 0)
        int64_t var_70_1 = 0
        arg2.b = 3
        sub_140d23f50(u"WriteLeaderboardObject - Cannot map local player to unique net ID", arg2.b)
    else
        int64_t arg_8 = 0
        void var_60
        int64_t* rax_1
        int512_t zmm1_1
        rax_1, zmm1_1 = sub_140b58170(&var_60, "OnlineSubsystem", 1)
        j_sub_140b3db50()
        char rax_2
        rax_2, arg2 = sub_140b404d0(&data_143de7d78, *rax_1, zmm1_1)
        
        if (rax_2 == 0)
        label_1409808b7:
            int64_t var_78_1 = 0
            arg2.b = 3
            sub_140d23f50(WriteLeaderboardObject - Invalid or uninitialized OnlineSubsystem", 
                arg2.b)
        else
            void var_58
            int64_t rbx_2 = *sub_140b58170(&var_58, "OnlineSubsystem", 1)
            j_sub_140b3db50()
            int64_t* rax_4 = sub_140b3da90(&data_143de7d78, rbx_2)
            int64_t r8_1 = *rax_4
            char rax_5
            rax_5, arg2 = (*(r8_1 + 0x70))(rax_4, 0, r8_1)
            
            if (rax_5 == 0)
                goto label_1409808b7
            
            int64_t arg_18 = 0
            int64_t* rax_6
            rax_6, arg2 = sub_14093f850(&arg_18)
            
            if (rax_6 == 0)
                goto label_1409808b7
            
            int64_t* var_50
            (*(*rax_6 + 0x60))(rax_6, &var_50)
            int64_t* rcx_5 = var_50
            int64_t* var_48
            
            if (rcx_5 != 0)
                char rax_8 = (*(*rcx_5 + 0x50))(rcx_5, r14_1 + 0x278, r15_1, r12)
                int64_t* rcx_6 = var_50
                int64_t r8_3 = *rcx_6
                
                if (rax_8 == 0 || (*(r8_3 + 0x58))(rcx_6, r14_1 + 0x278, r8_3) == 0)
                    r14_1.b = 0
                else
                    r14_1.b = 1
                
                if (var_48 != 0)
                    var_48[1].d -= 1
                    
                    if (var_48[1].d == 1)
                        (**var_48)(var_48)
                        int32_t rbx_4 = *(var_48 + 0xc)
                        *(var_48 + 0xc) -= 1
                        
                        if (rbx_4 == 1)
                            (*(*var_48 + 8))(var_48, zx.q(rbx_4))
                
                if (rsi_1 != 0)
                    rsi_1[1].d -= 1
                    
                    if (rsi_1[1].d == 1)
                        (**rsi_1)(rsi_1)
                        int32_t temp6_1 = *(rsi_1 + 0xc)
                        *(rsi_1 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            int64_t r8_5 = *rsi_1
                            (*(r8_5 + 8))(rsi_1, 1, r8_5)
                
                return zx.q(r14_1.b)
            
            int64_t arg_20 = 0
            sub_140d23f50(WriteLeaderboardObject - Leaderboards not supported by Online Subsystem", 
                3)
            
            if (var_48 != 0)
                var_48[1].d -= 1
                
                if (var_48[1].d == 1)
                    (**var_48)(var_48)
                    int32_t rbx_5 = *(var_48 + 0xc)
                    *(var_48 + 0xc) -= 1
                    
                    if (rbx_5 == 1)
                        (*(*var_48 + 8))(var_48, zx.q(rbx_5))
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp2_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)

uint64_t result
result.b = 0
return result
