// 函数: sub_142988130
// 地址: 0x142988130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int32_t r15 = arg3
int32_t r14 = arg3

if (arg3 s>= arg2)
    r15 = arg2

if (arg3 s<= arg2)
    r14 = arg2

void* rdi = arg1
int32_t var_148 = r15
int32_t var_154 = r14
int128_t exceptionObject

if (r15 s< *(arg1 + 0x8c) || r14 s> *(arg1 + 0x90))
    sub_14297d3f0(&exceptionObject, "Tried to read scan line outside the image file's data window.")
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

int32_t rax_2 = sub_1429ae4c0(*(arg1 + 0x70))
uint32_t temp0 = divu.dp.d(0:(r15 - *(rdi + 0x8c)), rax_2)
int32_t rax_6 = sub_1429ae4c0(*(rdi + 0x70))
uint32_t rsi = temp0
uint32_t temp0_1 = divu.dp.d(0:(r14 - *(rdi + 0x8c)), rax_6)
int32_t rcx_4 = *(rdi + 0x88)
int32_t rdx_1 = -1

if (rcx_4 != 1)
    rdx_1 = 1

if (rcx_4 == 1)
    rsi = temp0_1

int32_t rbx_1 = temp0 - 1
uint32_t var_160 = rsi

if (rcx_4 != 1)
    rbx_1 = temp0_1 + 1

int32_t var_100
void* result = sub_1429ac870(*(rdi + 0x70), &var_100, 0)

while (rsi != rbx_1)
    void var_110
    sub_1429ac900(*(rdi + 0x70), &var_110, 0, rsi, 0)
    int32_t r12_1 = r15
    int32_t r15_1 = r14
    int32_t var_10c
    
    if (r15 s< var_10c)
        r12_1 = var_10c
    
    int32_t var_158_1 = r12_1
    int32_t var_104
    
    if (var_104 s< r14)
        r15_1 = var_104
    
    int32_t var_164_1 = r15_1
    
    if (rsi != *(rdi + 0xb8))
        int32_t rax_11 = sub_1429ad3e0(*(rdi + 0x70), 0)
        sub_1429ad950(*(rdi + 0x70), 0, rax_11 - 1, rsi, rsi, 0)
        *(rdi + 0xb8) = rsi
    
    void var_b8
    void** rax_12 = sub_14297bd10(*(rdi + 0xa8), &var_b8)
    int64_t* rcx_10 = *(rdi + 0xa8)
    void* i = *rax_12
    void* i_1 = i
    void var_120
    result = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
        rcx_10, &var_120)
    
    if (i != *result)
        result = rdi + 0x98
        int64_t* rax_42
        
        do
            int128_t zmm1 = *(i + 0x130)
            exceptionObject = *(i + 0x120)
            int128_t var_98_1 = zmm1
            void* rax_13 = sub_1429849c0(result, i + 0x20)
            zmm1 = *rax_13
            int128_t var_e0_1 = *(rax_13 + 0x10)
            int128_t zmm0 = *(rax_13 + 0x20)
            int64_t var_130_1 = zmm0.q
            int64_t var_d0_1 = zmm0.q
            int32_t j_3 = sub_1429a6580(zmm1.d)
            int64_t rsi_1 = sx.q(var_130_1.d)
            int32_t rdi_1 = r12_1
            int32_t r14_1 = var_100
            int32_t r8_2 = rsi_1.d - r14_1
            int64_t j_2 = sx.q(j_3)
            
            while (true)
                r8_2 -= 1
                int32_t rcx_13
                
                if (r14_1 s< 0)
                    int32_t rax_17
                    
                    if (rsi_1.d s< 0)
                        rax_17 = 0xffffffff - rsi_1.d - r14_1
                    else
                        rax_17 = r8_2
                    
                    rcx_13 = neg.d(divs.dp.d(sx.q(rax_17), rsi_1.d))
                else
                    rcx_13 = divs.dp.d(sx.q(r14_1), rsi_1.d)
                
                if (r14_1 == rcx_13 * rsi_1.d)
                    break
                
                r14_1 += 1
            
            int32_t rbx_2 = var_d0_1:4.d
            int32_t r8_4 = rbx_2 - r12_1
            
            while (true)
                r8_4 -= 1
                int32_t rcx_16
                
                if (rdi_1 s< 0)
                    int32_t rax_24
                    
                    if (rbx_2 s< 0)
                        rax_24 = 0xffffffff - rbx_2 - rdi_1
                    else
                        rax_24 = r8_4
                    
                    rcx_16 = neg.d(divs.dp.d(sx.q(rax_24), rbx_2))
                else
                    rcx_16 = divs.dp.d(sx.q(rdi_1), rbx_2)
                
                if (rdi_1 == rcx_16 * rbx_2)
                    break
                
                rdi_1 += 1
            
            if (rdi_1 s<= r15_1)
                int64_t r15_3 = sx.q(r14_1) * var_98_1.q
                int64_t var_138_1 = r15_3
                int64_t r13_1 = var_e0_1.q
                int32_t var_f8
                int32_t rcx_20 = var_f8
                int64_t r8_6 = sx.q(sub_1429887b0(r14_1, rsi_1.d)) * r13_1
                int32_t rdx_18 = rbx_2 - rdi_1 - 1
                var_130_1 = r8_6
                int32_t var_168_1 = rdx_18
                
                do
                    int64_t r10_4 =
                        sx.q(rdi_1 - var_10c) * var_98_1:8.q + r15_3 + exceptionObject:8.q
                    int32_t rax_35
                    
                    if (rdi_1 s< 0)
                        int32_t rax_36
                        
                        if (rbx_2 s< 0)
                            rax_36 = not.d(rdi_1) - rbx_2
                        else
                            rax_36 = rdx_18
                        
                        rax_35 = neg.d(divs.dp.d(sx.q(rax_36), rbx_2))
                    else
                        rax_35 = divs.dp.d(sx.q(rdi_1), rbx_2)
                    
                    int32_t r11_1 = r14_1
                    char* r9_6 = sx.q(rax_35) * var_e0_1:8.q + r8_6 + zmm1:8.q
                    
                    if (r14_1 s<= rcx_20)
                        do
                            if (j_2 s> 0)
                                char* rax_41 = r9_6
                                int64_t j_1 = j_2
                                int64_t j
                                
                                do
                                    *rax_41 = *(r10_4 - r9_6 + rax_41)
                                    rax_41 = &rax_41[1]
                                    j = j_1
                                    j_1 -= 1
                                while (j != 1)
                                rcx_20 = var_f8
                            
                            r10_4 += rsi_1 * var_98_1.q
                            r9_6 = &r9_6[r13_1]
                            r11_1 += rsi_1.d
                        while (r11_1 s<= rcx_20)
                        
                        r15_3 = var_138_1
                        r8_6 = var_130_1
                    
                    rdi_1 += rbx_2
                    rdx_18 = var_168_1 + neg.d(rbx_2)
                    var_168_1 = rdx_18
                while (rdi_1 s<= var_164_1)
                
                r15_1 = var_164_1
            
            sub_14297bb00(&i_1)
            rdi = arg1
            rax_42 = std::vector<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > >,class std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState* __ptr64> > > > >::begin(
                *(rdi + 0xa8), &var_120)
            i = i_1
            r12_1 = var_158_1
            result = rdi + 0x98
        while (i != *rax_42)
        rsi = var_160
        r14 = var_154
    
    rsi += rdx_1
    r15 = var_148
    var_160 = rsi

__security_check_cookie(rax_1 ^ &var_198)
return result
