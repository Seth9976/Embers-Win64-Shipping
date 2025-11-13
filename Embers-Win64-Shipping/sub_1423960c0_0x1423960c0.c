// 函数: sub_1423960c0
// 地址: 0x1423960c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t* rax_2 = j_sub_140a82f30(0xa0)
int64_t* rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    __builtin_memset(rax_2, 0, 0x16)
    rax_2[3] = 0
    rax_2[4].d = 0
    rax_2[5] = 0
    rax_2[6].d = 0
    rax_2[7] = 0
    rax_2[8].d = 0
    __builtin_memset(&rax_2[9], 0, 0x58)

void*** rax_3 = j_sub_140a82f30(0x18)
void*** rbx = rax_3

if (rax_3 == 0)
    rbx = nullptr
else
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    *rbx = &data_143336e08
    rbx[2] = rdi

if (rdi != 0)
    void* rax_4
    
    if (*rdi != 0)
        rax_4 = rdi[1]
    
    if (*rdi == 0 || rax_4 == 0 || *(rax_4 + 8) s<= 0)
        if (rbx != 0)
            rbx[1].d += 1
        
        *rdi = rdi
        int64_t* rcx = rdi[1]
        
        if (rbx != rcx)
            if (rbx != 0)
                *(rbx + 0xc) += 1
                rcx = rdi[1]
            
            if (rcx != 0)
                int32_t temp4_1 = *(rcx + 0xc)
                *(rcx + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rcx + 8))(rcx, 1)
            
            rdi[1] = rbx
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp3_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*rbx)[1](rbx, 1)

sub_1407473e0(&rdi[3], arg4)
rdi[0x13] = arg1
int512_t zmm1 = sub_142382020(&rdi[0xd], arg3)

if (&rdi[9] != arg8)
    int64_t rcx_5 = rdi[9]
    
    if (rcx_5 != 0)
        zmm1 = sub_140a74f90(rcx_5)
    
    rdi[9] = *arg8
    *arg8 = 0
    rdi[0xa].d = arg8[1].d
    *(rdi + 0x54) = *(arg8 + 0xc)
    arg8[1] = 0

rdi[0xb].d = arg5
int32_t r12_1 = rdi[0xe].d
int64_t var_a8 = 0
int32_t var_a0 = 0
int32_t var_7c = 0x80
int64_t var_98
__builtin_memset(&var_98, 0, 0x1c)
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int64_t var_68 = 0
int32_t var_60 = 0

if (r12_1 s> 0)
    sub_1409d9850(&var_a8, r12_1)
    int32_t rax_16
    
    if (r12_1 u< 4)
        rax_16 = 1
    else
        uint32_t rax_13 = r12_1 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_13 + 8)
        int32_t rcx_7
        
        if (rax_13 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_13 + 7)
        
        if (rax_13 == 0xfffffff9)
            rax_16 = 1
        else
            rax_16 = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - (0x1f - temp0_3)))
    
    if (var_60 == 0 || var_60 s< rax_16)
        int32_t var_60_1 = rax_16
        zmm1 = sub_141e68940(&var_a8)

int64_t* i = rdi[0xd]
int64_t* var_e8
int64_t** result_1

for (void* r13_1 = &i[sx.q(rdi[0xe].d) * 3]; i != r13_1; i = &i[3])
    int64_t rcx_15 = *i
    
    if (rcx_15 != 0)
        char rax_18
        int512_t zmm1_1
        rax_18, zmm1_1 = sub_140bacea0(rcx_15)
        
        if (rax_18 != 0)
            sub_142386180(rdi, zmm1_1)
            result_1 = arg2
            int32_t var_60_3 = 0
            *result_1 = nullptr
            result_1[1] = 0
            
            if (var_68 != 0)
                sub_140a74f90(var_68)
            
            sub_140597460(&var_a8)
            
            if (rbx != 0)
                rbx[1].d -= 1
                
                if (rbx[1].d == 1)
                    (**rbx)(rbx)
                    int32_t temp8_1 = *(rbx + 0xc)
                    *(rbx + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        void** r8_2 = *rbx
                        r8_2[1](rbx, 1, r8_2)
            
            goto label_14239640b
        
        zmm1 = sub_141e4c4c0(&var_a8, &var_e8, i, nullptr)
    else
        r12_1 -= 1

int64_t** result

if (r12_1 != 0)
    int64_t* var_f8
    int32_t i_4
    
    if (rdi[0xe].d != r12_1)
        int32_t i_5 = 0
        var_f8 = nullptr
        i_4 = 0
        int32_t i_1 = 0
        int32_t var_ec_1 = 0
        int32_t r12_2 = 1
        
        while (i_1 s>= 0)
            if (i_1 s>= rdi[0xe].d)
                break
            
            int64_t r13_2 = sx.q(i_1) * 0x18
            int64_t* rax_25 = rdi[0xd] + r13_2
            var_e8 = rax_25
            
            if (i_5 s> 1)
                sub_140a20ba0(&var_f8, &data_142d8adc4, 2)
                rax_25 = var_e8
            
            int64_t var_b8
            int64_t* rax_26
            rax_26, zmm1 = sub_140d30800(rax_25, &var_b8)
            int32_t rcx_33 = rax_26[1].d
            int32_t r8_3 = rcx_33 - 1
            
            if (rcx_33 == 0)
                r8_3 = 0
            
            sub_140a20ba0(&var_f8, *rax_26, r8_3)
            int64_t rcx_35 = var_b8
            
            if (rcx_35 != 0)
                zmm1 = sub_140a74f90(rcx_35)
            
            if (*var_e8 == 0)
                int64_t rcx_36 = *(rdi[0xd] + r13_2 + 8)
                
                if (rcx_36 != 0)
                    zmm1 = sub_140a74f90(rcx_36)
                
                int32_t rcx_39 = rdi[0xe].d
                int32_t rax_30 = rcx_39 - i_1
                
                if (rax_30 != 1)
                    int64_t r9_2 = rdi[0xd]
                    memmove(r9_2 + r13_2, r9_2 + sx.q(r12_2) * 0x18, (rax_30 - 1) * 0x18)
                    rcx_39 = rdi[0xe].d
                
                rdi[0xe].d = rcx_39 - 1
                sub_1405fde90(&rdi[0xd])
                i_1 -= 1
                r12_2 -= 1
            
            i_5 = i_4
            i_1 += 1
            r12_2 += 1
        
        int64_t* rcx_41 = var_f8
        
        if (rcx_41 != 0)
            zmm1 = sub_140a74f90(rcx_41)
    
    if (var_a0 - var_74 != rdi[0xe].d)
        zmm1 = sub_142382020(&rdi[0xd], sub_141e54b80(&var_a8, &var_f8))
        int32_t i_3 = i_4
        
        if (i_3 != 0)
            void* r14_3 = &var_f8[1]
            int32_t i_2
            
            do
                int64_t rcx_44 = *r14_3
                
                if (rcx_44 != 0)
                    zmm1 = sub_140a74f90(rcx_44)
                
                r14_3 += 0x18
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        int64_t* rcx_45 = var_f8
        
        if (rcx_45 != 0)
            zmm1 = sub_140a74f90(rcx_45)
    
    if (arg6 != 0)
        int64_t r15_1 = sx.q(*(arg1 + 0xb8))
        int32_t rax_38 = (r15_1 + 1).d
        *(arg1 + 0xb8) = rax_38
        
        if (rax_38 s> *(arg1 + 0xbc))
            sub_1405a4f90(arg1 + 0xb0)
        
        int64_t** rax_41 = (r15_1 << 4) + *(arg1 + 0xb0)
        *rax_41 = rdi
        rax_41[1] = rbx
        
        if (rbx != 0)
            rbx[1].d += 1
    
    if (arg7 == 0)
        var_f8 = rdi
        i_4.q = rbx
        
        if (rbx != 0)
            rbx[1].d += 1
        
        sub_142398740(arg1, &var_f8, zmm1)
    else
        *(rdi + 0x13) = 1
    
    *arg2 = rdi
    arg2[1] = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    int32_t var_60_4 = 0
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    sub_140597460(&var_a8)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp11_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*rbx)[1](rbx, 1)
    
    sub_1408464b0(arg3)
    sub_140745b20(arg4)
    int64_t rcx_54 = *arg8
    
    if (rcx_54 != 0)
        sub_140a74f90(rcx_54)
    
    result = arg2
else
    sub_142386180(rdi, zmm1)
    result_1 = arg2
    int32_t var_60_2 = 0
    *result_1 = nullptr
    result_1[1] = 0
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    sub_140597460(&var_a8)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp6_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rbx)[1](rbx, 1)
    
label_14239640b:
    sub_1408464b0(arg3)
    sub_140745b20(arg4)
    int64_t rcx_24 = *arg8
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    result = result_1

__security_check_cookie(rax_1 ^ &var_118)
return result
