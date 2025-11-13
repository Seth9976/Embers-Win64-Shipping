// 函数: sub_141ea4c10
// 地址: 0x141ea4c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r10 = (*(arg1 + 0x80)).b
void* i = arg2
void* rdx = *(arg1 + 0x78)
int32_t rdi = arg4[1].d
uint64_t result = zx.q(*(rdx + 0x3c))
void* var_48 = rdx
int32_t var_38 = result.d
void** var_40 = arg3
int32_t rsi = arg3[1].d
int32_t r15 = *(rdx + 0x3c)

if (rdi s> rsi)
    result = sub_140cd78f0(&var_48, rdi - rsi)
    arg3 = var_40
else if (rdi s< rsi)
    int32_t rsi_1 = rsi - rdi
    sub_140cd9680(&var_48, rdi, rsi_1)
    int32_t var_50_1 = rdi
    void** var_58 = &var_48
    int32_t var_4c_1 = rsi_1
    result = sub_140cd32c0(&var_48, &var_58)
    arg3 = var_40

for (; i != 0; i = *(i + 0x18))
    result.b = not.b(r10)
    int32_t rdx_4 = *(i + 8)
    result.b &= 1
    void* r11_1
    
    if (arg3[1].d != 0)
        void* rcx_4 = *arg3
        
        if (result.b == 0 && (rcx_4.b & 1) != 0)
            rcx_4 = (rcx_4 s>> 1) + arg3
        
        result = zx.q(var_38 * rdx_4)
        r11_1 = sx.q(result.d) + rcx_4
    else
        r11_1 = nullptr
    
    void* rdx_5
    
    if (arg4[1].d != 0)
        void* rcx_6 = *arg4
        
        if ((not.b(r10) & 1) == 0 && (rcx_6.b & 1) != 0)
            rcx_6 = (rcx_6 s>> 1) + arg4
        
        result = zx.q(r15 * rdx_4)
        rdx_5 = sx.q(result.d) + rcx_6
    else
        rdx_5 = nullptr
    
    if (r11_1 != 0 || rdx_5 != 0)
        int64_t* r10_1 = *(arg1 + 0x78)
        
        if (r10_1 == 0)
        label_141ea4d97:
            
            if (r11_1 != rdx_5)
                if (not(test_bit(zx.q(r10_1[8].d), 0x1e)))
                    result = (*(*r10_1 + 0xb0))(r10_1, r11_1, rdx_5, zx.q(r10_1[7].d))
                else
                    result = memcpy(r11_1, rdx_5, *(r10_1 + 0x3c) * r10_1[7].d)
                
                arg3 = var_40
        else
            result = r10_1[1]
            
            if (((zx.q(*(result + 0x10)) u>> 0x14).b & 1) == 0)
                if (r10_1 == 0)
                    goto label_141ea4d97
                
                result = r10_1[1]
                
                if (((zx.q(*(result + 0x10)) u>> 0x15).b & 1) == 0)
                    goto label_141ea4d97
                
                result = sub_141ea4c10(r10_1, *(i + 0x10), r11_1, rdx_5)
                arg3 = var_40
            else
                result = sub_141ea4e00(*(i + 0x10), r10_1[0xf], r11_1, rdx_5)
                arg3 = var_40

return result
