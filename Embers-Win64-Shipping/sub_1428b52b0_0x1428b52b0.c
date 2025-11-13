// 函数: sub_1428b52b0
// 地址: 0x1428b52b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void var_58
int64_t var_28 = __security_cookie ^ &var_58
void* rbx = *(arg1 + 0x70)

if (arg2 != 0 || arg3 != 0)
    *(rbx + 0xc8) = -1
    __builtin_memset(rbx + 0xa8, 0, 0x18)
    
    if (arg3 == 0)
        void* r9_1 = *(arg1 + 0x70)
        
        if (arg2 != 0)
            int64_t i_1 = 8
            void* rdx_2 = arg2 + 2
            int64_t i
            
            do
                uint32_t rcx_9 =
                    ((zx.d(*(rdx_2 + 1)) << 8 | zx.d(*rdx_2)) << 8 | zx.d(*(rdx_2 - 1))) << 8
                    | zx.d(*(0 - 2 + rdx_2))
                void* rax_10 = rdx_2 - (arg2 + 2)
                rdx_2 += 4
                *(r9_1 + (rax_10 u>> 2 << 2)) = rcx_9
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        *(r9_1 + 0x70) = 0
    else
        int64_t var_38 = 0
        int64_t var_30_1 = 0
        int64_t rcx = sx.q(*(rbx + 0xc4))
        
        if (rcx.d s<= 0x10)
            memcpy(&var_28 - rcx, arg3, rcx.d)
        
        sub_1428b5000(arg1, arg2, &var_38)
        *(rbx + 0x78) = *(rbx + 0x24)
        *(rbx + 0x7c) = *(rbx + 0x28)
        *(rbx + 0x80) = *(rbx + 0x2c)

__security_check_cookie(var_28 ^ &var_58)
return 1
