// 函数: sub_140e42b80
// 地址: 0x140e42b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
uint64_t result = sub_140e3cbd0(arg1, 0x10, arg2)
int32_t r13 = result.d

if (result.d u< 2)
label_140e42eb5:
    sub_140e43530(arg1, 0xffffff02)
    noreturn

int32_t i = r13 - 2

if (r13 != 2)
    do
        int32_t rcx = *(arg1 + 0x24f4)
        int32_t rdi_1 = *(arg1 + 0x24f8)
        uint32_t r12_2 = rdi_1 u>> 0x18
        *(arg1 + 0x24f4) = rcx - 8
        int32_t rdi_7
        
        if (rcx - 8 s> 0)
            rdi_7 = rdi_1 << 8
        else
            *(arg1 + 0x24f8) = rdi_1 << rcx.b
            int32_t rax_3 = sub_140e3cd90(arg1, arg2)
            int32_t rax_4 = sub_140e3cd90(arg1, arg2)
            int32_t rdx_1 = *(arg1 + 0x24f4)
            *(arg1 + 0x24f4) = rdx_1 + 0x10
            rdi_7 = (rax_3 << 8 | (*(arg1 + 0x24f8) & 0xffff0000) | rax_4) << (neg.d(rdx_1)).b
        
        int32_t r14_1 = 0
        *(arg1 + 0x24f8) = rdi_7
        char var_158[0x10]
        var_158[0] = 0
        
        for (int64_t j = 1; j s<= 0x10; j += 1)
            int32_t rcx_7 = *(arg1 + 0x24f4)
            int32_t rdi_8 = *(arg1 + 0x24f8)
            uint32_t rbp_2 = rdi_8 u>> 0x18
            *(arg1 + 0x24f4) = rcx_7 - 8
            int32_t rdi_14
            
            if (rcx_7 - 8 s> 0)
                rdi_14 = rdi_8 << 8
            else
                *(arg1 + 0x24f8) = rdi_8 << rcx_7.b
                int32_t rax_6 = sub_140e3cd90(arg1, arg2)
                int32_t rax_7 = sub_140e3cd90(arg1, arg2)
                int32_t rdx_3 = *(arg1 + 0x24f4)
                *(arg1 + 0x24f4) = rdx_3 + 0x10
                rdi_14 = (rax_6 << 8 | (*(arg1 + 0x24f8) & 0xffff0000) | rax_7) << (neg.d(rdx_3)).b
            
            *(arg1 + 0x24f8) = rdi_14
            r14_1 += rbp_2
            var_158[j] = rbp_2.b
        
        if (r14_1 s> 0xff)
            sub_140e43530(arg1, 0xffffff00)
            noreturn
        
        int64_t j_1 = 0
        char var_138[0x100]
        
        if (r14_1 s> 0)
            do
                int32_t rcx_14 = *(arg1 + 0x24f4)
                int32_t rdi_15 = *(arg1 + 0x24f8)
                *(arg1 + 0x24f4) = rcx_14 - 8
                int32_t rdi_21
                
                if (rcx_14 - 8 s> 0)
                    rdi_21 = rdi_15 << 8
                else
                    *(arg1 + 0x24f8) = rdi_15 << rcx_14.b
                    int32_t rax_9 = sub_140e3cd90(arg1, arg2)
                    int32_t rax_10 = sub_140e3cd90(arg1, arg2)
                    int32_t rdx_5 = *(arg1 + 0x24f4)
                    *(arg1 + 0x24f4) = rdx_5 + 0x10
                    rdi_21 =
                        (rax_9 << 8 | (*(arg1 + 0x24f8) & 0xffff0000) | rax_10) << (neg.d(rdx_5)).b
                
                *(arg1 + 0x24f8) = rdi_21
                var_138[j_1] = (rdi_15 u>> 0x18).b
                j_1 += 1
            while (j_1 s< sx.q(r14_1))
        
        if (i u< r14_1 + 0x11)
            goto label_140e42eb5
        
        i -= r14_1 + 0x11
        uint64_t rdi_22 = zx.q((r12_2 & 0xf) + ((r12_2 u>> 4 & 1) << 2))
        
        if (rdi_22.d u>= 8)
            sub_140e43530(arg1, 0xffffff01)
            noreturn
        
        uint64_t rsi_1 = zx.q(rdi_22.d)
        
        if (*(arg1 + (rdi_22 << 3) + 0x128) == 0)
            *(arg1 + (rdi_22 << 3) + 0x128) = sub_140e34940(arg1, 0x11, 0)
        
        if (*(arg1 + (rdi_22 << 3) + 0x168) == 0)
            *(arg1 + (rdi_22 << 3) + 0x168) = sub_140e34940(arg1, 0x100, 0)
        
        int64_t j_3 = 2
        char zmm0[0x10] = var_158
        *(rsi_1 + arg1 + 0x11c) = (rdi_22.d u>> 4).b
        char (* rcx_23)[0x10] = *(arg1 + (rsi_1 << 3) + 0x128)
        *rcx_23 = zmm0
        char var_148
        rcx_23[1][0] = var_148
        char (* rcx_24)[0x100] = &var_138
        result = *(arg1 + (rsi_1 << 3) + 0x168)
        int64_t j_2
        
        do
            result += 0x80
            zmm0 = *rcx_24
            arg2.o = *(rcx_24 + 0x10)
            rcx_24 = &(*rcx_24)[0x80]
            *(result - 0x80) = zmm0
            zmm0 = *(rcx_24 - 0x60)
            *(result - 0x70) = arg2.o
            arg2.o = *(rcx_24 - 0x50)
            *(result - 0x60) = zmm0
            zmm0 = *(rcx_24 - 0x40)
            *(result - 0x50) = arg2.o
            arg2.o = *(rcx_24 - 0x30)
            *(result - 0x40) = zmm0
            zmm0 = *(rcx_24 - 0x20)
            *(result - 0x30) = arg2.o
            arg2.o = *(rcx_24 - 0x10)
            *(result - 0x20) = zmm0
            *(result - 0x10) = arg2.o
            j_2 = j_3
            j_3 -= 1
        while (j_2 != 1)
    while (i != 0)

__security_check_cookie(rax_1 ^ &var_178)
return result
