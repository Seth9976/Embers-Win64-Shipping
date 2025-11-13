// 函数: sub_141d6bfc0
// 地址: 0x141d6bfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg2[1]
int32_t result_2 = arg1[1].d - *(arg1 + 0x34)
int32_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &result_2
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_1, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    result_2 = *rdx
    *rcx += 4

char rax_5 = arg2[5].b
uint64_t result
int32_t var_78
void* var_70
int64_t* var_50
int128_t var_48

if ((rax_5 & 1) == 0)
    if ((rax_5 & 2) == 0)
        result = zx.q(*(arg2 + 0x2a))
    
    if ((rax_5 & 2) != 0 || result.b s< 0 || (result.b & 0x20) != 0)
        int32_t r10_1 = arg1[5].d
        int32_t rbx_1 = 0
        int32_t rcx_7 = 0
        var_78 = 0
        int32_t var_74_1 = 1
        var_70 = &arg1[2]
        int32_t var_68_1 = 0xffffffff
        int64_t var_64_1 = 0
        
        if (r10_1 != 0)
            void* rax_7 = arg1[4]
            void* r8_2 = &arg1[2]
            
            if (rax_7 != 0)
                r8_2 = rax_7
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_8 = *r8_2
            
            if (rdx_8 != 0)
            label_141d6c147:
                int32_t rax_14 = neg.d(rdx_8) & rdx_8
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_14)
                int32_t var_74_2 = rax_14
                int32_t rax_15
                
                if (rax_14 == 0)
                    rax_15 = 0x20
                else
                    rax_15 = 0x1f - temp0_2
                
                var_64_1.d = rcx_7 - rax_15 + 0x1f
                
                if (rcx_7 - rax_15 + 0x1f s> r10_1)
                    var_64_1.d = r10_1
            else
                while (true)
                    int64_t rdx_9 = sx.q(rbx_1)
                    rcx_7 += 0x20
                    rbx_1 += 1
                    var_64_1:4.d = rcx_7
                    var_78 = rbx_1
                    
                    if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_8 = *(r8_2 + (rdx_9 << 2) + 4)
                    var_68_1 = 0xffffffff
                    
                    if (rdx_8 != 0)
                        goto label_141d6c147
                
                var_64_1.d = r10_1
        
        int32_t rdx_11 = arg1[5].d
        int128_t zmm0 = var_78.o
        var_50 = arg1
        double zmm2[0x2] = var_68_1.o
        var_48 = zmm0
        int32_t r12_1 = 0xffffffff << (rdx_11.b & 0x1f)
        zmm0 = var_50.o
        int32_t r8_4 = rdx_11 s>> 5
        int32_t r9_2 = rdx_11 & 0xffffffe0
        double var_38_1[0x2] = zmm2
        int64_t var_58_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        arg3.o = var_48
        var_48:8.d = r12_1
        var_48:0xc.d = rdx_11
        var_78.o = zmm0
        var_68_1.o = arg3.o
        
        if (rdx_11 != r10_1)
            void* rax_17 = arg1[4]
            void* r10_2 = &arg1[2]
            
            if (rax_17 != 0)
                r10_2 = rax_17
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_1 - 1)
            int32_t rdx_15 = *(r10_2 + (sx.q(r8_4) << 2)) & r12_1
            
            if (rdx_15 != 0)
            label_141d6c212:
                int32_t rax_24 = neg.d(rdx_15) & rdx_15
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_24)
                int32_t r11_1
                
                if (rax_24 == 0)
                    r11_1 = 0x20
                else
                    r11_1 = 0x1f - temp0_4
                
                var_48:0xc.d = r9_2 - r11_1 + 0x1f
                
                if (r9_2 - r11_1 + 0x1f s> r10_1)
                    var_48:0xc.d = r10_1
            else
                while (true)
                    int64_t rcx_12 = sx.q(r8_4)
                    r9_2 += 0x20
                    r8_4 += 1
                    
                    if (rcx_12.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_15 = *(r10_2 + (rcx_12 << 2) + 4)
                    var_48:8.d = 0xffffffff
                    
                    if (rdx_15 != 0)
                        goto label_141d6c212
                
                var_48:0xc.d = r10_1
        
        uint32_t r14_3 = (var_48:8.q u>> 0x20).d
        
        while (true)
            int32_t result_1
            result = sx.q(result_1)
            int64_t rcx_14 = var_78.q
            
            if (result.d == r14_3 && var_68_1.q == &arg1[2] && rcx_14 == arg1)
                break
            
            int32_t* rbx_3 = result * 0x38 + *rcx_14
            sub_1409ac860(arg2, rbx_3, arg3)
            sub_1409ac860(arg2, &rbx_3[4], arg3)
            arg3 = sub_140a1d9d0(arg2, &rbx_3[8], arg3)
            var_64_1:4.d &= not.d(var_70:4.d)
            sub_14059bdd0(&var_70)
else
    result = zx.q(result_2)
    
    while (result.d s> 0)
        var_78.q = 0
        result_2 = result.d - 1
        var_70 = nullptr
        sub_1409ac860(arg2, &var_78, arg3)
        __builtin_memset(&var_50, 0, 0x20)
        sub_1409ac860(arg2, &var_50, arg3)
        sub_140a1d9d0(arg2, &var_48:8, arg3)
        arg3 = sub_141d648f0(arg1, &var_78, &var_50)
        int64_t rcx_6 = var_48:8.q
        
        if (rcx_6 != 0)
            arg3 = sub_140a74f90(rcx_6)
        
        result = zx.q(result_2)
result.b = 1
return result
