// 函数: sub_142bcc8b0
// 地址: 0x142bcc8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t i_1 = 0
int32_t result_1 = 0
*(arg1 + 0xc) = 0
int128_t var_50
__builtin_memset(&var_50, 0, 0x20)
void* rax_2 = sub_142bcba50(arg1, "SLANT")
int128_t var_40

if (rax_2 != 0 && *(rax_2 + 8) != 0)
    uint64_t rdx_1
    rdx_1.b = **(rax_2 + 0x10) - 0x49
    
    if (rdx_1.b u<= 0x26 && test_bit(0x4100000041, rdx_1))
        *(arg1 + 0xc) = 1
        char const* const rax_4 = "Italic"
        
        if (((**(rax_2 + 0x10) - 0x4f) & 0xdf) == 0)
            rax_4 = "Oblique"
        
        var_40.q = rax_4

void* rax_5 = sub_142bcba50(arg1, "WEIGHT_NAME")

if (rax_5 != 0 && *(rax_5 + 8) != 0 && ((**(rax_5 + 0x10) - 0x42) & 0xdf) == 0)
    *(arg1 + 0xc) |= 2
    var_50:8.q = "Bold"

void* rax_7 = sub_142bcba50(arg1, "SETWIDTH_NAME")

if (rax_7 != 0 && *(rax_7 + 8) != 0)
    char* rdx_2 = *(rax_7 + 0x10)
    char rcx_5 = *rdx_2
    
    if (rcx_5 != 0 && rcx_5 != 0x4e)
        char* rax_8 = var_40:8.q
        
        if (rcx_5 != 0x6e)
            rax_8 = rdx_2
        
        var_40:8.q = rax_8

void* rax_9 = sub_142bcba50(arg1, "ADD_STYLE_NAME")

if (rax_9 != 0 && *(rax_9 + 8) != 0)
    char* rdx_3 = *(rax_9 + 0x10)
    char rcx_7 = *rdx_3
    
    if (rcx_7 != 0 && rcx_7 != 0x4e)
        char* rax_10 = var_50.q
        
        if (rcx_7 != 0x6e)
            rax_10 = rdx_3
        
        var_50.q = rax_10

int64_t r9 = 0
int64_t var_30[0x4]

for (int64_t i = 0; i u< 0x20; i += 8)
    char* rcx_8 = *(&var_50 + i)
    *(&var_30 + i) = 0
    
    if (rcx_8 != 0)
        int64_t rax_11 = -1
        
        do
            rax_11 += 1
        while (rcx_8[rax_11] != 0)
        
        *(&var_30 + i) = rax_11
        r9 = r9 + 1 + rax_11

if (r9 == 0)
    var_30[0] = 7
    var_50.q = "Regular"
    r9 = 8

char* rax_12 = sub_142b99860(*(arg1 + 0x98), r9.d, &result_1)
char* rbx = rax_12
*(arg1 + 0x20) = rax_12
int32_t result = result_1

if (result == 0)
    do
        int64_t rdx_5 = *(&var_50 + (i_1 << 3))
        int64_t j_2 = var_30[i_1]
        
        if (rdx_5 != 0)
            if (rbx != *(arg1 + 0x20))
                *rbx = 0x20
                rbx = &rbx[1]
            
            memcpy(rbx, rdx_5, j_2.d)
            
            if ((i_1 == 0 || i_1 == 3) && j_2 != 0)
                char* rax_13 = rbx
                int64_t j_1 = j_2
                int64_t j
                
                do
                    if (*rax_13 == 0x20)
                        *rax_13 = 0x2d
                    
                    rax_13 = &rax_13[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            rbx = &rbx[j_2]
        
        i_1 += 1
    while (i_1 u< 4)
    
    *rbx = 0
    result = result_1

__security_check_cookie(rax_1 ^ &var_78)
return result
