// 函数: sub_14289a2c0
// 地址: 0x14289a2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t i = 0

if (arg2 s>= 0)
    i = arg2

if (i s> arg3)
    i = arg3

while (i != 0)
    i -= 1
    int64_t arg_20 = 0
    void* rax_1
    
    if (arg1 != 0)
        rax_1 = *arg1
    
    if (arg1 == 0 || rax_1 == 0 || *(rax_1 + 0x30) == 0)
        sub_1428a5670(0x20, 0x6e, 0x79, "crypto\bio\bio_lib.c", 0x189)
        return 0
    
    int64_t r10_1 = arg1[1]
    int32_t var_18
    int64_t* var_10
    int32_t rax_3
    
    if (r10_1 != 0 || arg1[2] != 0)
        int64_t rax_2 = arg1[2]
        
        if (rax_2 == 0)
            rax_3 = r10_1(arg1, 4, &(*U""\tv 0")[3], 0, 0, 1, var_18, var_10)
        else
            var_10 = nullptr
            var_18 = 1
            rax_3 = rax_2(arg1, 4, &(*U""\tv 0")[3], 0, 0, 0, 1, 0)
    
    if ((r10_1 == 0 && arg1[2] == 0) || rax_3 s> 0)
        if (arg1[4].d == 0)
            sub_1428a5670(0x20, 0x6e, 0x78, "crypto\bio\bio_lib.c", 0x194)
            return 0
        
        rax_3 = (*(*arg1 + 0x30))(arg1, &(*U""\tv 0")[3])
        int64_t rcx_2
        
        if (rax_3 s<= 0)
            rcx_2 = arg_20
        else
            rcx_2 = sx.q(rax_3)
            rax_3 = 1
            arg1[0xc] += rcx_2
            arg_20 = rcx_2
        
        int64_t r11_1 = arg1[1]
        
        if (r11_1 != 0 || arg1[2] != 0)
            int64_t r10_2 = arg1[2]
            
            if (r10_2 == 0)
                if (rax_3 != 0)
                    if (rcx_2 u> 0x7fffffff)
                        return 0
                    
                    rax_3 = rcx_2.d
                
                rax_3 = r11_1(arg1, 0x84, &(*U""\tv 0")[3], 0, 0, rax_3, var_18, var_10)
                
                if (rax_3 s< 0)
                    rcx_2 = arg_20
                else
                    rcx_2 = sx.q(rax_3)
                    rax_3 = 1
                    arg_20 = rcx_2
            else
                var_10 = &arg_20
                var_18 = rax_3
                rax_3 = r10_2(arg1, 0x84, &(*U""\tv 0")[3], 0, 0, 0, var_18, var_10)
                rcx_2 = arg_20
        
        if (rax_3 s> 0)
            if (rcx_2 u> 0x7fffffff)
                sub_1428a5670(0x20, 0x6e, 0x66, "crypto\bio\bio_lib.c", 0x1a6)
                return 0
            
            rax_3 = rcx_2.d
    
    if (rax_3 != 1)
        return 0

return 1
