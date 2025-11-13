// 函数: sub_141c84170
// 地址: 0x141c84170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[2]
int64_t var_58 = arg1[1]
int64_t* var_50 = rbx

if (rbx != 0)
    rbx[1].d += 1

void* rdi = *arg1
int32_t result_1
sub_140a73790(rdi + 0x118, &result_1, &var_58)
int64_t result = sx.q(result_1)
int64_t* rsi_2
void* const r15

if (result.d == 0xffffffff)
    r15 = nullptr
    rsi_2 = nullptr
else
    int64_t rdx_1 = result * 5
    result = *(rdi + 0x118)
    int64_t rsi_1 = result + (rdx_1 << 3)
    
    if (rsi_1 == 0)
        r15 = nullptr
        rsi_2 = nullptr
    else
        r15 = *(rsi_1 + 0x10)
        rsi_2 = *(rsi_1 + 0x18)
        
        if (rsi_2 != 0)
            rsi_2[1].d += 1

if (rbx != 0)
    result = zx.q(rbx[1].d)
    rbx[1].d -= 1
    
    if (result.d == 1)
        result = (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*rbx + 8))(rbx, zx.q(rdi_1))

if (r15 != 0)
    int64_t* rcx_3 = arg1[3]
    int64_t* rax_4 = (*(*rcx_3 + 8))(rcx_3)
    result = sub_141c80b30(*arg1 + 0xc8, sub_140a6b260(rax_4, 0x10), rax_4)
    
    if (*result != 0)
        uint64_t* rax_6 = j_sub_140a82f30(0x38)
        uint64_t* rbx_2 = rax_6
        
        if (rax_6 == 0)
            rbx_2 = nullptr
        else
            __builtin_memset(rax_6, 0, 0x38)
        
        void*** rax_7 = j_sub_140a82f30(0x18)
        
        if (rax_7 == 0)
            rax_7 = nullptr
        else
            rax_7[1].d = 1
            *rax_7 = &data_14320fd20
            *(rax_7 + 0xc) = 1
            rax_7[2] = rbx_2
        
        uint64_t* var_88 = rbx_2
        uint128_t zmm0_1
        zmm0_1.q = arg1[5] f- *(r15 + 0x80)
        *var_88 = zmm0_1.q
        var_88[1].d = sbb.d(&var_88, &var_88, arg1[6].b != 0) & 2
        int64_t* rbx_3 = *(result + 8)
        void* rcx_9 = &var_88[2]
        int64_t var_70 = *result
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        if (&var_70 != rcx_9)
            var_70.o = *rcx_9
            *rcx_9 = var_70.o
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp5_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        int64_t* rcx_12 = arg1[3]
        var_88[4].d = (*(*rcx_12 + 0x10))(rcx_12)
        var_88[5] = arg1[5]
        var_88[6] = 0
        zmm0_1 = var_88.o
        uint128_t var_38 = zmm0_1
        void* rax_18 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_18 != 0)
            *(rax_18 + 8) += 1
        
        int64_t result_2 = result
        uint128_t* var_40_1 = &var_38
        void var_60
        sub_141c80380(r15 + 0x10, &var_60, &result_2, nullptr)
        int64_t* rbx_5 = var_38:8.q
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp7_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
        
        void* rbx_6 = *result
        int64_t rdi_4 = sx.q(*(rbx_6 + 0x60))
        int32_t rax_21 = (rdi_4 + 1).d
        *(rbx_6 + 0x60) = rax_21
        
        if (rax_21 s> *(rbx_6 + 0x64))
            sub_1405a4f90(rbx_6 + 0x58)
        
        result = (rdi_4 << 4) + *(rbx_6 + 0x58)
        *result = r15
        *(result + 8) = rsi_2
        
        if (rsi_2 != 0)
            rsi_2[1].d += 1
        
        if (rax_7 != 0)
            rax_7[1].d -= 1
            
            if (rax_7[1].d == 1)
                result = (**rax_7)(rax_7)
                int32_t temp9_1 = *(rax_7 + 0xc)
                *(rax_7 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    result = (*rax_7)[1](rax_7, 1)

if (rsi_2 != 0)
    rsi_2[1].d -= 1
    
    if (rsi_2[1].d == 1)
        result = (**rsi_2)(rsi_2)
        int32_t temp2_1 = *(rsi_2 + 0xc)
        *(rsi_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*rsi_2 + 8))(rsi_2, 1)

return result
