// 函数: sub_141431590
// 地址: 0x141431590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t rbx = 0
void* r15 = arg1
int32_t rcx = *(*(arg1 + 8) + 0xdc0)
int64_t* result_3 = nullptr
uint32_t i_2 = 0x80
int64_t* var_78
__builtin_memset(&var_78, 0, 0x18)
uint32_t rsi_1 = (rcx + 0x1f) u>> 5
int32_t var_60 = rcx
int64_t* result_1

if (rsi_1 u> 4)
    sub_1410b36b0(&var_78, 0, rsi_1, 4)
    int64_t* result_4 = &var_78
    i_2 = rsi_1 << 5
    
    if (result_1 != 0)
        result_4 = result_1
    
    if (rsi_1 u> 8)
        memset(result_4, 0, zx.q(rsi_1) << 2)
    else if (rsi_1 != 0)
        __builtin_memset(result_4, 0, zx.q(rsi_1) << 2)
    
    void* rdx_1 = result_4 + (zx.q(rsi_1 - 1) << 2)
    *rdx_1 &= 0xffffffff u>> ((neg.d(var_60)).b & 0x1f)
    result_3 = result_1

int32_t i = 0

if (*(r15 + 0xa8) s> 0)
    int64_t rcx_7 = 0
    int64_t var_b8_1 = 0
    
    do
        int32_t j = 0
        void* r13_2 = *(r15 + 0xa0) + rcx_7
        
        if (*(r13_2 + 0x1750) s> 0)
            int64_t rsi_2 = 0
            
            do
                int64_t* r9_1 = *(r13_2 + 0x1748)
                int64_t* result_5 = &var_78
                
                if (result_3 != 0)
                    result_5 = result_3
                
                void* r10_1 = *(r9_1 + rsi_2)
                int32_t rcx_8 = *(r10_1 + 0x110)
                int32_t rax_8 = rcx_8
                
                if (rcx_8 s< 0)
                    rax_8 = rcx_8 + 0x1f
                
                void* r14_1 = result_5 + (sx.q(rax_8 s>> 5) << 2)
                int32_t r15_1 = 1 << (rcx_8.b & 0x1f)
                
                if ((*r14_1 & r15_1) != 0)
                    *(r9_1 + rsi_2) = 0
                else
                    sub_1413adce0(r10_1)
                    *r14_1 |= r15_1
                    result_3 = result_1
                
                j += 1
                rsi_2 += 8
            while (j s< *(r13_2 + 0x1750))
            
            rcx_7 = var_b8_1
            r15 = arg1
        
        rcx_7 += 0x5240
        i += 1
        var_b8_1 = rcx_7
    while (i s< *(r15 + 0xa8))

int64_t* rcx_11 = *(r15 + 8)
int32_t rax_11 = (*(*rcx_11 + 0x2c8))(rcx_11)
int32_t temp0
int32_t result_2
temp0:result_2 = mulu.dp.d(0xcccccccd, rax_11)
int64_t* result = zx.q(result_2)

if (rax_11 == rax_11 u/ 0xa * 0xa)
    int32_t rcx_12 = 0
    void* r10_3 = *(r15 + 8) + 0x12c0
    var_78.d = 0
    int32_t r9_2 = *(r10_3 + 0x28)
    void* rdi_2 = r10_3 + 0x10
    var_78:4.d = 1
    void* var_70 = rdi_2
    result_1.d = 0xffffffff
    result_1 = 0
    
    if (r9_2 != 0)
        void* rax_12 = *(rdi_2 + 0x10)
        
        if (rax_12 != 0)
            rdi_2 = rax_12
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r9_2 - 1)
        int32_t rdx_9 = *rdi_2
        
        if (rdx_9 != 0)
        label_1414317e7:
            int32_t rax_19 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_19)
            var_78:4.d = rax_19
            int32_t rax_20
            
            if (rax_19 == 0)
                rax_20 = 0x20
            else
                rax_20 = 0x1f - temp0_1
            
            result_1:4.d = rcx_12 - rax_20 + 0x1f
            
            if (rcx_12 - rax_20 + 0x1f s> r9_2)
                result_1:4.d = r9_2
        else
            while (true)
                int64_t rdx_10 = sx.q(rbx)
                rcx_12 += 0x20
                rbx += 1
                var_60 = rcx_12
                var_78.d = rbx
                
                if (rdx_10.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(rdi_2 + (rdx_10 << 2) + 4)
                result_1.d = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_1414317e7
            
            result_1:4.d = r9_2
    
    double zmm4_1[0x2] = result_1.o
    void* var_80_1 = r10_3
    int16_t var_40_1 = 0
    double zmm3[0x2] = var_78.o
    result = zmm3[0]
    result_1.o = zmm3
    var_78.o = r10_3.o
    double rcx_14 = zmm4_1[0]
    zmm4_1[0] = (_mm_unpackhi_pd(zmm4_1, zmm4_1[0])).q
    
    if ((rcx_14 u>> 0x20).d s< result[3].d)
        uint32_t i_1 = i_2
        
        do
            if (*(sx.q(i_1) * 0xc0 + *var_78 + 0xa4) u< rax_11 - 0x64)
                sub_141425a50(zmm4_1[1], i_1)
                var_40_1.b = 1
            
            var_60 &= not.d(var_70:4.d)
            sub_14059bdd0(&var_70)
            result = result_1
            i_1 = i_2
        while (i_1 s< result[3].d)
        
        if (var_40_1.b != 0 && var_40_1:1.b != 0)
            result = sub_1414199c0(r10_3, *(r10_3 + 8) - *(r10_3 + 0x34), 1)

__security_check_cookie(rax_1 ^ &var_d8)
return result
