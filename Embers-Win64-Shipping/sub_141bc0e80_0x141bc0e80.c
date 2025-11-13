// 函数: sub_141bc0e80
// 地址: 0x141bc0e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
void* rax_2 = *(arg1 + 0x3a0)
*(arg1 + 0x3ec) = 0
void*** (* var_148)()

if (rax_2 == 0)
label_141bc0f58:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int32_t rax_3 = *(rax_2 + 0xc)
    void* const rax_10
    
    if (rax_3 s>= data_143e1d9b4)
        rax_10 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_3)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_5 = temp1_1 + rdx_1
        rax_10 =
            *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(zx.d(rax_5.w) - rdx_1) * 0x18
    
    if (((*(rax_10 + 8) u>> 0x1c).b & 1) != 0)
        goto label_141bc0f58
    
    char var_158 = 0
    char* var_140_1 = &var_158
    var_148 = sub_140884c50
    
    if (*(sub_140a756e0(&var_148, &data_14397f5f0) + 0x20) != 0)
        goto label_141bc0f58
    
    int64_t* rcx_5 = *(arg1 + 0x3a0)
    (*(*rcx_5 + 0x3b8))(rcx_5, arg2, arg3, arg4)

char* result

if (*arg2 != 0)
    result = arg2
else
    int64_t* r12_1 = nullptr
    int64_t* r14_1 = *(arg1 + 0x3e0)
    
    if (r14_1 != 0)
        int32_t rax_15 = r14_1[1].d
        
        if (rax_15 != 0)
            r14_1[1].d = rax_15 + 1
            rax_15.b = 1
        
        if (rax_15.b == 0)
            r14_1 = nullptr
        
        if (r14_1 != 0)
            r12_1 = *(arg1 + 0x3d8)
    
    int32_t rax_17 = (*(*(arg1 + 0x3a8) + 0x70))(arg1 + 0x3a8)
    int64_t* rbx_1 = *(arg4 + 0x48)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t rdi
    
    if (*(arg4 + 0x38) != data_143e1e008 || rax_17 == 0)
        rdi.b = 0
    else
        rdi.b = 1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rdi.b != 0)
        void* rbx_2 = *(arg1 + 0x3a0)
        
        if (rbx_2 == 0)
        label_141bc10b7:
            void* rdx_5 = arg1 + 0x3a8
            
            if (arg1 == 0)
                rdx_5 = nullptr
            
            int64_t* rax_25 = (*(*r12_1 + 0x48))(r12_1, rdx_5)
            int64_t* r13_1 = rax_25
            
            if (rax_25 == 0)
                r13_1 = nullptr
            else
                char rax_27
                int64_t r9_1
                rax_27, r9_1 = (*(*r12_1 + 0x10))(r12_1, r13_1)
                
                if (rax_27 == 0)
                    if (rax_17 != 3)
                        (*(*r12_1 + 0x30))(r12_1)
                    
                    r9_1.b = 1
                    (*(*r12_1 + 0x28))(r12_1, *r13_1, 1, r9_1)
                    *(arg1 + 0x3ec) = 1
            
            int64_t* rbx_3 = *(arg1 + 0x10)
            int32_t var_150_1
            var_150_1.q = 0
            
            if (rbx_3 != 0)
                int32_t rax_30 = rbx_3[1].d
                
                if (rax_30 != 0)
                    rbx_3[1].d = rax_30 + 1
                    rax_30.b = 1
                
                if (rax_30.b == 0)
                    rbx_3 = nullptr
                
                if (rbx_3 != 0)
                    var_150_1.q = *(arg1 + 8)
                    int32_t rax_32 = rbx_3[1].d
                    rbx_3[1].d = rax_32
                    
                    if (rax_32 == 0)
                        (**rbx_3)(rbx_3)
                        int32_t temp7_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
                    
                    rbx_3[1].d += 1
            
            int64_t* rdi_1 = *(arg1 + 0x10)
            void*** (* r15_1)()
            
            if (rdi_1 == 0)
                r15_1 = nullptr
            else
                int32_t rax_35 = rdi_1[1].d
                
                if (rax_35 != 0)
                    rdi_1[1].d = rax_35 + 1
                    rax_35.b = 1
                
                if (rax_35.b == 0)
                    rdi_1 = nullptr
                
                if (rdi_1 == 0)
                    r15_1 = nullptr
                else
                    r15_1 = *(arg1 + 8)
            
            if (rdi_1 != 0)
                int32_t rax_36 = rdi_1[1].d
                rdi_1[1].d = rax_36
                
                if (rax_36 == 0)
                    (**rdi_1)(rdi_1)
                    int32_t temp6_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            var_148 = r15_1
            int64_t* var_140_2 = rdi_1
            
            if (rdi_1 != 0)
                rdi_1[1].d += 1
            
            int64_t var_138 = data_143e1e008
            int64_t var_130_1 = data_143e1e010
            int64_t* rax_41 = data_143e1e018
            
            if (rax_41 != 0)
                rax_41[1].d += 1
            
            int32_t var_64
            int32_t var_64_1 = var_64 & 0xffffff00
            char var_118 = 1
            int64_t var_110_1 = 0
            int64_t var_108_1 = 0
            char var_f8_1 = 0
            int64_t var_f0
            __builtin_memset(&var_f0, 0, 0x40)
            int64_t* var_a8_1 = zx.o(0).q
            int64_t var_98
            __builtin_memset(&var_98, 0, 0x30)
            int32_t var_68_1 = 0x20702
            int64_t var_b0_1 = var_150_1.q
            
            if (rbx_3 != 0)
                *(rbx_3 + 0xc) += 1
                
                if (var_a8_1 != 0)
                    int32_t temp9_1 = *(var_a8_1 + 0xc)
                    *(var_a8_1 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*var_a8_1 + 8))(var_a8_1, 1)
                
                var_a8_1 = rbx_3
            
            int64_t var_90
            sub_140627710(&var_90, &var_138)
            
            if (rax_41 != 0)
                rax_41[1].d -= 1
                
                if (rax_41[1].d == 1)
                    (**rax_41)(rax_41)
                    int32_t temp11_1 = *(rax_41 + 0xc)
                    *(rax_41 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*rax_41 + 8))(rax_41, 1)
            
            sub_140e54f20(arg2, sub_140eae530(&var_118, &var_148))
            sub_140597700(&var_118)
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp13_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp13_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp15_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp15_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
                
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp16_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp16_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            char rax_54
            
            if (r13_1 != 0)
                rax_54 = (*(*r12_1 + 0x18))(r12_1, r13_1)
            
            if (r13_1 == 0 || rax_54 == 0)
                sub_140dbdce0(arg2, (*(*r12_1 + 0xe0))(r12_1, &var_148), 0, 0)
        else
            void* rax_21 = sub_140d21950(rbx_2, sub_141c00390())
            
            if (rax_21 == 0)
                goto label_141bc10b7
            
            if ((*(*rax_21 + 0x10))(rax_21) != 0)
                goto label_141bc10b7
    
    if (r14_1 != 0)
        r14_1[1].d -= 1
        
        if (r14_1[1].d == 1)
            (**r14_1)(r14_1)
            int32_t temp5_1 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                int64_t r8_2 = *r14_1
                (*(r8_2 + 8))(r14_1, 1, r8_2)
    
    result = arg2

__security_check_cookie(rax_1 ^ &var_178)
return result
