// 函数: sub_140d07260
// 地址: 0x140d07260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
char rdx = (*(arg1 + 0xa0)).b
int128_t zmm0 = *(arg1 + 0x88)
int32_t rdi = arg4
int64_t zmm1 = *(arg1 + 0x98)
int64_t var_78 = *(arg1 + 0x78)
int64_t var_70 = *(arg1 + 0x80)
int64_t var_50 = zmm1
int128_t var_60 = zmm0
int32_t r8 = arg3[1].d
int32_t r8_1

if ((not.b(rdx) & 1) != 0)
    r8_1 = r8 - *(arg3 + 0x34)
else
    r8_1 = r8 - *(arg3 + 0x24)

int64_t* var_a0

if (r8_1 != 0)
    sub_140cfaf40(&var_78, 0, r8_1)
    int32_t var_98_1 = 0
    var_a0 = &var_78
    sub_140ceec60(&var_78, &var_a0)

void* result_1 = &arg2[1]
void* result

if (*arg2 == 0x28)
    if (iswspace(*result_1) != 0)
        int32_t i
        
        do
            wint_t _C = *(result_1 + 2)
            result_1 += 2
            i = iswspace(_C)
        while (i != 0)
    
    if (*result_1 != 0x29)
        int64_t** rax_7 = sub_140a82f30(sx.q(*(*(arg1 + 0x80) + 0x3c) + *(arg1 + 0x88)), 0)
        int64_t** r9 = rax_7
        char var_b8_1 = 0
        int64_t* var_90
        int64_t** var_88
        
        while (true)
            int64_t* r8_2 = *(arg1 + 0x78)
            
            if (not(test_bit(zx.q(r8_2[8].d), 9)))
                (*(*r8_2 + 0xf0))(r8_2, r9)
            else
                memset(r9, 0, sx.q(*(r8_2 + 0x3c) * r8_2[7].d))
            
            int64_t* rcx_11 = *(arg1 + 0x80)
            void* r9_2 = sx.q(*(arg1 + 0x88)) + rax_7
            
            if (not(test_bit(zx.q(rcx_11[8].d), 9)))
                (*(*rcx_11 + 0xf0))(rcx_11, r9_2)
            else
                memset(r9_2, 0, sx.q(*(rcx_11 + 0x3c) * rcx_11[7].d))
            
            void* rbx_1 = result_1 + 2
            
            if (*result_1 == 0x28)
                if (iswspace(*rbx_1) != 0)
                    int32_t i_1
                    
                    do
                        wint_t _C_1 = *(rbx_1 + 2)
                        rbx_1 += 2
                        i_1 = iswspace(_C_1)
                    while (i_1 != 0)
                
                int64_t* rdi_1 = *(arg1 + 0x78)
                int32_t r15_2 = rdi | 2
                int16_t* rbx_2
                
                if (sub_140cec0e0(rdi_1, r15_2.b, arg6) == 0)
                    rbx_2 = nullptr
                else
                    rbx_2 = (*(*rdi_1 + 0xa8))(rdi_1, rbx_1, rax_7, zx.q(r15_2) | 0x8000000, arg5, 
                        arg6, var_b8_1, rax_7, arg4)
                
                if (rbx_2 != 0)
                    var_a0.d = 0
                    var_90 = &var_78
                    var_88 = rax_7
                    int64_t** var_80_1 = &var_a0
                    rdi_1.b = sub_140ceef40(&var_78, &var_90) != 0xffffffff
                    
                    if (iswspace(*rbx_2) != 0)
                        int32_t i_2
                        
                        do
                            wint_t _C_2 = rbx_2[1]
                            rbx_2 = &rbx_2[1]
                            i_2 = iswspace(_C_2)
                        while (i_2 != 0)
                    
                    void* rbx_3 = &rbx_2[1]
                    
                    if (*rbx_2 == 0x2c)
                        if (iswspace(*rbx_3) != 0)
                            int32_t i_3
                            
                            do
                                wint_t _C_3 = *(rbx_3 + 2)
                                rbx_3 += 2
                                i_3 = iswspace(_C_3)
                            while (i_3 != 0)
                        
                        void* rax_23 = sub_140941070(*(arg1 + 0x80), rbx_3, 
                            sx.q(*(arg1 + 0x88)) + rax_7, r15_2, arg5, arg6)
                        void* rbx_4 = rax_23
                        
                        if (rax_23 != 0)
                            if (iswspace(*rax_23) != 0)
                                int32_t i_4
                                
                                do
                                    wint_t _C_4 = *(rbx_4 + 2)
                                    rbx_4 += 2
                                    i_4 = iswspace(_C_4)
                                while (i_4 != 0)
                            
                            void* rbx_5 = rbx_4 + 2
                            
                            if (*rbx_4 == 0x29)
                                if (rdi_1.b == 0)
                                    int64_t* rdx_8 = &var_50
                                    int32_t rax_27
                                    
                                    if ((not.b(rdx) & 1) != 0)
                                        rax_27 = sub_140cf1c20(arg3, rdx_8)
                                    else
                                        rax_27 = sub_140cf1af0(arg3, rdx_8)
                                    
                                    sub_140cf59a0(&var_78, rax_27)
                                    void* rdi_4
                                    int32_t var_4c
                                    
                                    if ((not.b(rdx) & 1) != 0)
                                        rdi_4 = sx.q(var_4c * rax_27) + *arg3
                                    else
                                        void* rcx_23 = *arg3
                                        
                                        if ((rcx_23.b & 1) != 0)
                                            rcx_23 = (rcx_23 s>> 1) + arg3
                                        
                                        rdi_4 = sx.q(var_4c * rax_27) + rcx_23
                                    int64_t* r10_1 = *(arg1 + 0x78)
                                    int64_t rcx_25 = sx.q(*(r10_1 + 0x4c))
                                    void* rdx_11 = rax_7 + rcx_25
                                    void* r11_1 = rcx_25 + rdi_4
                                    
                                    if (r11_1 != rdx_11)
                                        if (not(test_bit(zx.q(r10_1[8].d), 0x1e)))
                                            (*(*r10_1 + 0xb0))(r10_1, r11_1, rdx_11, 
                                                zx.q(r10_1[7].d))
                                        else
                                            memcpy(r11_1, rdx_11, *(r10_1 + 0x3c) * r10_1[7].d)
                                    
                                    int64_t* r10_2 = *(arg1 + 0x80)
                                    int64_t rcx_28 = sx.q(*(r10_2 + 0x4c))
                                    void* rdx_14 = rax_7 + rcx_28
                                    void* r11_2 = rcx_28 + rdi_4
                                    
                                    if (r11_2 != rdx_14)
                                        if (not(test_bit(zx.q(r10_2[8].d), 0x1e)))
                                            (*(*r10_2 + 0xb0))(r10_2, r11_2, rdx_14, 
                                                zx.q(r10_2[7].d))
                                        else
                                            memcpy(r11_2, rdx_14, *(r10_2 + 0x3c) * r10_2[7].d)
                                
                                if (iswspace(*rbx_5) != 0)
                                    int32_t i_5
                                    
                                    do
                                        wint_t _C_5 = *(rbx_5 + 2)
                                        rbx_5 += 2
                                        i_5 = iswspace(_C_5)
                                    while (i_5 != 0)
                                
                                int16_t rax_44 = *rbx_5
                                result_1 = rbx_5 + 2
                                
                                if (rax_44 == 0x29)
                                    int64_t** r8_13 = &var_90
                                    int32_t* rdx_19 = &var_60:4
                                    var_a0 = &var_78
                                    
                                    if ((not.b(rdx) & 1) != 0)
                                        var_90 = sub_140cf2f70
                                        var_88 = &var_a0
                                        sub_140d0c0d0(arg3, rdx_19, r8_13)
                                        var_b8_1 = 1
                                    else
                                        var_90 = sub_140cf2f70
                                        var_88 = &var_a0
                                        sub_140d0bee0(arg3, rdx_19, r8_13)
                                        var_b8_1 = 1
                                    
                                    break
                                
                                if (rax_44 == 0x2c)
                                    if (iswspace(*result_1) != 0)
                                        int32_t i_6
                                        
                                        do
                                            wint_t _C_6 = *(result_1 + 2)
                                            result_1 += 2
                                            i_6 = iswspace(_C_6)
                                        while (i_6 != 0)
                                    
                                    int64_t* rcx_33 = *(arg1 + 0x80)
                                    
                                    if ((not.b((rcx_33[8] u>> 0x24).b) & 1) != 0)
                                        (*(*rcx_33 + 0xe8))(rcx_33, sx.q(*(arg1 + 0x88)) + rax_7)
                                    
                                    int64_t* rcx_34 = *(arg1 + 0x78)
                                    
                                    if ((not.b((rcx_34[8] u>> 0x24).b) & 1) != 0)
                                        (*(*rcx_34 + 0xe8))(rcx_34, rax_7)
                                        r9 = rax_7
                                        rdi = arg4
                                        continue
                                    else
                                        r9 = rax_7
                                        rdi = arg4
                                        continue
            
            result_1 = nullptr
            break
        
        int64_t* rcx_36 = *(arg1 + 0x80)
        
        if ((not.b((rcx_36[8] u>> 0x24).b) & 1) != 0)
            (*(*rcx_36 + 0xe8))(rcx_36, sx.q(*(arg1 + 0x88)) + rax_7)
        
        int64_t* rcx_37 = *(arg1 + 0x78)
        
        if ((not.b((rcx_37[8] u>> 0x24).b) & 1) != 0)
            (*(*rcx_37 + 0xe8))(rcx_37, rax_7)
        
        sub_140a74f90(rax_7)
        
        if (var_b8_1 == 0)
            int32_t r8_14 = arg3[1].d
            int32_t r8_15
            
            if ((not.b(rdx) & 1) != 0)
                r8_15 = r8_14 - *(arg3 + 0x34)
            else
                r8_15 = r8_14 - *(arg3 + 0x24)
            
            if (r8_15 != 0)
                sub_140cfaf40(&var_78, 0, r8_15)
                var_88.d = 0
                var_90 = &var_78
                sub_140ceec60(&var_78, &var_90)
        
        result = result_1
    else
        result = result_1 + 2
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_e8)
return result
