// 函数: sub_141fbd6d0
// 地址: 0x141fbd6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg2[7]
int64_t var_28

if (*(arg1 + 0x18) != rax || *(arg1 + 0x10) != 0)
    *(arg1 + 0x18) = rax
    *(arg1 + 0x10) = 0
    *(arg1 + 0x30) = 0
    
    if (arg1 + 0x20 != &var_28)
        *(arg1 + 0x20) = 0
        int64_t* rdi_1 = *(arg1 + 0x28)
        
        if (rdi_1 != 0)
            *(arg1 + 0x28) = 0
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp1_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rdi_2 = arg2[1]

if (rdi_2 == 0)
    rdi_2 = *arg2

*(arg2 + 0x4b) = 0
void* rcx_2 = *(arg1 + 0x18)
char result
char arg_8

if (((*(rcx_2 + 0xb0) u>> 0xa).b & 1) == 0)
    int512_t zmm0_1
    int512_t zmm1_1
    zmm0_1, zmm1_1 = sub_141fce2c0(arg1)
    void* r9_1 = arg2[4]
    int64_t* rdx_1
    
    if (r9_1 != 0)
        rdx_1 = *(r9_1 + 0x130)
    
    if (r9_1 == 0 || ((*(rdx_1 + 0xa4) u>> 1).b & 1) == 0)
        arg2[7]
        return sub_1422d17b0(*(arg1 + 0x20), zmm1_1, rdi_2, r9_1, zmm0_1, arg2[6], arg2 + 0x4b)
    
    int64_t* r9_2 = arg2[6]
    void* rcx_5 = *(arg1 + 0x20)
    
    if ((rdi_2[5].b & 2) == 0)
        arg_8 = 0
        return sub_1422cd100(rcx_5, rdx_1, nullptr, r9_2, rdi_2, arg2 + 0x4b, 0, &arg_8)
    
    var_28 = 0
    char var_38
    var_38.q = &var_28
    int64_t var_20_1 = 0
    result = sub_1422d02c0(rcx_5, 0, 0, r9_2, rdx_1, rdi_2)
    int64_t rcx_6 = var_28
    
    if (rcx_6 != 0)
        return sub_140a74f90(rcx_6)
else
    int64_t* rcx_3 = *(rcx_2 + 0xb8)
    int64_t rax_6 = arg2[6]
    int64_t r8_1 = arg2[4]
    arg_8 = 1
    result = (*(*rcx_3 + 0x70))(rcx_3, rdi_2, r8_1, &arg_8, rax_6)
    
    if (result == 0)
        *(arg2 + 0x4b) = 1
return result
