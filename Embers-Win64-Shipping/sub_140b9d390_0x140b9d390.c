// 函数: sub_140b9d390
// 地址: 0x140b9d390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = arg3
uint64_t rsi
rsi.b = 0
void var_74

if (*sub_140ba6f50(arg4, &var_74, arg5) != 0xffffffff)
    int32_t* result
    result.b = 1
    return result

char var_78 = 0
sub_140b91920(rbp, &var_74, arg5, &var_78)

if (var_78 == 0)
    sub_140b91920(arg4, &var_74, arg5, nullptr)
    int128_t* var_68_1 = arg5
    int64_t var_60_1 = -1
    sub_140b9de70(arg2, arg2[1].d - *(arg2 + 0x34), 0)
    
    if (arg2[9].d != 0)
        int64_t r15_1 = *arg5
        void* r9_1 = &arg2[7]
        void* r8_3 = *(r9_1 + 8)
        int32_t rdi_1 = *(arg5 + 0xc)
        int32_t rbp_1 = *(arg5 + 8)
        uint32_t rbx_2 = (r15_1 u>> 4).d
        int32_t r11_2 = (0x9e3779b9 - rbx_2) ^ rbx_2 << 8
        int32_t r10_3 = neg.d(r11_2 + rbx_2) ^ r11_2 u>> 0xd
        int32_t rbx_5 = (rbx_2 - r11_2 - r10_3) ^ r10_3 u>> 0xc
        int32_t r11_5 = (r11_2 - rbx_5 - r10_3) ^ rbx_5 << 0x10
        int32_t r10_6 = (r10_3 - r11_5 - rbx_5) ^ r11_5 u>> 5
        int32_t rbx_8 = (rbx_5 - r11_5 - r10_6) ^ r10_6 u>> 3
        int32_t r11_8 = (r11_5 - rbx_8 - r10_6) ^ rbx_8 << 0xa
        
        if (r8_3 != 0)
            r9_1 = r8_3
        
        int32_t i = *(r9_1 + (((sx.q((rdi_1 << 0xe ^ rbp_1) << 0xd ^ r11_8 u>> 0xf)
            ^ sx.q(r10_6 - r11_8 - rbx_8)) & (sx.q(arg2[9].d) - 1)) << 2))
        var_60_1:4.d = i
        var_60_1.d = i
        
        if (i != 0xffffffff)
            int64_t rdx_8 = *arg2
            var_60_1.d = i
            
            do
                int64_t rax_19 = sx.q(i) * 5
                int64_t* rcx_10 = rdx_8 + (rax_19 << 3)
                i = *(rdx_8 + (rax_19 << 3) + 0x20)
                
                if (*rcx_10 == r15_1 && rcx_10[1].d == rbp_1 && *(rcx_10 + 0xc) == rdi_1)
                    break
                
                var_60_1.d = i
            while (i != 0xffffffff)
            
            var_60_1:4.d = i
        
        rbp = arg3
    
    int128_t zmm0_1 = arg2.o
    int64_t* rdi_2 = zmm0_1:8.q
    int64_t* r15_2 = zmm0_1.q
    int32_t j = var_60_1:4.d
    int32_t i_1 = var_60_1.d
    
    while (i_1 != 0xffffffff)
        rsi = zx.q(sub_140b9d390(arg1, arg2, rbp, arg4, *r15_2 + ((sx.q(i_1) * 5 + 2) << 3)))
        i_1 = j
        
        if (j != 0xffffffff)
            int64_t r9_3 = *r15_2
            
            do
                int64_t rdx_11 = sx.q(i_1) * 5
                j = *(r9_3 + (rdx_11 << 3) + 0x20)
                
                if (*(r9_3 + (rdx_11 << 3)) == *rdi_2 && *(r9_3 + (rdx_11 << 3) + 8) == rdi_2[1].d
                        && *(r9_3 + (rdx_11 << 3) + 0xc) == *(rdi_2 + 0xc))
                    break
                
                i_1 = j
            while (j != 0xffffffff)
        
        if (rsi.b != 0)
            break
    
    sub_140bb63e0(arg4, arg5)

return zx.q(rsi.b)
