// 函数: sub_1426e3580
// 地址: 0x1426e3580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t result = (*(*arg1 + 0x150))()
void* const r13

if (result == 0)
    r13 = nullptr
else
    void* rbx_1 = *(result + 0x138)
    
    if (rbx_1 == 0)
        r13 = nullptr
    else
        void* rax_3 = sub_14272b250()
        void* rdx_1 = *(rbx_1 + 0x10)
        result = sx.q(*(rax_3 + 0x38))
        
        if (result.d s> *(rdx_1 + 0x38))
            r13 = nullptr
        else
            int64_t result_2 = result
            result = *(rdx_1 + 0x30)
            
            if (*(result + (result_2 << 3)) != rax_3 + 0x30)
                r13 = nullptr
            else
                r13 = *(rbx_1 + 0xa8)

if (r13 != 0)
    if (arg1[0xa6] == 0)
        result = arg1[0x98]
        
        if (result != 0)
            int64_t* r15_1 = arg1[0x9b]
            int64_t result_1 = result
            void* r12_1 = sx.q(arg1[0x9c].d) * 0x38
            int128_t var_a8
            __builtin_memset(&var_a8, 0, 0x34)
            int64_t* var_b0_1 = arg1
            void* r12_2 = r12_1 + r15_1
            int32_t var_74_1 = 0x80
            int32_t var_70_1 = 0xffffffff
            int32_t var_6c_1 = 0
            int64_t var_60_1 = 0
            int32_t var_58_1 = 0
            int32_t var_d8
            int64_t* var_d0
            
            if (r15_1 != r12_2)
                int128_t zmm6
                int128_t var_38_1 = zmm6
                
                do
                    zmm6 = *(r15_1 + 0xc)
                    int64_t rbx_2 = *r15_1
                    sub_140b33170(&var_a8:8, &var_d8)
                    var_d0[1].d = zmm6.d
                    *var_d0 = rbx_2
                    *(var_d0 + 0xc) = 0xffffffff
                    int32_t rax_5 = sub_140b5ead0(rbx_2.d)
                    void var_c8
                    sub_140e0e750(&var_a8:8, &var_c8, (rbx_2 u>> 0x20).d + rax_5, var_d0, var_d8, 
                        nullptr)
                    r15_1 = &r15_1[7]
                while (r15_1 != r12_2)
            
            int64_t* rax_7 = sub_1426e7cf0(r13, &var_d8, &result_1, zx.d(arg1[0x9f].b))
            
            if (&arg1[0xa6] != rax_7)
                arg1[0xa6] = *rax_7
                *rax_7 = 0
                int64_t rcx_5 = rax_7[1]
                int64_t* rbx_4 = arg1[0xa7]
                
                if (rcx_5 != rbx_4)
                    rax_7[1] = 0
                    arg1[0xa7] = rcx_5
                    
                    if (rbx_4 != 0)
                        rbx_4[1].d -= 1
                        
                        if (rbx_4[1].d == 1)
                            (**rbx_4)(rbx_4)
                            int32_t temp3_1 = *(rbx_4 + 0xc)
                            *(rbx_4 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*rbx_4 + 8))(rbx_4, 1)
            
            if (var_d0 != 0)
                var_d0[1].d -= 1
                
                if (var_d0[1].d == 1)
                    (**var_d0)(var_d0)
                    int32_t temp1_1 = *(var_d0 + 0xc)
                    *(var_d0 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*var_d0 + 8))(var_d0, 1)
            
            void* rdx_5 = arg1[0xa6]
            
            if (rdx_5 != 0)
                int64_t* rax_12 = arg1[0xa7]
                var_d8.q = rdx_5
                
                if (rax_12 != 0)
                    *(rax_12 + 0xc) += 1
                    rdx_5 = arg1[0xa6]
                
                sub_1426c43e0(r13 + 0x58, rdx_5 + 0x30, &var_d8)
                
                if (rax_12 != 0)
                    int32_t temp4_1 = *(rax_12 + 0xc)
                    *(rax_12 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rax_12 + 8))(rax_12, 1)
            
            result = sub_1405ae200(&var_a8:8)
    
    int64_t* rcx_13 = arg1[0xa6]
    
    if (rcx_13 != 0 && rcx_13[5].d == 0)
        sub_1426d5c40(rcx_13, arg1[0x9d].d)
        int64_t rdi_2 = sx.q(arg1[0xa9].d)
        int64_t* r15_2 = arg1[0xa6]
        int32_t rax_14 = (rdi_2 + 1).d
        arg1[0xa9].d = rax_14
        
        if (rax_14 s> *(arg1 + 0x54c))
            sub_1423c8410(&arg1[0xa8])
        
        sub_1426c56d0(rdi_2 * 0x168 + arg1[0xa8], r15_2)
        result = arg1[0xa6]
        
        if (*(result + 0x28) != 0)
            result = zx.q(arg1[0xa9].d - 1)
            *(arg1 + 0x4ec) = result.d

__security_check_cookie(rax_1 ^ &var_108)
return result
