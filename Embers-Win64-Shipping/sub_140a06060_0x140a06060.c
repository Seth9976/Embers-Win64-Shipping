// 函数: sub_140a06060
// 地址: 0x140a06060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t rax_2 = *(arg1 + 0x464)
void*** rbx = arg1[0x8b]
int32_t i_3 = arg1[0x8c].d

if (rax_2 s< 0)
    if (i_3 != 0)
        int32_t i
        
        do
            sub_14222ae60(rbx)
            rbx = &rbx[0x16]
            i = i_3
            i_3 -= 1
        while (i != 1)
        rax_2 = *(arg1 + 0x464)
    
    arg1[0x8c].d = 0
    
    if (rax_2 != 0)
        sub_140a05f70(&arg1[0x8b], 0)
else
    if (i_3 != 0)
        int32_t i_1
        
        do
            sub_14222ae60(rbx)
            rbx = &rbx[0x16]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    arg1[0x8c].d = 0

int32_t i_2 = 0

if (arg2[1].d s> 0)
    int64_t r14_1 = 0
    
    do
        void** var_f8
        sub_14222a2e0(&var_f8)
        int64_t* rcx_5 = *arg2 + r14_1
        int64_t var_c8
        
        if (&var_c8 != rcx_5)
            int64_t rbx_1 = sx.q(rcx_5[1].d)
            int64_t r15_1 = *rcx_5
            int32_t var_c0_1 = rbx_1.d
            int32_t var_bc
            
            if (rbx_1.d != 0 || var_bc != 0)
                sub_1407c3650(&var_c8, rbx_1.d, var_bc)
                memcpy(var_c8, r15_1, (rbx_1 * 0xc).d)
            else
                var_bc = 0
        
        float var_118[0x2][0x4]
        float (* rax_3)[0x4] = sub_140acc600(&var_118, &var_c8)
        int64_t rbx_2 = sx.q(arg1[0x8c].d)
        float var_a8_1[0x4] = *rax_3
        int64_t var_98_1 = rax_3[1][0].q
        float var_90_1 = (*rax_3)[6]
        int32_t rax_5 = (rbx_2 + 1).d
        arg1[0x8c].d = rax_5
        
        if (rax_5 s> *(arg1 + 0x464))
            sub_140a05e50(&arg1[0x8b])
        
        sub_14222a240(rbx_2 * 0xb0 + arg1[0x8b], &var_f8)
        sub_14222ae60(&var_f8)
        i_2 += 1
        r14_1 += 0x10
    while (i_2 s< arg2[1].d)

int64_t result = sub_140a09030(arg1)
__security_check_cookie(rax_1 ^ &var_138)
return result
