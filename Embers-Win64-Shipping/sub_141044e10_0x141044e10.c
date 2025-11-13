// 函数: sub_141044e10
// 地址: 0x141044e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x33) = 0
sub_141044cf0(arg1 + 0x7e8)
*(arg1 + 0x33) = 1
*(arg1 + 0x2060) = -1
*(arg1 + 0x2068) = 0xffffffff
memset(arg1 + 0x2070, 0, 0x600)
*(arg1 + 0x2670) = -1
*(arg1 + 0x2678) = 0xffffffff
memset(arg1 + 0x2680, 0, 0x600)
int64_t rcx_3 = 6

if (arg1 + 0x2c80 u> arg1 + 0x2c98)
    rcx_3 = 0

if (arg1 + 0x2c80 u<= arg1 + 0x2c98)
    __builtin_memset(arg1 + 0x2c80, 0xffffffff, rcx_3 << 2)

*(arg1 + 0x2c98) = -1
*(arg1 + 0x2ca0) = 0xffffffff
memset(arg1 + 0x2ca8, 0, 0x300)
memset(arg1 + 0x2fb4, 0, 0x60)
*(arg1 + 0x5f0) = 0
*(arg1 + 0x4c) = 0
*(arg1 + 0x7c8) = 0
*(arg1 + 0x50) = 0x3f800000
*(arg1 + 0x54) = 0x3f800000
*(arg1 + 0x58) = 0x3f800000
*(arg1 + 0x5c) = 0x3f800000
memset(arg1 + 0x64, 0, 0x180)
*(arg1 + 0x60) = 0
memset(arg1 + 0x658, 0, 0x100)
*(arg1 + 0x758) = 0
*(arg1 + 0x7e4) = 4
int64_t* rdi_1 = *(arg1 + 0x40)
*(arg1 + 0x40) = 0

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        char rax_2
        
        if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
            rax_2 = sub_1405949a0()
        
        if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
            (**rdi_1)(rdi_1, 1)
        else
            bool z_1
            
            if (0 == *(rdi_1 + 0xc))
                *(rdi_1 + 0xc) = 1
                z_1 = true
            else
                *(rdi_1 + 0xc)
                z_1 = false
            
            if (z_1)
                sub_1405dcc10(&data_143f02390, rdi_1)

int64_t* rdi_2 = *(arg1 + 0x7d8)
*(arg1 + 0x7d8) = 0

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        char rax_6
        
        if (rdi_2[2].b == 0 && data_143f0f1d0 == 0)
            rax_6 = sub_1405949a0()
        
        if (rdi_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_6 != 0))
            (**rdi_2)(rdi_2, 1)
        else
            bool z_2
            
            if (0 == *(rdi_2 + 0xc))
                *(rdi_2 + 0xc) = 1
                z_2 = true
            else
                *(rdi_2 + 0xc)
                z_2 = false
            
            if (z_2)
                sub_1405dcc10(&data_143f02390, rdi_2)

*(arg1 + 0x2fa8) = 0
__builtin_memset(arg1 + 0x5f8, 0, 0x30)
memset(arg1 + 0x1e8, 0, 0x400)
*(arg1 + 0x5ec) = 0
*(arg1 + 0x5e8) = 0xffffffff
*(arg1 + 0x628) = 0
*(arg1 + 0x630) = 0
__builtin_memset(arg1 + 0x780, 0, 0x44)
*(arg1 + 0x7d0) = 0
*(arg1 + 0x638) = 0x26
*(arg1 + 0x7d4) = 0x3f800000
*(arg1 + 0x3a) = 0
return 0
