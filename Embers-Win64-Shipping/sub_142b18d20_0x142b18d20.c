// 函数: sub_142b18d20
// 地址: 0x142b18d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t rdi = 0
int64_t rsi = sx.q(arg3)
uint32_t rbx = arg1

if (arg3 s> 0)
    do
        int32_t var_98
        void var_88
        void* i_1 = (*(*arg4 + 0x10))(arg4, 1, zx.q(arg3 * 2), &var_88, 0x40, &var_98)
        int32_t rax_4 = var_98
        
        if (rax_4 s< 0x10)
            rax_4 = 0x40
            i_1 = &var_88
            var_98 = 0x40
        
        void* i = i_1
        
        if (rdi s< rsi)
            while (i u<= i_1 - 4 + sx.q(rax_4))
                int32_t rdx
                
                if (rbx - 0x4e00 u> 0x51ff)
                    rdx = (rbx & 0xffffff80) + 0x50
                else
                    rdx = 0x7654
                
                rbx = zx.d(*(arg2 + (rdi << 1)))
                rdi += 1
                
                if ((rbx & 0xfffffc00) == 0xd800 && rdi != rsi)
                    uint32_t rcx_1 = zx.d(*(arg2 + (rdi << 1)))
                    
                    if ((rcx_1 & 0xfffffc00) == 0xdc00)
                        rdi += 1
                        rbx = ((rbx - 0xd7f7) << 0xa) + rcx_1
                
                if (rbx != 0xfffe)
                    i = sub_142b18a70(rbx - rdx, i)
                else
                    *i = 2
                    i += 1
                    rbx = 0
                
                if (rdi s>= rsi)
                    break
        
        int64_t r9_1 = *arg4
        (*(r9_1 + 8))(arg4, i_1, zx.q(i.d - i_1.d), r9_1)
    while (rdi s< rsi)

__security_check_cookie(rax_1 ^ &var_c8)
return zx.q(rbx)
