// 函数: sub_1417a26e0
// 地址: 0x1417a26e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x38)

if (rcx != 0)
    int32_t i = 0
    
    if (arg1[0x10] s> 0)
        int64_t rbp_1 = 0
        int32_t rsi_1 = 1
        
        do
            void* rax_1 = *(arg1 + 0x28)
            void* rcx_1 = &arg1[6]
            
            if (rax_1 != 0)
                rcx_1 = rax_1
            
            int32_t i_1 = i
            
            if (i s< 0)
                i_1 = i + 0x1f
            
            if ((*(rcx_1 + (sx.q(i_1 s>> 5) << 2)) & rsi_1) != 0)
                int64_t rcx_2 = *(*(arg1 + 0x38) + rbp_1 + 8)
                
                if (rcx_2 != 0)
                    sub_140a74f90(rcx_2)
            
            i += 1
            rsi_1 = rol.d(rsi_1, 1)
            rbp_1 += 0x28
        while (i s< arg1[0x10])
        
        rcx = *(arg1 + 0x38)
    
    sub_140a74f90(rcx)

*arg1 = 0xffffff
__builtin_memset(&arg1[0xe], 0, 0x14)
void* result = sub_140774790(&arg1[6])
arg1[4] = 0

if (arg1[5] s<= 0xffffffff)
    result = sub_1405dadb0(&arg1[2], 0)

int64_t rcx_5 = *(arg1 + 0x28)

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = *(arg1 + 8)

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6) __tailcall
