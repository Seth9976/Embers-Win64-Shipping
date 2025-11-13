// 函数: sub_1406b91e0
// 地址: 0x1406b91e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* arg_8 = arg1 + 0xa0
EnterCriticalSection(arg1 + 0xa0)
sub_140a20ba0(arg2, u"Audio Tracks\n", 0xd)
int64_t var_28
int32_t var_20

if (*(arg1 + 0x58) != 0)
    int64_t* i = *(arg1 + 0x50)
    
    for (void* rbp_2 = sx.q(*(arg1 + 0x58)) * 0xa8 + i; i != rbp_2; i = &i[0x15])
        int64_t* rax_2 = sub_140ac6680(i)
        int16_t* const r8_1
        
        if (rax_2[1].d == 0)
            r8_1 = &data_142d40450
        else
            r8_1 = *rax_2
        
        sub_140a2e390(&var_28, u"\t%s\n", r8_1)
        int32_t r8_3
        
        if (var_20 == 0)
            r8_3 = 0
        else
            r8_3 = var_20 - 1
        
        sub_140a20ba0(arg2, var_28, r8_3)
        int64_t rcx_6 = var_28
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        sub_140a20ba0(arg2, u"\t\tNot implemented yet", 0x15)
else
    sub_140a20ba0(arg2, u"\tnone\n", 6)

sub_140a20ba0(arg2, u"Video Tracks\n", 0xd)
int64_t result

if (*(arg1 + 0x198) != 0)
    int64_t* i_1 = *(arg1 + 0x190)
    result = sx.q(*(arg1 + 0x198))
    
    for (void* rbp_4 = result * 0xa8 + i_1; i_1 != rbp_4; i_1 = &i_1[0x15])
        int64_t* rax_3 = sub_140ac6680(i_1)
        int16_t* const r8_4
        
        if (rax_3[1].d == 0)
            r8_4 = &data_142d40450
        else
            r8_4 = *rax_3
        
        sub_140a2e390(&var_28, u"\t%s\n", r8_4)
        int32_t r8_6
        
        if (var_20 == 0)
            r8_6 = 0
        else
            r8_6 = var_20 - 1
        
        sub_140a20ba0(arg2, var_28, r8_6)
        int64_t rcx_13 = var_28
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        result = sub_140a20ba0(arg2, u"\t\tNot implemented yet", 0x15)
else
    result = sub_140a20ba0(arg2, u"\tnone\n", 6)

if (arg1 == -0xa0)
    return result

return LeaveCriticalSection(arg1 + 0xa0)
