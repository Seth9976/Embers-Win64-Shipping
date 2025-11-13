// 函数: sub_1428b05d0
// 地址: 0x1428b05d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rsi = arg4
char* r15 = arg3
char* r12 = arg2
void* rax = sub_142890ec0(arg1)

if (*(rax + 0x80) == 0)
    if (rsi u>= 0x40000000)
        uint64_t i_1 = rsi u>> 0x1e
        rsi -= i_1 * 0x40000000
        uint64_t i
        
        do
            int32_t rax_3 = sub_142890eb0(arg1)
            char* rax_4 = sub_1406219d0(arg1)
            sub_1428fbbb0(r15, r12, 0x40000000, sub_142890ec0(arg1), rax_4, rax_3)
            r15 = &r15[0x40000000]
            r12 = &r12[0x40000000]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (rsi != 0)
        int32_t rax_6 = sub_142890eb0(arg1)
        char* rax_7 = sub_1406219d0(arg1)
        sub_1428fbbb0(r15, r12, rsi.d, sub_142890ec0(arg1), rax_7, rax_6)
else
    (*(rax + 0x80))(r15, r12, rsi, rax, sub_1406219d0(arg1))

return 1
