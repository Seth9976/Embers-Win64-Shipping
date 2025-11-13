// 函数: sub_1414a3000
// 地址: 0x1414a3000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_688
int64_t rax_1 = __security_cookie ^ &var_688

if (*(*(arg1 + 0x10) + 0x1548) s>= 3)
    void var_5e8
    sub_141475ea0(&var_5e8)
    sub_1414a27e0(arg1, arg2, *(arg1 + 0x10), &var_5e8, arg4)
    char rax_3 = (*(arg1 + 0x570)).b
    
    if ((rax_3 & 0x40) != 0 && *(arg1 + 0x534) s>= 0 && (rax_3 & 0x10) != 0 && rax_3 s>= 0)
        int64_t* rcx_2 = data_143f0f180
        (*(*rcx_2 + 0x100))(rcx_2, *(arg3 + 0x58), &var_5e8)
    
    int64_t* rcx_3 = data_143f0f180
    (*(*rcx_3 + 0x100))(rcx_3, *(arg1 + 0x18), &var_5e8)
    
    if (*(arg1 + 0x48) != 0)
        int32_t r10_1 = (data_1439b6c78).d
        int32_t rcx_4 = 0
        void* var_650_1 = &data_1439b6c60
        int32_t r8_3 = 0
        int32_t var_658_1 = 0
        int32_t var_654_1 = 1
        int32_t var_648_1 = 0xffffffff
        int64_t var_644_1 = 0
        
        if (r10_1 != 0)
            void* rax_6 = data_1439b6c70
            void* r11_1 = &data_1439b6c60
            
            if (rax_6 != 0)
                r11_1 = rax_6
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_5 = *r11_1
            
            if (rdx_5 != 0)
            label_1414a3158:
                int32_t rax_13 = neg.d(rdx_5) & rdx_5
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
                int32_t var_654_2 = rax_13
                int32_t rax_14
                
                if (rax_13 == 0)
                    rax_14 = 0x20
                else
                    rax_14 = 0x1f - temp0_2
                
                int32_t rax_15 = r8_3 - rax_14 + 0x1f
                var_644_1.d = rax_15
                
                if (rax_15 s> r10_1)
                    var_644_1.d = r10_1
            else
                while (true)
                    int64_t rdx_6 = sx.q(rcx_4)
                    r8_3 += 0x20
                    rcx_4 += 1
                    var_644_1:4.d = r8_3
                    var_658_1 = rcx_4
                    
                    if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_5 = *(r11_1 + (rdx_6 << 2) + 4)
                    int32_t var_648_2 = 0xffffffff
                    
                    if (rdx_5 != 0)
                        goto label_1414a3158
                
                var_644_1.d = r10_1
        
        int128_t var_5f8_1 = 0xffffffff
        int128_t var_608_1 = var_658_1.o
        var_644_1.d = r10_1
        int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int128_t var_638 = (&data_1439b6c50).o
        int128_t var_628_1 = var_608_1
        int64_t var_618_1 = temp0_3
        
        while (true)
            int64_t rcx_8 = sx.q(var_628_1:0xc.d)
            int64_t* rax_16 = var_638.q
            
            if (rcx_8.d == ((0xffffffff << (r10_1.b & 0x1f)).q u>> 0x20).d
                    && var_628_1.q == &data_1439b6c60 && rax_16 == &data_1439b6c50)
                break
            
            r8_3.b = 1
            int64_t* rcx_10 = *(*rax_16 + rcx_8 * 0x10)
            (*(*rcx_10 + 0x10))(rcx_10, *(arg1 + 0x48), r8_3)
            var_628_1:8.d &= not.d(var_638:0xc.d)
            sub_14059bdd0(&var_638:8)

int64_t result = sub_1411a4a60(arg2, arg3, *(arg1 + 0x10))
__security_check_cookie(rax_1 ^ &var_688)
return result
