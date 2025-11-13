// 函数: sub_1422d02c0
// 地址: 0x1422d02c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_80 = arg5[0x14]
bool cond:0 = data_143f53bb8 == 1
char var_88 = *(arg5 + 0x29) & 1
int64_t r12
r12.b = cond:0
sub_140b560b0(arg5, r12.b)
void* r15 = *(arg4 + 0x68)
int64_t var_98
int512_t zmm1 = sub_140d21e10(*(arg1 + 0x60), &var_98, 0)
void* var_b8
sub_142168720(r15, &var_b8, &var_98)
void* r9_1 = var_b8
int64_t* var_b0
void* var_a8

if (r9_1 == 0)
    int64_t* rax_3 = sub_1422c0af0(arg1, &var_a8)
    
    if (&var_b8 != rax_3)
        var_b8 = *rax_3
        *rax_3 = 0
        int64_t* rcx_5 = rax_3[1]
        int64_t* rdi_1 = var_b0
        
        if (rcx_5 != rdi_1)
            rax_3[1] = 0
            var_b0 = rcx_5
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp4_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
    
    int32_t var_a0
    int64_t* rdi_2 = var_a0.q
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp1_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
    
    var_a8.o = var_b8.o
    
    if (var_b0 != 0)
        var_b0[1].d += 1
    
    zmm1 = sub_14215f5f0(r15, &var_98, &var_a8)
    r9_1 = var_b8

int64_t rdi_3 = sx.q(arg5[0x14].d)
int64_t r9
int64_t var_c8 = r9
void** result

if (*(arg6 + 8) != 0)
    var_a8 = arg6
    int32_t var_a0_1 = 0
    void** var_78 = &var_a8
    void* var_70_1 = arg1 + 0x38
    void* var_68_1 = arg1 + 0x48
    int32_t var_60_1 = *(arg1 + 0x50)
    int32_t var_5c_1 = 0
    int32_t var_50_1 = *(arg1 + 0x40) - 1
    int64_t var_38_1 = *(arg1 + 0x60)
    int64_t var_58_1 = 1
    int32_t var_30_1 = 0xffffffff
    result = sub_1422d0530(arg1, arg2, r15, r9_1, zmm1, arg3, arg5, r12.b, &var_78)
else
    int64_t var_d0
    var_d0.d = *(arg1 + 0x40) - 1
    result = sub_1422cfad0(arg1, arg2, arg5, r12.b, zmm1, r15, r9_1, 0)

if (rdi_3 == arg5[0x14])
    result = sub_140b51990(&var_88, arg5)

if (var_b0 != 0)
    var_b0[1].d -= 1
    
    if (var_b0[1].d == 1)
        result = (**var_b0)(var_b0)
        int32_t temp5_1 = *(var_b0 + 0xc)
        *(var_b0 + 0xc) -= 1
        
        if (temp5_1 == 1)
            result = (*(*var_b0 + 8))(var_b0, 1)

int64_t rcx_16 = var_98

if (rcx_16 == 0)
    return result

return sub_140a74f90(rcx_16)
