// 函数: sub_1428a40b0
// 地址: 0x1428a40b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
char* string = arg1

if (arg1 == 0)
    sub_1428a5670(0xe, 0x77, 0x73, "crypto\conf\conf_mod.c", 0x209)
    return 0

while (true)
    if (arg3 != 0)
        char i = *string
        
        while (i != 0)
            if (isspace(zx.d(i)) == 0)
                break
            
            i = string[1]
            string = &string[1]
    
    char* rax_3 = strchr(string, arg2)
    char* string_1
    uint64_t rdx_1
    
    if (rax_3 == string || *string == 0)
        rdx_1 = 0
        string_1 = nullptr
    else
        void* rdi_1
        
        if (rax_3 == 0)
            int64_t rax_4 = -1
            
            do
                rax_4 += 1
            while (string[rax_4] != 0)
            
            rdi_1 = &string[-1 + rax_4]
        else
            rdi_1 = &rax_3[-1]
        
        if (arg3 != 0 && isspace(zx.d(*rdi_1)) != 0)
            int32_t i_1
            
            do
                uint32_t _C = zx.d(*(rdi_1 - 1))
                rdi_1 -= 1
                i_1 = isspace(_C)
            while (i_1 != 0)
        
        string_1 = string
        rdx_1 = zx.q(rdi_1.d - string.d + 1)
    
    int32_t result = arg4(string_1, rdx_1, arg5)
    
    if (result s<= 0)
        return result
    
    if (rax_3 == 0)
        break
    
    string = &rax_3[1]

return 1
