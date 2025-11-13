// 函数: sub_14226ada0
// 地址: 0x14226ada0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
float zmm1[0x4] = *(arg1 + 0x1d0)
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
void* rsi = nullptr
uint64_t rcx = zx.q(data_14401b1a0)
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float var_1e0 = zmm1[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
float var_1dc = temp0[0]
float var_1d8 = temp0_1[0]
bool cond:0 = data_143f52760 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx << 3)))
void* var_1d0 = nullptr
int32_t var_1c8 = 0

if (cond:0)
    _Init_thread_header(&data_143f52760)
    
    if (data_143f52760 == 0xffffffff)
        sub_140b58170(&data_143f52758, "FireImpulseOverlap", 1)
        _Init_thread_footer(&data_143f52760)

void var_1e8
void var_188
sub_141eb54c0(&var_188, data_143f52758, &var_1e8, 0, nullptr)

if ((*(arg1 + 0x1fc) & 2) != 0)
    sub_141eb8b10(&var_188, *(arg1 + 0xa0))

void* rax_3 = *(arg1 + 0xa8)
int32_t var_1b4 = *(arg1 + 0x1f0)
int32_t var_1b8 = 2

if (rax_3 == 0)
    rax_3 = sub_141ee69e0(arg1)

int512_t zmm1_1
int512_t zmm2
int512_t zmm3
int128_t zmm6
zmm1_1, zmm2, zmm3, zmm6 =
    sub_141ec85d0(rax_3, &var_1d0, &var_1e0, &data_14399f720, arg1 + 0x218, &var_1b8, &var_188)
int32_t rax_4 = var_1c8
void* r8_2 = nullptr
void* var_198 = nullptr
int32_t var_190 = 0
int32_t var_18c = 1
void var_1a0

if (rax_4 s> 1)
    sub_140809a30(&var_1a0, rax_4)
    rax_4 = var_1c8
    r8_2 = var_198

void* rdi = var_1d0
void* r15 = rdi + sx.q(rax_4) * 0x18

if (rdi != r15)
    do
        int64_t i = sub_140d3c6e0(rdi + 8)
        r8_2 = var_198
        
        if (i != 0)
            void* r9_1 = &var_1a0
            
            if (r8_2 != 0)
                r9_1 = r8_2
            
            void* rdx_4 = r9_1
            void* rax_6 = r9_1 + (sx.q(var_190) << 3)
            
            if (r9_1 != rax_6)
                while (*rdx_4 != i)
                    rdx_4 += 8
                    
                    if (rdx_4 == rax_6)
                        goto label_14226af6c
            
            if (r9_1 == rax_6 || ((rdx_4 - r9_1) s>> 3).d == 0xffffffff)
            label_14226af6c:
                int64_t rsi_1 = sx.q(var_190)
                int32_t rax_7 = (rsi_1 + 1).d
                var_190 = rax_7
                
                if (rax_7 s> var_18c)
                    sub_140809610(&var_1a0, rsi_1.d)
                    r8_2 = var_198
                
                void* rcx_12 = &var_1a0
                
                if (r8_2 != 0)
                    rcx_12 = r8_2
                
                *(rcx_12 + (rsi_1 << 3)) = i
                r8_2 = var_198
        
        rdi += 0x18
    while (rdi != r15)
    
    rsi = nullptr

void* r12 = &var_1a0
int64_t r13 = 0

if (r8_2 != 0)
    r12 = r8_2

int64_t rcx_13 = sx.q(var_190) << 3
void* result = rcx_13 + r12
uint64_t rcx_14 = rcx_13 u>> 3

if (r12 u> result)
    rcx_14 = 0

if (rcx_14 != 0)
    int128_t var_38_1 = zmm6
    
    do
        int64_t* rdi_1 = *r12
        void* var_208_1
        int32_t* var_200
        
        if (not(9.99999994e-09f f>= *(arg1 + 0x204)) && rdi_1 != 0)
            void* rax_10 = sub_140d21950(rdi_1, sub_14249bf20())
            
            if (rax_10 != 0)
                zmm3.o = *(arg1 + 0x1f0)
                zmm1_1.o = *(arg1 + 0x204)
                var_200.b = *(arg1 + 0x1f4) == 0
                var_208_1.d = (*(arg1 + 0x1f8)).d
                (*(*rax_10 + 0x18))(rax_10, zmm1_1, &var_1e0, zmm3, var_208_1, var_200)
        
        zmm3.o = *(arg1 + 0x1f8)
        zmm2.o = *(arg1 + 0x1f0)
        var_200.b = *(arg1 + 0x1fc) & 1
        float var_1b0_1 = var_1d8
        var_1b8.q = var_1e0.q
        var_208_1.d = zx.d(*(arg1 + 0x1f4))
        result = (*(*rdi_1 + 0x5c0))(rdi_1, &var_1b8, zmm2, zmm3, var_208_1, var_200)
        
        if ((*(rdi_1 + 0x20d) & 0x10) == 0)
            void* r15_1 = rdi_1[0x14]
            int64_t** i_3 = nullptr
            int32_t var_4c_1 = 0x18
            int32_t result_1 = 0
            void* rax_13 = sub_14254ab60()
            
            if (rax_13 != 0)
                void* rax_14 = sub_142459c10()
                
                if (rax_14 != 0)
                    int64_t rax_15 = sx.q(*(rax_14 + 0x38))
                    
                    if (rax_15.d s<= *(rax_13 + 0x38)
                            && *(*(rax_13 + 0x30) + (rax_15 << 3)) == rax_14 + 0x30)
                        rsi = rax_13
            
            void var_118
            void* r8_5 = &var_118
            
            if (rsi != sub_142459c10())
                zmm1_1, zmm2 = sub_1419f71f0(r15_1, rax_13, r8_5)
            else
                zmm1_1, zmm2 = sub_1419f6fe0(r15_1, rax_13, r8_5)
            
            int64_t** i_2 = i_3
            int64_t** i_1 = &var_118
            result = sx.q(result_1)
            
            if (i_2 != 0)
                i_1 = i_2
            
            for (; i_1 != &i_1[result]; i_1 = &i_1[1])
                int64_t* r9_2 = *i_1
                
                if (r9_2[0x16] == rdi_1)
                    zmm3.o = *(arg1 + 0x1f8)
                    zmm2.o = *(arg1 + 0x1f0)
                    var_200.b = *(arg1 + 0x1fc) & 1
                    var_208_1.d = zx.d(*(arg1 + 0x1f4))
                    result = (*(*r9_2 + 0x4b0))(r9_2, &var_1e0, zmm2, zmm3, var_208_1, var_200)
                    i_2 = i_3
                    break
            
            if (i_2 != 0)
                result, zmm1_1 = sub_140a74f90(i_2)
            
            rsi = nullptr
        
        r12 += 8
        r13 += 1
    while (r13 != rcx_14)
    
    r8_2 = var_198

if (r8_2 != 0)
    result = sub_140a74f90(r8_2)

int64_t var_128

if (var_128 != 0)
    result = sub_140a74f90(var_128)

int64_t var_148

if (var_148 != 0)
    result = sub_140a74f90(var_148)

void* rdi_2 = var_1d0

if (rdi_2 != 0)
    result = sub_140a74f90(rdi_2)

__security_check_cookie(rax_1 ^ &var_228)
return result
