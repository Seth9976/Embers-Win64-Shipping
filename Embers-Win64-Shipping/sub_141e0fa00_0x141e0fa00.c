// 函数: sub_141e0fa00
// 地址: 0x141e0fa00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = 0
*(arg1 + 0x3f0) = 0
void* rsi = arg2
void* r14 = arg1

if (*(arg1 + 0x3f4) s<= 0xffffffff)
    sub_140638c50(arg1 + 0x3e8, 0)

int32_t var_e4 = 1
int32_t r10 = *(r14 + 0x370)
void* r9 = r14 + 0x358
void* var_e0 = r9
int32_t rcx_1 = 0
int32_t var_e8 = 0
int32_t r8 = 0
int32_t var_d8 = 0xffffffff
int64_t var_d4 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_141e0fac9:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_e4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_d4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_d4.d = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_d4:4.d = r8
            var_e8 = rcx_1
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_d8 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141e0fac9
        
        var_d4.d = r10

double zmm2[0x2] = var_d8.o
double var_60[0x2] = zmm2
double var_70[0x2] = var_e8.o
var_e8.o = (r14 + 0x348).o
uint32_t rax_12 = (zmm2[0] u>> 0x20).d
int64_t var_c8 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
var_d8.o = var_70

if (rax_12 s< r10)
    int32_t i_3
    int32_t i = i_3
    
    do
        int64_t rbx_1 = sx.q(*(arg1 + 0x3f0))
        int64_t rsi_1 = *var_e8.q
        int32_t rax_14 = (rbx_1 + 1).d
        *(arg1 + 0x3f0) = rax_14
        
        if (rax_14 s> *(arg1 + 0x3f4))
            sub_1405a4d70(arg1 + 0x3e8)
        
        *(*(arg1 + 0x3e8) + (rbx_1 << 3)) = *(rsi_1 + sx.q(i) * 0x14)
        var_d4:4.d &= not.d(var_e0:4.d)
        sub_14059bdd0(&var_e0)
        i = i_3
    while (i s< *(var_d8.q + 0x18))
    
    rsi = arg2

void* rbx_2 = r14 + 0x2f8
int64_t i_5 = 3
int32_t* result
int64_t i_1

do
    result = sub_1409d9b90(rbx_2)
    rbx_2 += 0x50
    i_1 = i_5
    i_5 -= 1
while (i_1 != 1)

if (*(rsi + 0x78) != 0)
    int32_t i_2 = 0
    int32_t i_4 = 0
    
    if (*(r14 + 0x568) s> 0)
        int16_t* rdi_1 = nullptr
        int16_t* var_b0_1 = nullptr
        int64_t var_b8_1 = 0
        
        do
            result = *(r14 + 0x560)
            int16_t result_1 = *(rdi_1 + result)
            
            if (result_1 != 0xffff)
                result = zx.q(result_1)
                
                if (result.d s< *(rsi + 0x70))
                    uint64_t result_2 = zx.q(result_1)
                    int64_t rcx_7 = *(rsi + 0x68)
                    
                    if (*(rcx_7 + (result_2 << 3) + 4) != 0)
                        int64_t rbx_3 = *(r14 + 0x580)
                        int64_t* rsi_3 = *(r14 + 0x570) + r12
                        int32_t arg_18 = *(rcx_7 + (result_2 << 3))
                        int64_t* var_c0_1 = rsi_3
                        int64_t* var_98 = rsi_3
                        int32_t* var_90_1 = &arg_18
                        int32_t var_a8
                        result = sub_1405a8200(r14 + 0x2f8, &var_a8, &var_98, nullptr)
                        
                        if (*(rdi_1 + rbx_3 + 1) != 0)
                            int64_t* var_88 = rsi_3
                            int32_t* var_80_1 = &arg_18
                            int32_t var_a4
                            result = sub_1405a8200(r14 + 0x398, &var_a4, &var_88, nullptr)
                        
                        if (*(rdi_1 + rbx_3) != 0)
                            int64_t rdx_7 = sx.q(*(arg1 + 0x3f0))
                            
                            if (rdx_7.d != 0)
                                int32_t r12_1 = 0
                                int32_t rdi_2 = 0
                                int64_t rbx_4 = 0
                                i_2.b = **(arg1 + 0x3e8) != *rsi_3
                                
                                do
                                    int64_t r9_1 = sx.q(rdi_2)
                                    rbx_4 += 1
                                    rdi_2 += 1
                                    
                                    if (rbx_4 s< rdx_7)
                                        int64_t* rcx_11 = *(arg1 + 0x3e8) + (rbx_4 << 3)
                                        
                                        do
                                            int32_t rax_23
                                            rax_23.b = *rcx_11 != *rsi_3
                                            
                                            if (zx.d(i_2.b) != rax_23)
                                                break
                                            
                                            rdi_2 += 1
                                            rbx_4 += 1
                                            rcx_11 = &rcx_11[1]
                                        while (rbx_4 s< rdx_7)
                                    
                                    int32_t rsi_5 = rdi_2 - r9_1.d
                                    
                                    if (i_2.b != 0)
                                        if (r12_1 != r9_1.d)
                                            int64_t rcx_12 = *(arg1 + 0x3e8)
                                            memmove(rcx_12 + (sx.q(r12_1) << 3), 
                                                rcx_12 + (r9_1 << 3), rsi_5 << 3)
                                        
                                        r12_1 += rsi_5
                                    
                                    rsi_3 = var_c0_1
                                    i_2.b ^= 1
                                while (rbx_4 s< rdx_7)
                                
                                rdi_1 = var_b0_1
                                r14 = arg1
                                i_2 = i_4
                                *(arg1 + 0x3f0) = r12_1
                                r12 = var_b8_1
                            
                            var_e8.q = rsi_3
                            var_e0 = &arg_18
                            int32_t var_a0
                            result = sub_1405a8200(r14 + 0x348, &var_a0, &var_e8, nullptr)
                        
                        rsi = arg2
            
            i_2 += 1
            r12 += 8
            rdi_1 = &rdi_1[1]
            i_4 = i_2
            var_b8_1 = r12
            var_b0_1 = rdi_1
        while (i_2 s< *(r14 + 0x568))

return result
