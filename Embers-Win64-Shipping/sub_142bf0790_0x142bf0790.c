// 函数: sub_142bf0790
// 地址: 0x142bf0790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void* rbx = *(arg1 + 0xe8)
int64_t i_1 = 0
int64_t rsi = *(arg1 + 0x98)
int32_t result_1 = 0
*(arg1 + 0xc) = 0
int128_t var_50
__builtin_memset(&var_50, 0, 0x20)

if (rbx != 0 && *(rbx + 0x58) != 0)
    int64_t* rax_2 = sub_142b993e0("SLANT", *(rbx + 0x78))
    int128_t var_40
    
    if (rax_2 != 0)
        void* rdx_2 = *(rbx + 0x60) + *rax_2 * 0x18
        
        if (rdx_2 != 0 && *(rdx_2 + 8) == 1)
            char* rax_5 = *(rdx_2 + 0x10)
            
            if (rax_5 != 0)
                uint64_t rax_6
                rax_6.b = *rax_5 - 0x49
                
                if (rax_6.b u<= 0x26 && test_bit(0x4100000041, rax_6))
                    *(arg1 + 0xc) |= 1
                    char const* const rax_8 = "Italic"
                    
                    if (((**(rdx_2 + 0x10) - 0x4f) & 0xdf) == 0)
                        rax_8 = "Oblique"
                    
                    var_40.q = rax_8
    
    if (*(rbx + 0x58) != 0)
        int64_t* rax_9 = sub_142b993e0("WEIGHT_NAME", *(rbx + 0x78))
        
        if (rax_9 != 0)
            void* rdx_4 = *(rbx + 0x60) + *rax_9 * 0x18
            
            if (rdx_4 != 0 && *(rdx_4 + 8) == 1)
                char* rax_12 = *(rdx_4 + 0x10)
                
                if (rax_12 != 0 && ((*rax_12 - 0x42) & 0xdf) == 0)
                    *(arg1 + 0xc) |= 2
                    var_50:8.q = "Bold"
        
        if (*(rbx + 0x58) != 0)
            int64_t* rax_14 = sub_142b993e0("SETWIDTH_NAME", *(rbx + 0x78))
            
            if (rax_14 != 0)
                void* rdx_6 = *(rbx + 0x60) + *rax_14 * 0x18
                
                if (rdx_6 != 0 && *(rdx_6 + 8) == 1)
                    char* rdx_7 = *(rdx_6 + 0x10)
                    
                    if (rdx_7 != 0)
                        char rcx_4 = *rdx_7
                        
                        if (rcx_4 != 0 && rcx_4 != 0x4e)
                            char* rax_17 = var_40:8.q
                            
                            if (rcx_4 != 0x6e)
                                rax_17 = rdx_7
                            
                            var_40:8.q = rax_17
            
            if (*(rbx + 0x58) != 0)
                int64_t* rax_18 = sub_142b993e0("ADD_STYLE_NAME", *(rbx + 0x78))
                
                if (rax_18 != 0)
                    void* rdx_9 = *(rbx + 0x60) + *rax_18 * 0x18
                    
                    if (rdx_9 != 0 && *(rdx_9 + 8) == 1)
                        char* rdx_10 = *(rdx_9 + 0x10)
                        
                        if (rdx_10 != 0)
                            char rcx_6 = *rdx_10
                            
                            if (rcx_6 != 0 && rcx_6 != 0x4e)
                                char* rax_21 = var_50.q
                                
                                if (rcx_6 != 0x6e)
                                    rax_21 = rdx_10
                                
                                var_50.q = rax_21

int64_t r9 = 0
int64_t var_30[0x4]

for (int64_t i = 0; i u< 0x20; i += 8)
    char* rcx_7 = *(&var_50 + i)
    *(&var_30 + i) = 0
    
    if (rcx_7 != 0)
        int64_t rax_22 = -1
        
        do
            rax_22 += 1
        while (rcx_7[rax_22] != 0)
        
        *(&var_30 + i) = rax_22
        r9 = r9 + 1 + rax_22

if (r9 == 0)
    var_30[0] = 7
    var_50.q = "Regular"
    r9 = 8

char* rax_23 = sub_142b99860(rsi, r9.d, &result_1)
char* rbx_1 = rax_23
*(arg1 + 0x20) = rax_23
int32_t result = result_1

if (result == 0)
    do
        int64_t rdx_12 = *(&var_50 + (i_1 << 3))
        int64_t j_2 = var_30[i_1]
        
        if (rdx_12 != 0)
            if (rbx_1 != *(arg1 + 0x20))
                *rbx_1 = 0x20
                rbx_1 = &rbx_1[1]
            
            memcpy(rbx_1, rdx_12, j_2.d)
            
            if ((i_1 == 0 || i_1 == 3) && j_2 != 0)
                char* rax_24 = rbx_1
                int64_t j_1 = j_2
                int64_t j
                
                do
                    if (*rax_24 == 0x20)
                        *rax_24 = 0x2d
                    
                    rax_24 = &rax_24[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            rbx_1 = &rbx_1[j_2]
        
        i_1 += 1
    while (i_1 u< 4)
    
    *rbx_1 = 0
    result = result_1

__security_check_cookie(rax_1 ^ &var_78)
return result
