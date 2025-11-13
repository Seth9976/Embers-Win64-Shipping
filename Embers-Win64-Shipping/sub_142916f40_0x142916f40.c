// 函数: sub_142916f40
// 地址: 0x142916f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t j = 0

for (int64_t i = 0; i != 5; )
    char rax_1 = arg2[i]
    i += 1
    
    if (rax_1 != *(i + 0x14351f5a3))
        if (*arg2 == 0x6d && arg2[1] == 0x64 && arg2[2] == 0)
            return sub_1428bce90(arg1, 0x400, 0x1003, arg3) __tailcall
        
        int64_t rcx_6 = 0
        
        while (true)
            char rax_12 = arg2[rcx_6]
            rcx_6 += 1
            
            if (rax_12 != data_14351f320[7][rcx_6])
                break
            
            if (rcx_6 == 5)
                return sub_1428bcf80(arg1, 0x1004, arg3) __tailcall
        
        int64_t rcx_9 = 0
        
        while (true)
            char rax_14 = arg2[rcx_9]
            rcx_9 += 1
            
            if (rax_14 != *(rcx_9 + 0x14351f32f))
                break
            
            if (rcx_9 == 8)
                return sub_1428bce00(arg1, 0x1004, arg3) __tailcall
        
        int64_t rcx_12 = 0
        
        while (true)
            char rax_16 = arg2[rcx_12]
            rcx_12 += 1
            
            if (rax_16 != *(rcx_12 + 0x1434e8c1b))
                break
            
            if (rcx_12 == 4)
                return sub_1428bcf80(arg1, 0x1005, arg3) __tailcall
        
        int64_t rcx_15 = 0
        
        while (true)
            char rax_18 = arg2[rcx_15]
            rcx_15 += 1
            
            if (rax_18 != *(rcx_15 + 0x14351e6ff))
                break
            
            if (rcx_15 == 7)
                return sub_1428bce00(arg1, 0x1005, arg3) __tailcall
        
        int64_t rcx_18 = 0
        
        while (true)
            char rax_20 = arg2[rcx_18]
            rcx_18 += 1
            
            if (rax_20 != *(rcx_18 + 0x1434ff3b7))
                break
            
            if (rcx_18 == 5)
                return sub_1428bcf80(arg1, 0x1006, arg3) __tailcall
        
        do
            char rax_22 = arg2[j]
            j += 1
            
            if (rax_22 != *(j + 0x14351f5e7))
                sub_1428a5670(0x34, 0x67, 0x67, "crypto\kdf\hkdf.c", 0xae)
                return 0xfffffffe
        while (j != 8)
        
        return sub_1428bce00(arg1, 0x1006, arg3) __tailcall

int32_t rax_3

if (strcmp(arg3, "EXTRACT_AND_EXPAND") != 0)
    if (strcmp(arg3, "EXTRACT_ONLY") != 0)
        if (strcmp(arg3, "EXPAND_ONLY") != 0)
            return 0
        
        rax_3 = 2
    else
        rax_3 = 1
else
    rax_3 = 0

return sub_1428bcb30(arg1, 0xffffffff, 0x400, 0x1007, rax_3, 0)
