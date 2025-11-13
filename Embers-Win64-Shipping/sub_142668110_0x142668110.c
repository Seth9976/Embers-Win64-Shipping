// 函数: sub_142668110
// 地址: 0x142668110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140ce8e10(arg1, arg2)
int64_t rax_1 = (*(*arg2 + 0x20))(arg2)
int64_t* rdx = arg2[1]
int32_t arg_8 = 4
int32_t arg_10 = 0xa237f237
int32_t* r8 = *rdx

if (&r8[1] u> rdx[1])
    int32_t* rdx_1 = &arg_10
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_1, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    arg_10 = *r8
    *rdx += 4

if (arg_10 == 0xa237f237)
    int64_t* rcx_5 = arg2[1]
    int32_t* rdx_3 = *rcx_5
    
    if (&rdx_3[1] u> rcx_5[1])
        int32_t* rdx_4 = &arg_8
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_4, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_4, 4)
    else
        arg_8 = *rdx_3
        *rcx_5 += 4
else
    int64_t rax_3 = *arg2
    arg_8 = 1
    (*(rax_3 + 0x178))(arg2, rax_1)

int64_t var_38 = 0
int64_t var_30 = 0
sub_1409ac860(arg2, &var_38, zmm1)
int64_t* rdx_6 = arg2[1]
int64_t rcx_8 = *rdx_6
bool cond:3

if (rcx_8 + 4 u> rdx_6[1])
    int32_t rax_9
    rax_9.b = arg2[0xe] != 0
    int32_t arg_18 = rax_9
    (*(*arg2 + 0x150))(arg2, &arg_18, 4)
    cond:3 = arg_18 != 0
else
    cond:3 = *rcx_8 != 0
    *rdx_6 = rcx_8 + 4

int64_t rbx
rbx.b = cond:3
int64_t* var_48

if (rbx.b == 0 && (arg2[5].b & 1) != 0)
    int64_t* rax_11 = sub_140d21830(arg1, &var_48, 0, 0)
    int16_t* const r9_1
    
    if (rax_11[1].d == 0)
        r9_1 = &data_142d40450
    else
        r9_1 = *rax_11
    
    zmm1 = sub_140af98a0("Unknown", 0x1da, 
        This platform requires cooked packages, and NavCollision data was not cooked into %s.", r9_1)
    int64_t* rcx_11 = var_48
    
    if (rcx_11 != 0)
        zmm1 = sub_140a74f90(rcx_11)
    
    sub_140afbb40()

uint32_t result = *(arg1 + 0xa8) & 1

if (result != 0 || (*(arg1 + 0x88) == 0 && *(arg1 + 0x98) == 0))
    rcx_8.b = 1
    
    if (result != 0 || *(arg1 + 0x98) s> 0 || *(arg1 + 0x88) s> 0)
        result.b = 1
    else
        result.b = 0
else
    rcx_8.b = 0
    
    if (*(arg1 + 0x98) s> 0 || *(arg1 + 0x88) s> 0)
        result.b = 1
    else
        result.b = 0

if (rbx.b != 0)
    char rcx_12 = rcx_8.b
    result = zx.d(result.b)
    
    if (arg_8 s>= 4)
        rcx_12 = result.b
    
    if (rcx_12 != 0)
        if (arg2[0xe] == 0)
            char var_50_2 = 0
            result = sub_140bd01d0(arg1 + 0xc0, arg2, arg1, nullptr, zmm1, 1, 0, 1)
        else
            int64_t rbx_1 = data_143f71478
            int512_t zmm1_1 = sub_142656be0(arg1, rbx_1)
            var_48 = nullptr
            int64_t var_40_1 = 1
            sub_1405a4d70(&var_48)
            char var_50_1 = 0
            *var_48 = rbx_1
            result = sub_140bd01d0(arg1 + 0xc0, arg2, arg1, &var_48, zmm1_1, 1, 0, 1)
            int64_t* rcx_16 = var_48
            
            if (rcx_16 != 0)
                result = sub_140a74f90(rcx_16)

if (arg_8 s< 2)
    return result

return (*(*arg2 + 0x130))(arg2, arg1 + 0xa0)
