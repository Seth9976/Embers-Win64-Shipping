// 函数: sub_142c7f3a0
// 地址: 0x142c7f3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
char* string_1 = nullptr

if (*(rdi + 0x5c0) == 2)
    char* string = *(rdi + 0x4e38)
    
    if (string != 0 && *string != 0 && strchr(string, 0x2f) != 0)
        char* string_2 = data_143ccb8b0(*(rdi + 0x4e38))
        string_1 = string_2
        
        if (string_2 == 0)
            return zx.q((&string_1[0x1b]).d)
        
        int64_t rax_3 = -1
        bool cond:3_1
        
        do
            cond:3_1 = string_1[rax_3 + 1] != 0
            rax_3 += 1
        while (cond:3_1)
        
        if (string_1[rax_3 - 1] != 0x2f)
            char* rax_4 = strrchr(string_1, 0x2f)
            
            if (rax_4 != 0)
                rax_4[1] = 0

char const* const rdx = *(rdi + 0x650)

if (rdx == 0)
    rdx = "LIST"
    
    if (*(rdi + 0x5dd) != 0)
        rdx = "NLST"

int64_t rax_5
int512_t entry_zmm2
int512_t zmm2
rax_5, zmm2 = sub_142c563e0("%s%s%s", rdx, entry_zmm2)

if (rax_5 == 0)
    data_143ccb8a0(string_1)
    return zx.q((rax_5 + 0x1b).d)

int32_t rax_7 = gzprintf(&arg1[0xd3], &data_1434ccff0, rax_5, zmm2)
data_143ccb8a0(string_1)
data_143ccb8a0(rax_5)

if (rax_7 != 0)
    return zx.q(rax_7)

arg1[0xea].d = 0x1f
return 0
