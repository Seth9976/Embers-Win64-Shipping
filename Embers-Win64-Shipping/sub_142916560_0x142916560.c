// 函数: sub_142916560
// 地址: 0x142916560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg3 == 0)
    sub_1428a5670(0x34, 0x64, 0x66, "crypto\kdf\tls1_prf.c", 0x61)
    return 0

if (*arg2 == 0x6d && arg2[1] == 0x64 && arg2[2] == 0)
    int64_t* rbx = arg1[5]
    int64_t rax_4 = sub_14289b970(arg3)
    
    if (rax_4 != 0)
        *rbx = rax_4
        return 1
    
    sub_1428a5670((rax_4 + 0x34).d, 0x64, 0x64, "crypto\kdf\tls1_prf.c", 0x69)
    return 0

int64_t i = 0
int64_t rcx_2 = 0

while (true)
    char rax_6 = arg2[rcx_2]
    rcx_2 += 1
    
    if (rax_6 != *(rcx_2 + 0x14351f467))
        break
    
    if (rcx_2 == 7)
        return sub_1428bcf80(arg1, 0x1001, arg3)

if (strcmp(arg2, "hexsecret") == 0)
    return sub_1428bce00(arg1, 0x1001, arg3)

int64_t rcx_6 = 0

while (true)
    char rax_8 = arg2[rcx_6]
    rcx_6 += 1
    
    if (rax_8 != *(rcx_6 + 0x142d70843))
        break
    
    if (rcx_6 == 5)
        return sub_1428bcf80(arg1, 0x1002, arg3)

do
    char rax_9 = arg2[i]
    i += 1
    
    if (rax_9 != *(i + 0x14351f47f))
        sub_1428a5670(0x34, 0x64, 0x67, "crypto\kdf\tls1_prf.c", 0x78)
        return 0xfffffffe
while (i != 8)

return sub_1428bce00(arg1, 0x1002, arg3)
