// 函数: sub_1429b7640
// 地址: 0x1429b7640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg3)
char* r9 = arg2

if (arg3 == 0)
    *arg4 = *(arg1 + 0x20)
    return 0

char* r8 = *(arg1 + 0x18)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q((r11 + 1).d)
void* rdx_1 = &r9[r11]
void* rcx_2 = &r8[sx.q((temp1 - temp0) s>> 1)]

while (r9 u< rdx_1)
    *r8 = *r9
    r8 = &r8[1]
    
    if (&r9[1] u>= rdx_1)
        break
    
    char rax_7 = r9[1]
    r9 = &r9[2]
    *rcx_2 = rax_7
    rcx_2 += 1

char* rax_8 = *(arg1 + 0x18)
char r8_1 = *rax_8

for (void* i = &rax_8[1]; i u< &rax_8[r11]; i += 1)
    char rax_9 = *i
    char rcx_4 = rax_9 - r8_1
    r8_1 = rax_9
    *i = rcx_4 - 0x80

*arg4 = *(arg1 + 0x20)
return sub_1429bce90(r11.d, *(arg1 + 0x18), *(arg1 + 0x20)) __tailcall
