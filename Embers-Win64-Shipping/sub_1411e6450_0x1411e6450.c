// 函数: sub_1411e6450
// 地址: 0x1411e6450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t rbx = sx.q(*(arg1 + 0x28))
void* rsi = arg1 + 0x20
int32_t rax_2 = *(arg1 + 0x34)

if (rax_2 s> rbx.d)
    *(rsi + 8) = rax_2
    
    if (rax_2 s> *(rsi + 0xc))
        sub_1405a4cf0(rsi)
    
    memset(*rsi + (rbx << 2), 0, sx.q(rax_2 - rbx.d) << 2)
else if (rax_2 s< rbx.d && rax_2 != rbx.d)
    *(rsi + 8) = rax_2
    sub_1405dac90(rsi)

int32_t r10 = *(arg1 + 0x34)
int32_t r8_3 = 0

if (r10 != 0)
    int32_t r9_1 = 0x7ed55d16
    
    do
        int32_t rax_6 = r9_1 u>> 0x13 ^ r9_1
        r9_1 += 0x1001
        uint64_t rax_9 = zx.q((rax_6 ^ 0xc761c23c) * 0x21 - 0x160733e3)
            ^ zx.q(((rax_6 ^ 0xc761c23c) * 0x21 + 0x165667b1) << 9)
        int64_t rcx_6 = sx.q(r8_3)
        r8_3 += 1
        *(*rsi + (rcx_6 << 2)) =
            ((rax_9 * 9).d - 0x28fb93b) u>> 0x10 ^ ((rax_9 * 9).d - 0x28fb93b) ^ 0xb55a4f09
        r10 = *(arg1 + 0x34)
    while (r8_3 u< r10)

int32_t rcx_8 = *(arg1 + 0x38) + 2
void** const var_a0 = &data_142f38528
void* rbx_1 = nullptr
int32_t var_90 = 0
void* var_98 = nullptr
uint32_t j_2 = rcx_8 u/ 3
char var_88 = 0
uint32_t j_3 = j_2
int32_t rcx_11 = *(arg1 + 0x30) * r10 * j_2

if (rcx_11 s> 0)
    var_90 = rcx_11
    sub_1411ec8c0(&var_98, 0)
    j_2 = j_3
    rbx_1 = var_98
else if (rcx_11 s< 0)
    int32_t rdi_4 = neg.d(rcx_11)
    
    if (rdi_4 != 0)
        int32_t rax_15 = neg.d(rdi_4 + rcx_11)
        
        if (rax_15 != 0)
            memmove(sx.q(rcx_11) * 0xc, nullptr, rax_15 * 0xc)
        
        var_90 -= rdi_4
        sub_1411ec9b0(&var_98)
        j_2 = j_3
        rbx_1 = var_98

int32_t i = 0
int32_t i_1 = 0
int128_t var_64
int128_t zmm0

if (*(arg1 + 0x34) u> 0)
    do
        int32_t rdx_7 = *(arg1 + 0x30)
        int32_t rdi_7 = *(arg1 + 0x3c) * rdx_7 + *(*rsi + (sx.q(i) << 2))
        int32_t rcx_18 = rdx_7 * i
        int32_t var_b8_1 = rcx_18
        
        if (rdx_7 != 0)
            int32_t rax_20 = neg.d(rdi_7)
            int32_t var_80_1 = rax_20
            bool cond:3_1
            
            do
                if (j_2 != 0)
                    uint64_t j_1 = zx.q(j_2)
                    int32_t rsi_1 = 2
                    int32_t r15_3 = (rcx_18 + rax_20 + rdi_7) * j_2
                    uint64_t j
                    
                    do
                        if ((var_98.b & 1) != 0)
                            rbx_1 = &var_64:5 + (rbx_1 s>> 1) - 0x39
                        
                        int64_t r14_1 = sx.q(r15_3) * 3
                        *(rbx_1 + (r14_1 << 2)) = sub_1411ecaf0(*(arg1 + 0x18), rsi_1 - 2, rdi_7)
                        void* rbx_3
                        
                        if ((var_98.b & 1) == 0)
                            rbx_3 = var_98
                        else
                            rbx_3 = &var_98 + (var_98 s>> 1)
                        
                        *(rbx_3 + (r14_1 << 2) + 4) =
                            sub_1411ecaf0(*(arg1 + 0x18), rsi_1 - 1, rdi_7)
                        void* rbx_4
                        
                        if ((var_98.b & 1) == 0)
                            rbx_4 = var_98
                        else
                            rbx_4 = &var_98 + (var_98 s>> 1)
                        
                        zmm0 = sub_1411ecaf0(*(arg1 + 0x18), rsi_1, rdi_7)
                        rsi_1 += 3
                        *(rbx_4 + (r14_1 << 2) + 8) = zmm0.d
                        rbx_1 = var_98
                        r15_3 += 1
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    j_2 = j_3
                    rax_20 = var_80_1
                    rcx_18 = var_b8_1
                
                rdi_7 += 1
                cond:3_1 = rax_20 + rdi_7 u< *(arg1 + 0x30)
                rax_20 = var_80_1
            while (cond:3_1)
            i = i_1
            rsi = arg1 + 0x20
        
        i += 1
        i_1 = i
    while (i u< *(arg1 + 0x34))

char rcx_22 = (data_1439c7a34).b
zmm0 = data_143dbb1e0
int64_t var_78 = 0
int32_t var_68 = 1
int64_t* rcx_23 = data_143f0f180
int32_t var_54 = (1 << rcx_22) - 1
char var_50 = 0
wchar16 const* const var_48 = u"HaltonSequenceIteration"
void** const* var_70 = &var_a0
var_64 = zmm0
int32_t var_40 = 0
(*(*rcx_23 + 0x4a0))(rcx_23, &i_1, &data_143f02b98, 0xc, var_90 * 0xc, 0x3208, &var_78)

if (arg1 + 0x10 == &i_1)
label_1411e6813:
    int64_t* rbx_6 = i_1.q
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            char rax_35
            
            if (rbx_6[2].b == 0 && data_143f0f1d0 == 0)
                rax_35 = sub_1405949a0()
            
            if (rbx_6[2].b != 0 || (data_143f0f1d0 == 0 && rax_35 != 0))
                (**rbx_6)(rbx_6, 1)
            else
                bool z_2
                
                if (0 == *(rbx_6 + 0xc))
                    *(rbx_6 + 0xc) = 1
                    z_2 = true
                else
                    *(rbx_6 + 0xc)
                    z_2 = false
                
                if (z_2)
                    sub_1405dcc10(&data_143f02390, rbx_6)
else
    int64_t* rbx_5 = *(arg1 + 0x10)
    *(arg1 + 0x10) = i_1.q
    i_1.q = 0
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            char rax_32
            
            if (rbx_5[2].b == 0 && data_143f0f1d0 == 0)
                rax_32 = sub_1405949a0()
            
            if (rbx_5[2].b != 0 || (data_143f0f1d0 == 0 && rax_32 != 0))
                (**rbx_5)(rbx_5, 1)
            else
                bool z_1
                
                if (0 == *(rbx_5 + 0xc))
                    *(rbx_5 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_5 + 0xc)
                    z_1 = false
                
                if (z_1)
                    sub_1405dcc10(&data_143f02390, rbx_5)
        
        goto label_1411e6813

int64_t result = sub_140a1d5c0(&var_98)
__security_check_cookie(rax_1 ^ &var_f8)
return result
