// 函数: sub_1419330b0
// 地址: 0x1419330b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x3c))
uint64_t i_2 = zx.q(arg3)
int64_t rax_1 = rax * 5
uint32_t rbp = *((rax_1 << 3) + 0x1439c85e8)
uint8_t rcx_1 = (*(arg1 + 0x40) u>> 4).b & 1
uint32_t rcx_2 = *((rax_1 << 3) + &data_1439c85ec)
int32_t rax_2 = (&data_1439c85f4)[rax_1 * 2]
uint32_t var_ac = rbp
void* rax_3 = sub_14190d690(*(arg1 + 0x70), 1)

if (i_2.d != 0)
    int32_t r14_1 = arg5
    int32_t rsi_1 = arg4 - r14_1
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        char rcx_4 = r14_1.b
        uint32_t r12_1 = 1
        uint32_t rax_5 = *(arg1 + 0x60) u>> rcx_4
        
        if (rax_5 u>= 1)
            r12_1 = rax_5
        
        uint32_t rax_7 = *(arg1 + 0x64) u>> rcx_4
        uint32_t rcx_5 = 1
        
        if (rax_7 u>= 1)
            rcx_5 = rax_7
        
        uint32_t rax_8 = rcx_2
        
        if (rcx_5 u>= rcx_2)
            rax_8 = rcx_5
        
        uint32_t rcx_6 = rbp
        
        if (r12_1 u>= rbp)
            rcx_6 = r12_1
        
        int32_t rax_15 = 1
        int32_t rsi_4 =
            divu.dp.d(0:(rax_8 - 1 + rcx_2), rcx_2) * divu.dp.d(0:(rbp - 1 + rcx_6), rbp) * rax_2
        
        if ((*(arg1 + 0xe8) & 1) != 0)
            rax_15 = 6
        
        int64_t rbp_1 = sx.q(rax_15 * r14_1)
        uint32_t var_e8
        uint32_t var_e0
        int32_t var_d8
        int32_t var_d0
        int64_t var_c8
        
        if (*(*(arg1 + 0xa0) + (rbp_1 << 3)) == 0)
            void*** rax_18 = j_sub_140a82f30(0x58)
            void*** rbx = rax_18
            
            if (rax_18 == 0)
                rbx = nullptr
            else
                rbx[5].d &= 0xfffffff0
                *rbx = &data_142ff5698
                rbx[1].d = 0
                rbx[4] = 0
                *(rbx + 0x2c) = 0
                __builtin_memset(&rbx[7], 0, 0x14)
                rbx[2].d = rsi_4
                *(rbx + 0x14) = 2
                *(rbx + 0x4c) = rsi_4
                char rax_19
                
                if (data_143f01c92 != 0)
                    rax_19 = sub_140a80f10()
                
                if (data_143f01c92 == 0 || rax_19 != 0)
                    sub_14190c5b0(rbx, 0, 0, 0, var_e8, var_e0, var_d8, var_d0, var_c8)
                else
                    void*** rcx_9 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
                    void* rax_20 = &rcx_9[0xa]
                    
                    if (rax_20 u> data_143f02bd0)
                        sub_140b0e3d0(&data_143f02bc8, 0x60)
                        rcx_9 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
                        rax_20 = &rcx_9[0xa]
                    
                    data_143f02bac += 1
                    data_143f02bc8 = rax_20
                    int64_t var_90_1 = 0
                    *data_143f02ba0 = rcx_9
                    void** const var_58 = &data_142ff5dc8
                    data_143f02ba0 = &rcx_9[1]
                    int128_t var_50_1 = rbx.o
                    int64_t var_40_1 = 0
                    rcx_9[1] = 0
                    *rcx_9 = &data_142ff4958
                    rcx_9[2] = sub_14190a3f0
                    rcx_9[4] = 0
                    
                    if (rcx_9[2] != 0)
                        void** const* rcx_12 = &var_58
                        (**rcx_12)(rcx_12)
                    
                    void** const* rcx_13 = &var_58
                    (*rcx_13)[2](rcx_13)
            
            int64_t rax_25 = *(arg1 + 0xa0)
            int64_t* rcx_15 = *(rax_25 + (rbp_1 << 3))
            *(rax_25 + (rbp_1 << 3)) = rbx
            
            if (rbx != 0)
                rbx[1].d += 1
            
            if (rcx_15 != 0)
                rcx_15[1].d -= 1
                
                if (rcx_15[1].d == 1)
                    (**rcx_15)(rcx_15, 1)
        
        int64_t* rbx_2 = *(*(arg1 + 0xa0) + (rbp_1 << 3))
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        int32_t r8_2 = data_1439c7498 - 1
        int32_t r9 = *(arg2 + 0x84)
        uint32_t rdx_3 = *(arg2 + 0x80)
        int64_t rcx_16 = sx.q(r8_2) * 5
        int64_t rax_28 = *(rax_3 + 8)
        
        if (*(rax_28 + (rcx_16 << 3) + 0x10) != r9 || *(rax_28 + (rcx_16 << 3) + 0x14) != rdx_3)
            var_d8 = *(arg1 + 0x34)
            var_e0 = 0xffffffff
            sub_14190a090(*(arg1 + 0x70), rax_3, r8_2, r9, rdx_3, 0xffffffff)
        
        data_143effcd8(0x88eb, zx.q(rbx_2[3].d))
        
        if ((&data_143efedb8)[rax * 7].b == 0)
            data_143effac0(0xd05, 1)
            uint64_t rcx_19 = 0x8515
            
            if ((*(arg2 + 0xe8) & 1) == 0)
                rcx_19 = zx.q(*(arg2 + 0x84))
            
            data_143effa68(rcx_19, zx.q(rsi_1 + r14_1), zx.q(*(rax * 0x1c + &data_143efedb0)), 
                zx.q(*(rax * 0x1c + &data_143efedb0:4)), 0, var_e0, var_d8, var_d0, var_c8)
            data_143effac0(0xd05, 4)
        else
            uint64_t rcx_18 = 0x8515
            
            if ((*(arg2 + 0xe8) & 1) == 0)
                rcx_18 = zx.q(*(arg2 + 0x84))
            
            data_143effc58(rcx_18, zx.q(rsi_1 + r14_1), 0)
        
        sub_141909fb0(rbx_2[3].d)
        int32_t r9_2 = *(arg1 + 0x84)
        int32_t r8_5 = data_1439c7498 - 1
        int32_t rdx_10 = *(arg1 + 0x80)
        int64_t rcx_21 = sx.q(r8_5) * 5
        int64_t rax_31 = *(rax_3 + 8)
        
        if (*(rax_31 + (rcx_21 << 3) + 0x10) != r9_2 || *(rax_31 + (rcx_21 << 3) + 0x14) != rdx_10)
            int32_t var_d8_1 = *(arg1 + 0x34)
            sub_14190a090(*(arg1 + 0x70), rax_3, r8_5, r9_2, rdx_10, 0xffffffff)
        
        if ((&data_143efedb8)[rax * 7].b == 0)
            data_143effac0(0xcf5, 1)
            uint64_t rcx_30 = 0x8515
            
            if ((*(arg1 + 0xe8) & 1) == 0)
                rcx_30 = zx.q(*(arg1 + 0x84))
            
            var_c8 = 0
            var_d0 = *(rax * 0x1c + &data_143efedb0:4)
            var_d8 = *(rax * 0x1c + &data_143efedb0)
            var_e0 = rcx_5
            var_e8 = r12_1
            data_143effb68(rcx_30, zx.q(r14_1), 0, 0, var_e8, var_e0, var_d8, var_d0, 0)
            data_143effac0(0xcf5, 4)
        else
            void* rsi_6 = arg1 + 0xd0
            int32_t rdx_13 = *(arg1 + 0xe8) & 1
            int32_t rcx_23 = 1
            void* r8_6 = rsi_6
            
            if (rdx_13 != 0)
                rcx_23 = 6
            
            void* rax_33 = *(rsi_6 + 8)
            int32_t rcx_24 = rcx_23 * r14_1
            
            if (rax_33 != 0)
                r8_6 = rax_33
            
            int32_t rax_34 = rcx_24
            
            if (rcx_24 s< 0)
                rax_34 = rcx_24 + 0x1f
            
            uint64_t rcx_26 = 0x8515
            
            if (not(test_bit(*(r8_6 + (sx.q(rax_34 s>> 5) << 2)), rcx_24 & 0x1f)))
                if (rdx_13 == 0)
                    rcx_26 = zx.q(*(arg1 + 0x84))
                
                var_d0.q = 0
                var_d8 = rbx_2[2].d
                var_e0 = 0
                var_e8 = rcx_5
                data_143effc30(rcx_26, zx.q(r14_1), 
                    zx.q(*(rax * 0x1c + &data_143efeda0 + (zx.q(rcx_1) << 2))), zx.q(r12_1), 
                    var_e8, 0, var_d8, 0, var_c8)
                int32_t rcx_27 = 1
                
                if ((*(arg1 + 0xe8) & 1) != 0)
                    rcx_27 = 6
                
                void* rax_43 = *(rsi_6 + 8)
                int32_t rcx_28 = rcx_27 * r14_1
                
                if (rax_43 != 0)
                    rsi_6 = rax_43
                
                int32_t rax_44 = rcx_28
                
                if (rcx_28 s< 0)
                    rax_44 = rcx_28 + 0x1f
                
                void* rdx_18 = rsi_6 + (sx.q(rax_44 s>> 5) << 2)
                *rdx_18 |= 1 << (rcx_28.b & 0x1f)
            else
                if (rdx_13 == 0)
                    rcx_26 = zx.q(*(arg1 + 0x84))
                
                var_c8 = 0
                var_d0 = rbx_2[2].d
                var_d8 = *(rax * 0x1c + &data_143efeda0 + (zx.q(rcx_1) << 2))
                var_e0 = rcx_5
                var_e8 = r12_1
                data_143effc48(rcx_26, zx.q(r14_1), 0, 0, var_e8, var_e0, var_d8, var_d0, 0)
        
        int64_t rax_51 = *(arg1 + 0xa0)
        int64_t* rcx_31 = *(rax_51 + (rbp_1 << 3))
        *(rax_51 + (rbp_1 << 3)) = 0
        
        if (rcx_31 != 0)
            rcx_31[1].d -= 1
            
            if (rcx_31[1].d == 1)
                (**rcx_31)(rcx_31, 1)
        
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2, 1)
        
        rbp = var_ac
        r14_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

data_143effcd8(0x88eb, 0)
return sub_141909fb0(0) __tailcall
