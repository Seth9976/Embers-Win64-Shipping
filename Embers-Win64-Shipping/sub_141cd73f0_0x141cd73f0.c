// 函数: sub_141cd73f0
// 地址: 0x141cd73f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = arg1
int64_t* result = arg1
(*(*arg1 + 0x1d8))(arg3, &data_1439a93f8)

if ((result[5].b & 1) != 0)
    int32_t rax_1
    rax_1, arg4 = sub_140b4e7c0(result, &data_1439a93f8)
    
    if (rax_1 s< 0x1a)
        int64_t* rcx_1 = result[1]
        int32_t* rdx = *rcx_1
        
        if (&rdx[1] u> rcx_1[1])
            int64_t* rdx_1 = &result_1
            
            if ((*(result + 0x29) & 0x20) != 0)
                sub_140b54070(result, rdx_1, arg4)
            else
                (*(*result + 0x150))(result, rdx_1, 4)
        else
            result_1.d = *rdx
            *rcx_1 += 4
        
        sub_141cd2750(result, arg2, 
            sub_141cd2af0(result, arg2, 
                sub_141cd1530(result, arg2, 
                    sub_141cd18c0(result, arg2, 
                        sub_141cd1c60(result, arg2, 
                            sub_141cd23b0(result, arg2, 
                                sub_141cd2000(result, arg2, sub_141cdb850(arg2, 0))))))))
        return result

int64_t* rcx_11 = result[1]
int32_t* r8 = *rcx_11

if (&r8[1] u<= rcx_11[1])
    arg2[0xa].d = *r8
    int64_t* rax_8 = result[1]
    *rax_8 += 4
else if ((*(result + 0x29) & 0x20) != 0)
    sub_140b54070(result, &arg2[0xa], arg4)
else
    (*(*result + 0x150))(result, &arg2[0xa], 4)

bool cond:1 = (result[5].b & 2) == 0
int64_t* r13 = nullptr
int32_t i_3 = 0
int64_t* var_a8 = nullptr
int32_t var_9c = 0
int32_t var_98
int64_t* var_90

if (not(cond:1))
    int32_t r11_1 = arg2[5].d
    void* r9_1 = &arg2[2]
    var_98 = 0
    int32_t rcx_13 = 0
    int32_t var_94_1 = 1
    void* r8_1 = nullptr
    var_90 = r9_1
    int32_t var_88_1 = 0xffffffff
    int64_t var_84_1 = 0
    
    if (r11_1 != 0)
        void* rax_10 = *(r9_1 + 0x10)
        
        if (rax_10 != 0)
            r9_1 = rax_10
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_12 = *r9_1
        
        if (rdx_12 != 0)
        label_141cd75d9:
            int32_t rax_17 = ((rdx_12 - 1) & rdx_12) ^ rdx_12
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_17)
            int32_t var_94_2 = rax_17
            int32_t rax_18
            
            if (rax_17 == 0)
                rax_18 = 0x20
            else
                rax_18 = 0x1f - temp0_2
            
            r8_1 = zx.q(r8_1.d - rax_18)
            int32_t rax_19 = (r8_1 + 0x1f).d
            var_84_1.d = rax_19
            
            if (rax_19 s> r11_1)
                var_84_1.d = r11_1
        else
            while (true)
                int64_t rdx_13 = sx.q(rcx_13)
                r8_1 = zx.q(r8_1.d + 0x20)
                rcx_13 += 1
                var_84_1:4.d = r8_1.d
                var_98 = rcx_13
                
                if (rdx_13.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_12 = *(r9_1 + (rdx_13 << 2) + 4)
                var_88_1 = 0xffffffff
                
                if (rdx_12 != 0)
                    goto label_141cd75d9
            
            var_84_1.d = r11_1
    
    uint128_t zmm4_1 = var_88_1.o
    int64_t* var_30_1 = arg2
    arg3 = var_98.o
    uint128_t var_40_1 = zmm4_1
    char var_60_1 = 0
    void* rax_20 = arg3.q
    var_88_1.o = arg3
    arg4.o = zmm4_1
    var_98.o = arg2.o
    arg4.o = _mm_unpackhi_pd(arg4.o, zmm4_1.q)
    arg3.q = (arg4.o).q
    
    if (_mm_bsrli_si128(zmm4_1, 4).d s< *(rax_20 + 0x18))
        int32_t i_2
        int32_t i = i_2
        int32_t rsi = var_9c
        
        do
            int64_t rdx_14 = *var_98.q
            int64_t rcx_16 = sx.q(i) * 3
            void* r12_1 = *(rdx_14 + (rcx_16 << 3) + 8)
            
            if (((*(r12_1 + 0x10) u>> 3).b & 1) != 0)
                int64_t rbx_1 = *(rdx_14 + (rcx_16 << 3))
                int64_t i_4 = sx.q(i_3)
                *(rdx_14 + (rcx_16 << 3) + 8) = 0
                i_3 = (i_4 + 1).d
                
                if (i_3 s> rsi)
                    r8_1, r9_1 = sub_1405a4f90(&var_a8)
                    rsi = var_9c
                
                r13 = var_a8
                int64_t rax_27 = i_4 * 2
                r13[rax_27] = rbx_1
                r13[rax_27 + 1] = r12_1
                sub_141ce0d20(arg3:8.q, i, r8_1, r9_1)
                var_60_1 = 1
            
            var_84_1:4.d &= not.d(var_90:4.d)
            r8_1, r9_1 = sub_14059bdd0(&var_90)
            i = i_2
        while (i s< *(var_88_1.q + 0x18))
        
        result = result_1
        char var_5f
        
        if (var_60_1 != 0 && var_5f != 0)
            r8_1.b = 1
            arg4 = sub_1405b6730(arg2, arg2[1].d - *(arg2 + 0x34), r8_1.b)

sub_141cd7100(result, arg2, arg4)

if ((result[5].b & 1) != 0)
    int64_t rcx_22 = arg2[8]
    
    if (rcx_22 != 0)
        arg2[8] = sub_140a84c80(rcx_22, 0, 0)
    
    arg2[9].d = 0
    sub_1405b6730(arg2, arg2[1].d - *(arg2 + 0x34), 0)

if ((result[5].b & 2) != 0)
    int64_t* r12_2 = r13
    void* rax_34 = &r13[sx.q(i_3) * 2]
    
    if (r13 != rax_34)
        do
            sub_140598750(arg2, &var_98)
            int64_t* rdi_1 = var_90
            *rdi_1 = *r12_2
            rdi_1[1] = r12_2[1]
            r12_2[1] = 0
            rdi_1[2].d = 0xffffffff
            int64_t rbx_2 = *rdi_1
            sub_14090b810(arg2, &result_1, (rbx_2 u>> 0x20).d + sub_140b5ead0(rbx_2.d), rdi_1, 
                var_98, nullptr)
            r12_2 = &r12_2[2]
        while (r12_2 != rax_34)
        
        r13 = var_a8

if (i_3 != 0)
    void* rbx_4 = &r13[1]
    int32_t i_1
    
    do
        int64_t* rcx_27 = *rbx_4
        
        if (rcx_27 != 0)
            (**rcx_27)(rcx_27, 1)
        
        rbx_4 += 0x10
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (r13 != 0)
    sub_140a74f90(r13)

return result
