// 函数: sub_142ae3d60
// 地址: 0x142ae3d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* r12 = arg1
int32_t rbp = 0
__builtin_memset(arg4 + 8, 0, 0x81)
uint64_t result
void* rdx
result, rdx = sub_142ae4070(arg3, arg2)
int32_t i = 0
int32_t i_1 = 0

if (arg3[0x191].d s> 0)
    do
        void* rbx_3 = &arg3[sx.q(i) * 8]
        int16_t rdi_1 = *(rbx_3 + 0x10)
        int32_t rax_3
        
        if (rdi_1 s< 0)
            rax_3 = *(rbx_3 + 0x14)
        else
            rax_3 = sx.d(rdi_1) s>> 5
        
        int16_t rcx_1
        
        if (rax_3 == 0)
            rcx_1 = -1
        else
            void* rax_4 = rbx_3 + 0x12
            
            if ((rdi_1.b & 2) == 0)
                rax_4 = *(rbx_3 + 0x20)
            
            rcx_1 = *rax_4
        
        if (rcx_1 != 0x27)
            rdx.b = 1
            result, rdx = sub_142ae1ec0(rbx_3 + 8, rdx.b)
            
            if (result.d s>= 0)
                char rcx_6
                
                if (rdi_1 s< 0)
                    rcx_6 = (*(rbx_3 + 0x14)).b
                else
                    rcx_6 = (sx.d(rdi_1) s>> 5).b
                
                int32_t rax_6
                
                if (rdi_1 s< 0)
                    rax_6 = *(rbx_3 + 0x14)
                else
                    rax_6 = sx.d(rdi_1) s>> 5
                
                char r8_1
                
                if (rax_6 == 0)
                    r8_1 = -1
                else
                    void* rax_7 = rbx_3 + 0x12
                    
                    if ((rdi_1.b & 2) == 0)
                        rax_7 = *(rbx_3 + 0x20)
                    
                    r8_1 = (*rax_7).b
                
                int64_t r9 = sx.q(*((sx.q(result.d) << 4) + 0x14365a164))
                *(r9 + arg4 + 0x48) = r8_1
                *(r9 + arg4 + 0x58) = rcx_6
                char rcx_7 = (*((sx.q(result.d) << 4) + 0x14365a16a)).b
                *(r9 + arg4 + 0x68) = *((sx.q(result.d) << 4) + &data_14365a160)
                *(r9 + arg4 + 0x78) = rcx_7
                int16_t rcx_8 = *((sx.q(result.d) << 4) + 0x14365a168)
                
                if (rcx_8 s> 0)
                    int16_t rax_9 = *(rbx_3 + 0x10)
                    int16_t rax_11
                    
                    if (rax_9 s< 0)
                        rax_11 = (*(rbx_3 + 0x14)).w
                    else
                        rax_11 = rax_9 s>> 5
                    
                    rcx_8 += rax_11
                
                result = zx.q(sx.d(rcx_8))
                *(arg4 + (r9 << 2) + 8) = result.d
        else
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_90_1 = 2
            sub_142ae26e0(arg3, &var_98, &i_1)
            result, rdx = sub_142a47ff0(&var_98)
            i = i_1
        
        i += 1
        i_1 = i
    while (i s< arg3[0x191].d)
    
    rbp = 0
    r12 = arg1

if (*(arg4 + 0x63) != 0)
    result = zx.q(*(arg4 + 0x53))
    
    if (result.b != 0x68 && result.b != 0x4b)
        *(arg4 + 0x52) = 0
        *(arg4 + 0x62) = 0
        *(arg4 + 0x72) = 0
        *(arg4 + 0x82) = 0
        *(arg4 + 0x30) = 0
    else if (*(arg4 + 0x62) == 0)
        result = 0
        
        do
            if (*(result + 0x14365a164) == 0xa)
                int64_t rdx_5 = sx.q(rbp) * 2
                char rcx_9 = (*((rdx_5 << 3) + 0x14365a16a)).b
                *(arg4 + 0x52) = *(&data_14365a160 + (rdx_5 << 3))
                *(arg4 + 0x62) = rcx_9
                char rcx_10 = (*((rdx_5 << 3) + 0x14365a16a)).b
                *(arg4 + 0x72) = *(&data_14365a160 + (rdx_5 << 3))
                *(arg4 + 0x82) = rcx_10
                result = zx.q(sx.d(*((rdx_5 << 3) + 0x14365a168)))
                *(arg4 + 0x30) = result.d
                *(arg4 + 0x88) = 1
                break
            
            rbp += 1
            result = sx.q(rbp) << 4
        while (*(result + &data_14365a160) != 0)

*(r12 + 0x10) = *(arg4 + 8)
*(r12 + 0x20) = *(arg4 + 0x18)
*(r12 + 0x30) = *(arg4 + 0x28)
*(r12 + 0x40) = *(arg4 + 0x38)
*(r12 + 0x50) = *(arg4 + 0x48)
*(r12 + 0x60) = *(arg4 + 0x58)
*(r12 + 0x70) = *(arg4 + 0x68)
*(r12 + 0x80) = *(arg4 + 0x78)
__security_check_cookie(rax_1 ^ &var_d8)
return result
