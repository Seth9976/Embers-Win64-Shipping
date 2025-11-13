// 函数: sub_142268e00
// 地址: 0x142268e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[0x53]

if (rdi != 0)
    void* rax_1 = sub_142531230()
    void* r8_1 = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(r8_1 + 0x38) && *(*(r8_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        if (arg1[0x9c] != 0)
            (*(*arg1 + 0xba0))(arg1, 0)
        
        if (data_143e29f28 != 0)
            int64_t* rcx_2 = data_143e20d18
            int64_t* rax_6 = (*(*rcx_2 + 0xe0))(rcx_2)
            
            if (rax_6 != 0)
                int64_t r9_2 = *rax_6
                uint64_t rdx = zx.q(*(rdi + 0xb8))
                int128_t var_18 = zx.o(0)
                (*(r9_2 + 0x10))(rax_6, rdx, &var_18, r9_2, var_18)

int64_t* rcx_4 = arg1[0x67]

if (rcx_4 != 0)
    sub_142494950(rcx_4)

return sub_141dc1f60(arg1, arg2) __tailcall
