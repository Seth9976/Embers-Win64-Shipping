// 函数: sub_14093b230
// 地址: 0x14093b230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

j_sub_140b3db50()
void arg_8

if (sub_140b41300(&data_143de7d78, u"HTTP") != 0)
    int64_t* rax_1 = sub_140b58260(&arg_8, u"HTTP", 1)
    j_sub_140b3db50()
    sub_140b407e0(&data_143de7d78, *rax_1)

j_sub_140b3db50()

if (sub_140b41300(&data_143de7d78, u"XMPP") != 0)
    int64_t* rax_3 = sub_140b58260(&arg_8, u"XMPP", 1)
    j_sub_140b3db50()
    sub_140b407e0(&data_143de7d78, *rax_3)

sub_140942650(arg1)
sub_140942020(arg1)
void* rcx_4 = data_143ddb400
uint64_t var_38 = 0
int32_t var_30 = 0
sub_140af5b90(rcx_4, u"OnlineSubsystem", u"NativePlatformService", &var_38, &data_143de5780)
int16_t* const rdx_3 = &data_142d40450

if (var_30 != 0)
    rdx_3 = var_38

int64_t* rax_4 = sub_140b58260(&arg_8, rdx_3, 1)
uint64_t var_28 = 0
int32_t var_20 = 0
arg1[2] = *rax_4
int64_t rcx_6
int512_t zmm1
rcx_6, zmm1 = sub_140942880(OnlineSubsystem", ConfigDefinedPlatformServices"
    , &data_143de5780, &var_28)
uint64_t r14 = var_28
int64_t rdi = sx.q(var_20)
uint64_t rbx_3 = r14
int64_t rbp_2 = (rdi << 5) + r14

if (r14 != rbp_2)
    do
        int16_t* rdx_5
        
        if (*(rbx_3 + 0x18) == 0)
            rdx_5 = &data_142d40450
        else
            rdx_5 = *(rbx_3 + 0x10)
        
        rcx_6, zmm1 = sub_14093bda0(&arg1[3], rbx_3, sub_140b58260(&arg_8, rdx_5, 1))
        rbx_3 += 0x20
    while (rbx_3 != rbp_2)

uint64_t rbx_4 = r14

if (rdi.d != 0)
    int32_t i
    
    do
        int64_t rcx_9 = *(rbx_4 + 0x10)
        
        if (rcx_9 != 0)
            zmm1 = sub_140a74f90(rcx_9)
        
        rcx_6 = *rbx_4
        
        if (rcx_6 != 0)
            rcx_6, zmm1 = sub_140a74f90(rcx_6)
        
        rbx_4 += 0x20
        i = rdi.d
        rdi = zx.q(rdi.d - 1)
    while (i != 1)

if (r14 != 0)
    rcx_6, zmm1 = sub_140a74f90(r14)

rcx_6.b = 1
int64_t result = sub_14093fb10(rcx_6, zmm1)
uint64_t rcx_11 = var_38

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
