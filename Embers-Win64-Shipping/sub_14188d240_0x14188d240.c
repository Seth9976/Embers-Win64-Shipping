// 函数: sub_14188d240
// 地址: 0x14188d240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i_2
__builtin_memset(&i_2, 0, 0x20)
uint64_t r15
r15.b = 1
int64_t* arg_8 = nullptr
TEB* gsbase
void* r13 = gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)
int64_t* var_e8
int64_t var_d0_1
int128_t var_c8
int64_t* rbx_4

while (true)
    bool z_1
    
    if (0 == *(arg1 + 0xa0))
        *(arg1 + 0xa0) = 0
        z_1 = true
    else
        *(arg1 + 0xa0)
        z_1 = false
    
    if (not(z_1))
    label_14188d69b:
        rbx_4 = arg_8
    label_14188d6a4:
        
        if (rbx_4 != 0)
            int64_t* rcx_32 = rbx_4
            arg_8 = nullptr
            rbx_4 = nullptr
            
            if (rcx_32 != 0)
                (**rcx_32)(rcx_32, 1)
        
        if (r15.b != 0)
            bool z_3
            
            if (0 == *(arg1 + 0xa0))
                *(arg1 + 0xa0) = 0
                z_3 = true
            else
                *(arg1 + 0xa0)
                z_3 = false
            
            if (z_3)
                int64_t* rcx_33 = *(arg1 + 0x18)
                
                if ((*(*rcx_33 + 8))(rcx_33) == 0)
                    rbx_4 = arg_8
                    r15.b = 1
                    break
            
            rbx_4 = arg_8
    else
        int64_t* rcx = *(arg1 + 0x18)
        
        if ((*(*rcx + 8))(rcx) != 0)
            goto label_14188d69b
        
        void* rdi_1 = **(arg1 + 0xb8)
        
        if (rdi_1 == 0)
            bool z_2
            
            if (0 == *(arg1 + 0xa4))
                *(arg1 + 0xa4) = 0
                z_2 = true
            else
                *(arg1 + 0xa4)
                z_2 = false
            
            if (not(z_2))
                goto label_14188d69b
            
            int64_t* rcx_28 = *(arg1 + 0xc0)
            (*(*rcx_28 + 0x20))(rcx_28, 0x3e8, 0)
            int64_t* rcx_29 = *(arg1 + 0xc0)
            (*(*rcx_29 + 0x18))(rcx_29)
            rbx_4 = arg_8
        label_14188d5b9:
            
            if (r15.b == 0)
                goto label_14188d6a4
            
            continue
        else
            if (&var_c8 != rdi_1 + 8)
                var_c8.q = *(rdi_1 + 8)
                *(rdi_1 + 8) = 0
                sub_1405aeff0(&var_c8:8, rdi_1 + 0x10)
            
            void* r14_1 = *(arg1 + 0xb8)
            *(arg1 + 0xb8) = rdi_1
            int128_t var_b8 = zx.o(0)
            
            if (rdi_1 + 8 != &var_b8)
                *(rdi_1 + 8) = 0
                sub_1405aeff0(rdi_1 + 0x10, &var_b8:8)
                void* rcx_3 = var_b8:8.q
                
                if (rcx_3 != 0)
                    int32_t rax_6 = *(rcx_3 + 8)
                    *(rcx_3 + 8) -= 1
                    
                    if (rax_6 == 1)
                        int64_t* rbx_2 = var_b8:8.q
                        (**rbx_2)(rbx_2)
                        int32_t rax_8 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (rax_8 == 1)
                            int64_t* rcx_5 = var_b8:8.q
                            (*(*rcx_5 + 8))(rcx_5, 1)
            
            if (r14_1 != 0)
                int64_t* rbx_3 = *(r14_1 + 0x10)
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t rax_12 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (rax_12 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
                
                j_sub_140a74f90(r14_1)
            
            int64_t* rdi_2 = var_c8.q
            int64_t rax_14 = rdi_2[2]
            
            if (rax_14 != -1)
                rbx_4 = arg_8
                
                if (rbx_4 == 0)
                label_14188d635:
                    r15.b = 0
                    
                    if (data_143cd6ff0 s> *(0x14 + *r13))
                        _Init_thread_header(&data_143cd6ff0)
                        
                        if (data_143cd6ff0 == 0xffffffff)
                            sub_140a96080(&data_143cd6fd8)
                            atexit(sub_142cb0d20)
                            _Init_thread_footer(&data_143cd6ff0)
                    
                    int64_t var_68 = data_143cd6fd8
                    void* rax_43 = data_143cd6fe0
                    void* var_60_1 = rax_43
                    
                    if (rax_43 != 0)
                        *(rax_43 + 8) += 1
                        rbx_4 = arg_8
                    
                    int64_t* rcx_31 = *(arg1 + 0x18)
                    int32_t var_58_1 = data_143cd6fe8
                    var_e8 = &var_68
                    (*(*rcx_31 + 0x38))(rcx_31, 2, data_1439c6820, 0, var_e8)
                    goto label_14188d6a4
                
                if (rax_14 s>= 0)
                    if ((*(*rbx_4 + 0x20))(rbx_4) != rax_14)
                        (*(*rbx_4 + 0x178))(rbx_4, rax_14)
                    
                    (*(*rbx_4 + 0x150))(rbx_4, rdi_2[3], sx.q(rdi_2[4].d))
                    goto label_14188d5b9
                
                if (rax_14 != -2)
                    goto label_14188d635
                
                int16_t* var_a8
                (*(*rbx_4 + 0x10))(rbx_4, &var_a8)
                char rax_26 = (*(*rbx_4 + 0x1b8))(rbx_4)
                int64_t* rcx_21 = rbx_4
                rbx_4 = nullptr
                r15 = zx.q(rax_26)
                arg_8 = nullptr
                
                if (rcx_21 != 0)
                    int64_t r8_3 = *rcx_21
                    (*r8_3)(rcx_21, 1, r8_3)
                
                if (r15.b == 0)
                    sub_1405d9400()
                    int64_t var_98 = data_143cd6fd8
                    void* rcx_25 = data_143cd6fe0
                    void* var_90_1 = rcx_25
                    
                    if (rcx_25 != 0)
                        *(rcx_25 + 8) += 1
                        rbx_4 = arg_8
                    
                    int64_t* rcx_26 = *(arg1 + 0x18)
                    int32_t var_88_1 = data_143cd6fe8
                    var_e8 = &var_98
                    (*(*rcx_26 + 0x38))(rcx_26, 2, data_1439c6828, 0, var_e8)
                else
                    int16_t* const r8_4 = &data_142d40450
                    int32_t var_a0
                    
                    if (var_a0 != 0)
                        r8_4 = var_a8
                    
                    if (rdi_2[1].d == 0)
                        int64_t* rcx_23 = *(arg1 + 0x10)
                        (*(*rcx_23 + 0x70))(rcx_23, &data_142d40450, r8_4)
                    else
                        int64_t* rcx_22 = *(arg1 + 0x10)
                        (*(*rcx_22 + 0x70))(rcx_22, *rdi_2, r8_4)
                
                int16_t* rcx_27 = var_a8
                
                if (rcx_27 != 0)
                    sub_140a74f90(rcx_27)
                
                goto label_14188d5b9
            
            int16_t* const r8_1
            
            if (rdi_2[1].d == 0)
                r8_1 = &data_142d40450
            else
                r8_1 = *rdi_2
            
            int64_t* rcx_9 = *(arg1 + 0x10)
            int64_t* arg_10
            int64_t* rax_16 = (*(*rcx_9 + 0x50))(rcx_9, &arg_10, r8_1, 0, var_e8)
            
            if (&arg_8 == rax_16)
                rbx_4 = arg_8
            else
                int64_t* rcx_10 = arg_8
                rbx_4 = *rax_16
                arg_8 = rbx_4
                *rax_16 = 0
                
                if (rcx_10 != 0)
                    (**rcx_10)(rcx_10, 1)
            
            int64_t* rcx_11 = arg_10
            
            if (rcx_11 != 0)
                (**rcx_11)(rcx_11, 1)
            
            int64_t r14_2 = sx.q(var_d0_1.d)
            int32_t rax_19 = (r14_2 + 1).d
            var_d0_1.d = rax_19
            
            if (rax_19 s> var_d0_1:4.d)
                sub_1405a4f90(&i_2)
            
            sub_140596d10(&i_2[r14_2 * 2], rdi_2)
            
            if (rbx_4 != 0)
                goto label_14188d5b9
            
            if (data_143cd6ff0 s> *(0x14 + *r13))
                _Init_thread_header(&data_143cd6ff0)
                
                if (data_143cd6ff0 == 0xffffffff)
                    sub_140a96080(&data_143cd6fd8)
                    atexit(sub_142cb0d20)
                    _Init_thread_footer(&data_143cd6ff0)
            
            int64_t var_80 = data_143cd6fd8
            void* rax_37 = data_143cd6fe0
            void* var_78_1 = rax_37
            
            if (rax_37 != 0)
                *(rax_37 + 8) += 1
                rbx_4 = arg_8
            
            int64_t* rcx_30 = *(arg1 + 0x18)
            int32_t var_70_1 = data_143cd6fe8
            var_e8 = &var_80
            (*(*rcx_30 + 0x38))(rcx_30, 2, data_1439c6818, 0, var_e8)
    
    int64_t* i = i_2
    r15.b = 0
    
    for (; i != &i[sx.q(var_d0_1.d) * 2]; i = &i[2])
        int16_t* const rdx_11
        
        if (i[1].d == 0)
            rdx_11 = &data_142d40450
        else
            rdx_11 = *i
        
        int64_t* rcx_34 = *(arg1 + 0x10)
        (*(*rcx_34 + 0x68))(rcx_34, rdx_11)
    
    break

void* var_50
void** result = sub_14185bd80(&var_50, arg1 + 0x40, r15.b)
void** result_1 = result

if (*result != 0)
    while (true)
        void* rcx_36 = *result_1
        
        if (rcx_36 != 0)
            int64_t* rcx_37 = *(rcx_36 + 0x70)
            int64_t r9_1 = *rcx_37
            result = (*(r9_1 + 0x20))(rcx_37, 0xffffffff, 0, r9_1, var_e8)
            
            if (result.b != 0)
                break

int64_t* var_48

if (var_48 != 0)
    result = zx.q(var_48[1].d)
    var_48[1].d -= 1
    
    if (result.d == 1)
        (**var_48)(var_48)
        result = zx.q(*(var_48 + 0xc))
        *(var_48 + 0xc) -= 1
        
        if (result.d == 1)
            result = (*(*var_48 + 8))(var_48, 1)
    
    rbx_4 = arg_8

if (rbx_4 != 0)
    result = (**rbx_4)(rbx_4, 1)

void* rcx_41 = var_c8:8.q

if (rcx_41 != 0)
    result = zx.q(*(rcx_41 + 8))
    *(rcx_41 + 8) -= 1
    
    if (result.d == 1)
        int64_t* rbx_5 = var_c8:8.q
        result = (**rbx_5)(rbx_5)
        int32_t r12_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (r12_1 == 1)
            int64_t* rcx_43 = var_c8:8.q
            result = (*(*rcx_43 + 8))(rcx_43, zx.q(r12_1))

int32_t i_3 = var_d0_1.d
int64_t* i_4 = i_2

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_44 = *i_4
        
        if (rcx_44 != 0)
            result = sub_140a74f90(rcx_44)
        
        i_4 = &i_4[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

int64_t* i_5 = i_2

if (i_5 == 0)
    return result

return sub_140a74f90(i_5)
