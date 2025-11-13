// 函数: sub_142c6e840
// 地址: 0x142c6e840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = *(arg1 + 0x168)
int32_t rax = strncmp(rbx, "HTTP", 4)
int512_t entry_zmm2

if (rax == 0)
    char* rax_1 = strchr(rbx, rax + 0x20)
    
    if (rax_1 != 0 && rax_1[1] != 0)
        int64_t rbp
        rbp.b = 0xd
        char* rax_2 = strchr(&rax_1[1], 0xd)
        char* rdi_1 = rax_2
        char* rax_3
        
        if (rax_2 == 0)
            rbp.b = 0xa
            rax_3 = strchr(&rax_1[1], (&rax_2[0xa]).d)
            rdi_1 = rax_3
        
        if (rax_2 != 0 || rax_3 != 0)
            *rdi_1 = 0
            int64_t result =
                sub_142c64760(arg1, "The requested URL returned error: %s", &rax_1[1], entry_zmm2)
            *rdi_1 = rbp.b
            return result

return sub_142c64760(arg1, "The requested URL returned error: %d", zx.q(*(arg1 + 0x180)), 
    entry_zmm2)
