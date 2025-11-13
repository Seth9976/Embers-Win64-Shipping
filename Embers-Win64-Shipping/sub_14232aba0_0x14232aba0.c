// 函数: sub_14232aba0
// 地址: 0x14232aba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg2
void*** result = arg1
sub_14232a9b0(arg1, arg2, arg3, arg4)
int64_t* rdi = &result[0xe]
int32_t i = 0
*result = &data_143328af0
*rdi = 0
rdi[1] = 0
result[0x10] = 0
result[0x11].d = 0xffffffff
__builtin_memset(&result[0x12], 0, 0x31)

if (*(arg3 + 8) s> 0)
    do
        int64_t rbx_1 = sx.q(rdi[1].d)
        int32_t rax_1 = (rbx_1 + 1).d
        rdi[1].d = rax_1
        
        if (rax_1 s> *(rdi + 0xc))
            sub_1423454d0(rdi)
        
        int64_t rbx_2 = rbx_1 * 0x370
        void** rbx_3 = rbx_2 + *rdi
        
        if (rbx_2 != neg.q(*rdi))
            *rbx_3 = arg3
            rbx_3[1].d = i
            sub_1423299d0(&rbx_3[2], arg4.b)
            sub_1422b4e50(&rbx_3[0x44])
            sub_142287b50(&rbx_3[0x55])
            rbx_3[0x5d] = 0
            rbx_3[0x5e] = 0
            rbx_3[0x60].d = 0xffffffff
            *(rbx_3 + 0x304) = 4
            rbx_3[0x5f] = &data_142dd5bb0
            rbx_3[0x62] = 0
            rbx_3[0x63] = 0
            rbx_3[0x61] = &data_142dd5b70
            rbx_3[0x64].b = 0
            __builtin_memset(&rbx_3[0x65], 0, 0x1c)
            __builtin_memset(&rbx_3[0x69], 0, 0x1a)
            rbx_3[0x6d].b = 0
        
        i += 1
    while (i s< *(arg3 + 8))
    
    result = arg1
    rbp = arg2

int32_t i_1 = 0

if (result[0xf].d s> 0)
    int64_t rsi = 0
    int64_t r14_1 = 0
    
    do
        int64_t* r8_2 = *rdi + r14_1
        
        if (*(*(**r8_2 + rsi) + 0xec) u> 0)
            void* rdx_2 = nullptr
            
            if (i_1 s>= 0 && i_1 s< *(rbp + 0x578))
                rdx_2 = *(rbp + 0x570) + sx.q(i_1) * 0x28
            
            sub_14233b5c0(r8_2, rdx_2)
        
        i_1 += 1
        r14_1 += 0x370
        rsi += 8
    while (i_1 s< result[0xf].d)

return result
