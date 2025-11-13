// 函数: sub_1419367f0
// 地址: 0x1419367f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r12 = sx.q(arg3)
int32_t rdi

if (rax_1 == 1)
    rdi = arg5
label_1419369dd:
    
    if (sub_141934710(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_9 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0xc) = rax_9
        void* rdx_8 = *(r9_1 + 8)
        int64_t r8_3 = sx.q(rax_9)
        void* rax_10 = r9_1
        
        if (rdx_8 != 0)
            rax_10 = rdx_8
        
        arg4[1].d = *(rax_10 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_12 = *(r9_1 + 8)
        
        if (rax_12 != 0)
            r9_1 = rax_12
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi
else
    int128_t* r9 = *arg4
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_141936973:
        rbx_1 = -1
    else
        int64_t r10_1 = *arg1
        uint128_t zmm1 = r9[1]
        int128_t var_98 = *r9
        int128_t zmm0 = r9[2]
        uint128_t var_88 = zmm1
        int128_t var_78_1 = zmm0
        uint128_t var_68_1 = r9[3]
        int128_t var_58_1 = r9[4]
        uint128_t var_48_1 = r9[5]
        int128_t var_38_1 = r9[6]
        uint64_t var_28_1 = r9[7].q
        
        while (true)
            int64_t r8_2 = sx.q(rbx_1) * 2
            uint64_t rdx_3 = 0
            int128_t* rax_2 = *(r10_1 + (r8_2 << 3))
            zmm1 = rax_2[1]
            int128_t var_118 = *rax_2
            zmm0 = rax_2[2]
            uint128_t var_108 = zmm1
            int128_t var_f8_1 = zmm0
            uint128_t var_e8_1 = rax_2[3]
            int128_t var_d8_1 = rax_2[4]
            zmm0 = rax_2[6]
            uint128_t var_c8_1 = rax_2[5]
            zmm1 = zx.o(rax_2[7].q)
            rax_2.b = 1
            int128_t var_b8_1 = zmm0
            uint64_t var_a8_1 = zmm1.q
            
            do
                if (rax_2.b == 0)
                    goto label_141936965
                
                uint64_t rcx_1 = rdx_3 * 5
                int64_t rax_3 = *(&var_118 + (rcx_1 << 2))
                rax_2 = rax_3 - *(&var_98 + (rcx_1 << 2))
                
                if (rax_3 == *(&var_98 + (rcx_1 << 2)))
                    int64_t rax_4 = *(&var_118:8 + (rcx_1 << 2))
                    rax_2 = rax_4 - *(&var_98:8 + (rcx_1 << 2))
                    
                    if (rax_4 == *(&var_98:8 + (rcx_1 << 2)))
                        rax_2 = zx.q(*(&var_108 + (rcx_1 << 2))) - zx.q(*(&var_88 + (rcx_1 << 2)))
                
                rax_2.b = rax_2 == 0
                rdx_3 = zx.q(rdx_3.d + 1)
            while (rdx_3.d u< 6)
            
            if (rax_2.b != 0)
                break
            
        label_141936965:
            rbx_1 = *(r10_1 + (r8_2 << 3) + 8)
            
            if (rbx_1 == 0xffffffff)
                goto label_141936973
    
    rsi.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi = arg5
    else
        memmove((sx.q(rbx_1) << 4) + *arg1, arg4, 8)
        sub_140906230(arg1, arg5, 1)
        rdi = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_1419369dd

*arg2 = rdi

if (arg6 != 0)
    *arg6 = rsi.b

return arg2
