// 函数: sub_141e0aaf0
// 地址: 0x141e0aaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[4]
uint8_t* result = rdi[0x86]

if (result != 0 && *(result + 0x60) != 0)
    if (rdi != 0)
        void* rax = sub_142591550()
        void* rdx_1 = rdi[2]
        int64_t rax_1 = sx.q(*(rax + 0x38))
        
        if (rax_1.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_1 << 3)) == rax + 0x30)
            void* r8_1
            r8_1.b = 1
            sub_141f3e990(arg1[4], 1, r8_1.b)
    
    void* rcx_3 = arg1[0x48]
    
    if (rcx_3 == 0)
        void* rax_4 = (*(*arg1 + 0x300))(arg1)
        arg1[0x48] = rax_4
        rcx_3 = rax_4
    
    return sub_141e0a910(rcx_3, rdi, rdi[0x86]) __tailcall

if (arg1[5] == 0)
    return result

if (rdi != 0)
    void* rax_6 = sub_142591550()
    void* rdx_4 = rdi[2]
    int64_t rax_7 = sx.q(*(rax_6 + 0x38))
    
    if (rax_7.d s<= *(rdx_4 + 0x38) && *(*(rdx_4 + 0x30) + (rax_7 << 3)) == rax_6 + 0x30)
        void* r8_4
        r8_4.b = 1
        sub_141f3e990(arg1[4], 1, r8_4.b)

void* rcx_8 = arg1[0x48]

if (rcx_8 == 0)
    void* rax_10 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_10
    rcx_8 = rax_10

return sub_141e0a910(rcx_8, rdi, arg1[5])
