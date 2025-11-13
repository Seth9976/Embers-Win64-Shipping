// 函数: sub_142439a90
// 地址: 0x142439a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r12 = nullptr
int64_t var_68 = 0
int32_t var_60 = 0
(*(*arg1 + 0x20))(arg1, &var_68)
int32_t result_1 = 0
arg1[5].d = arg2
int32_t* r13 = nullptr
int32_t i = 0
int32_t* var_88
__builtin_memset(&var_88, 0, 0x20)
int32_t* var_78
int64_t var_70

if (var_60 s> 0)
    sub_1405dadb0(&var_88, var_60)
    sub_1405dadb0(&var_78, var_60)
    int32_t result_2
    result_1 = result_2
    r12 = var_88
    i = var_70.d
    r13 = var_78

int32_t rax_1 = arg1[2].d

if (var_60 s> rax_1)
    arg1[2].d = var_60
    
    if (var_60 s> *(arg1 + 0x14))
        sub_1407c3800(&arg1[1], rax_1)
else if (var_60 s< rax_1 && var_60 != rax_1)
    arg1[2].d = var_60
    sub_1407c3f50(&arg1[1])

int32_t rax_2 = arg1[4].d

if (var_60 s> rax_2)
    arg1[4].d = var_60
    
    if (var_60 s> *(arg1 + 0x24))
        sub_1407c3800(&arg1[3], rax_2)
else if (var_60 s< rax_2 && var_60 != rax_2)
    arg1[4].d = var_60
    sub_1407c3f50(&arg1[3])

arg2 = arg1[5].d
uint128_t zmm6 = zx.o(0)

if (not(arg2 == 0f))
    zmm6.d = _mm_cvtepi32_ps(zx.o(var_60)).d f/ arg2

int32_t r14_1 = var_60 - 1
int32_t var_7c
int32_t result_3

if (var_60 - 1 s>= 0)
    int64_t r15_1 = sx.q(r14_1) << 2
    int32_t temp3_1
    
    do
        int64_t rax_4 = var_68
        *(r15_1 + rax_4) = zmm6.d f* *(r15_1 + rax_4)
        
        if (1f f<= *(r15_1 + var_68))
            int32_t i_1 = i
            i += 1
            var_70.d = i
            
            if (i s> var_70:4.d)
                sub_1405a4cf0(&var_78)
                i = var_70.d
                r13 = var_78
            
            r13[sx.q(i_1)] = r14_1
        else
            int32_t result_4 = result_1
            result_3 = result_1
            result_1 += 1
            
            if (result_1 s> var_7c)
                sub_1405a4cf0(&var_88)
                result_4 = result_3
                r12 = var_88
            
            r12[sx.q(result_4)] = r14_1
        
        r15_1 -= 4
        temp3_1 = r14_1
        r14_1 -= 1
    while (temp3_1 - 1 s>= 0)

if (result_1 != 0)
    while (i != 0)
        int32_t result_5 = result_1 - 1
        int32_t rbx = result_1 - result_5
        int32_t rax_9 = r12[sx.q(result_5)]
        
        if (rbx != 1)
            memmove(&r12[sx.q(result_5)], &r12[sx.q(result_5 + 1)], (rbx - 1) << 2)
        
        int32_t i_2 = i - 1
        result_1 = result_5
        int32_t rdi = i - i_2
        int32_t result_6 = r13[sx.q(i_2)]
        result_3 = result_6
        
        if (rdi != 1)
            memmove(&r13[sx.q(i_2)], &r13[sx.q(i_2 + 1)], (rdi - 1) << 2)
            result_6 = result_3
        
        void* rdx_11 = arg1[1]
        i = i_2
        
        if ((rdx_11.b & 1) != 0)
            rdx_11 = (rdx_11 s>> 1) + &arg1[1]
        
        int64_t r9_1 = sx.q(rax_9)
        *(rdx_11 + (r9_1 << 2)) = *(var_68 + (r9_1 << 2))
        void* rax_16 = arg1[3]
        
        if ((rax_16.b & 1) != 0)
            rax_16 = (rax_16 s>> 1) + &arg1[3]
        
        *(rax_16 + (r9_1 << 2)) = result_6
        int64_t rax_18 = var_68
        int64_t result_7 = sx.q(result_6)
        *(rax_18 + (result_7 << 2)) = *(rax_18 + (r9_1 << 2)) f+ *(rax_18 + (result_7 << 2)) - 1f
        
        if (1f f<= *(var_68 + (result_7 << 2)))
            i = i_2 + 1
            var_70.d = i
            
            if (i s> var_70:4.d)
                sub_1405a4cf0(&var_78)
                result_6 = result_3
                i = var_70.d
                r13 = var_78
            
            r13[sx.q(i_2)] = result_6
        else
            result_1 = result_5 + 1
            
            if (result_1 s> var_7c)
                sub_1405a4cf0(&var_88)
                result_6 = result_3
                r12 = var_88
            
            r12[sx.q(result_5)] = result_6
        
        if (result_1 == 0)
            break

int32_t* rdx_14 = r13
void* r8_6 = &r13[sx.q(i)]

if (r13 != r8_6)
    do
        void* rcx_17 = arg1[1]
        
        if ((rcx_17.b & 1) != 0)
            rcx_17 = (rcx_17 s>> 1) + &arg1[1]
        
        int64_t rax_23 = sx.q(*rdx_14)
        rdx_14 = &rdx_14[1]
        *(rcx_17 + (rax_23 << 2)) = 0x3f800000
    while (rdx_14 != r8_6)

int64_t result = sx.q(result_1)
int32_t* rdx_15 = r12
void* r8_7 = &r12[result]

if (r12 != r8_7)
    do
        void* rcx_19 = arg1[1]
        
        if ((rcx_19.b & 1) != 0)
            rcx_19 = (rcx_19 s>> 1) + &arg1[1]
        
        result = sx.q(*rdx_15)
        rdx_15 = &rdx_15[1]
        *(rcx_19 + (result << 2)) = 0x3f800000
    while (rdx_15 != r8_7)

if (r13 != 0)
    result = sub_140a74f90(r13)

if (r12 != 0)
    result = sub_140a74f90(r12)

int64_t rcx_22 = var_68

if (rcx_22 == 0)
    return result

return sub_140a74f90(rcx_22)
