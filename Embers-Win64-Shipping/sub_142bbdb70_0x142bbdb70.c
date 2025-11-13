// 函数: sub_142bbdb70
// 地址: 0x142bbdb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1
int64_t* result = arg1[7]
int64_t r14 = *(rdx + 0x98)
int64_t* rdi = *result
void* rbp = *(rdx + 0x3e8)

if (rdi == 0)
    return result

int64_t* rbx_1 = *(rbp + 0x10d8)
int64_t rax = sub_142b922e0(*(*(rdx + 0x90) + 8), "pshinter")

if (rax != 0 && rbx_1 != 0)
    int64_t rdx_1 = *rbx_1
    
    if (rdx_1 != 0)
        int64_t rax_1 = rdx_1(rax)
        
        if (rax_1 != 0)
            (*(rax_1 + 0x10))(*rdi)
            uint64_t rbx_2 = zx.q(*(rbp + 0x8b0))
            
            while (rbx_2.d != 0)
                rbx_2 = zx.q(rbx_2.d - 1)
                (*(rax_1 + 0x10))(rdi[rbx_2 + 1])

return sub_142b99980(r14, rdi)
