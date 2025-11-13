// 函数: sub_140966ab0
// 地址: 0x140966ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78
sub_1423fb9e0(&var_78, nullptr, &data_142d40450, 0)
sub_140af2b60()
int32_t arg_8

if (sub_140b2ab20(&data_143dbb3f0, u"BeaconPort=", &arg_8) != 0)
    int32_t rax_1 = arg_8
    
    if (rax_1 != 0)
        arg1[0x4a].d = rax_1

int32_t rax_2 = arg1[0x4a].d
int32_t var_54
int64_t rsi

if (var_54 == 0)
    rsi.b = 0
else if ((*(*arg1 + 0x638))(arg1) == 0)
    rsi.b = 0
else
    int64_t* rcx_2 = arg1[0x46]
    
    if (rcx_2 == 0)
        rsi.b = 0
    else
        int64_t var_88 = 0
        int64_t var_80_1 = 0
        char rax_6 = (*(*rcx_2 + 0x280))(rcx_2, &arg1[0x44], &var_78, 0, &var_88)
        int64_t rdx_2 = *arg1
        
        if (rax_6 == 0)
            (*(rdx_2 + 0x640))(arg1, rdx_2)
            int64_t rcx_8 = var_88
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            rsi.b = 0
        else
            arg1[0x4a].d = rax_2
            void* rax_8 = (*(rdx_2 + 0x150))(arg1, rdx_2)
            sub_14217ba70(arg1[0x46], rax_8)
            *(arg1[0x46] + 0x208) = &arg1[0x44]
            *(arg1[0x46] + 0x78) = arg1[0x45].d
            *(arg1[0x46] + 0x7c) = *(arg1 + 0x22c)
            int64_t rcx_7 = var_88
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            rsi.b = 1

int64_t var_20

if (var_20 != 0)
    sub_140a74f90(var_20)

int32_t i_2
int32_t i_1 = i_2
int64_t* var_30
int64_t* rbx_1 = var_30

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_10 = *rbx_1
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_30

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int64_t var_40

if (var_40 != 0)
    sub_140a74f90(var_40)

int64_t var_50

if (var_50 != 0)
    sub_140a74f90(var_50)

int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t rcx_15 = var_78

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

return zx.q(rsi.b)
