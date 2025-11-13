// 函数: sub_142363850
// 地址: 0x142363850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_3 = arg2
char* r14 = arg3

if (sub_140d23dc0(arg1, 0x30) != 0)
    return 0

int64_t* result_1 = result_3

if (r14 == 0)
    char* rax_1 = sub_141e5f7c0(nullptr)
    result_3 = result_1
    r14 = rax_1

int64_t* result_5
int64_t* result_4

if (result_3.d != data_143f596c8 || result_1:4.d != data_143f596cc)
    if (r14 == 0)
        result_4 = result_3
        data_143f596c0 = result_3
    else
        int64_t* rax_2 = sub_140b63b70(&result_1, &result_5)
        int16_t* r15_1 = &data_142d40450
        int16_t* rsi_1
        
        if (rax_2[1].d == 0)
            rsi_1 = &data_142d40450
        else
            rsi_1 = *rax_2
        
        int16_t* var_40 = nullptr
        int32_t rdx_2 = 0
        int32_t var_38_1 = 0
        int32_t rcx_2 = 0
        int32_t var_34_1 = 0
        
        if (rsi_1 != 0 && *rsi_1 != 0)
            int64_t rbx = -1
            
            do
                rbx += 1
            while (rsi_1[rbx] != 0)
            
            if (rbx.d + 1 s> 0)
                sub_1405947f0(&var_40, rbx.d + 1)
                rcx_2 = var_34_1
                rdx_2 = var_38_1
            
            int32_t rax_3 = rdx_2 + rbx.d + 1
            var_38_1 = rax_3
            
            if (rax_3 s> rcx_2)
                sub_140594770(&var_40)
            
            UnDecorator::getReferenceType(var_40, rsi_1, (rbx.d + 1) * 2)
        
        int64_t* result_7 = result_5
        
        if (result_7 != 0)
            sub_140a74f90(result_7)
        
        sub_142364d30(r14, &var_40)
        
        if (var_38_1 != 0)
            r15_1 = var_40
        
        sub_140b58260(&result_5, r15_1, 1)
        int16_t* rax_4 = var_40
        result_4 = result_5
        data_143f596c0 = result_4
        
        if (rax_4 == 0)
            result_3 = result_1
        else
            sub_140a74f90(rax_4)
            result_4 = data_143f596c0
            result_3 = result_1
    
    data_143f596c8.q = result_3
else
    result_4 = data_143f596c0

int32_t i_2 = *(arg1 + 0x2d8)
int32_t r9 = 0
void* rbx_2 = *(arg1 + 0x2d0)
int32_t i = i_2
int32_t r10 = data_143f596c0:4.d
int64_t* result_6 = result_4
result_5 = result_4

if (i_2 s> 0)
    do
        int32_t r8_3 = i & 0x80000001
        
        if (r8_3 s< 0)
            r8_3 = ((r8_3 - 1) | 0xfffffffe) + 1
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(i)
        int32_t i_1 = (temp3_1 - temp2_1) s>> 1
        i = i_1
        int32_t rax_8 = i_1 + r9
        int64_t r8_7 = sx.q(rax_8) * 2
        int32_t rax_9 = *(rbx_2 + (r8_7 << 3))
        int32_t rax_10 = rax_9 - result_4.d
        
        if (rax_9 == result_4.d)
            rax_10 = *(rbx_2 + (r8_7 << 3) + 4) - r10
        
        if (rax_10 s< 0)
            r9 = rax_8 + r8_3
    while (i s> 0)

int64_t* result

if (r9 s>= i_2)
    result = nullptr
else
    int64_t rdx_8 = sx.q(r9)
    int64_t rax_13 = rdx_8 << 4
    int32_t rcx_9 = result_4.d - *(rax_13 + rbx_2)
    
    if (result_4.d == *(rax_13 + rbx_2))
        rcx_9 = r10 - *(rax_13 + rbx_2 + 4)
    
    if (rcx_9 s< 0 || r9 == 0xffffffff)
        result = nullptr
    else
        int64_t rdx_9 = rdx_8 << 4
        
        if (rbx_2 + 8 == neg.q(rdx_9))
            result = nullptr
        else
            result = *(rbx_2 + 8 + rdx_9)

if (result == 0)
    int64_t* result_2 = j_sub_140a82f30(zx.q((&result[4]).d))
    
    if (result_2 == 0)
        result_2 = nullptr
    else
        result_2[2] = 0
        result_2[3].d = 0
        *(result_2 + 0x1c) = 0
        *result_2 = 0
        result_2[1].d = 0xffffffff
    
    result_1 = result_2
    sub_140625300(arg1 + 0x2d0, &result_5, &result_1)
    result = result_1

if (sub_140bc7f20(result) s> 0)
    return result

return nullptr
