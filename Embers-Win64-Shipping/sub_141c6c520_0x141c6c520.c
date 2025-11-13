// 函数: sub_141c6c520
// 地址: 0x141c6c520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t r15 = sx.q(arg2)
int64_t* result = sub_142366a90(*arg4)

if (result != 0)
    int32_t rax_2 = *(arg1 + 0x80)
    
    if (r15.d s>= rax_2)
        int32_t i_1 = r15.d - rax_2 + 1
        int64_t r14_1 = sx.q(rax_2)
        int32_t rax_3 = r14_1.d + i_1
        *(arg1 + 0x80) = rax_3
        
        if (rax_3 s> *(arg1 + 0x84))
            sub_1405a4df0(arg1 + 0x78)
        
        int32_t* rdx_1 = *(arg1 + 0x78) + r14_1 * 0x18
        
        if (i_1 != 0)
            int32_t i
            
            do
                *rdx_1 = 0xffffffff
                *(rdx_1 + 8) = 0
                *(rdx_1 + 0x10) = 0
                rdx_1 = &rdx_1[6]
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    *(*(arg1 + 0x78) + ((r15 * 3 + 1) << 3) - 8) = arg3
    int128_t* rdx_2 = *(arg1 + 0x78) + ((r15 * 3 + 1) << 3)
    int64_t* rcx_5 = arg4[1]
    int64_t var_68 = *arg4
    int64_t* var_60_1 = rcx_5
    
    if (rcx_5 != 0)
        rcx_5[1].d += 1
        rcx_5 = var_60_1
    
    result = &var_68
    
    if (&var_68 != rdx_2)
        int128_t zmm1 = var_68.o
        int128_t var_58_1 = zmm1
        var_68.o = *rdx_2
        rcx_5 = var_60_1
        *rdx_2 = zmm1
    
    if (rcx_5 != 0)
        result = zx.q(rcx_5[1].d)
        rcx_5[1].d -= 1
        
        if (result.d == 1)
            (**var_60_1)(var_60_1)
            result = zx.q(*(var_60_1 + 0xc))
            *(var_60_1 + 0xc) -= 1
            
            if (result.d == 1)
                result = (*(*var_60_1 + 8))(var_60_1, 1)

int64_t* rbx_4 = arg4[1]

if (rbx_4 != 0)
    result = zx.q(rbx_4[1].d)
    rbx_4[1].d -= 1
    
    if (result.d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t rdi_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*rbx_4 + 8))(rbx_4, zx.q(rdi_1))

__security_check_cookie(rax_1 ^ &var_88)
return result
