// 函数: sub_140d37310
// 地址: 0x140d37310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg2 + 0x20)
void* r15 = *rax
*(arg2 + 0x20) = rax + 0xc

for (void* i = *(r15 + 0x70); i != 0; i = *(i + 0x58))
    int64_t rax_2 = *(i + 0x40)
    
    if (not(test_bit(rax_2, 0xd)) && (0x800000000 & rax_2) == 0)
        int32_t j = 0
        
        if (*(i + 0x38) s> 0)
            do
                int64_t r8_1 = sx.q(*(i + 0x4c)) + sx.q(*(i + 0x3c) * j) + arg3
                char* rax_7 = *(arg2 + 0x20)
                uint32_t rcx = zx.d(*rax_7)
                *(arg2 + 0x20) = &rax_7[1]
                (&data_143e1cd60)[zx.q(rcx)](*(arg2 + 0x18), arg2, r8_1)
                j += 1
            while (j s< *(i + 0x38))

if ((*(r15 + 0xb0) & 0x200000) != 0)
    int64_t* rcx_2 = *(r15 + 0xb8)
    (*(*rcx_2 + 0x90))(rcx_2, arg3)

int64_t result = *(arg2 + 0x20)
int64_t rbp
rbp.b = result != 0
*(arg2 + 0x20) = rbp + result
return result
