// 函数: sub_14264d010
// 地址: 0x14264d010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_6 = sx.q(*(arg1 + 0x30))

if (rax_6.d s> 0)
    int64_t r8_1 = 0
    int64_t* rax_1 = *(arg1 + 0x28) + 0x10
    
    do
        if (*rax_1 == arg2)
            rax_1.b = 1
            return rax_1
        
        r8_1 += 1
        rax_1 = &rax_1[4]
    while (r8_1 s< rax_6)

int64_t* r9_2 = *(arg1 + 0x18)
int64_t* rax_2 = r9_2
void* r8_2 = &r9_2[sx.q(*(arg1 + 0x20))]

if (r9_2 != r8_2)
    do
        if (*rax_2 == arg2)
            int32_t rax_5
            rax_5.b = ((rax_2 - r9_2) s>> 3).d != 0xffffffff
            return rax_5
        
        rax_2 = &rax_2[1]
    while (rax_2 != r8_2)

int64_t rax_3
rax_3.b = false
return 0xffffff00
