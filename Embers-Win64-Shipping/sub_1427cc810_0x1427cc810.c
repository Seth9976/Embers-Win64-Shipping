// 函数: sub_1427cc810
// 地址: 0x1427cc810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t i = *(arg1 + 0x20)
uint64_t r9 = 0

if (i != 0)
    do
        char* rax_1 = *(*(arg1 + 0x18) + (r9 << 3))
        void* r8_2 = arg2 - rax_1
        uint32_t j
        uint32_t rdx
        
        do
            rdx = zx.d(*rax_1)
            j = zx.d(*(rax_1 + r8_2))
            
            if (rdx != j)
                break
            
            rax_1 = &rax_1[1]
        while (j != 0)
        
        if (rdx - j == 0)
            rax_1.b = 0
            return rax_1
        
        r9 = zx.q(r9.d + 1)
    while (r9.d u< i)

uint64_t rcx = zx.q(*(arg1 + 0x20))

if ((*(arg1 + 0x24) & 0x7fffffff) u<= rcx.d)
    sub_1427ccd50(arg1 + 0x18, &arg_10)
    int64_t rax_4
    rax_4.b = 1
    return rax_4

int64_t* rdx_3 = *(arg1 + 0x18) + (rcx << 3)

if (rdx_3 != 0)
    *rdx_3 = arg2

*(arg1 + 0x20) += 1
int64_t rax_5
rax_5.b = 1
return rax_5
