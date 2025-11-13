// 函数: sub_140965320
// 地址: 0x140965320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi
rdi.b = 0

if (sub_140af3c10(data_143ddb400, OnlineSubsystem", MaxLocalTalkers", &arg1[9], &data_143de5780)
        == 0)
    arg1[9].d = 1

if (sub_140af3c10(data_143ddb400, OnlineSubsystem", MaxRemoteTalkers", arg1 + 0x4c, &data_143de5780)
        == 0)
    *(arg1 + 0x4c) = 0x10

if (sub_140af3b00(data_143ddb400, OnlineSubsystem", VoiceNotificationDelta", &arg1[0x12], 
        &data_143de5780) == 0)
    arg1[0x12].d = 0x3e4ccccd

void* rcx_3 = data_143ddb400
char arg_8 = 0
char rax_3
uint128_t zmm6
rax_3, zmm6 = sub_140af2fd0(rcx_3, u"OnlineSubsystem", u"bHasVoiceEnabled", &arg_8, &data_143de5780)

if (rax_3 == 0 || arg_8 == 0)
    return 0

int64_t* rcx_4 = arg1[4]
uint64_t i_1 = 0

if (rcx_4 != 0)
    void var_68
    arg1[5] = *(*(*rcx_4 + 0x20))(rcx_4, &var_68)
    int64_t* var_60
    
    if (var_60 != 0)
        var_60[1].d -= 1
        
        if (var_60[1].d == 1)
            (**var_60)(var_60)
            int32_t rax_9 = *(var_60 + 0xc)
            *(var_60 + 0xc) -= 1
            
            if (rax_9 == 1)
                (*(*var_60 + 8))(var_60, 1)
    
    int64_t* rcx_7 = arg1[4]
    void var_58
    arg1[6] = *(*(*rcx_7 + 0x80))(rcx_7, &var_58)
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t rax_17 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (rax_17 == 1)
                (*(*var_50 + 8))(var_50, 1)
    
    if (arg1[5] == 0 || arg1[6] == 0)
        rdi.b = 0
    else
        int64_t* rcx_10 = arg1[4]
        rdi.b = 1
        
        if ((*(*rcx_10 + 0x118))(rcx_10) != 0 || data_143de542e != 0)
            arg1[9] = 0
        else
            void var_48
            int64_t* rax_23 = (**arg1)(arg1, &var_48)
            
            if (&arg1[7] != rax_23)
                arg1[7] = *rax_23
                *rax_23 = 0
                sub_1405aeff0(&arg1[8], &rax_23[1])
            
            int64_t* var_40
            
            if (var_40 != 0)
                var_40[1].d -= 1
                
                if (var_40[1].d == 1)
                    (**var_40)(var_40)
                    int32_t rax_27 = *(var_40 + 0xc)
                    *(var_40 + 0xc) -= 1
                    
                    if (rax_27 == 1)
                        (*(*var_40 + 8))(var_40, 1)
            
            int64_t* rcx_15 = arg1[7]
            rdi = zx.q((**rcx_15)(rcx_15, zx.q(arg1[9].d), zx.q(*(arg1 + 0x4c))))

uint64_t i_4 = zx.q(arg1[9].d)
int32_t var_84_1 = 0
arg1[0xb].d = 0

if (*(arg1 + 0x5c) != i_4.d)
    sub_14083ad30(&arg1[0xa], i_4.d)

if (i_4.d s> 0)
    i_1 = i_4
    uint128_t var_38_1 = zmm6
    uint64_t i
    
    do
        int64_t rsi_1 = sx.q(arg1[0xb].d)
        int32_t rax_31 = (rsi_1 + 1).d
        arg1[0xb].d = rax_31
        
        if (rax_31 s> *(arg1 + 0x5c))
            sub_14083a7e0(&arg1[0xa])
        
        uint64_t* r8_2 = arg1[0xa] + rsi_1 * 0xc
        
        if (r8_2 != 0)
            *r8_2 = 0.q
            r8_2[1].d = 0.d
        
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_14095cca0(&arg1[0xc], *(arg1 + 0x4c))

if (rdi.b == 0)
    arg1[0xb].d = i_1.d
    
    if (*(arg1 + 0x5c) != 0)
        sub_14083ad30(&arg1[0xa], 0)
    
    sub_14095cca0(&arg1[0xc], 0)
    uint64_t i_3 = i_1
    uint64_t i_2
    
    if (&arg1[7] != &i_2)
        arg1[7] = i_1
        i_2 = i_1
        sub_1405aeff0(&arg1[8], &i_3)
        uint64_t i_5 = i_3
        
        if (i_5 != 0)
            int32_t rax_33 = *(i_5 + 8)
            *(i_5 + 8) -= 1
            
            if (rax_33 == 1)
                uint64_t i_7 = i_3
                (**i_7)(i_7)
                int32_t rbp_1 = *(i_7 + 0xc)
                *(i_7 + 0xc) -= 1
                
                if (rbp_1 == 1)
                    uint64_t i_6 = i_3
                    (*(*i_6 + 8))(i_6, zx.q(rbp_1))

return zx.q(rdi.b)
