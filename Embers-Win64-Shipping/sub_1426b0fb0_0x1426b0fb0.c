// 函数: sub_1426b0fb0
// 地址: 0x1426b0fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax
int512_t result
rax, result = sub_1426b2ca0(arg1)

if (rax == 0)
    result.o = zx.o(0)
    return result

char rax_1 = sub_1426b21d0(rax, arg2 + 0x10)
void* rdx_1 = *(rax + 0xc0)
int64_t r14 = 0
void* const rdi

if (rdx_1 == 0 || rax_1 == 0xff)
    rdi = nullptr
else
    char rax_2 = *(rdx_1 + 0x4c)
    
    if (rax_1 u< rax_2)
        void* rcx_4 = *(rdx_1 + 0x30)
        
        if (rcx_4 == 0)
            rdi = nullptr
        else
            rdi = sub_1426b21a0(rcx_4, rax_1)
    else
        rdi = *(rdx_1 + 0x38) + (zx.q(rax_1) - zx.q(rax_2)) * 0x18

if (rdi != 0)
    void* rbx_1 = *(rdi + 8)
    
    if (rbx_1 != 0)
        int64_t rbx_2 = *(rbx_1 + 0x10)
        int64_t rax_6
        rax_6, result = sub_14272e150()
        
        if (rbx_2 == rax_6)
            if (*(rax + 0xd0) != 0 && zx.d(rax_1) s< *(rax + 0xe0))
                r14 = zx.q(*(*(rax + 0xd8) + (zx.q(rax_1) << 1))) + *(rax + 0xc8)
            
            int32_t* rcx_6 = r14 + ((zx.q(*(*(rdi + 8) + 0x2b) u>> 1) & 1) << 2)
            
            if (rcx_6 != 0)
                result.o = *rcx_6
                return result

result.o = zx.o(0)
return result
