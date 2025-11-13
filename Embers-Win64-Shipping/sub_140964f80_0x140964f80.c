// 函数: sub_140964f80
// 地址: 0x140964f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
arg3.b = 1

if (sub_140b0f6c0(&arg_18, u"DUMP") == 0)
    void var_20
    (*(*arg1 + 0x68))(arg1, &var_20)
    int64_t* var_18
    
    if (var_18 != 0)
        var_18[1].d -= 1
        
        if (var_18[1].d == 1)
            (**var_18)(var_18)
            int32_t rbx_6 = *(var_18 + 0xc)
            *(var_18 + 0xc) -= 1
            
            if (rbx_6 == 1)
                (*(*var_18 + 8))(var_18, zx.q(rbx_6))
else
    void var_40
    int64_t* rax_1
    int512_t zmm1_1
    rax_1, zmm1_1 = sub_140b58170(&var_40, "Voice", 1)
    j_sub_140b3db50()
    
    if (sub_140b404d0(&data_143de7d78, *rax_1, zmm1_1) != 0)
        void var_38
        int64_t rbx_2 = *sub_140b58170(&var_38, "Voice", 1)
        j_sub_140b3db50()
        j_sub_140b407e0(&data_143de7d78, rbx_2)
    
    void* rcx_3 = data_143ddb400
    char var_88 = 0
    sub_140af2fd0(rcx_3, /Script/Engine.GameSession", bRequiresPushToTalk", &var_88, 
        &data_143de5830)
    void* rcx_4 = data_143ddb400
    int32_t var_70 = 0
    sub_140af3c10(rcx_4, u"OnlineSubsystem", u"MaxLocalTalkers", &var_70, &data_143de5780)
    void* rcx_5 = data_143ddb400
    int32_t var_6c = 0
    sub_140af3c10(rcx_5, u"OnlineSubsystem", u"MaxRemoteTalkers", &var_6c, &data_143de5780)
    void* rcx_6 = data_143ddb400
    int32_t var_68 = 0
    sub_140af3b00(rcx_6, u"OnlineSubsystem", u"VoiceNotificationDelta", &var_68, &data_143de5780)
    void* rcx_7 = data_143ddb400
    char var_87 = 0
    sub_140af2fd0(rcx_7, u"OnlineSubsystem", u"bHasVoiceEnabled", &var_87, &data_143de5780)
    void* rcx_8 = data_143ddb400
    char var_86 = 0
    sub_140af2fd0(rcx_8, u"OnlineSubsystem", u"bDuckingOptOut", &var_86, &data_143de5780)
    int64_t rax_4 = *arg1
    int64_t var_80 = 0
    int64_t var_78_1 = 0
    int64_t* var_50
    (*(rax_4 + 0x68))(arg1, &var_50)
    int64_t* rcx_10 = var_50
    
    if (rcx_10 != 0)
        int64_t var_30
        int64_t* rax_6 = (*(*rcx_10 + 0xe8))(rcx_10, &var_30)
        
        if (&var_80 != rax_6)
            int64_t rcx_11 = var_80
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            var_80 = *rax_6
            *rax_6 = 0
            var_78_1.d = rax_6[1].d
            var_78_1:4.d = *(rax_6 + 0xc)
            rax_6[1] = 0
        
        int64_t rcx_13 = var_30
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
    
    int64_t* var_60 = nullptr
    int32_t i_2 = 0
    sub_140a2ccb0(&var_80, &var_60, &data_142d576a0, 0)
    int32_t i_1 = i_2
    int64_t* rbx_4 = var_60
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_15 = *rbx_4
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            rbx_4 = &rbx_4[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_4 = var_60
    
    if (rbx_4 != 0)
        sub_140a74f90(rbx_4)
    
    int64_t* var_48
    
    if (var_48 != 0)
        var_48[1].d -= 1
        
        if (var_48[1].d == 1)
            (**var_48)(var_48)
            int32_t rbx_5 = *(var_48 + 0xc)
            *(var_48 + 0xc) -= 1
            
            if (rbx_5 == 1)
                (*(*var_48 + 8))(var_48, zx.q(rbx_5))
    
    int64_t rcx_19 = var_80
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)

uint64_t result
result.b = 1
return result
