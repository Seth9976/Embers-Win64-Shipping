// 函数: sub_142272d60
// 地址: 0x142272d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm8[0x2] = arg2
int64_t* rax = sub_142565030()
int64_t rax_1 = rax[0x23]

if (rax_1 == 0)
    int64_t rdx_1 = *rax
    (*(rdx_1 + 0x390))(rax, rdx_1)
    rax_1 = rax[0x23]

void* rcx_1 = arg1[0xb]
int32_t rbx_1 = 0
void* const rcx_2

if (rcx_1 == 0)
    rcx_2 = nullptr
else
    rcx_2 = *(rcx_1 + 0x50)

int128_t zmm7

if (rcx_2 == 0)
    zmm7 = zx.o(0)
else
    void* rax_2 = sub_142436900(rcx_2)
    
    if (rax_2 == 0)
        zmm7 = zx.o(0)
    else
        void* rax_3 = *(rax_2 + 0x228)
        
        if (rax_3 == 0)
            zmm7 = zx.o(0)
        else
            zmm7 = *(rax_3 + 0x238)

int32_t r10 = *(arg3 + 0x28)
void* r8 = arg3 + 0x10
int32_t var_c8 = 0
int32_t rcx_3 = 0
int32_t var_c4 = 1
void* var_c0 = r8
int32_t var_b8 = 0xffffffff
int64_t var_b4 = 0

if (r10 != 0)
    void* rax_4 = *(r8 + 0x10)
    
    if (rax_4 != 0)
        r8 = rax_4
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_4 = *r8
    
    if (rdx_4 != 0)
    label_142272e67:
        int32_t rax_11 = ((rdx_4 - 1) & rdx_4) ^ rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_c4_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        var_b4.d = rcx_3 - rax_12 + 0x1f
        
        if (rcx_3 - rax_12 + 0x1f s> r10)
            var_b4.d = r10
    else
        while (true)
            int64_t rdx_5 = sx.q(rbx_1)
            rcx_3 += 0x20
            rbx_1 += 1
            var_b4:4.d = rcx_3
            var_c8 = rbx_1
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r8 + (rdx_5 << 2) + 4)
            var_b8 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_142272e67
        
        var_b4.d = r10

void* var_60 = arg3
int128_t zmm0 = var_c8.o
int128_t var_70 = 0xffffffff
int16_t var_90 = 0
void* rax_14 = zmm0.q
var_b8.o = zmm0
var_c8.o = arg3.o
zmm0.q = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
uint64_t result = zx.q(_mm_bsrli_si128(0xffffffff, 4))
int128_t var_a8 = zmm0

if (result.d s< *(rax_14 + 0x18))
    int32_t i_1
    int32_t i = i_1
    int128_t zmm6 = 0x3a03126f
    
    do
        int64_t* rsi_1 = var_c8.q
        int64_t rdi_2 = sx.q(i) * 0x90
        int64_t* rax_16
        int64_t r8_1
        rax_16, r8_1 = sub_140d3c6e0(*rsi_1 + rdi_2)
        
        if (rax_16 != 0)
            r8_1.b = 1
            int64_t r9_1 = *rax_16
            int64_t var_d8
            int32_t var_d0
            
            if ((*(r9_1 + 0x6a8))(rax_16, *(*rsi_1 + rdi_2 + 0x50), r8_1, r9_1, var_d8, var_d0, 
                    var_c8) != 0)
                void* rcx_9 = rax_16[0x14]
                
                if (rcx_9 != 0)
                    char rdx_9 = *(rcx_9 + 0xf0)
                    int64_t rax_17
                    
                    if (rdx_9 != 2 || *(rax_16 + 0x20d) s>= 0)
                        rax_17.b = 0
                    else
                        rax_17.b = 1
                    
                    if (rdx_9 == 1 || rax_17.b != 0)
                        zmm0.d = zmm7.d f* zmm6.d
                        
                        if ((*(*rsi_1 + 0x10 + rdi_2 + 0x38) & 2) != 0)
                            var_d0 = zmm0.d
                            var_d8 = rax_1 + 0x58
                            char rax_19 = (*(*arg1 + 0x28))(arg1, zmm8)
                            void* rax_20
                            void* rcx_11
                            int64_t rdx_10
                            
                            if (data_143a2f308 != 0)
                                rax_20 = sub_142591550()
                                rcx_11 = rax_16[2]
                                rdx_10 = sx.q(*(rax_20 + 0x38))
                            
                            if (data_143a2f308 == 0 || rdx_10.d s> *(rcx_11 + 0x38)
                                    || *(*(rcx_11 + 0x30) + (rdx_10 << 3)) != rax_20 + 0x30)
                                zmm6, zmm7, zmm8 = sub_1422aeae0(rax_16)
                            
                            if (rax_19 != 0)
                                int32_t* rbx_4 = *rsi_1 + rdi_2
                                int64_t arg_8
                                sub_140d3a3a0(&arg_8, sub_140d3c6e0(rbx_4))
                                (*(*arg1 + 0x20))(arg1, arg_8, &rbx_4[4])
                                sub_142276120(var_a8:8.q, i)
                                var_90.b = 1
        
        var_b4:4.d &= not.d(var_c0:4.d)
        sub_14059bdd0(&var_c0)
        result = var_b8.q
        i = i_1
    while (i s< *(result + 0x18))
    
    if (var_90.b != 0 && var_90:1.b != 0)
        return sub_1422648f0(arg3, *(arg3 + 8) - *(arg3 + 0x34), 1)

return result
