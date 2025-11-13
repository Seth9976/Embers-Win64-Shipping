// 函数: sub_1406eb9a0
// 地址: 0x1406eb9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143cdf678 == 0)
    return 

void* rcx_1 = data_143ddb400
int32_t arg_8 = 0

if (sub_140af3c10(rcx_1, u"OnlineSubsystemSteam", u"SteamDevAppId", &arg_8, &data_143de5780) == 0)
    return 

int32_t rdx_1 = arg_8

if (rdx_1 s<= 0)
    return 

int64_t* rbx_1 = data_143cdf678
int64_t rax_1 = rbx_1[0x1c]

if (rax_1 == 0)
    int64_t rax_2 = *rbx_1
    rax_1 = (*(rax_2 + 0x30))(rax_2, rdx_1)
    rbx_1[0x1c] = rax_1
    rdx_1 = arg_8

(*(rax_1 + 8))(rax_1, rdx_1)
