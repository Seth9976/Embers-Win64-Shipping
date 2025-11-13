// 函数: sub_1419339e0
// 地址: 0x1419339e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg3)
int64_t r11 = r9 * 0xb8
int64_t arg_10 = r11
int64_t r15_1 = r9 * 6
int32_t i = 0

if (*(arg2 + (r15_1 << 3) + 0x4d0) s<= 0)
    return 

int32_t* rdi_1 = nullptr
int64_t r14_1 = 0

do
    uint64_t rax = *(arg2 + (r15_1 << 3) + 0x4c8)
    int32_t rcx = *(rdi_1 + rax)
    char r9_1 = *(rdi_1 + rax + 5)
    
    if (rcx s>= 0)
        rax = zx.q(r9_1)
        int32_t r8 = *(arg1 + (rax << 3) + 0x2c)
        uint64_t rbp_1 = rax << 3
        
        if (r8 != 0)
            int32_t rdx = *(arg1 + (rax << 3) + 0x28)
            int32_t r10_3 = (zx.d(*(*(r11 + arg2 + 0x10) + r14_1)) u>> 4) - rdx
            
            if (r8 u<= r10_3)
                r10_3 = r8
            
            int32_t rcx_1 = rcx + rdx
            int64_t r8_3 = (zx.q(rdx) << 4) + *(arg1 + rbp_1)
            
            if (r9_1 u<= 2)
                if (data_143eff5c6 == 0)
                    data_143effec0(rcx_1, zx.q(r10_3))
                else
                    data_143f004a0(zx.q(*(r11 + arg2 + 0xb0)), zx.q(rcx_1), zx.q(r10_3), r8_3)
                
                r11 = arg_10
            else if (r9_1 == 3)
                if (data_143eff5c6 == 0)
                    data_143effee0(rcx_1, zx.q(r10_3))
                else
                    data_143f00498(zx.q(*(r11 + arg2 + 0xb0)), zx.q(rcx_1), zx.q(r10_3), r8_3)
                
                r11 = arg_10
            else if (r9_1 == 4)
                if (data_143eff5c6 == 0)
                    data_143efff00(rcx_1, zx.q(r10_3))
                else
                    data_143f004a8(zx.q(*(r11 + arg2 + 0xb0)), zx.q(rcx_1), zx.q(r10_3), r8_3)
                
                r11 = arg_10
            
            *(arg1 + ((rax + 5) << 3)) = 0
            *(arg1 + rbp_1 + 0x2c) = 0
    
    i += 1
    rdi_1 = &rdi_1[2]
    r14_1 += 4
while (i s< *(arg2 + (r15_1 << 3) + 0x4d0))
