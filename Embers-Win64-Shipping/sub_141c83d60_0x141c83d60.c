// 函数: sub_141c83d60
// 地址: 0x141c83d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int64_t* rax_1 = (*(*rcx + 8))(rcx)
int64_t* rax_3 = sub_141c80b30(*arg1 + 0xc8, sub_140a6b260(rax_1, 0x10), rax_1)
uint128_t var_38

if (*rax_3 == 0)
    int64_t* rax_4 = j_sub_140a82f30(0x80)
    int64_t* rdi_1 = rax_4
    
    if (rax_4 == 0)
        rdi_1 = nullptr
    else
        memset(&rax_4[2], 0, 0x70)
        *rdi_1 = 0
        void* rcx_4 = &rdi_1[2]
        rdi_1[1] = 0
        *(rcx_4 + 0x10) = 0
        *(rcx_4 + 0x18) = 0
        *(rcx_4 + 0x1c) = 0x80
        void* rax_5 = *(rcx_4 + 0x10)
        
        if (rax_5 != 0)
            rcx_4 = rax_5
        
        *rcx_4 = 0
        *(rcx_4 + 8) = 0
        rdi_1[6].d = 0xffffffff
        *(rdi_1 + 0x34) = 0
        rdi_1[8] = 0
        rdi_1[9].d = 0
        __builtin_memset(&rdi_1[0xa], 0, 0x18)
        rdi_1[0xe] = 0
        rdi_1[0xf] = 0
    
    void*** rax_6 = j_sub_140a82f30(0x18)
    void*** rbx_1 = rax_6
    
    if (rax_6 == 0)
        rbx_1 = nullptr
    else
        rax_6[1].d = 1
        *(rax_6 + 0xc) = 1
        *rbx_1 = &data_14320fd40
        rbx_1[2] = rdi_1
    
    var_38.q = rdi_1
    var_38:8.q = rbx_1
    
    if (rax_3 == &var_38)
    label_141c83ec4:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)
    else
        *rax_3 = rdi_1
        int64_t* rdi_2 = rax_3[1]
        var_38.q = 0
        
        if (rbx_1 == rdi_2)
            goto label_141c83ec4
        
        var_38:8.q = 0
        rax_3[1] = rbx_1
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp7_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
            
            rbx_1 = var_38:8.q
            goto label_141c83ec4

int128_t* rax_11 = j_sub_140a82f30(0x20)
int128_t* rbx_2 = rax_11

if (rax_11 == 0)
    rbx_2 = nullptr
else
    __builtin_memset(rax_11, 0, 0x20)

void*** rax_12 = j_sub_140a82f30(0x18)

if (rax_12 == 0)
    rax_12 = nullptr
else
    rax_12[1].d = 1
    *rax_12 = &data_14320fd30
    *(rax_12 + 0xc) = 1
    rax_12[2] = rbx_2

*rbx_2 = *(arg1 + 0x18)
rbx_2[1].q = arg1[5]
*(rbx_2 + 0x18) = 0
uint128_t zmm0 = rbx_2.o
var_38 = zmm0
void* rax_16 = _mm_bsrli_si128(zmm0, 8).q

if (rax_16 != 0)
    *(rax_16 + 8) += 1

sub_141c800b0(*rax_3, &arg1[3], &var_38)
int64_t* rbx_3 = var_38:8.q

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* rcx_13 = arg1[1]
void arg_8
*(*rax_3 + 0x50) = *(**rcx_13)(rcx_13, &arg_8)
int64_t* rcx_15 = arg1[1]
*(*rax_3 + 0x68) = (*(*rcx_15 + 0x18))(rcx_15) == 0
int64_t result = sub_141c7ff80(*arg1 + 8, &arg1[3], rax_3)

if (rax_12 != 0)
    rax_12[1].d -= 1
    
    if (rax_12[1].d == 1)
        result = (**rax_12)(rax_12)
        int32_t temp6_1 = *(rax_12 + 0xc)
        *(rax_12 + 0xc) -= 1
        
        if (temp6_1 == 1)
            return (*rax_12)[1](rax_12, 1)

return result
