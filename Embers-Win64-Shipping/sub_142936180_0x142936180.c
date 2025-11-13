// 函数: sub_142936180
// 地址: 0x142936180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
uint64_t rbx = 0
uint64_t arg_20 = 0

if (sub_142898c70(arg3) s<= 0)
    return rbx

int32_t i

do
    void* rax_1 = sub_142898ea0(arg3, rbx.d)
    char* rsi_1 = *(rax_1 + 0x10)
    int32_t* rax_2 = sub_1428ea640(0, *(rax_1 + 8))
    
    if (rax_2 == 0)
        sub_1428a5670(0x22, 0x7d, 0x83, "crypto\x509v3\v3_sxnet.c", 0x6d)
        return 0
    
    if (sub_142936240(&arg_20, rax_2, rsi_1, 0xffffffff) == 0)
        return 0
    
    rbx = zx.q(rbx.d + 1)
    i = sub_142898c70(arg3)
while (rbx.d s< i)
return arg_20
