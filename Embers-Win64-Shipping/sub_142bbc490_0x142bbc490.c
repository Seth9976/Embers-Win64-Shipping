// 函数: sub_142bbc490
// 地址: 0x142bbc490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x20)
void* rsi = *(arg1 + 0x38)

if (*(arg1 + 0x28) u< &rdi[2])
    return 0xa1

char* r10 = *rdi
char rax_1 = *r10
int32_t rax_3

if (rax_1 == 0x1e)
    rax_3 = sub_142bc0db0(r10, *(arg1 + 0x10), 0, nullptr) s>> 0x10
else if (rax_1 != 0xff)
    rax_3 = sub_142bc0c90(r10, *(arg1 + 0x10))
else
    rax_3 = sx.d((((zx.d(r10[3]) | (zx.d(r10[1]) << 8 | zx.d(r10[2])) << 8) + 0x80) u>> 8).w)

if (rax_3 s>= 0)
    *(rsi + 0x78) = rax_3
    int32_t rax_10 = sub_142bc0d40(arg1, &rdi[1])
    
    if (rax_10 s>= 0)
        *(rsi + 0x74) = rax_10
        return 0

return 3
