// 函数: sub_140cfe1a0
// 地址: 0x140cfe1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int64_t var_198 = *(arg1 + 8)
uint64_t var_168
uint64_t* var_190 = &var_168
int64_t rax_3 = data_143e1b318
var_168 = 0
int64_t var_160_1
__builtin_memset(&var_160_1, 0, 0x24)
int32_t var_13c = 0x80
int32_t var_138 = 0xffffffff
int32_t var_134 = 0
void* var_128 = nullptr
int32_t var_120 = 0

if (rax_3 == 0)
    rax_3 = sub_140cbc430()
    data_143e1b318 = rax_3

int64_t var_110 = rax_3
int64_t* var_118 = &var_198
int64_t** var_108 = &var_118
int64_t var_100 = rax_3
int64_t var_b8 = 0
CRITICAL_SECTION criticalSection
InitializeCriticalSection(&criticalSection)
SetCriticalSectionSpinCount(&criticalSection, 0xfa0)
int32_t rdi = (data_143e1d9b4.q).d
int32_t rbx = 0
int64_t var_48
__builtin_memset(&var_48, 0, 0x11)
int32_t var_34 = 0
uint64_t var_248
__builtin_memset(&var_248, 0, 0x20)
int64_t var_158
int64_t* var_148

if (rdi s> 0)
    int32_t rax_8
    
    do
        uint32_t rcx_2 = zx.d(rbx.w)
        int32_t rax_4 = rbx
        
        if (rbx s< 0)
            rax_4 = rbx + 0xffff
            rcx_2 -= 0x10000
        
        int64_t rsi_1 = *(*(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(rcx_2) * 0x18)
        
        if (rsi_1 != 0)
        label_140cfe31f:
            int64_t* rax_9 = sub_140cfed40(arg1 + 0x20, rsi_1)
            int32_t rcx_5 = var_160_1.d
            int64_t* r15_1 = rax_9
            int64_t* var_220 = rax_9
            
            if (rcx_5 != var_134)
                int32_t rcx_6 = var_160_1:4.d
                var_160_1.d = 0
                
                if (rcx_6 s< 0 && rcx_6 != 0)
                    sub_1405a51b0(&var_168, 0)
                
                int32_t var_138_1 = 0xffffffff
                var_134 = 0
                sub_140774790(&var_158)
                int64_t rcx_9 = sx.q(var_120)
                
                if (rcx_9 s> 0)
                    void var_130
                    void* rdi_1 = &var_130
                    
                    if (var_128 != 0)
                        rdi_1 = var_128
                    
                    __builtin_memset(rdi_1, 0xffffffff, rcx_9 << 2)
            
            int32_t rdi_2 = 0
            int64_t var_240_1
            int32_t temp1_1 = var_240_1:4.d
            
            if (temp1_1 s< 0)
                var_240_1.d = 0
                
                if (temp1_1 != 0)
                    sub_1405c5570(&var_248, 0)
                    rdi_2 = var_240_1.d
            
            int32_t rdx_4 = rdi_2 + 1
            var_240_1.d = rdx_4
            
            if (rdx_4 s> var_240_1:4.d)
                sub_1405a4d70(&var_248)
                rdx_4 = var_240_1.d
            
            *(var_248 + (sx.q(rdi_2) << 3)) = rsi_1
            
            if (rdx_4 != 0)
                int64_t* var_228_1 = nullptr
                sub_140d0aa50(&var_118, &var_248)
                
                if (var_228_1 != 0)
                    var_228_1[9].d -= 1
                    
                    if (var_228_1[9].d == 1)
                        sub_140a2f6e0(var_228_1)
                    
                    r15_1 = var_220
            
            int64_t* var_210_1 = &var_158
            int32_t rcx_16 = 0
            int32_t var_218_1 = 0
            int32_t rdi_3 = 0
            int32_t var_214_1 = 1
            int32_t var_208_1 = 0xffffffff
            int64_t var_204_1 = 0
            int32_t var_140
            
            if (var_140 != 0)
                int64_t* r8_2 = &var_158
                
                if (var_148 != 0)
                    r8_2 = var_148
                
                int32_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = sx.q(var_140 - 1)
                int32_t rdx_8 = *r8_2
                
                if (rdx_8 != 0)
                label_140cfe486:
                    int32_t rax_20 = neg.d(rdx_8) & rdx_8
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_20)
                    int32_t var_214_2 = rax_20
                    int32_t var_1f4_1 = temp0_2
                    int32_t rax_21
                    
                    if (rax_20 == 0)
                        rax_21 = 0x20
                    else
                        rax_21 = 0x1f - temp0_2
                    
                    int32_t rax_22 = rdi_3 - rax_21 + 0x1f
                    
                    if (rax_22 s> var_140)
                        rax_22 = var_140
                    
                    var_204_1.d = rax_22
                else
                    while (true)
                        int64_t rdx_9 = sx.q(rcx_16)
                        rdi_3 += 0x20
                        rcx_16 += 1
                        var_204_1:4.d = rdi_3
                        var_218_1 = rcx_16
                        
                        if (rdx_9.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                            var_204_1.d = var_140
                            break
                        
                        rdx_8 = *(r8_2 + (rdx_9 << 2) + 4)
                        int32_t var_208_2 = 0xffffffff
                        
                        if (rdx_8 != 0)
                            goto label_140cfe486
            
            int128_t var_1a8_1 = 0xffffffff
            int128_t var_1b8_1
            var_1b8_1:8.d = 0xffffffff << (var_140.b & 0x1f)
            var_1b8_1:0xc.d = var_140
            int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int128_t var_1e8 = (&var_168).o
            int128_t var_1d8_1 = var_218_1.o
            int64_t var_1c8_1 = temp0_3
            
            while (true)
                int64_t rcx_20 = sx.q(var_1d8_1:0xc.d)
                int64_t rax_23 = var_1e8.q
                
                if (rcx_20.d == (var_1b8_1:8.q u>> 0x20).d && var_1d8_1.q == &var_158
                        && rax_23 == &var_168)
                    break
                
                int64_t* rsi_4 = (rcx_20 << 5) + *rax_23
                int64_t* rax_24 = sub_140cfed40(arg1 + 0x20, *rsi_4)
                int32_t var_180_1 = rsi_4[1].d
                int64_t var_17c_1 = *(rsi_4 + 0xc)
                int64_t* var_188 = rax_24
                void var_1f0
                sub_140cec5e0(&r15_1[1], &var_1f0, &var_188, nullptr)
                void var_1ec
                sub_140812a70(&rax_24[0xb], &var_1ec, &var_220, nullptr)
                var_1d8_1:8.d &= not.d(var_1e8:0xc.d)
                sub_14059bdd0(&var_1e8:8)
            
            int32_t rdi_6 = (data_143e1d9b4.q).d
            int32_t rax_27 = rbx + 1
            rbx = rax_27
            
            if (rax_27 s< rdi_6)
                int32_t rax_32
                
                do
                    uint32_t rcx_27 = zx.d(rbx.w)
                    int32_t rax_28 = rbx
                    
                    if (rbx s< 0)
                        rax_28 = rbx + 0xffff
                        rcx_27 -= 0x10000
                    
                    rsi_1 =
                        *(*(data_143e1d9a0 + (sx.q(rax_28 s>> 0x10) << 3)) + sx.q(rcx_27) * 0x18)
                    
                    if (rsi_1 != 0)
                        goto label_140cfe31f
                    
                    rax_32 = rbx + 1
                    rbx = rax_32
                while (rax_32 s< rdi_6)
            
            int64_t var_238
            
            if (var_238 != 0)
                sub_140a74f90(var_238)
            
            uint64_t rcx_30 = var_248
            
            if (rcx_30 != 0)
                sub_140a74f90(rcx_30)
            
            int64_t rcx_31 = var_48
            
            if (rcx_31 != 0)
                sub_140a74f90(rcx_31)
            
            break
        
        rax_8 = rbx + 1
        rbx = rax_8
    while (rax_8 s< rdi)

DeleteCriticalSection(&criticalSection)
int32_t var_120_1 = 0

if (var_128 != 0)
    sub_140a74f90(var_128)

var_160_1.d = 0

if (var_160_1:4.d != 0)
    sub_1405a51b0(&var_168, 0)

int32_t var_138_2 = 0xffffffff
int32_t var_134_1 = 0
void* result = sub_14059a8e0(&var_158, 0)

if (var_148 != 0)
    result = sub_140a74f90(var_148)

uint64_t rcx_37 = var_168

if (rcx_37 != 0)
    result = sub_140a74f90(rcx_37)

__security_check_cookie(rax_1 ^ &var_268)
return result
