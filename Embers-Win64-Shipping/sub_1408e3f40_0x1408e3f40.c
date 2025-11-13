// 函数: sub_1408e3f40
// 地址: 0x1408e3f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1860)
void var_1888
int64_t rax_1 = __security_cookie ^ &var_1888
int64_t rsi = sx.q(arg4)
int64_t var_1868
__builtin_memset(&var_1868, 0, 0x30)
char* rbx = arg2
int16_t var_1838[0x100]
memset(&var_1838, 0, 0x1800)
int32_t result = 0
int32_t r10 = 0

if (arg3 s> 0)
    do
        uint64_t r8 = zx.q(*rbx)
        int32_t rdx = *(&var_1868 + (r8 << 2))
        rbx = &rbx[1]
        var_1838[sx.q((r8.d << 8) + rdx)] = r10.w
        r10 += 1
        *(&var_1868 + (r8 << 2)) = rdx + 1
    while (r10 s< arg3)

int32_t rdi_1 = 1

if (rsi s>= 1)
    void var_1638
    void* rsi_1 = &var_1638
    int64_t r10_1 = 1
    
    do
        int64_t i_1 = sx.q(*(&var_1868 + (r10_1 << 2)))
        
        if (i_1 s> 0)
            void* rbp_1 = rsi_1
            int64_t i
            
            do
                rbp_1 += 2
                int32_t rcx_4 = result * 2
                int32_t rdx_4 = (result u>> 1 ^ (result * 2)) & 0x55555555
                result += 1
                uint64_t rdx_5 = zx.q(rdx_4) ^ zx.q(rcx_4)
                int32_t r8_7 = ((rdx_5.d u>> 2 ^ (rdx_5 << 2).d) & 0x33333333) ^ (rdx_5 << 2).d
                int32_t r9_5 = ((r8_7 u>> 4 ^ r8_7 << 4) & 0xf0f0f0f) ^ r8_7 << 4
                *(arg1 + (sx.q(*(rbp_1 - 2)) << 1)) = (
                    rol.d(((r9_5 u>> 8 ^ r9_5 << 8) & 0xff00ff) ^ r9_5 << 8, 0x10)
                    u>> (0x20 - rdi_1.b)).w
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        result *= 2
        rdi_1 += 1
        r10_1 += 1
        rsi_1 += 0x200
    while (r10_1 s<= rsi)

__security_check_cookie(rax_1 ^ &var_1888)
return result
