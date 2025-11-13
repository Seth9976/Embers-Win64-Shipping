// 函数: sub_142b90120
// 地址: 0x142b90120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t result = __security_cookie ^ &var_78
int64_t result_1 = result
int32_t var_58
__builtin_memcpy(&var_58, 
    "\x05\x00\x00\x00\x19\x00\x00\x00\x7d\x00\x00\x00\x71\x02\x00\x00\x35\x0c\x00\x00\x09\x3d\x00\x00\x"
"2d\x31\x01\x00\xe1\xf5\x05\x00\x65\xcd\x1d\x00\xf9\x02\x95\x00\xdd\x0e\xe9\x02\x51\x4a\x8d\x
        0e", 
    0x30)

if (arg2 != 0 && *(arg1 + 0x210) != 0)
    int32_t i_1 = arg2
    
    if (arg2 s>= 0x1b)
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = mulu.dp.d(0x2f684bdb, arg2)
        uint32_t i_3 = (((i_1 - temp0_1) u>> 1) + temp0_1) u>> 4
        uint64_t i_2 = zx.q(i_3)
        i_1 -= i_3 * 0x1b
        uint64_t i
        
        do
            sub_142b90400(arg1, 0x6765c793fa10079d)
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    for (; i_1 s>= 0xd; i_1 -= 0xd)
        int32_t rcx_1 = *(arg1 + 0x210)
        
        if (rcx_1 != 0)
            uint64_t j_1 = 0
            int32_t j = 0
            
            if (rcx_1 s> 0)
                int64_t r9_1 = 0
                
                do
                    int64_t r8_1 = *(arg1 + 0x200)
                    r9_1 += 4
                    j += 1
                    int64_t rdx_2 = zx.q(*(r8_1 + r9_1 - 4)) * 0x48c27395 + j_1
                    j_1 = rdx_2 u>> 0x1c
                    *(r8_1 + r9_1 - 4) = rdx_2.d & 0xfffffff
                while (j s< *(arg1 + 0x210))
                
                while (j_1 != 0)
                    int64_t rcx_5 = sx.q(*(arg1 + 0x210))
                    
                    if (rcx_5.d s>= 0x80)
                        abort()
                        noreturn
                    
                    int32_t r8_3 = j_1.d & 0xfffffff
                    j_1 u>>= 0x1c
                    *(*(arg1 + 0x200) + (rcx_5 << 2)) = r8_3
                    *(arg1 + 0x210) += 1
    
    if (i_1 s> 0)
        sub_142b90310(arg1, (&var_58)[sx.q(i_1 - 1)])
    
    result = sub_142b90760(arg1, arg2)

__security_check_cookie(result_1 ^ &var_78)
return result
