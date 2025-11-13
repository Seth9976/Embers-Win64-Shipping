// 函数: sub_141a005f0
// 地址: 0x141a005f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141a22c50()
int64_t rax_1 = sx.q(*(arg1 + 0x80))
int64_t result

if (rax_1.d s> 0)
    int64_t* r8_1 = *(arg1 + 0x78)
    int64_t rdx_1 = 0
    
    do
        void* rcx = *r8_1
        
        if (rcx != 0)
            void* rax_2 = *(rcx + 0x10)
            int64_t rcx_1 = sx.q(*(rax + 0x38))
            
            if (rcx_1.d s<= *(rax_2 + 0x38))
                result = *(rax_2 + 0x30)
                
                if (*(result + (rcx_1 << 3)) == rax + 0x30)
                    return result
        
        rdx_1 += 1
        r8_1 = &r8_1[1]
    while (rdx_1 s< rax_1)

int32_t rdi_4 = (*(arg1 + 8) u>> 3 & 1) << 3
void* rax_3 = sub_140cde0b0()

if ((sub_140b5b8a0(0, 0) & 1) != 0)
    sub_140d19010(rax_3, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* rax_6 = sub_140d2dfc0(sub_141a22c50(), rax_3, 0, rdi_4, 0, 0, 0, 0, 0)
sub_140d3a3a0(rax_6 + 0x78, arg1)
int64_t rdi_5 = sx.q(*(arg1 + 0x80))
int32_t rcx_5 = (rdi_5 + 1).d
*(arg1 + 0x80) = rcx_5

if (rcx_5 s> *(arg1 + 0x84))
    sub_1405a4d70(arg1 + 0x78)

result = *(arg1 + 0x78)
*(result + (rdi_5 << 3)) = rax_6
return result
