// 函数: sub_1428ab720
// 地址: 0x1428ab720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint64_t rbx = arg4
int64_t result_1

if (arg3 == 0)
    rbx = 0
    result_1 = 0
else
    if (rbx == 0)
        rbx = -1
        
        do
            rbx += 1
        while (arg3[rbx] != 0)
    
    int64_t result = sub_1428a6af0(arg3, rbx, "crypto\x509\x509_vpm.c", 0xf7)
    result_1 = result
    
    if (result == 0)
        return result

sub_1428a6780(*arg1)
*arg1 = result_1

if (arg2 != 0)
    *arg2 = rbx

return 1
