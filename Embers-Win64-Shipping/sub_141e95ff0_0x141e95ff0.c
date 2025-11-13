// 函数: sub_141e95ff0
// 地址: 0x141e95ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg2 + 0x80)
void** r15 = arg4
int32_t r11 = arg6
int32_t rbp = r11
void*** rsi = arg3
void* r12 = arg1
void* r14 = arg2
char var_4c = r10.b
r10.b = not.b(r10.b)
r10.b &= 1
int32_t var_78 = r11
int32_t var_68 = r10
int32_t r8 = *(*(arg2 + 0x78) + 0x3c)
int32_t r8_1 = r8 * r11
int64_t rbx = 0
int32_t r9 = 0
int32_t var_74 = 0

while (true)
    int32_t rdi_1 = r15[1].d
    
    if (rbp s>= rdi_1)
        break
    
    int32_t rdx = arg5[1].d
    
    if (rbp - r11 s>= rdx)
        int64_t* rcx_18 = *(r14 + 0x78)
        uint64_t i_1 = zx.q(rdi_1 - rdx)
        int64_t var_60 = 0
        int32_t var_54_1 = 0
        int32_t var_58_1 = i_1.d
        
        if (i_1.d s> 0)
            sub_140ce4cd0(&var_60, 0, *(rcx_18 + 0x3c))
            rcx_18 = *(r14 + 0x78)
            rbx = var_60
        
        if (test_bit(zx.q(rcx_18[8].d), 9))
            memset(rbx, 0, sx.q(*(rcx_18 + 0x3c) * i_1.d))
        else if (i_1.d s> 0)
            uint64_t i
            
            do
                if (not(test_bit(zx.q(rcx_18[8].d), 9)))
                    (*(*rcx_18 + 0xf0))()
                else
                    memset(rbx, 0, sx.q(*(rcx_18 + 0x3c) * rcx_18[7].d))
                
                rcx_18 = *(r14 + 0x78)
                rbx += sx.q(*(rcx_18 + 0x3c))
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        sub_141e95ff0(r12, r14, rsi, r15, &var_60, rbp, var_78, r8_1, var_68)
        int64_t rcx_23 = var_60
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        break
    
    void* r12_1
    
    if (rdi_1 != 0)
        void* rax_3 = *r15
        
        if (r10.b == 0 && (rax_3.b & 1) != 0)
            rax_3 = (rax_3 s>> 1) + r15
        
        r12_1 = sx.q(r8_1) + rax_3
    else
        r12_1 = nullptr
    
    void* rbp_1
    
    if (rdx != 0)
        void* rax_5 = *arg5
        
        if ((not.b(var_4c) & 1) == 0 && (rax_5.b & 1) != 0)
            rax_5 = (rax_5 s>> 1) + arg5
        
        rbp_1 = sx.q(r9) + rax_5
    else
        rbp_1 = nullptr
    
    int64_t* r15_1 = *(r14 + 0x78)
    void* var_88
    int32_t var_80
    
    if (r15_1 == 0)
    label_141e962c7:
        
        if ((*(*r15_1 + 0x80))(r15_1, r12_1, rbp_1, 0, var_88, var_80, var_78, r8_1, var_68) != 0)
            r12 = arg1
        else
            void** rax_25 = j_sub_140a82f30(0x20)
            void** rdi_5 = rax_25
            
            if (rax_25 == 0)
                rdi_5 = nullptr
            else
                *rax_25 = r14
                rdi_5[1].d = var_78
                rdi_5[2] = 0
                rdi_5[3] = 0
            
            r12 = arg1
            *rsi = rdi_5
            int64_t rbp_4 = sx.q(*(r12 + 0x2f8))
            int32_t rax_27 = (rbp_4 + 1).d
            *(r12 + 0x2f8) = rax_27
            
            if (rax_27 s> *(r12 + 0x2fc))
                sub_140638870(r12 + 0x2f0)
            
            r14 = arg2
            *(*(r12 + 0x2f0) + (rbp_4 << 3)) = rdi_5
            rsi = &(*rsi)[3]
    else
        char rax_12
        int64_t* r14_2
        
        if (((zx.q(*(r15_1[1] + 0x10)) u>> 0x14).b & 1) == 0)
            if (r15_1 == 0 || ((zx.q(*(r15_1[1] + 0x10)) u>> 0x15).b & 1) == 0)
                goto label_141e962c7
            
            void** rax_19 = j_sub_140a82f30(0x20)
            void** rdi_4 = rax_19
            
            if (rax_19 == 0)
                rdi_4 = nullptr
            else
                *rax_19 = r14
                rdi_4[1].d = var_78
                rdi_4[2] = 0
                rdi_4[3] = 0
            
            r14_2 = arg1 + 0x2f0
            *rsi = rdi_4
            int64_t r13_3 = sx.q(r14_2[1].d)
            int32_t rax_21 = (r13_3 + 1).d
            r14_2[1].d = rax_21
            
            if (rax_21 s> *(r14_2 + 0xc))
                sub_140638870(r14_2)
            
            r12 = arg1
            var_80 = 0
            var_88 = rbp_1
            *(*r14_2 + (r13_3 << 3)) = rdi_4
            rax_12 = sub_141e95ff0(r12, r15_1, &(*rsi)[2], r12_1, var_88, 0, var_78, r8_1, var_68)
            goto label_141e96190
        
        void** rax_8 = j_sub_140a82f30(0x20)
        void** rdi_2 = rax_8
        
        if (rax_8 == 0)
            rdi_2 = nullptr
        else
            *rax_8 = r14
            rdi_2[1].d = var_78
            rdi_2[2] = 0
            rdi_2[3] = 0
        
        r14_2 = arg1 + 0x2f0
        *rsi = rdi_2
        int64_t r13_2 = sx.q(r14_2[1].d)
        int32_t rax_10 = (r13_2 + 1).d
        r14_2[1].d = rax_10
        
        if (rax_10 s> *(r14_2 + 0xc))
            sub_140638870(r14_2)
        
        r12 = arg1
        var_88 = rbp_1
        *(*r14_2 + (r13_2 << 3)) = rdi_2
        rax_12 = sub_141e964c0(r12, &(*rsi)[2], r15_1[0xf], r12_1, var_88)
    label_141e96190:
        
        if (rax_12 == 0)
            int64_t rax_13 = sx.q(*(r12 + 0x2f8))
            int32_t rdi_3 = (rax_13 - 1).d
            j_sub_140a74f90(*(*r14_2 + (rax_13 << 3) - 8))
            int32_t rax_15 = r14_2[1].d
            int32_t rcx_7 = rax_15 - rdi_3
            
            if (rcx_7 != 1)
                int64_t r9_2 = *r14_2
                memmove(r9_2 + (sx.q(rdi_3) << 3), r9_2 + (rax_13 << 3), (rcx_7 - 1) << 3)
                rax_15 = r14_2[1].d
            
            r14_2[1].d = rax_15 - 1
            sub_1405c53d0(r14_2)
            r14 = arg2
            *rsi = nullptr
        else
            r14 = arg2
            rsi = &(*rsi)[3]
    rbp = var_78 + 1
    r9 = var_74 + r8
    r8_1 += r8
    r15 = arg4
    r10 = var_68
    r11 = arg6
    var_78 = rbp
    var_74 = r9

uint64_t result

if (*arg3 == 0 && r15[1].d == arg5[1].d)
    result.b = 0
    return result

result.b = 1
return result
