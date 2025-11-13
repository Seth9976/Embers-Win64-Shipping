// 函数: sub_140f68a50
// 地址: 0x140f68a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = nullptr
int64_t* rdi = arg1[2]
int64_t* rsi = rdi

if (rdi != 0)
    int32_t rax_1 = rdi[1].d
    
    if (rax_1 != 0)
        rdi[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rdi = nullptr
        rsi = nullptr

if (rsi != 0)
    rcx = arg1[1]

char rax_2

if (rcx != 0)
    rax_2 = sub_140e19840(rcx, arg6)

if (rcx == 0 || rax_2 == 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            (**rsi)(rsi)
            int32_t temp1_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rsi + 8))(rsi, 1)
else
    int128_t zmm0
    zmm0.d = sub_140f77140(*arg1, arg5).d f+ *(arg4 + 0x28)
    void* rcx_2 = *arg1
    arg6.o = __maxss_xmmss_memss(zmm0.d, 0x41a00000)
    sub_140f8df20(rcx_2, arg6)
    *arg2 = 1
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp3_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi + 8))(rdi, 1)

return arg2
