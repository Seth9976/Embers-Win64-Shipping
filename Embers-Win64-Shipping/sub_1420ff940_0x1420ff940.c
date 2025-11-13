// 函数: sub_1420ff940
// 地址: 0x1420ff940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = data_143f486f0
int64_t rcx

if (data_143de5480 == 0)
    rcx = 0
else
    rcx.b = GetCurrentThreadId() != data_143de5470

int64_t* rcx_2 = (rcx << 4) + rbx
int64_t var_68 = 0
int32_t rbx_1 = rcx_2[1].d
int64_t rdi = *rcx_2
int32_t var_60 = rbx_1

if (rbx_1 != 0)
    sub_1405a4c70(&var_68, rbx_1, 0)
    memcpy(var_68, rdi, rbx_1 * 2)
else
    int32_t var_5c_1 = 0

int64_t* var_78 = nullptr
void* const var_58 = &data_142d7fa60
int32_t var_70 = 0
int32_t* const var_50 = &data_142d404d4
uint64_t result
int64_t zmm0
result, zmm0 = sub_140a2c9c0(&var_68, &var_78, &var_58, 2, 0)
int64_t r12 = sx.q(var_70)
int64_t* rdi_1 = var_78
uint64_t rdx_4 = r12

if (r12.d != 0)
    r12 = 0
    uint64_t r8_4 = rdx_4
    bool r10_1 = rdi_1[1].d s> 1
    bool arg_8 = r10_1
    int32_t r15_1 = 0
    int64_t rsi_1 = 0
    
    do
        int64_t r9_1 = sx.q(r15_1)
        rsi_1 += 1
        r15_1 += 1
        
        if (rsi_1 s< r8_4)
            void* rcx_7 = &rdi_1[1 + rsi_1 * 2]
            
            do
                result.b = *rcx_7 s> 1
                
                if (zx.d(r10_1) != result.d)
                    break
                
                r15_1 += 1
                rsi_1 += 1
                rcx_7 += 0x10
            while (rsi_1 s< r8_4)
        
        int32_t i_2 = r15_1 - r9_1.d
        
        if (r10_1 == 0)
            void* rbx_4 = &rdi_1[r9_1 * 2]
            
            if (i_2 != 0)
                int32_t i
                
                do
                    int64_t rcx_11 = *rbx_4
                    
                    if (rcx_11 != 0)
                        result, zmm0 = sub_140a74f90(rcx_11)
                    
                    rbx_4 += 0x10
                    i = i_2
                    i_2 -= 1
                while (i != 1)
                rdi_1 = var_78
                r8_4 = rdx_4
                r10_1 = arg_8
        else
            if (r12.d != r9_1.d)
                result, zmm0 = memmove(&rdi_1[sx.q(r12.d) * 2], &rdi_1[r9_1 * 2], i_2 << 4)
                r8_4 = rdx_4
                r10_1 = arg_8
                rdi_1 = var_78
            
            r12 = zx.q(r12.d + i_2)
        
        r10_1 ^= 1
        arg_8 = r10_1
    while (rsi_1 s< r8_4)
    
    rdx_4 = zx.q(r12.d)
    var_70 = r12.d

bool cond:2 = data_143f4871c == rdx_4.d
data_143f48718 = 0

if (not(cond:2))
    result, zmm0 = sub_1405dadb0(&data_143f48710, rdx_4.d)
    r12 = zx.q(var_70)
    rdi_1 = var_78

void* rsi_4 = &rdi_1[sx.q(r12.d) * 2]

if (rdi_1 != rsi_4)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    
    do
        wchar16* _String
        
        if (rdi_1[1].d == 0)
            _String = &data_142d40450
        else
            _String = *rdi_1
        
        _wtof(_String)
        int64_t rbx_5 = sx.q(data_143f48718)
        zmm6.d = fconvert.s(zmm0)
        int32_t rax_4 = (rbx_5 + 1).d
        bool cond:5_1 = rax_4 s<= data_143f4871c
        data_143f48718 = rax_4
        
        if (not(cond:5_1))
            zmm0 = sub_1406105e0(&data_143f48710)
        
        result = data_143f48710
        rdi_1 = &rdi_1[2]
        *(result + (rbx_5 << 2)) = zmm6.d
    while (rdi_1 != rsi_4)
    
    r12 = zx.q(var_70)
    rdi_1 = var_78

if (r12.d != 0)
    int32_t i_1
    
    do
        int64_t rcx_12 = *rdi_1
        
        if (rcx_12 != 0)
            result = sub_140a74f90(rcx_12)
        
        rdi_1 = &rdi_1[2]
        i_1 = r12.d
        r12 = zx.q(r12.d - 1)
    while (i_1 != 1)
    rdi_1 = var_78

if (rdi_1 != 0)
    result = sub_140a74f90(rdi_1)

int64_t rcx_14 = var_68

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14)
