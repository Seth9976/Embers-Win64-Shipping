// 函数: sub_141fb6ba0
// 地址: 0x141fb6ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_30 = arg8
char var_38 = arg7

if (sub_142169ef0(arg1, arg2, arg3, arg4, arg5, arg6) == 0)
    return 0

sub_141fa75e0(&arg1[0x16d], arg4)
int32_t rbp = 0
*(arg1 + 0xb09) = 0x10000
arg1[0x42].d = 0
arg1[0x43] = 0
*(arg1 + 0x75c) = 0
arg1[0x16c] = 0
arg1[0x18a].d = 0xbf800000
int64_t var_28
sub_140d3a3a0(&var_28, nullptr)
arg1[0x18b] = var_28
arg1[0x18e].w = 0
*(arg1 + 0xe84) = 0
*(arg1 + 0xc54) = 0xbf800000
int64_t rbx = data_143f3d638
int64_t rcx_2

if (data_143de5480 == 0)
    rcx_2 = 0
else
    rcx_2.b = GetCurrentThreadId() != data_143de5470

arg1[0x21d].d = *(rbx + (rcx_2 << 2))

if (not(0f f!= arg1[0xe].d))
    arg1[0xe].d = 0x40a00000

sub_141fc5140(arg1)
void* rax_6 = sub_142411ce0(arg4, u"ReplayStreamerOverride=", nullptr)
int64_t rbx_1 = *sub_140b58170(&var_28, "NetworkReplayStreaming", 1)
j_sub_140b3db50()
int64_t* rax_8 = j_sub_140b407e0(&data_143de7d78, rbx_1)
int64_t r8 = *rax_8
int64_t* rax_9 = (*(r8 + 0x40))(rax_8, rax_6, r8)
int64_t r8_1 = *rax_9
void var_18
int64_t* rax_10 = (*(r8_1 + 0x40))(rax_9, &var_18, r8_1)

if (&arg1[0xee] != rax_10)
    arg1[0xee] = *rax_10
    *rax_10 = 0
    int64_t rcx_9 = rax_10[1]
    int64_t* rbx_2 = arg1[0xef]
    
    if (rcx_9 != rbx_2)
        rax_10[1] = 0
        arg1[0xef] = rcx_9
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

void* result = sub_142411ce0(arg4, u"ReplayStreamerDemoPath=", nullptr)

if (result != 0 && arg1[0xee] != 0)
    int32_t rcx_15 = 0
    var_28 = 0
    int32_t var_1c_1 = 0
    int32_t var_20_1 = 0
    
    if (*result != 0)
        int64_t rbx_4 = -1
        
        do
            rbx_4 += 1
        while (*(result + (rbx_4 << 1)) != 0)
        
        if (rbx_4.d + 1 s> 0)
            sub_1405947f0(&var_28, rbx_4.d + 1)
            rcx_15 = var_1c_1
            rbp = var_20_1
        
        int32_t rax_15 = rbx_4.d + 1 + rbp
        int32_t var_20_2 = rax_15
        
        if (rax_15 s> rcx_15)
            sub_140594770(&var_28)
        
        UnDecorator::getReferenceType(var_28, result, (rbx_4.d + 1) * 2)
    
    int64_t* rcx_19 = arg1[0xee]
    (*(*rcx_19 + 0x178))(rcx_19, &var_28)
    int64_t rcx_20 = var_28
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)

result.b = 1
return result
