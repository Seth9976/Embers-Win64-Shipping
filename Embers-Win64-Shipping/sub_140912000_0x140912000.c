// 函数: sub_140912000
// 地址: 0x140912000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8
int64_t* rax_1 = sub_140fc6160(sub_140b58260(&arg_8, u"WINDOWS", 1))
int64_t r8 = *rax_1
int64_t* var_58
(*(r8 + 0x90))(rax_1, &var_58, r8)
int64_t r12 = *(arg1 + 0x18)
int64_t* var_50

while (*(arg1 + 0x28) == 0)
    int64_t* rcx_3 = *(arg1 + 0x20)
    arg_8 = 0
    
    if ((*(*rcx_3 + 0x30))(rcx_3, &arg_8, arg1 + 0x18) == 0)
        sub_140b73230(_mm_cvtepi32_ps(zx.o((*(arg1 + 0x18) s/ 0x989680 s% 0x3c).d)))
    else if (arg_8 != 0)
        int64_t var_68 = 0
        int32_t var_60_1 = 0
        sub_1405947f0(&var_68, 0x14)
        int32_t rax_4 = var_60_1 + 0x14
        var_60_1 = rax_4
        
        if (rax_4 s> 0)
            sub_140594770(&var_68)
        
        UnDecorator::getReferenceType(var_68, u"FTcpListener client", 0x28)
        int64_t* rcx_7 = *(arg1 + 0x20)
        int64_t* rax_6 = (*(*rcx_7 + 0x40))(rcx_7, var_58, &var_68)
        int64_t rcx_8 = var_68
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        if (rax_6 != 0)
            if (*(arg1 + 0x40) == 0)
            label_1409121c3:
                (*(*rax_6 + 0x10))(rax_6)
                void arg_20
                int64_t* rax_17 = sub_140fc6160(sub_140b58260(&arg_20, u"WINDOWS", 1))
                int64_t r8_4 = *rax_17
                (*(r8_4 + 0x38))(rax_17, rax_6, r8_4)
            else
                int64_t* rcx_9 = *(arg1 + 0x38)
                
                if (rcx_9 == 0)
                    goto label_1409121c3
                
                if ((*(*rcx_9 + 0x28))(rcx_9) == 0)
                    goto label_1409121c3
                
                int64_t* rsi_1 = var_58
                
                if (var_50 != 0)
                    var_50[1].d += 1
                
                void arg_18
                (*(*rsi_1 + 0x20))(rsi_1, &arg_18)
                int16_t arg_10
                (*(*rsi_1 + 0x38))(rsi_1, &arg_10)
                int16_t arg_1c = arg_10
                int64_t* rcx_12
                
                if (*(arg1 + 0x40) == 0)
                    rcx_12 = nullptr
                else
                    rcx_12 = *(arg1 + 0x38)
                
                char rax_13 = (*(*rcx_12 + 0x48))(rcx_12, rax_6, &arg_18)
                
                if (var_50 != 0)
                    var_50[1].d -= 1
                    
                    if (var_50[1].d == 1)
                        int64_t rdx_7 = *var_50
                        (*rdx_7)(var_50, rdx_7)
                        int32_t temp3_1 = *(var_50 + 0xc)
                        *(var_50 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*var_50 + 8))(var_50, 1)
                
                if (rax_13 == 0)
                    goto label_1409121c3
    else if (r12 == 0)
        sub_140b73230(zx.o(0))

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t temp1_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_50 + 8))(var_50, 1)

return 0
