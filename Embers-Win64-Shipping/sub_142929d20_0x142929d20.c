// 函数: sub_142929d20
// 地址: 0x142929d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t result = arg2
int64_t* rax = sub_14293b1a0()

if (rax == 0)
    sub_1428a5670((rax + 0x2c).d, (rax + 0x76).d, (rax + 0x41).d, "crypto\store\loader_file.c", 
        0x36)
    return 0

if (arg1 != 0)
    sub_14293b430(rax, arg1)

sub_14293aee0(rax, arg5)
char* rax_2 = sub_14293af80(rax, "pass phrase", arg4)

if (rax_2 != 0)
    int32_t rax_4 = sub_14293ae40(rax, rax_2, 2, result, 0, arg3 - 1)
    
    if (rax_4 != 0)
        int32_t rax_5 = sub_14293b270(rax)
        
        if (rax_5 == 0xfffffffe)
            sub_1428a5670(0x2c, 0x76, 0x6d, "crypto\store\loader_file.c", 0x4a)
            result = 0
        else if (rax_5 == 0xffffffff)
            sub_1428a5670(0x2c, 0x76, rax_5 + 0x29, "crypto\store\loader_file.c", 0x4e)
            result = 0
    else
        sub_1428a5670(0x2c, 0x76, rax_4 + 0x28, "crypto\store\loader_file.c", 0x44)
        result = 0
else
    sub_1428a5670(0x2c, 0x76, (&rax_2[0x41]).d, "crypto\store\loader_file.c", 0x40)
    result = 0

sub_1428a6780(rax_2)
sub_14293b0f0(rax)
return result
