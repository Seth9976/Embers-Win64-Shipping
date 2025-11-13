// 函数: sub_142894180
// 地址: 0x142894180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int64_t rsi = arg4
int64_t r15 = arg3
int64_t r12 = arg2
void* rax = sub_142890ec0(arg1)
int32_t var_38
int128_t* rax_4
int32_t rbx_1
int64_t r8

if (sub_142890f30(arg1, 0x2000) == 0)
    if (rsi u>= 0x1000000000000000)
        uint64_t i_1 = rsi u>> 0x3c
        rsi -= i_1 * 0x1000000000000000
        uint64_t i
        
        do
            var_38 = sub_142890ef0(arg1)
            int32_t rax_8 = sub_142890eb0(arg1)
            int128_t* rax_9 = sub_1406219d0(arg1)
            int64_t var_40_1 = *(rax + 0xf8)
            sub_1428d0cb0(r15, r12, -0x8000000000000000, rax, rax_9, &var_38, rax_8)
            sub_142890f20(arg1, var_38)
            r12 += 0x1000000000000000
            r15 += 0x1000000000000000
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (rsi != 0)
        var_38 = sub_142890ef0(arg1)
        rbx_1 = sub_142890eb0(arg1)
        rax_4 = sub_1406219d0(arg1)
        r8 = rsi << 3
        goto label_1428942d5
else
    var_38 = sub_142890ef0(arg1)
    rbx_1 = sub_142890eb0(arg1)
    rax_4 = sub_1406219d0(arg1)
    r8 = rsi
label_1428942d5:
    int64_t var_40_2 = *(rax + 0xf8)
    sub_1428d0cb0(r15, r12, r8, rax, rax_4, &var_38, rbx_1)
    sub_142890f20(arg1, var_38)
return 1
