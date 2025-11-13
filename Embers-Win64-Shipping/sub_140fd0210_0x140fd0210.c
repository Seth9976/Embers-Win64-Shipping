// 函数: sub_140fd0210
// 地址: 0x140fd0210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t var_38 = __security_cookie ^ &var_d8
int64_t rsi = arg1
int64_t* r12 = arg2
int64_t* rcx = arg2[0x14]
int32_t var_88
(*(*rcx + 0x50))(rcx, &var_88)
char rdx_1 = *(r12 + 0xf4)
int32_t rcx_1 = 0
int32_t var_7c
int32_t rax_3 = var_7c
int64_t* r14 = nullptr
int32_t i_3 = 0
int64_t* var_b0 = nullptr
rdx_1 &= 1
int64_t var_a8 = 0
char var_b7 = rdx_1
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
            if ((r12[0x1e].d & 0x800000) == 0 || (r13.b == 0 && rdx_1 == 0))
                int64_t i_6 = sx.q(i_3)
                i_3 = (i_6 + 1).d
                var_a8.d = i_3
                
                if (i_3 s> rcx_1)
                    sub_1405a4d70(&var_b0)
                    rcx_1 = var_a8:4.d
                    i_3 = var_a8.d
                    r14 = var_b0
                
                r14[i_6] = 0
                rax_3 = var_7c
            else
                int32_t rsi_1 = 0
                var_b8 = 1
                
                if (rax_3 != 0)
                    do
                        int64_t i_5 = sx.q(i_3)
                        i_3 = (i_5 + 1).d
                        var_a8.d = i_3
                        
                        if (i_3 s> rcx_1)
                            sub_1405a4d70(&var_b0)
                            rcx_1 = var_a8:4.d
                            i_3 = var_a8.d
                            r14 = var_b0
                        
                        r14[i_5] = 0
                        rsi_1 += 1
                        rax_3 = var_7c
                    while (rsi_1 u< rax_3)
            
            rdx_1 = var_b7
            r15_1 += 1
        while (r15_1 u< var_80)
        
        rsi = arg1

void*** result_1 = j_sub_140a82f30(0xf8)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    int32_t r11_1 = r12[0x1e].d
    int32_t rdi_1 = var_7c
    int128_t zmm0_1 = *(r12 + 0x20)
    int32_t rdx_4 = r12[6].d
    int32_t r8_1 = *(r12 + 0x3c)
    int32_t r9_1 = var_88
    *result = &data_142d3ff08
    result[1].d = 0
    *(result + 0xc) = 0
    result[2].w = 0x100
    result[3] = 0
    *(result + 0x34) = var_80
    int32_t var_74
    result[7].d = var_74
    result[9] = &result[0xa]
    *(result + 0x20) = zmm0_1
    result[6].d = rdx_4
    *(result + 0x3c) = r8_1
    result[8].d = r11_1
    result[0xa] = -0x3810000020000000
    result[0xb] = 0
    *result = &data_142ef29a0
    result[0xc].d = r9_1
    int32_t var_84
    *(result + 0x64) = var_84
    result[0xd] = &data_142ef5880
    result[0xe].d = 0
    *(result + 0x74) = 0xffffffff
    result[0xf].b = 0
    result[0x10] = rsi
    result[0x11] = 0
    result[0x12].d = 0
    result[0x13] = &result[0xd]
    __builtin_memset(&result[0x14], 0, 0x18)
    result[0x17].d = i_3
    int64_t var_98
    var_98.d = rdi_1
    
    if (i_3 != 0)
        sub_1405c4a00(&result[0x16], i_3, 0)
        int64_t* rsi_2 = result[0x16]
        int32_t i_4 = i_3
        int64_t* rdi_2 = r14
        int32_t i
        
        do
            int64_t* rcx_6 = *rdi_2
            *rsi_2 = rcx_6
            
            if (rcx_6 != 0)
                (*(*rcx_6 + 8))()
            
            rsi_2 = &rsi_2[1]
            rdi_2 = &rdi_2[1]
            i = i_4
            i_4 -= 1
        while (i != 1)
        r12 = arg2
        rdi_1 = var_98.d
    else
        *(result + 0xbc) = 0
    
    result[0x18].b = var_b8
    *(result + 0xc4) = rdi_1
    __builtin_memset(&result[0x19], 0, 0x24)
    int32_t rcx_7 = *(result + 0xf4)
    *result = &data_142ef5b20
    result[0x1e].d = r11_1
    result[0xd] = &data_142ef5b78
    *(result + 0xf4) = ((rcx_7 & 0xfffffffe) | zx.d(var_b7)) & 0xfffffffd

if ((r12[0x1e].b & 1) != 0)
    result[0xe].d = 1

result[0x12].d = r12[0x12].d
void* rax_11 = (*result)[9](result)
void* rax_13 = (*(*r12 + 0x48))(r12)

if (rax_11 != 0 && rax_13 != 0)
    sub_140fdc700(rax_11, rax_13)

int64_t i_1 = 4
int64_t* rsi_3 = &var_38

do
    int64_t* rcx_14 = rsi_3[-1]
    rsi_3 = &rsi_3[-1]
    i_1 -= 1
    
    if (rcx_14 != 0)
        (*(*rcx_14 + 0x10))(rcx_14)
while (i_1 != 0)

int64_t* rdi_4 = r14

if (i_3 != 0)
    int32_t i_2
    
    do
        int64_t* rcx_15 = *rdi_4
        
        if (rcx_15 != 0)
            int64_t rdx_7 = *rcx_15
            (*(rdx_7 + 0x10))(rcx_15, rdx_7)
        
        rdi_4 = &rdi_4[1]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

if (r14 != 0)
    sub_140a74f90(r14)

__security_check_cookie(var_38 ^ &var_d8)
return result
