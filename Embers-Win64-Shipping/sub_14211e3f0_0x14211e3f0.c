// 函数: sub_14211e3f0
// 地址: 0x14211e3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
uint64_t i_3 = zx.q(*arg4)
int64_t result

if (i_3.d == 0)
    result = 0
else
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x40)
    int32_t i = 0
    void** var_f8
    int64_t* var_f0
    
    if (i_3.d != 0)
        do
            uint64_t i_2 = zx.q(i)
            int32_t r8 = arg4[i_2 + 1]
            
            if (r8 != 0xffffffff)
                void* var_e0 = nullptr
                var_f0 = &var_e0
                var_f8 = arg2[1]
                sub_14214aab0(arg3, 4, r8, arg2, var_f8)
                void* const rdi_1 = var_e0
                void* rax_3
                int64_t rax_4
                void* rdx
                
                if (rdi_1 != 0)
                    rax_3 = sub_1425b3af0()
                    rdx = *(rdi_1 + 0x10)
                    rax_4 = sx.q(*(rax_3 + 0x38))
                
                if (rdi_1 == 0 || rax_4.d s> *(rdx + 0x38)
                        || *(*(rdx + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                    rdi_1 = nullptr
                
                (&var_98)[i_2] = rdi_1
            
            i += 1
        while (i u< *arg4)
    
    int64_t var_d8 = 0
    int64_t r12
    r12.b = 0
    int64_t var_cc
    __builtin_memset(&var_cc, 0, 0x29)
    char var_d0_1 = 2
    char var_cf_1 = i_3.b
    
    if (i_3.d == 0)
        result = 0
    else
        int64_t var_ac
        int64_t* rsi_1 = &var_ac
        int64_t* r14_1 = &var_cc
        int64_t* rdi_2 = &var_98
        void* r13_1
        uint64_t i_1
        
        do
            int64_t* rbx_1 = *rdi_2
            
            if (rbx_1 == 0)
                r13_1 = arg1
            else if ((*(*rbx_1 + 0x318))(rbx_1) == 0)
                r13_1 = arg1
            else
                void* rbx_2 = rbx_1[0xf]
                
                if (rbx_2 == 0)
                    r13_1 = arg1
                else
                    var_d8.d = sub_1423c21a0(rbx_2)
                    var_d8:4.d = sub_1423c0d20(rbx_2)
                    *r14_1 = *(rbx_2 + 0x60)
                    *rsi_1 = 0
                    int64_t* rax_11 = sub_142006940()
                    r13_1 = arg1
                    (*(*rax_11 + 0x150))(rax_11, rbx_2 + 0x60, sub_14212f170, r13_1, var_f8, 
                        var_f0, arg1)
                    r12.b = 1
            
            rdi_2 = &rdi_2[1]
            r14_1 += 4
            rsi_1 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        
        if (r12.b == 0)
            result = 0
        else
            *(r13_1 + 0x18c) |= 8
            int64_t* rax_12 = sub_142006940()
            int64_t r8_2 = *rax_12
            result = (*(r8_2 + 0x130))(rax_12, &var_d8, r8_2)

__security_check_cookie(rax_1 ^ &var_118)
return result
