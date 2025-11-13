// 函数: sub_1418f0300
// 地址: 0x1418f0300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143efb548
int32_t result
int64_t* r8
result, r8 = (*(*rcx + 0x90))(rcx)
int32_t rcx_1 = *(arg1 + 0x78)
int64_t var_20
uint64_t var_18
void* var_10
int64_t rbp_1

if (result s<= 0)
    if (rcx_1 != 0)
        void* r10_2 = *(arg2 + 0x158)
        uint64_t r11_2 = *(arg1 + 0x108)
        void* rdx_4 = *(*(r10_2 + 8) + 0x20)
        
        if (r11_2 != 0)
            var_10 = arg3
            var_18 = r11_2
            var_20 = zx.q(*(rdx_4 + 0x14)) + *(*(*(rdx_4 + 0x20) + 0x18) + 0x18)
            sub_1418cdae0(*(*(arg1 + 8) + 0xa30), *(*(*(arg1 + 0xc8) + 0x20) + 0x30), arg1 + 0xd0, 
                *(arg1 + 0x98), r10_2, var_20, var_18, var_10)
            *(arg1 + 0x108) = 0
        
        rbp_1 = *(arg1 + 0x68)
        uint64_t rax_6
        rax_6.b = data_1439c7a08 s<= 1
        
        if (rax_6.b == 0)
            r8.b = 1
            
            if (sub_1418babd0(arg3, *(arg1 + 0x60), r8.b, rbp_1).b == 0)
                result.b = 0
            else
                int64_t* r8_4 = *(arg1 + 0x98)
                int32_t i = 0
                int64_t r9_11 = **(arg1 + 0x68)
                
                if (r8_4[3].d u> 0)
                    do
                        uint64_t i_3 = zx.q(i)
                        i += 1
                        *((i_3 << 6) + *r8_4 + 0x10) = r9_11
                    while (i u< r8_4[3].d)
                
                data_143efb8e8(*(*(arg1 + 8) + 8), zx.q(*(arg1 + 0x48)), *(arg1 + 0x40), 0, 0, 
                    var_20, var_18, var_10)
                result.b = 1
        else
            sub_1418e1b30(*(*(arg1 + 8) + 0x460), sub_1418e1aa0(arg1), *(arg1 + 0x60), arg1 + 0x98, 
                rbp_1)
            result.b = 1
    else
        result.b = 0
else if (rcx_1 == 0)
    result.b = 0
else
    void* r10_1 = *(arg2 + 0x158)
    uint64_t r11_1 = *(arg1 + 0x108)
    void* rdx = *(*(r10_1 + 8) + 0x20)
    uint64_t rax_1
    
    if (r11_1 != 0)
        var_10 = arg3
        var_18 = r11_1
        var_20 = zx.q(*(rdx + 0x14)) + *(*(*(rdx + 0x20) + 0x18) + 0x18)
        rax_1, r8 = sub_1418cd8d0((*(*(arg1 + 8) + 0xa30)).d, *(*(*(arg1 + 0xc8) + 0x20) + 0x30), 
            arg1 + 0xd0, *(arg1 + 0x98), r10_1, var_20, var_18, var_10)
        *(arg1 + 0x108) = 0
    
    rbp_1 = *(arg1 + 0x68)
    rax_1.b = data_1439c7a08 s<= 1
    
    if (rax_1.b != 0)
        sub_1418e1b30(*(*(arg1 + 8) + 0x460), sub_1418e1aa0(arg1), *(arg1 + 0x60), arg1 + 0x98, 
            rbp_1)
        result.b = 1
    else
        r8.b = 1
        
        if (sub_1418babd0(arg3, *(arg1 + 0x60), r8.b, rbp_1).b == 0)
            result.b = 0
        else
            int64_t* r8_2 = *(arg1 + 0x98)
            int32_t i_1 = 0
            int64_t r9_5 = **(arg1 + 0x68)
            
            if (r8_2[3].d u> 0)
                do
                    uint64_t i_2 = zx.q(i_1)
                    i_1 += 1
                    *((i_2 << 6) + *r8_2 + 0x10) = r9_5
                while (i_1 u< r8_2[3].d)
            
            data_143efb8e8(*(*(arg1 + 8) + 8), zx.q(*(arg1 + 0x48)), *(arg1 + 0x40), 0, 0, var_20, 
                var_18, var_10)
            result.b = 1
return result
