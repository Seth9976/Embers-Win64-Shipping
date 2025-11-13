// 函数: sub_1422cb230
// 地址: 0x1422cb230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg2 + 0x28)
int32_t r9 = 0
int32_t var_a4 = 1
int64_t r14
r14.b = 0
int32_t var_a8 = 0
void* var_a0 = arg2 + 0x10
int32_t rcx = 0
int32_t var_98 = 0xffffffff
int32_t var_94 = 0
int32_t var_90 = 0
void* rsi = arg2

if (rbx != 0)
    void* rax_1 = *(arg2 + 0x20)
    void* r8 = arg2 + 0x10
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_2 = *r8
    int32_t var_94_2
    
    if (rdx_2 != 0)
    label_1422cb2e9:
        int32_t rax_7 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_a4_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        int32_t var_94_1 = rcx - rax_8 + 0x1f
        
        if (rcx - rax_8 + 0x1f s> rbx)
            var_94_2 = rbx
    else
        while (true)
            int64_t rax_4 = sx.q(r9)
            rcx += 0x20
            r9 += 1
            int32_t var_90_1 = rcx
            var_a8 = r9
            
            if (rax_4.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_2 = *(r8 + (rax_4 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1422cb2e9
        
        var_94_2 = rbx

int32_t rdx_4 = *(rsi + 0x28)
int32_t var_94_3 = rdx_4
int32_t rdi = 0xffffffff << (rdx_4.b & 0x1f)
int128_t var_58 = var_a8.o
int32_t r8_2 = rdx_4 s>> 5
int32_t rcx_5 = rdx_4 & 0xffffffe0
int32_t var_98_2 = rdi
int128_t var_48 = 0xffffffff
int64_t var_68 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_88 = rsi.o
int128_t var_78 = var_58

if (rdx_4 != rbx)
    void* rax_10 = *(arg2 + 0x20)
    void* r9_1 = arg2 + 0x10
    
    if (rax_10 != 0)
        r9_1 = rax_10
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_8 = *(r9_1 + (sx.q(r8_2) << 2)) & rdi
    int32_t var_94_5
    
    if (rdx_8 != 0)
    label_1422cb3b2:
        int32_t rax_17 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
        int32_t r11_1
        
        if (rax_17 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        int32_t var_94_4 = rcx_5 - r11_1 + 0x1f
        
        if (rcx_5 - r11_1 + 0x1f s> rbx)
            var_94_5 = rbx
    else
        while (true)
            int64_t rax_14 = sx.q(r8_2)
            rcx_5 += 0x20
            r8_2 += 1
            
            if (rax_14.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_8 = *(r9_1 + (rax_14 << 2) + 4)
            var_98_2 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_1422cb3b2
        
        var_94_5 = rbx

while (true)
    int64_t rax_19 = sx.q(var_78:0xc.d)
    int64_t rdx_10 = var_88.q
    
    if (rax_19.d == (var_98_2.q u>> 0x20).d && var_78.q == arg2 + 0x10 && rdx_10 == rsi)
        return zx.q(r14.b)
    
    void* rbx_2 = rax_19 * 0xd8 + *rdx_10
    int64_t rdx_11 = *(rbx_2 + 0xc8)
    
    if (rdx_11 == 0)
        if (*(rbx_2 + 0x70) != *(rbx_2 + 0x9c))
            int64_t r9_2 = sx.q(*arg3)
            void* r10_5 = rbx_2 + 0xa0
            void* rdx_12 = *(r10_5 + 8)
            void* rax_22 = r10_5
            int64_t r11_2 = sx.q(*(rbx_2 + 0xb0))
            
            if (rdx_12 != 0)
                rax_22 = rdx_12
            
            int32_t i = *(rax_22 + (((r11_2 - 1) & r9_2) << 2))
            
            if (i != 0xffffffff)
                int64_t r8_4 = *(rbx_2 + 0x68)
                
                do
                    int64_t rdx_13 = sx.q(i) * 3
                    
                    if (*(r8_4 + (rdx_13 << 2)) == r9_2.d)
                        if (i != 0xffffffff)
                            void* rax_23 = *(rbx_2 + 0xa8)
                            
                            if (rax_23 != 0)
                                r10_5 = rax_23
                            
                            int64_t rax_24
                            
                            for (int32_t j = *(r10_5 + ((r9_2 & (r11_2 - 1)) << 2)); 
                                    j != 0xffffffff; j = *(r8_4 + (rax_24 << 2) + 4))
                                int64_t j_1 = sx.q(j)
                                rax_24 = j_1 * 3
                                
                                if (*(r8_4 + (rax_24 << 2)) == r9_2.d)
                                    int64_t rax_25 = j_1 * 3
                                    int64_t rax_27 = sx.q(*(r8_4 + (rax_25 << 2) + 8)) & (r11_2 - 1)
                                    void* rcx_11 = r10_5 + (rax_27 << 2)
                                    int32_t k = *(r10_5 + (rax_27 << 2))
                                    
                                    while (k != 0xffffffff)
                                        if (k == j)
                                            *rcx_11 = *(r8_4 + (rax_25 << 2) + 4)
                                            break
                                        
                                        int64_t k_1 = sx.q(k)
                                        k = *(r8_4 + ((k_1 * 3 + 1) << 2))
                                        rcx_11 = r8_4 + ((k_1 * 3 + 1) << 2)
                                    
                                    sub_14090a460(rbx_2 + 0x68, j, 1)
                                    break
                            
                            void arg_20
                            sub_141f77ab0(rbx_2 + 0x18, &arg_20, arg3, nullptr)
                            r14.b = 1
                        
                        break
                    
                    i = *(r8_4 + (rdx_13 << 2) + 4)
                while (i != 0xffffffff)
        
        rsi = arg2
    else if (sub_1422cb230(arg1, rdx_11, arg3) != 0)
        r14.b = 1
    
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)
