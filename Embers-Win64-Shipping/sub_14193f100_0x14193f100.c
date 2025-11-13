// 函数: sub_14193f100
// 地址: 0x14193f100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x14a28) != 0 || *(arg1 + 0x152c0) != 0 || *(arg1 + 0x150) != 0)
    int32_t i = 0
    
    if (data_1439c7498 s> 0)
        int64_t rcx = 0
        
        do
            int64_t rax_1 = *(arg1 + 0x14a28)
            
            if (rax_1 != 0 && *(rcx + rax_1 + 0x14) == arg2)
                *(rcx + rax_1 + 0x10) = 0
                *(rcx + *(arg1 + 0x14a28) + 0x14) = 0
            
            int64_t rax_3 = *(arg1 + 0x152c0)
            
            if (rax_3 != 0 && *(rcx + rax_3 + 0x14) == arg2)
                *(rcx + rax_3 + 0x10) = 0
                *(rcx + *(arg1 + 0x152c0) + 0x14) = 0
            
            int64_t rax_5 = *(arg1 + 0x150)
            
            if (rax_5 != 0 && *(rcx + rax_5 + 0x14) == arg2)
                *(rcx + rax_5 + 0x10) = 0
                *(rcx + *(arg1 + 0x150) + 0x14) = 0
            
            i += 1
            rcx += 0x28
        while (i s< data_1439c7498)

sub_140e85810(arg1 + 0x15b68, arg2)
void* result = *(arg1 + 0x398)

if (result != 0 && *(result + 0x10) == arg2)
    *(arg1 + 0x398) = 0

return result
