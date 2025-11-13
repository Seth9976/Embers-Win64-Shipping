// 函数: sub_140b80d80
// 地址: 0x140b80d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void var_38
sub_140a96170(&var_38)
int32_t* rax_2 = j_sub_140a82f30(0x138)
int32_t* rbx

if (rax_2 == 0)
    rbx = nullptr
else
    rbx = sub_140b78360(rax_2)

void*** rax_4 = j_sub_140a82f30(0x18)

if (rax_4 != 0)
    rax_4[1].d = 1
    *rax_4 = &data_142e81b48
    *(rax_4 + 0xc) = 1
    rax_4[2] = rbx

void*** var_50 = rax_4
int64_t* rdi

if (sub_140b7f4e0(rbx, arg2, &var_38) == 0)
    sub_140b21610(0, &var_38, nullptr)
    rdi.b = 0
else
    uint128_t zmm1_1 = rbx.o
    uint128_t var_48 = zmm1_1
    void*** rbx_1 = _mm_bsrli_si128(zmm1_1, 8).q
    var_50 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (&var_48 != arg1 + 8)
        uint128_t var_20_1 = zmm1_1
        var_48 = *(arg1 + 8)
        *(arg1 + 8) = zmm1_1
    
    int64_t* rbx_2 = var_48:8.q
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    int32_t rax_9 = *(arg1 + 0x24)
    void* rbx_3 = *(arg1 + 0x18)
    rdi = zx.q(*(arg1 + 0x20))
    
    if (rax_9 s< 0)
        if (rdi.d != 0)
            int32_t i
            
            do
                int64_t rcx_7 = *(rbx_3 + 0x10)
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                int64_t rcx_8 = *rbx_3
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                rbx_3 += 0x28
                i = rdi.d
                rdi = zx.q(rdi.d - 1)
            while (i != 1)
            rax_9 = *(arg1 + 0x24)
        
        *(arg1 + 0x20) = 0
        
        if (rax_9 != 0)
            sub_1405c5660(arg1 + 0x18, 0)
        
        rdi.b = 1
    else
        if (rdi.d != 0)
            int32_t i_1
            
            do
                int64_t rcx_5 = *(rbx_3 + 0x10)
                
                if (rcx_5 != 0)
                    sub_140a74f90(rcx_5)
                
                int64_t rcx_6 = *rbx_3
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                rbx_3 += 0x28
                i_1 = rdi.d
                rdi = zx.q(rdi.d - 1)
            while (i_1 != 1)
        
        *(arg1 + 0x20) = 0
        rdi.b = 1

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t temp3_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*var_50)[1](var_50, 1)

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t rsi_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_3 = *var_30
            (*(r8_3 + 8))(var_30, zx.q(rsi_1), r8_3)

__security_check_cookie(rax_1 ^ &var_78)
return zx.q(rdi.b)
