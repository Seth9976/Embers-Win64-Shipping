// 函数: sub_1411051f0
// 地址: 0x1411051f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t* rax = sub_14139bef0(*arg1)

if (arg1[0xc].b != 0)
    arg1[4] = *(rax[0xe] + 8)

if (*(arg1 + 0x61) != 0)
    arg1[5] = *(rax[0xf] + 8)
    arg1[6] = *(rax[0x10] + 8)

void* rax_2 = rax[0x14]
void* arg_20
int32_t rdi

if (rax_2 == 0)
    arg_20 = rax_2
    rdi = 2
else
    rax_2 = *(rax_2 + 8)
    arg_8.q = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
        rax_2 = arg_8.q
    
    rdi = 1

arg1[8] = rax_2

if ((rdi.b & 2) != 0)
    rdi &= 0xfffffffd
    sub_1405d1550(&arg_20)

if ((rdi.b & 1) != 0)
    rdi &= 0xfffffffe
    sub_1405d1550(&arg_8)

void* rax_3 = rax[0x15]
void* var_88
void* arg_10
int32_t rbx

if (rax_3 == 0)
    var_88 = rax_3
    rbx = 8
else
    rax_3 = *(rax_3 + 8)
    arg_10 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
        rax_3 = arg_10
    
    rbx = 4

int32_t rbx_1 = rbx | rdi
arg1[9] = rax_3

if ((rbx_1.b & 8) != 0)
    rbx_1 &= 0xfffffff7
    sub_1405d1550(&var_88)

if ((rbx_1.b & 4) != 0)
    rbx_1 &= 0xfffffffb
    sub_1405d1550(&arg_10)

void* result = rax[0x16]
void* result_1
void* result_2
char rdi_1

if (result == 0)
    result_1 = result
    rdi_1 = 0x20
else
    result = *(result + 8)
    result_2 = result
    
    if (result != 0)
        *(result + 8) += 1
        result = result_2
    
    rdi_1 = 0x10

char rdi_2 = rdi_1 | rbx_1.b
arg1[0xa] = result

if ((rdi_2 & 0x20) != 0)
    result = sub_1405d1550(&result_1)

if ((rdi_2 & 0x10) != 0)
    result = sub_1405d1550(&result_2)

void* r14_1 = &arg1[3]
int64_t i_1 = 9
int128_t var_78 = data_142d57d10
int128_t zmm0 = data_142d57920
int128_t var_68 = data_142d3f800
int64_t i

do
    int64_t* r15_1 = *r14_1
    
    if (r15_1 != 0)
        void* r13_1 = *arg1
        void*** rbx_4 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_4 = &rbx_4[0xa]
        
        if (rax_4 u> *(r13_1 + 0x38))
            sub_140b0e3d0(r13_1 + 0x30, 0x58)
            rbx_4 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_4 = &rbx_4[0xa]
        
        *(r13_1 + 0x30) = rax_4
        *(r13_1 + 0x14) += 1
        **(r13_1 + 8) = rbx_4
        *(r13_1 + 8) = &rbx_4[1]
        rbx_4[1] = 0
        *rbx_4 = &data_142d56628
        rbx_4[2].d = var_78.d
        __builtin_memset(rbx_4 + 0x14, 0xff, 0x20)
        *(rbx_4 + 0x34) = zmm0:4.d
        rbx_4[7].d = zmm0:8.d
        *(rbx_4 + 0x3c) = zmm0:0xc.d
        rbx_4[8] = r15_1
        rbx_4[9] = r15_1
        
        if ((*(*r15_1 + 8))(r15_1) == 0)
            int64_t* rcx_11 = rbx_4[8]
            
            if ((*(*rcx_11 + 0x18))(rcx_11) == 0)
                int64_t* rcx_12 = rbx_4[8]
                
                if ((*(*rcx_12 + 0x20))(rcx_12) == 0)
                    int64_t* rcx_13 = rbx_4[8]
                    (*(*rcx_13 + 0x10))(rcx_13)
        
        int64_t* rcx_14 = rbx_4[9]
        result = (*(*rcx_14 + 8))(rcx_14)
        
        if (result == 0)
            int64_t* rcx_15 = rbx_4[9]
            result = (*(*rcx_15 + 0x18))(rcx_15)
            
            if (result == 0)
                int64_t* rcx_16 = rbx_4[9]
                result = (*(*rcx_16 + 0x20))(rcx_16)
                
                if (result == 0)
                    int64_t* rcx_17 = rbx_4[9]
                    result = (*(*rcx_17 + 0x10))(rcx_17)
    
    r14_1 += 8
    i = i_1
    i_1 -= 1
while (i != 1)
return result
