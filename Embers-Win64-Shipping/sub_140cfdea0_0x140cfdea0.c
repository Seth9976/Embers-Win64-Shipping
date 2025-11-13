// 函数: sub_140cfdea0
// 地址: 0x140cfdea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[3].d)
int64_t* rdi = arg1
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x14)
int32_t rax = (rbx + 1).d
arg1[3].d = rax

if (rax s> *(arg1 + 0x1c))
    sub_1405a4df0(&arg1[2])

int64_t result = arg1[2]
int64_t rcx_1 = rbx * 3
int32_t i_1 = 1
*(result + (rcx_1 << 3)) = var_a8.o
int32_t var_98
*(result + (rcx_1 << 3) + 0x10) = var_98.q

if (rdi[1].d s> 1)
    int64_t rcx_2 = 8
    int64_t arg_18 = 8
    int32_t i
    
    do
        int64_t* rax_1 = *rdi
        int128_t* r13_1 = nullptr
        var_a8.d = 0
        int32_t r8_1 = 0
        var_a8:4.d = 1
        int32_t var_98_1 = 0xffffffff
        int64_t r12_1 = *(rax_1 + rcx_2 - 8)
        void* rsi_2 = *(rax_1 + rcx_2) + 8
        int32_t r11_1 = *(rsi_2 + 0x28)
        void* var_a0_1 = rsi_2 + 0x10
        int32_t rcx_3 = 0
        int64_t var_94_1 = 0
        
        if (r11_1 != 0)
            void* rax_2 = *(rsi_2 + 0x20)
            void* r9_1 = rsi_2 + 0x10
            
            if (rax_2 != 0)
                r9_1 = rax_2
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_4 = *r9_1
            
            if (rdx_4 != 0)
            label_140cfdfd8:
                int32_t rax_9 = neg.d(rdx_4) & rdx_4
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
                var_a8:4.d = rax_9
                int32_t rax_10
                
                if (rax_9 == 0)
                    rax_10 = 0x20
                else
                    rax_10 = 0x1f - temp0_2
                
                var_94_1.d = r8_1 - rax_10 + 0x1f
                
                if (r8_1 - rax_10 + 0x1f s> r11_1)
                    var_94_1.d = r11_1
            else
                while (true)
                    int64_t rdx_5 = sx.q(rcx_3)
                    r8_1 += 0x20
                    rcx_3 += 1
                    var_94_1:4.d = r8_1
                    var_a8.d = rcx_3
                    
                    if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                    int32_t var_98_2 = 0xffffffff
                    
                    if (rdx_4 != 0)
                        goto label_140cfdfd8
                
                var_94_1.d = r11_1
        
        int32_t rdx_6 = *(rsi_2 + 0x28)
        int128_t var_48_1 = 0xffffffff
        int32_t r14_1 = 0xffffffff << (rdx_6.b & 0x1f)
        int128_t var_58_1 = var_a8.o
        int32_t r8_4 = rdx_6 s>> 5
        int32_t r9_3 = rdx_6 & 0xffffffe0
        int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_98_3 = r14_1
        var_94_1.d = rdx_6
        int128_t var_88 = rsi_2.o
        uint128_t var_78_1 = var_58_1
        
        if (rdx_6 != r11_1)
            void* rax_12 = *(rsi_2 + 0x20)
            void* r10_1 = rsi_2 + 0x10
            
            if (rax_12 != 0)
                r10_1 = rax_12
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r11_1 - 1)
            int32_t rdx_10 = *(r10_1 + (sx.q(r8_4) << 2)) & r14_1
            
            if (rdx_10 != 0)
            label_140cfe0a4:
                int32_t rax_19 = neg.d(rdx_10) & rdx_10
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
                int32_t rax_20
                
                if (rax_19 == 0)
                    rax_20 = 0x20
                else
                    rax_20 = 0x1f - temp0_4
                
                var_94_1.d = r9_3 - rax_20 + 0x1f
                
                if (r9_3 - rax_20 + 0x1f s> r11_1)
                    var_94_1.d = r11_1
            else
                while (true)
                    int64_t rcx_8 = sx.q(r8_4)
                    r9_3 += 0x20
                    r8_4 += 1
                    
                    if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_10 = *(r10_1 + (rcx_8 << 2) + 4)
                    var_98_3 = 0xffffffff
                    
                    if (rdx_10 != 0)
                        goto label_140cfe0a4
                
                var_94_1.d = r11_1
        
        while (true)
            int64_t rax_22 = sx.q(var_78_1:0xc.d)
            int64_t rcx_10 = var_88.q
            
            if (rax_22.d == (var_98_3.q u>> 0x20).d && var_78_1.q == rsi_2 + 0x10
                    && rcx_10 == rsi_2)
                break
            
            int128_t* rax_24 = (rax_22 << 5) + *rcx_10
            
            if (*rax_24 == r12_1)
                r13_1 = rax_24
                break
            
            var_78_1:8.d &= not.d(var_88:0xc.d)
            sub_14059bdd0(&var_88:8)
        
        int64_t rbx_3 = sx.q(arg1[3].d)
        int32_t rax_27 = (rbx_3 + 1).d
        arg1[3].d = rax_27
        
        if (rax_27 s> *(arg1 + 0x1c))
            sub_1405a4df0(&arg1[2])
        
        int64_t rcx_13 = rbx_3 * 3
        result = arg1[2]
        i = i_1 + 1
        rdi = arg1
        i_1 = i
        *(result + (rcx_13 << 3)) = *r13_1
        *(result + (rcx_13 << 3) + 0x10) = r13_1[1].q
        rcx_2 = arg_18 + 8
        arg_18 = rcx_2
    while (i s< rdi[1].d)

return result
