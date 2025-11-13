// 函数: sub_1429cfd40
// 地址: 0x1429cfd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1429cd600(**(arg1 + 0x28), *arg2)
int64_t rdi = sx.q(arg2[1])
int32_t* rsi = **(arg1 + 0x28)
*rsi = rdi.d
sub_14058d4e0(&rsi[6], sx.q((rdi * 2).d))
sub_1429cd3a0(&rsi[0x18], rdi)
memset(*(rsi + 0x60), 0, sx.q(*rsi))
int32_t i = 0
int32_t result

if (arg2[1] s> 0)
    int64_t rdx_3 = 0
    
    do
        int32_t result_1 = *(*(arg2 + 8) + (rdx_3 << 2))
        void* r9_1 = **(arg1 + 0x28)
        int64_t rax_4 = *(r9_1 + 0x18)
        *(rax_4 + (rdx_3 << 3)) = result_1
        void* rcx_5 = rax_4 + (rdx_3 << 3)
        int32_t rax_5
        
        if (rdx_3 != 0)
            rax_5 = *(rcx_5 - 8) + *(rcx_5 - 4)
        else
            rax_5 = 0
        
        *(rcx_5 + 4) = rax_5
        result = *(r9_1 + 0x14)
        
        if (result s< result_1)
            result = result_1
        
        i += 1
        rdx_3 += 1
        *(r9_1 + 0x14) = result
    while (i s< arg2[1])

result.b = 1
return result
