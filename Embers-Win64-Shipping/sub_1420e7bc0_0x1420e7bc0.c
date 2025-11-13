// 函数: sub_1420e7bc0
// 地址: 0x1420e7bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
void* rdi = nullptr
void* rax_1 = nullptr

if (sub_140d23dc0(arg1, 0x30) == 0)
    rax_1 = arg1[4]

if (*(rax_1 + 0x11a) != 3)
    sub_140d21d80(arg1)

void* rax_3 = nullptr

if (sub_140d23dc0(arg1, 0x30) == 0)
    rax_3 = arg1[4]

if (*(rax_3 + 0x11a) != 3 && ((*(sub_140d21d80(arg1) + 0x50) u>> 0x14).b & 1) == 0 && arg1[7] != 0)
    int64_t var_18
    sub_1420e4db0(arg1, &var_18)
    char rax_5 = sub_140ba1330(&var_18, 0, nullptr, 1)
    int64_t rcx_8 = var_18
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    if (rax_5 == 0)
        sub_1420e4db0(arg1, &var_18)
        int64_t rcx_10 = var_18
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)

if (sub_140d23dc0(arg1, 0x30) == 0)
    rdi = arg1[4]

uint8_t result = sub_14243ade0(rdi)

if (result != 0)
    (*(*arg1 + 0x260))(arg1, arg1[0x29].b & 1)
    uint8_t r8_1 = *(arg1 + 0xba)
    result = r8_1 u>> 3 & 1
    uint8_t rcx_15 = (arg1[0x29].d u>> 1).b & 1
    
    if (rcx_15 != result)
        *(arg1 + 0xba) = rcx_15 << 3 | (r8_1 & 0xf7)
        result = sub_140d23dc0(arg1, 0x30)
        
        if (result == 0)
            void* rcx_17 = arg1[4]
            
            if (rcx_17 != 0)
                return sub_14244a940(rcx_17, arg1) __tailcall

return result
