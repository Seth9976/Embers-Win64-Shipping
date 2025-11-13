// 函数: sub_140b7bde0
// 地址: 0x140b7bde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x1e8)
void* rdi = nullptr
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rbx = &data_142e801c8
    sub_140b18720(&rbx[1], arg1, 1)
    sub_140596d10(&rbx[3], arg1)
    sub_140b77700(&rbx[5], arg2)
    rbx[0x3c].d = arg3
    *(rbx + 0x1e4) = 0

void*** result_2 = j_sub_140a82f30(0x18)

if (result_2 == 0)
    result_2 = nullptr
else
    result_2[1].d = 1
    *result_2 = &data_142e81b58
    *(result_2 + 0xc) = 1
    result_2[2] = rbx

void*** var_68 = rbx
void*** result_1 = result_2
void*** rdx_4 = var_68
void*** result

if (rdx_4[0x25].b != 0)
    int64_t rbx_1 = sx.q(arg5[1].d)
    int32_t rax_1 = (rbx_1 + 1).d
    arg5[1].d = rax_1
    
    if (rax_1 s> *(arg5 + 0xc))
        sub_1405a4f90(arg5)
        rdx_4 = var_68
    
    void**** rcx_6 = (rbx_1 << 4) + *arg5
    *rcx_6 = rdx_4
    rcx_6[1] = result_1
    result = result_1
    
    if (result != 0)
        result[1].d += 1
    label_140b7c05e:
        
        if (result_1 != 0)
            result_1[1].d -= 1
            
            if (result_1[1].d == 1)
                result = (**result_1)(result_1)
                int32_t temp1_1 = *(result_1 + 0xc)
                *(result_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    return (*result_1)[1](result_1, 1)
    
    return result

int64_t var_48
sub_140b11c80(&var_48, arg1)
int32_t var_78
sub_140926e00(arg4, &var_78, &var_68[1])
int64_t rax_3 = sx.q(var_78)
void* const rcx_9

if (rax_3.d == 0xffffffff)
    rcx_9 = nullptr
else
    rcx_9 = *arg4 + rax_3 * 0x28

void** rax_5 = rcx_9 + 0x10

if (rcx_9 == 0)
    rax_5 = nullptr

void** var_58

if (rax_5 != 0)
    void* rdx_10 = *rax_5
    result = zx.q(*(rdx_10 + 0x1e0))
    
    if (result.d == 0 && arg3 == 2)
        sub_140926e00(arg4, &var_78, &var_68[1])
        int64_t rax_8 = sx.q(var_78)
        
        if (rax_8.d != 0xffffffff)
            rdi = *arg4 + rax_8 * 0x28
        
        uint128_t zmm1_1 = var_68.o
        var_58.o = zmm1_1
        void*** result_3 = _mm_bsrli_si128(zmm1_1, 8).q
        result_1 = result_3
        
        if (result_3 != 0)
            result_3[1].d += 1
        
        result = &var_58
        
        if (&var_58 != rdi + 0x10)
            uint128_t zmm0_1 = *(rdi + 0x10)
            *(rdi + 0x10) = zmm1_1
            var_58.o = zmm0_1
        
        int64_t* var_50
        
        if (var_50 != 0)
            var_50[1].d -= 1
            
            if (var_50[1].d == 1)
                result = (**var_50)(var_50)
                int32_t temp3_1 = *(var_50 + 0xc)
                *(var_50 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    result = (*(*var_50 + 8))(var_50, 1)
    else if (result.d != 2 || arg3 != 0)
        void*** rax_12 = var_68
        int16_t* const rcx_14 = &data_142d40450
        int16_t* rax_13
        
        if (rax_12[4].d == 0)
            rax_13 = &data_142d40450
        else
            rax_13 = rax_12[3]
        
        if (*(rdx_10 + 0x20) != 0)
            rcx_14 = *(rdx_10 + 0x18)
        
        result = sub_140a54510(rcx_14, rax_13)
else
    var_58 = &var_68[1]
    void**** var_50_1 = &var_68
    result = sub_140b76b10(arg4, &var_78, &var_58, nullptr)
int64_t rcx_15 = var_48

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

goto label_140b7c05e
