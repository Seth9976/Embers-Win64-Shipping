// 函数: sub_1429e0c50
// 地址: 0x1429e0c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_1429e0bd0(arg1, arg2)
int64_t r9 = arg1[2]
char* rax_2 = *arg1 + (r9 u>> 3)

if (rax_2 u>= arg1[1])
    arg1[4](arg1[3])
else
    bool cond:0_1 = (zx.d(*rax_2) u>> (7 - (r9.b & 7)) & 1) == 0
    arg1[2] = r9 + 1
    
    if (not(cond:0_1))
        return zx.q(neg.d(rax))

return zx.q(rax)
