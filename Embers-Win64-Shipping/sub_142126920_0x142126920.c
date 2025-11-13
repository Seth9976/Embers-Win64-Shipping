// 函数: sub_142126920
// 地址: 0x142126920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg4)
int64_t* result = arg2

if (arg3 != 0)
    int64_t* rax_2 = (*(*arg1 + 0x2e0))(arg1, zx.q(rbp.d), 3)
    int64_t* rsi_1 = rax_2
    int64_t* rax_4
    
    if (rax_2 == 0)
        rax_4 = (*(*arg3 + 0x2e0))(arg3, zx.q(rbp.d), zx.q((rsi_1 + 3).d))
        rsi_1 = rax_4
    
    if (rax_2 != 0 || rax_4 != 0)
        char arg_18
        uint16_t rcx_2
        rcx_2.b = (*(*(*rsi_1 + 0x1e8))(rsi_1, &arg_18) u>> 0xa).b & 1
        char var_44 = rcx_2.b
        int64_t rbx
        
        if (rbp.d s> 1 || rcx_2.b == 0)
            rbx.b = 0
        else
            rbx.b = 1
        
        int32_t rax_8 = (*(*arg1 + 0x3f8))(arg1)
        int32_t var_48 = rax_8
        int64_t r12
        
        if (rax_8 u> 1 || rbx.b != 0)
            r12.b = 1
        else
            r12.b = 0
        
        int32_t rax_10 = (*(*rsi_1 + 0x20))(rsi_1)
        int64_t r8_1 = *arg1
        int64_t var_40 = 0
        int64_t rdi
        rdi.b = rax_10 == 1
        var_40.w = *(*(r8_1 + 0x400))(arg1, &arg_18, r8_1)
        
        if (rax_10 != 1)
            char rax_13
            
            if (((arg3[0x2a].b - 1) & 0xfb) != 0)
                if (rbp.d s> 1)
                    rax_13 = *(arg3 + 0x1c4)
                else
                    rax_13 = *(arg3 + 0x1c6)
            
            if (((arg3[0x2a].b - 1) & 0xfb) == 0 || (rax_13 & 1) == 0)
                result.b = 0
            else
                result.b = 1
            
            int64_t r8_2 = *rsi_1
            char rax_14 = (*(r8_2 + 0x250))(rsi_1, zx.q((*U"1111")[rbp]), r8_2)
            
            if (rax_14 != 0 || var_48 == 4)
                arg_18 = 1
            
            if ((rax_14 == 0 && var_48 != 4) || result.b == 0)
                arg_18 = 0
            
            char rax_16 = (*(*arg1 + 0x430))(arg1)
            int64_t rdx_5 = *rsi_1
            char rdi_1 = (((*(rdx_5 + 0x210))(rsi_1, rdx_5).b & 1) * 2) | (rax_16 & 1)
            char* rax_17
            
            if (rbp.d != 3)
                rax_17.b = 0
            else if ((*(*rsi_1 + 0x158))(rsi_1).b == 0)
                rax_17.b = 0
            else if ((*(*(*rsi_1 + 0x1e8))(rsi_1, &var_48) u>> 7 & 1) == 0)
                rax_17.b = 0
            else if ((*(*rsi_1 + 0x1d8))(rsi_1).d == 0)
                rax_17.b = 8
            else if ((*(*rsi_1 + 0x1d8))(rsi_1).d != 1)
                rax_17.b = 0
            else
                rax_17.b = 8
            
            char rdx_6
            
            if (r12.b == 0 || result.b == 0)
                rdx_6 = 0
            else
                rdx_6 = 0x10
            
            uint8_t rcx_11
            
            if (r12.b == 0 || arg_18 == 0)
                rcx_11 = 0
            else
                rcx_11 = 0x20
            
            rdi_1 = ((((((rdi_1 * 2) | (var_40:2.b & 0xf8) | (r12.b ^ 1)) & 0xf7) | rax_17.b)
                & 0xef) | rdx_6) & 0xdf
            
            if (r12.b == 0 || result.b != 0)
                rax_17.b = 0
            else
                rax_17.b = 0x40
            
            rdi_1 = ((rdi_1 | rcx_11) & 0xbf) | rax_17.b
            
            if (r12.b == 0 || (arg3[0x3f].b & 1) == 0)
                rax_17.b = 0
            else
                rax_17.b = 0x10
            
            char rbp_1 = (var_40:4.b & 0xef) | rax_17.b
            
            if (r12.b != 0)
                rax_17 = rsi_1[1]
            
            if (r12.b == 0 || rax_17 == 0 || ((*(rax_17 + 0x28))[0x178] & 1) == 0)
                rax_17.b = 0
            else
                rax_17.b = 0x80
            
            var_40:2.b = (rdi_1 & 0x7f) | rax_17.b
            char rax_23
            uint64_t rcx_17
            rax_23, rcx_17 = (*(*arg3 + 0x428))(arg3)
            void* rax_24 = rsi_1[1]
            uint8_t rdx_8
            
            if (rax_24 == 0)
                rdx_8 = 0
            else
                rdx_8 = *(*(rax_24 + 0x28) + 0x17d) u>> 4
            
            if (rax_24 == 0)
                rcx_17.b = 0
            else
                rcx_17.b = *(*(rax_24 + 0x28) + 0x17d) & 8
            
            char rdx_9
            
            if (r12.b == 0 || (*(*rsi_1 + 0x1f8))(rsi_1) - 4 u> 1)
                rdx_9 = 0
            else
                rdx_9 = 0x20
            
            void* rax_29 = rsi_1[1]
            char rbx_3 = ((((((var_40:3.b & 0xfc) | ((rax_23 & 1) * 2)) & 0xfb) | (rdx_8 & 1) << 2)
                & 0xf7) | rcx_17.b) & 0xdf
            uint8_t rcx_19
            
            if (rax_29 == 0)
                rcx_19 = 0
            else
                rcx_19 = (*(*(rax_29 + 0x28) + 0x178) u>> 1).b
            
            char rax_32 = (*(*rsi_1 + 0xa8))(rsi_1)
            rbp_1 &= 0xfd
            void* rax_33 = rsi_1[1]
            char r9 = (rax_32 & 1) * 2
            uint8_t r8_4
            
            if (rax_33 == 0)
                r8_4 = 0
            else
                r8_4 = *(*(rax_33 + 0x28) + 0x17d) u>> 6
            
            char rdx_10 = (((rbp_1 | r9) ^ r8_4 << 3) & 8) ^ (rbp_1 | r9)
            
            if (rax_33 == 0)
                r8_4 = 0
            else
                r8_4 = (*(*(rax_33 + 0x28) + 0x178) & 0x2002000) != 0
            
            result = arg2
            var_40:3.b = ((*(arg3 + 0x20b) << 4 ^ (((rbx_3 | rdx_9) ^ rcx_19 << 6) & 0x40)
                ^ (rbx_3 | rdx_9)) & 0x7f) ^ *(arg3 + 0x20b) << 4
            var_40:4.b = (((rdx_10 & 0xfb) | r8_4 << 2) & 0xfe) | var_44
        else
            rdi.b <<= 4
            rdi.b = rdi.b
            var_40:3.b = rdi.b
        
        *result = var_40
        return result

*result = 0
return result
