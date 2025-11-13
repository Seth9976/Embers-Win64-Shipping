// 函数: sub_141d677d0
// 地址: 0x141d677d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg2 + 0x10))(arg2)
void* const rdi = rax_1
void* rax_2
int64_t rax_3
void* rdx

if (rax_1 != 0)
    rax_2 = sub_141d6ed80()
    rdx = *(rdi + 0x10)
    rax_3 = sx.q(*(rax_2 + 0x38))

void* const rbx_1

if (rax_1 == 0 || rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    rdi = nullptr
    rbx_1 = (*(*arg2 + 0x78))(arg2)
else
    rbx_1 = rdi

if (*(arg1 + 0x490) != 0 && rbx_1 != 0)
    void* rax_7 = sub_141d6ee50()
    
    if (rax_7 != 0)
        int64_t* rsi_1 = *(arg1 + 0x490)
        int64_t rax_8 = sx.q(*(rax_7 + 0x38))
        
        if (rax_8.d s<= rsi_1[7].d && *(rsi_1[6] + (rax_8 << 3)) == rax_7 + 0x30)
            if ((sub_140b5b8a0(0, 0) & 1) != 0)
                sub_140d19010(rbx_1, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
            
            void* result = sub_140d2dfc0(rsi_1, rbx_1, 0, 0x40, 0, 0, 0, 0, 0)
            *(result + 0x28) = rdi
            sub_141d70c10(result)
            return result

return nullptr
