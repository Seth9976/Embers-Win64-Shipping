// 函数: sub_1428a4880
// 地址: 0x1428a4880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = arg1
int64_t rdx
int64_t arg_10 = rdx
int64_t r8
int64_t arg_18 = r8
int64_t r9
int64_t arg_20 = r9
__chkstk(0x38)
int32_t rbp = 0x50
char* result = sub_1428a6730(0x51)
char* result_2 = result

if (result != 0)
    int32_t rsi_1 = 0
    int32_t r14_1 = 0
    *result = 0
    
    if (arg1 s> 0)
        int32_t* r15_1 = &arg_8
        
        do
            char* rax = *(r15_1 + 8)
            r15_1 = &r15_1[2]
            char const* const rbx_1 = "<NULL>"
            
            if (rax != 0)
                rbx_1 = rax
            
            int64_t rax_1 = -1
            
            do
                rax_1 += 1
            while (rbx_1[rax_1] != 0)
            
            rsi_1 += rax_1.d
            
            if (rsi_1 s> rbp)
                rbp = rsi_1 + 0x14
                char* result_3 = sub_1428a67c0(result_2, sx.q(rbp + 1), "crypto\err\err.c", 0x31a)
                
                if (result_3 == 0)
                    return sub_1428a6780(result_2)
                
                result_2 = result_3
            
            sub_1428a7010(result_2, rbx_1, sx.q(rbp) + 1)
            r14_1 += 1
        while (r14_1 s< arg1)
    
    result = sub_1428a50d0()
    char* result_1 = result
    
    if (result != 0)
        int64_t rsi_2 = sx.q(*(result + 0x200))
        
        if ((result[(rsi_2 << 2) + 0x100] & 1) != 0)
            result = sub_1428a6780(*(result + (rsi_2 << 3) + 0x80))
        
        *(result_1 + (rsi_2 << 3) + 0x80) = result_2
        *(result_1 + (rsi_2 << 2) + 0x100) = 3

return result
