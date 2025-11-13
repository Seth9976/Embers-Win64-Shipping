// 函数: sub_142c09660
// 地址: 0x142c09660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = getenv("HB_SHAPER_LIST")
char* r14 = rax

if (rax == 0 || *rax == 0)
    return 0

int128_t* result = sub_140dc0ea0(1, 0x18)

if (result == 0)
    return result

int32_t i_1 = 0
*result = data_14369e5d0
result[1].q = sub_142c08cf0
int32_t i_2 = 0

while (true)
    char* rax_1 = strchr(r14, 0x2c)
    char* arg_10 = rax_1
    char* rsi_1 = rax_1
    
    if (rax_1 == 0)
        void* rsi_2 = -ffffffffffffffff
        
        do
            rsi_2 += 1
        while (*(r14 + rsi_2) != 0)
        
        rsi_1 = rsi_2 + r14
        arg_10 = rsi_1
    
    int32_t i = i_1
    
    if (i_1 u< 1)
        int32_t i_3 = i_2
        uint64_t _MaxCount = rsi_1 - r14
        int128_t* r15_2 = zx.q(i_1) * 0x18 + result
        
        do
            char* _Str1 = zx.q(i) * 0x18 + result
            int64_t rax_5 = -1
            
            do
                rax_5 += 1
            while (_Str1[rax_5] != 0)
            
            if (_MaxCount == sx.q(rax_5.d) && strncmp(_Str1, r14, _MaxCount) == 0)
                uint64_t rbx = zx.q(i_3 + 1)
                uint128_t var_48_1 = *r15_2
                i_2.q = r15_2[1].q
                int128_t* rdi_2 = zx.q(i_3) * 0x18 + result
                memmove(rbx * 0x18 + result, rdi_2, (i - i_3) * 0x18)
                i_3 = rbx.d
                *rdi_2 = var_48_1
                rdi_2[1].q = i_2.q
            
            i += 1
            r15_2 += 0x18
        while (i u< 1)
        
        i_2 = i_3
        rsi_1 = arg_10
        i_1 = i_2
    
    if (*rsi_1 == 0)
        break
    
    r14 = &rsi_1[1]

return result
