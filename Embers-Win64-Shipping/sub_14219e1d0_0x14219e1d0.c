// 函数: sub_14219e1d0
// 地址: 0x14219e1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x220)

if (rsi == 0)
    return 

uint32_t rcx_2
rcx_2.b = (arg2 u>> 0x20).d == 0

if ((rcx_2.b & sub_140b5b8a0(arg2.d, 0).b) != 0)
    return 

int32_t rdx = *(rsi + 0x448)
int32_t rcx_3 = 0

if (rdx s> 0)
    int64_t* rax_1 = *(rsi + 0x440)
    
    do
        if (*rax_1 == arg2 && rax_1[1].b == 7)
            char rcx_8 = *(rsi + 0x432)
            
            if ((rcx_8 & 0x40) == 0 && rax_1[7] == arg3)
                *(rsi + 0x432) = rcx_8 & 0xbf
                rax_1[7] = arg3
                return 
            
            *(rsi + 0x432) = (rcx_8 & 0xbf) | 0x40
            rax_1[7] = arg3
            return 
        
        rcx_3 += 1
        rax_1 -= -0x80
    while (rcx_3 s< rdx)

int64_t r14_1 = sx.q(*(rsi + 0x448))
int32_t rax_2 = (r14_1 + 1).d
*(rsi + 0x448) = rax_2

if (rax_2 s> *(rsi + 0x44c))
    sub_1408888d0(rsi + 0x440)

int64_t r14_2 = r14_1 << 7
memset(*(rsi + 0x440) + r14_2, 0, 0x80)
*(r14_2 + *(rsi + 0x440)) = arg2
*(r14_2 + *(rsi + 0x440) + 8) = 7
char rcx_7 = *(rsi + 0x432)
int64_t rax_4

if ((rcx_7 & 0x40) != 0 || *(r14_2 + *(rsi + 0x440) + 0x38) != arg3)
    rax_4.b = 0x40
else
    rax_4.b = 0

int64_t rax = *(rsi + 0x440)
*(rsi + 0x432) = (rcx_7 & 0xbf) | rax_4.b
*(r14_2 + rax + 0x38) = arg3
