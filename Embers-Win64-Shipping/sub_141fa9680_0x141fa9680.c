// 函数: sub_141fa9680
// 地址: 0x141fa9680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
void* result = *(arg1 + 0x28)
int64_t* rdi = arg2
void* rsi = arg1

if (result != 0 && *(result + 0x78) != 0)
    int32_t r8_1 = 0
    int32_t var_264_1 = 1
    int32_t r11_1 = *(arg1 + 0x58)
    void* r9_1 = arg1 + 0x40
    int32_t rcx = 0
    void* var_260 = r9_1
    int32_t var_268_1 = 0
    int32_t var_258_1 = 0xffffffff
    int64_t var_254_1 = 0
    
    if (r11_1 != 0)
        void* rax_2 = *(r9_1 + 0x10)
        
        if (rax_2 != 0)
            r9_1 = rax_2
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_141fa975b:
            int32_t rax_9 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_264_2 = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_2
            
            var_254_1.d = r8_1 - rax_10 + 0x1f
            
            if (r8_1 - rax_10 + 0x1f s> r11_1)
                var_254_1.d = r11_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_254_1:4.d = r8_1
                var_268_1 = rcx
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                var_258_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_141fa975b
            
            var_254_1.d = r11_1
    
    void* var_1e8_1 = arg1 + 0x30
    int128_t zmm0 = var_268_1.o
    int128_t var_1f8_1 = 0xffffffff
    int64_t* var_238_1 = arg1 + 0x30
    int16_t var_230_1 = 0
    result = zmm0.q
    var_258_1.o = zmm0
    var_268_1.o = (arg1 + 0x30).o
    zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_248_1 = zmm0
    
    if (0 s< *(result + 0x18))
        int32_t i_1
        int32_t i = i_1
        
        do
            int64_t rax_14 = *(*var_268_1.q + sx.q(i) * 0x18 + 8)
            
            if (rax_14 != 0)
                int64_t* rbx_2 = rdi[1]
                
                if (rbx_2 == 0)
                    sub_140d1e450(rdi)
                    rbx_2 = rdi[1]
                
                int64_t r14_1 = rbx_2[0x12]
                int64_t r15_1 = rbx_2[0xf]
                int64_t r13_1 = rbx_2[0x13]
                int64_t r12_1 = rbx_2[0x14]
                rbx_2[0x12] = rsi
                (*(*rbx_2 + 0x78))(rbx_2, 0)
                rbx_2[0x13] = 0
                rbx_2[0x14] = 0
                int64_t* rsi_1 = *(rsi + 0x28)
                void var_1e0
                void** var_1d8
                (*(*rsi_1 + 0x280))(rsi_1, 
                    *SymBuffer::end(sub_140b4cb20(&var_1d8, rbx_2), &var_1e0), rax_14)
                sub_140b4cbb0(&var_1d8)
                rbx_2[0x12] = r14_1
                (*(*rbx_2 + 0x78))(rbx_2, r15_1)
                rdi = arg2
                rsi = arg1
                rbx_2[0x13] = r13_1
                rbx_2[0x14] = r12_1
            
            var_254_1:4.d &= not.d(var_260:4.d)
            sub_14059bdd0(&var_260)
            result = var_258_1.q
            i = i_1
        while (i s< *(result + 0x18))
        
        if (var_230_1.b != 0 && var_230_1:1.b != 0)
            result = sub_1405b6730(var_238_1, var_238_1[1].d - *(var_238_1 + 0x34), 1)

__security_check_cookie(rax_1 ^ &var_288)
return result
