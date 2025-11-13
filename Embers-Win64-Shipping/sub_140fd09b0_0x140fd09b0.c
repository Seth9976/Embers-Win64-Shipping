// 函数: sub_140fd09b0
// 地址: 0x140fd09b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t var_38 = __security_cookie ^ &var_d8
int64_t rdi = arg1
int64_t* r12 = arg2
int64_t* rcx = arg2[0x15]
int32_t var_88
(*(*rcx + 0x50))(rcx, &var_88)
int32_t rsi = 0
int32_t var_7c
int32_t rax_3 = var_7c
int32_t rcx_1 = 0
char rdx_1 = *(r12 + 0xfc) & 1
int64_t* var_b0 = nullptr
int32_t i_3 = 0
char var_b7 = rdx_1
int32_t var_a8 = 0
int32_t var_a4 = 0
int64_t* r14 = nullptr
char var_b8 = 0
int128_t var_58
__builtin_memset(&var_58, 0, 0x20)
int64_t r13

if (rdx_1 != 0 || rax_3 u<= 1)
    r13.b = 0
else
    r13.b = 1

int32_t var_80
char var_68

if ((var_68 & 0x20) != 0)
    int32_t r15_1 = 0
    
    if (var_80 u> 0)
        do
            if ((r12[0x1f].d & 0x800000) == 0 || (r13.b == 0 && rdx_1 == 0))
                int64_t i_6 = sx.q(i_3)
                i_3 = (i_6 + 1).d
                
                if (i_3 s> rcx_1)
                    sub_1405a4d70(&var_b0)
                    rcx_1 = var_a4
                    r14 = var_b0
                
                r14[i_6] = 0
                rax_3 = var_7c
            else
                var_b8 = 1
                
                if (rax_3 != 0)
                    do
                        int64_t i_5 = sx.q(i_3)
                        i_3 = (i_5 + 1).d
                        
                        if (i_3 s> rcx_1)
                            sub_1405a4d70(&var_b0)
                            rcx_1 = var_a4
                            r14 = var_b0
                        
                        r14[i_5] = 0
                        rsi += 1
                        rax_3 = var_7c
                    while (rsi u< rax_3)
                
                rsi = 0
            
            rdx_1 = var_b7
            r15_1 += 1
        while (r15_1 u< var_80)
        
        rdi = arg1

void*** result_1 = j_sub_140a82f30(0x100)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    int32_t rcx_3 = r12[6].d
    int32_t r9_1 = r12[0x1f].d
    int32_t r10_1 = var_7c
    int128_t zmm0_1 = *(r12 + 0x20)
    int32_t rdx_3 = *(r12 + 0x3c)
    int32_t r8_1 = var_88
    *result = &data_142d3ff08
    result[1].d = 0
    *(result + 0xc) = 0
    result[2].w = 0x100
    result[3] = 0
    *(result + 0x34) = var_80
    result[9] = &result[0xa]
    *(result + 0x20) = zmm0_1
    result[6].d = rcx_3
    result[7].d = 1
    *(result + 0x3c) = rdx_3
    result[8].d = r9_1
    result[0xa] = -0x3810000020000000
    result[0xb] = 0
    *result = &data_142ef5918
    result[0xc].d = r8_1
    result[0xd].d = 0
    result[0xe] = &data_142ef5880
    result[0xf].d = 0
    *(result + 0x7c) = 0xffffffff
    result[0x10].b = 0
    result[0x11] = rdi
    result[0x12] = 0
    result[0x13].d = 0
    result[0x14] = &result[0xe]
    __builtin_memset(&result[0x15], 0, 0x18)
    result[0x18].d = i_3
    int64_t var_98
    var_98.d = r10_1
    
    if (i_3 != 0)
        sub_1405c4a00(&result[0x17], i_3, 0)
        int64_t* rsi_1 = result[0x17]
        int32_t i_4 = i_3
        int64_t* rdi_1 = r14
        int32_t i
        
        do
            int64_t* rcx_6 = *rdi_1
            *rsi_1 = rcx_6
            
            if (rcx_6 != 0)
                (*(*rcx_6 + 8))()
            
            rsi_1 = &rsi_1[1]
            rdi_1 = &rdi_1[1]
            i = i_4
            i_4 -= 1
        while (i != 1)
        r12 = arg2
        r10_1 = var_98.d
    else
        *(result + 0xc4) = 0
    
    result[0x19].b = var_b8
    *(result + 0xcc) = r10_1
    __builtin_memset(&result[0x1a], 0, 0x24)
    int32_t rcx_7 = *(result + 0xfc)
    *result = &data_142ef6b10
    result[0x1f].d = r9_1
    result[0xe] = &data_142ef6b68
    *(result + 0xfc) = ((rcx_7 & 0xfffffffe) | zx.d(var_b7)) & 0xfffffffd

if ((r12[0x1f].b & 1) != 0)
    result[0xf].d = 1

result[0x13].d = r12[0x13].d
void* rax_11 = (*result)[9](result)
void* rax_13 = (*(*r12 + 0x48))(r12)

if (rax_11 != 0 && rax_13 != 0)
    sub_140fdc700(rax_11, rax_13)

int64_t i_1 = 4
int64_t* rsi_2 = &var_38

do
    int64_t* rcx_14 = rsi_2[-1]
    rsi_2 = &rsi_2[-1]
    i_1 -= 1
    
    if (rcx_14 != 0)
        (*(*rcx_14 + 0x10))(rcx_14)
while (i_1 != 0)

int64_t* rdi_3 = r14

if (i_3 != 0)
    int32_t i_2
    
    do
        int64_t* rcx_15 = *rdi_3
        
        if (rcx_15 != 0)
            int64_t rdx_7 = *rcx_15
            (*(rdx_7 + 0x10))(rcx_15, rdx_7)
        
        rdi_3 = &rdi_3[1]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

if (r14 != 0)
    sub_140a74f90(r14)

__security_check_cookie(var_38 ^ &var_d8)
return result
