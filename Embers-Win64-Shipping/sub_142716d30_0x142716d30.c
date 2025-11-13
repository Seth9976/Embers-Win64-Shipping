// 函数: sub_142716d30
// 地址: 0x142716d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xa8)

if (rax == 0)
    rax = sub_141ee69e0(arg1)

if ((*(arg1 + 0x1b9) & 8) != 0)
    int64_t* rcx = *(arg1 + 0xe8)
    
    if (rcx != 0)
        int128_t zmm0
        zmm0.d = (*(arg1 + 0x1c0)).d f+ *(arg1 + 0x1c8)
        uint128_t zmm1 = *(rax + 0x520)
        
        if (not(zmm1.d f<= zmm0.d) && *(arg1 + 0x1c4) s> 0)
            int32_t rax_1 = *(arg1 + 0x1cc)
            *(arg1 + 0x1c8) = zmm1.d
            
            if (*(arg1 + 0x1d8) == rax_1)
                int64_t rsi_1 = sx.q(*(arg1 + 0x1d8))
                int32_t rax_2 = (rsi_1 + 1).d
                *(arg1 + 0x1d8) = rax_2
                
                if (rax_2 s> *(arg1 + 0x1dc))
                    sub_1407c3b60(arg1 + 0x1d0)
                
                __builtin_memset(rsi_1 * 0x38 + *(arg1 + 0x1d0), 0, 0x38)
                rax_1 = *(arg1 + 0x1cc)
                rcx = *(arg1 + 0xe8)
            
            int128_t* rbx_1 = sx.q(rax_1) * 0x38 + *(arg1 + 0x1d0)
            void var_48
            int128_t* rax_5 = (*(*rcx + 0x510))(rcx, &var_48)
            *rbx_1 = *rax_5
            rbx_1[1] = rax_5[1]
            rbx_1[2] = rax_5[2]
            rbx_1[3].q = rax_5[3].q
            *(arg1 + 0x1c4)
            uint64_t rax_9
            rax_9.b = 1
            *(arg1 + 0x1cc) = mods.dp.d(sx.q(*(arg1 + 0x1cc) + 1), *(arg1 + 0x1c4))
            return rax_9

rax.b = 0
return rax
