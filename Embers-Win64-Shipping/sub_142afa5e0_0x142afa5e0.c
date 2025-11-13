// 函数: sub_142afa5e0
// 地址: 0x142afa5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0xfc)
int16_t* rdi = *(arg1 + 0x58)
int64_t r14 = *(arg1 + 0xe8)

if (rax == 0 || rax == 0xc)
    void* rcx = *(arg1 + 0x38)
    
    if (*(rcx + 0x94) == 0x8000000a && *(rcx + 0x54) == 0x80000085)
        uint64_t rcx_1 = zx.q(*rdi)
        uint64_t result
        
        if (rax != 0)
            result = zx.q(*(rdi + (rcx_1 << 2)))
            
            if (not(test_bit(result.d, 0x1a)) || 0x25 != *((zx.q(result.w) << 5) + r14 + 0x14))
                result.b = 0
                return result
            
            result = zx.q(*(rdi + (rcx_1 << 2) + 0x20))
            
            if (not(test_bit(result.d, 0x15)) || 0x15 != *((zx.q(result.w) << 5) + r14 + 0xa))
                result.b = 0
                return result
        else if (0xf25 != *(r14 + (zx.q(rdi[rcx_1]) << 1) + 0x14)
                || 0xf15 != *(r14 + (zx.q(rdi[rcx_1 + 8]) << 1) + 0xa))
            result.b = 0
            return result
        
        uint64_t r12 = zx.q(*(arg1 + 0xf8))
        
        if (r12.d == 0)
            *arg2 = 3
            result.b = 0
        else
            result = sub_142a7dd00(zx.q((r12 + 0x50).d + (zx.d(*(arg1 + 0x30)) << 0xa)))
            uint64_t result_1 = result
            
            if (result != 0)
                memcpy(result_1, *(arg1 + 0x38), zx.d(*(arg1 + 0x30)) << 0xa)
                *(result_1 + 0x94) = 0x80000085
                *(result_1 + 0x54) = 0x8000000a
                uint64_t rbp_3 = (zx.q(*(arg1 + 0x30)) << 0xa) + result_1
                memcpy(rbp_3, r14, r12.d)
                uint64_t rax_5 = zx.q(*rdi)
                
                if (*(arg1 + 0xfc) != 0)
                    *((zx.q(rdi[rax_5 * 2]) << 5) + rbp_3 + 0x14) = 0x15
                    *((zx.q(rdi[zx.q(*rdi) * 2 + 0x10]) << 5) + rbp_3 + 0xa) = 0x25
                else
                    *(rbp_3 + (zx.q(rdi[rax_5]) << 1) + 0x14) = 0xf15
                    *(rbp_3 + (zx.q(rdi[zx.q(*rdi) + 8]) << 1) + 0xa) = 0xf25
                
                uint64_t rdi_1 = r12 + rbp_3
                char* rcx_13 = *(arg1 + 0x10) + 4
                uint64_t rdx_2 = rdi_1
                char i
                
                do
                    i = *rcx_13
                    rcx_13 = &rcx_13[1]
                    *rdx_2 = i
                    rdx_2 += 1
                while (i != 0)
                int64_t rcx_14 = rdi_1 - 1
                bool cond:1_1
                
                do
                    cond:1_1 = *(rcx_14 + 1) != 0
                    rcx_14 += 1
                while (cond:1_1)
                __builtin_strcpy(rcx_14, ",swaplfnl")
                sub_142a860a0(nullptr)
                
                if (*(arg1 + 0x40) == 0)
                    *(arg1 + 0x40) = result_1
                    result_1 = 0
                    *(arg1 + 0xf0) = rbp_3
                    *(arg1 + 0x110) = rdi_1
                
                sub_142a860d0(nullptr)
                
                if (result_1 != 0)
                    sub_142a7dcd0(result_1)
                
                result.b = 1
            else
                *arg2 = 7
        
        return result

return 0
