// 函数: sub_1427b7d80
// 地址: 0x1427b7d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* rax_3 = (*(*arg1 + 0x280))()
int64_t rdx = *rax_3
int64_t* rax_4 = (*(rdx + 0x2d0))(rax_3, rdx)
int64_t rdx_1 = *rax_4
int32_t rax_5 = (*(rdx_1 + 0x18))(rax_4, rdx_1)
int64_t rdx_2 = *arg1
int64_t* rax_6 = (*(rdx_2 + 0x280))(arg1, rdx_2)
int64_t rdx_3 = *rax_6
int64_t* rax_7 = (*(rdx_3 + 0x2d0))(rax_6, rdx_3)
int64_t rdx_4 = *rax_7
(*(rdx_4 + 0x18))(rax_7, rdx_4)
int64_t* rbx = *(arg1[9] + 0x130)
int64_t* rcx_6 = arg1[0xa]
float var_58[0x2][0x4]
(*(*rcx_6 + 0x268))(rcx_6, &var_58)
int128_t var_38 = data_142e6da00
int32_t zmm0_1 = sub_141f4a580(rbx, &var_58, 0, 0, 0)
void* result = arg1[9]

if (*(result + 0x220) != 0)
    void* rcx_8 = arg1[0xf]
    
    if (rcx_8 != 0)
        (*(*(rcx_8 + 0x28) + 0x10))(rcx_8 + 0x28)
        *(*(arg1[9] + 0x220) + 0x448) = zmm0_1
        result = arg1[9]

if (*(result + 0x228) != 0)
    void* rcx_11 = arg1[0x10]
    
    if (rcx_11 != 0)
        (*(*(rcx_11 + 0x28) + 0x10))(rcx_11 + 0x28)
        *(*(arg1[9] + 0x228) + 0x448) = zmm0_1
        result = arg1[9]

if (*(result + 0x230) != 0)
    void* rcx_14 = arg1[0x11]
    
    if (rcx_14 != 0)
        (*(*(rcx_14 + 0x28) + 0x10))(rcx_14 + 0x28)
        result = arg1[9]
        *(*(result + 0x230) + 0x448) = zmm0_1

if (arg1[0x1e] != 0)
    int64_t* rbx_1 = arg1[0xb]
    int64_t rsi_1 = 0
    result = &rbx_1[arg1[0xc]]
    uint64_t r14_2 = sx.q(arg1[0xc].d) << 3 u>> 3
    
    if (rbx_1 u> result)
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            void* rcx_17 = &arg1[0x22]
            int64_t var_60 = *rbx_1
            void* rax_16 = arg1[0x20]
            int32_t var_68 = rax_5
            
            if (rax_16 != 0)
                rcx_17 = rax_16
            
            result = arg1[0x1e]((*(*rcx_17 + 8))(rcx_17), &var_60, &var_68)
            rsi_1 += 1
            rbx_1 = &rbx_1[1]
        while (rsi_1 != r14_2)

__security_check_cookie(rax_1 ^ &var_98)
return result
