// 函数: sub_1403c7240
// 地址: 0x1403c7240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
uint64_t var_28 = __security_cookie ^ &var_c8
char* rdx = *(arg1 + 0x200)

if (rdx == 0)
    uint32_t var_a8_2 = zx.d(*(arg1 + 0x25c))
    char var_68[0x40]
    _snscanf(&var_68, 0x32, "NULL row buffer for row %ld, pass %d", zx.q(*(arg1 + 0x1f4)))
    png_error(arg1, &var_68)
    noreturn

int32_t rdi = *(arg1 + 0x15c)
uint64_t rax_1

if ((rdi & 0x1000) != 0)
    uint32_t rax_2 = zx.d(*(arg1 + 0x252))
    
    if (*(arg1 + 0x238) != 3)
        void* rdx_2
        void* r8_2
        
        if ((rdi & 0x2000000) == 0 || rax_2.w == 0)
            rdx_2 = &rdx[1]
            r8_2 = nullptr
        else
            r8_2 = arg1 + 0x2f0
            rdx_2 = &rdx[1]
        
        rax_1, rdx = sub_1403c7ed0(arg1 + 0x228, rdx_2, r8_2)
    else
        rax_1, rdx = sub_1403c7b00(arg1 + 0x228, &rdx[1], *(arg1 + 0x248), *(arg1 + 0x2e8), rax_2)

int32_t rcx_2 = *(arg1 + 0x15c)

if ((rcx_2 & 0x40000) != 0)
    rax_1.b = *(arg1 + 0x238)
    rax_1.b |= 2
    
    if (rax_1.b == 6)
        sub_1403cbd00(arg1 + 0x228, *(arg1 + 0x200) + 1, 0)
        rcx_2 = *(arg1 + 0x15c)

char const* const rdx_53

if ((rcx_2 & 0x600000) == 0)
label_1403c7384:
    int32_t entry_zmm2[0x4]
    
    if ((rcx_2 & 0x4000) == 0 || (*(arg1 + 0x155) & 8) != 0)
    label_1403c73cd:
        
        if (rcx_2.b s< 0 && (*(arg1 + 0x252) != 0 || (*(arg1 + 0x25e) & 4) != 0))
        label_1403c73ed:
            arg2 = *(arg1 + 0x2c8)
            entry_zmm2 = *(arg1 + 0x2a8)
            uint32_t var_a8
            var_a8.q = arg1 + 0x27a
            rax_1, rdx = sub_1403c8ef0(arg1 + 0x228, *(arg1 + 0x200) + 1, arg1 + 0x2f0, 
                arg1 + 0x270, var_a8, entry_zmm2, *(arg1 + 0x2b8), arg2, *(arg1 + 0x298))
            rcx_2 = *(arg1 + 0x15c)
    else
    label_1403c73a8:
        rax_1, rdx = sub_1403c8b70(arg1 + 0x228, *(arg1 + 0x200) + 1)
        rcx_2 = *(arg1 + 0x15c)
        
        if (rcx_2.b s< 0 && (*(arg1 + 0x252) != 0 || (*(arg1 + 0x25e) & 4) != 0))
            goto label_1403c73ed
    
    if ((rcx_2 & 0x2000) == 0)
    label_1403c74c1:
        
        if ((rcx_2 & 0x400) != 0 && *(arg1 + 0x239) == 0x10)
        label_1403c74db:
            int32_t rax_8 = *(arg1 + 0x228)
            uint32_t r9_4 = zx.d(*(arg1 + 0x23a))
            int32_t r10_2 = r9_4 * rax_8
            uint64_t rax_9
            
            if (r10_2 == 0)
                rax_9 = 0
            else
                char* rdi_3 = *(arg1 + 0x200) + 1
                int32_t r8_8 = r10_2 & 7
                char* rcx_9
                
                if (r10_2 - 1 u>= 7)
                    int32_t i_7 = r8_8 - r10_2
                    rcx_9 = rdi_3
                    int32_t i
                    
                    do
                        *rcx_9 = *rdi_3
                        rcx_9[1] = rdi_3[2]
                        rcx_9[2] = rdi_3[4]
                        rcx_9[3] = rdi_3[6]
                        rcx_9[4] = rdi_3[8]
                        rcx_9[5] = rdi_3[0xa]
                        rcx_9[6] = rdi_3[0xc]
                        rcx_9[7] = rdi_3[0xe]
                        rdi_3 = &rdi_3[0x10]
                        rcx_9 = &rcx_9[8]
                        i = i_7
                        i_7 += 8
                    while (i != 0xfffffff8)
                    
                    if (r8_8 != 0)
                        goto label_1403c7578
                else
                    rcx_9 = rdi_3
                    
                    if (r8_8 != 0)
                    label_1403c7578:
                        rax_8.w = mulu.dp.b(rax_8.b, r9_4.b)
                        rdx = nullptr
                        
                        do
                            *(rcx_9 + rdx) = rdi_3[rdx << 1]
                            rdx = &rdx[1]
                        while ((zx.d(rax_8.b) & 7) != rdx.d)
                r9_4 = zx.d(*(arg1 + 0x23a))
                rax_9 = zx.q(r9_4 * *(arg1 + 0x228))
                rcx_2 = *(arg1 + 0x15c)
            
            *(arg1 + 0x239) = 8
            r9_4.b <<= 3
            *(arg1 + 0x23b) = r9_4.b
            *(arg1 + 0x230) = rax_9
    else
        if (rcx_2.b s>= 0)
            rax_1.b = *(arg1 + 0x25e)
            
            if (rax_1.b == 3)
                goto label_1403c74c1
            
            goto label_1403c7492
        
        if (*(arg1 + 0x252) != 0)
            goto label_1403c74c1
        
        rax_1.b = *(arg1 + 0x25e)
        
        if ((rax_1.b & 4) != 0 || rax_1.b == 3)
            goto label_1403c74c1
        
    label_1403c7492:
        sub_1403ca010(arg1 + 0x228, *(arg1 + 0x200) + 1, *(arg1 + 0x2a8), *(arg1 + 0x2c0), 
            (*(arg1 + 0x298)).b)
        rcx_2 = *(arg1 + 0x15c)
        
        if ((rcx_2 & 0x400) != 0 && *(arg1 + 0x239) == 0x10)
            goto label_1403c74db
    
    if ((rcx_2.b & 0x40) == 0)
        goto label_1403c7630
    
    sub_1403ca5f0(arg1 + 0x228, *(arg1 + 0x200) + 1, *(arg1 + 0x398), *(arg1 + 0x3a0))
    
    if (*(arg1 + 0x230) != 0)
        rcx_2 = *(arg1 + 0x15c)
    label_1403c7630:
        
        if ((rcx_2 & 0x200) != 0 && *(arg1 + 0x239) == 8 && *(arg1 + 0x238) != 3)
            int64_t rax_13 = *(arg1 + 0x230)
            
            if (rax_13 s> 0)
                void* rcx_11 = *(arg1 + 0x200)
                rdx = rax_13 * 2 + rcx_11 + 1
                void* rcx_12 = rcx_11 + rax_13
                bool cond:1_1
                
                do
                    char rax_14 = *rcx_12
                    rdx[-1] = rax_14
                    rdx[-2] = rax_14
                    rdx = &rdx[-2]
                    cond:1_1 = rdx u> rcx_12
                    rcx_12 -= 1
                while (cond:1_1)
                rax_13 = *(arg1 + 0x230)
                rcx_2 = *(arg1 + 0x15c)
            
            *(arg1 + 0x230) = rax_13 * 2
            *(arg1 + 0x239) = 0x10
            int64_t rax_15
            rax_15.b = *(arg1 + 0x23a)
            rax_15.b <<= 4
            *(arg1 + 0x23b) = rax_15.b
        
        if ((rcx_2.b & 0x20) == 0)
            if ((rcx_2.b & 8) != 0)
                goto label_1403c7759
            
            goto label_1403c76b5
        
        sub_1403cba60(arg1 + 0x228, *(arg1 + 0x200) + 1, entry_zmm2, arg2)
        rcx_2 = *(arg1 + 0x15c)
        
        if ((rcx_2.b & 8) != 0)
        label_1403c7759:
            sub_1403ca780(arg1 + 0x228, *(arg1 + 0x200) + 1, arg1 + 0x2dd)
            rcx_2 = *(arg1 + 0x15c)
            
            if ((rcx_2.b & 4) == 0)
                goto label_1403c76be
            
            goto label_1403c7780
        
    label_1403c76b5:
        
        if ((rcx_2.b & 4) == 0)
        label_1403c76be:
            
            if ((rcx_2.b & 1) != 0)
                goto label_1403c77a7
            
            goto label_1403c76c7
        
    label_1403c7780:
        sub_1403cad00(arg1 + 0x228, *(arg1 + 0x200) + 1)
        rcx_2 = *(arg1 + 0x15c)
        
        if ((rcx_2.b & 1) != 0)
        label_1403c77a7:
            sub_1403cc0f0(arg1 + 0x228, *(arg1 + 0x200) + 1)
            rcx_2 = *(arg1 + 0x15c)
            
            if ((rcx_2 & 0x10000) == 0)
                goto label_1403c76d3
            
            goto label_1403c77d1
        
    label_1403c76c7:
        
        if ((rcx_2 & 0x10000) == 0)
        label_1403c76d3:
            
            if ((rcx_2 & 0x4000) == 0 || (*(arg1 + 0x155) & 8) == 0)
                goto label_1403c77e9
            
            goto label_1403c76ff
        
    label_1403c77d1:
        sub_1403cbc90(arg1 + 0x228, *(arg1 + 0x200) + 1)
        rcx_2 = *(arg1 + 0x15c)
        
        if ((rcx_2 & 0x4000) != 0 && (*(arg1 + 0x155) & 8) != 0)
        label_1403c76ff:
            sub_1403c8b70(arg1 + 0x228, *(arg1 + 0x200) + 1)
            rcx_2 = *(arg1 + 0x15c)
            
            if (rcx_2.w s>= 0)
                goto label_1403c77ee
            
            goto label_1403c781c
        
    label_1403c77e9:
        
        if (rcx_2.w s< 0)
        label_1403c781c:
            sub_1403caf40(arg1 + 0x228, *(arg1 + 0x200) + 1, zx.d(*(arg1 + 0x266)), 
                (*(arg1 + 0x158)).b)
            
            if ((*(arg1 + 0x15c) & 0x80000) != 0)
            label_1403c783b:
                int64_t rax_17 = *(arg1 + 0x200) + 1
                int32_t rcx_21 = *(arg1 + 0x228)
                rdx.b = *(arg1 + 0x238)
                void* rax_18
                int32_t rdi_7
                
                if (rdx.b == 4)
                    rax_18 = rax_17 + *(arg1 + 0x230)
                    
                    if (*(arg1 + 0x239) != 8)
                        if (rcx_21 != 0)
                            rdi_7 = rcx_21 & 1
                            
                            if (rcx_21 != 1)
                                int32_t i_6 = rdi_7 - rcx_21
                                int32_t i_1
                                
                                do
                                    *(rax_18 - 1) = not.b(*(rax_18 - 1))
                                    *(rax_18 - 2) = not.b(*(rax_18 - 2))
                                    *(rax_18 - 5) = not.b(*(rax_18 - 5))
                                    *(rax_18 - 6) = not.b(*(rax_18 - 6))
                                    rax_18 -= 8
                                    i_1 = i_6
                                    i_6 += 2
                                while (i_1 != 0xfffffffe)
                            
                        label_1403c7985:
                            
                            if (rdi_7 != 0)
                                *(rax_18 - 1) = not.b(*(rax_18 - 1))
                                *(rax_18 - 2) = not.b(*(rax_18 - 2))
                    else if (rcx_21 != 0)
                        int32_t rdx_40 = rcx_21 & 3
                        
                        if (rcx_21 - 1 u>= 3)
                            int32_t i_9 = rdx_40 - rcx_21
                            int32_t i_2
                            
                            do
                                *(rax_18 - 1) = not.b(*(rax_18 - 1))
                                *(rax_18 - 3) = not.b(*(rax_18 - 3))
                                *(rax_18 - 5) = not.b(*(rax_18 - 5))
                                *(rax_18 - 7) = not.b(*(rax_18 - 7))
                                rax_18 -= 8
                                i_2 = i_9
                                i_9 += 4
                            while (i_2 != 0xfffffffc)
                        
                        if (rdx_40 != 0)
                            int64_t rcx_23 = 0
                            
                            do
                                *(rax_18 + (rcx_23 << 1) - 1) = not.b(*(rax_18 + (rcx_23 << 1) - 1))
                                rcx_23 -= 1
                            while (neg.d(rdx_40) != rcx_23.d)
                else if (rdx.b == 6)
                    rax_18 = rax_17 + *(arg1 + 0x230)
                    
                    if (*(arg1 + 0x239) != 8)
                        if (rcx_21 != 0)
                            rdi_7 = rcx_21 & 1
                            
                            if (rcx_21 != 1)
                                int32_t i_5 = rdi_7 - rcx_21
                                int32_t i_3
                                
                                do
                                    *(rax_18 - 1) = not.b(*(rax_18 - 1))
                                    *(rax_18 - 2) = not.b(*(rax_18 - 2))
                                    *(rax_18 - 9) = not.b(*(rax_18 - 9))
                                    *(rax_18 - 0xa) = not.b(*(rax_18 - 0xa))
                                    rax_18 -= 0x10
                                    i_3 = i_5
                                    i_5 += 2
                                while (i_3 != 0xfffffffe)
                            
                            goto label_1403c7985
                    else if (rcx_21 != 0)
                        int32_t rdx_37 = rcx_21 & 3
                        
                        if (rcx_21 - 1 u>= 3)
                            int32_t i_8 = rdx_37 - rcx_21
                            int32_t i_4
                            
                            do
                                *(rax_18 - 1) = not.b(*(rax_18 - 1))
                                *(rax_18 - 5) = not.b(*(rax_18 - 5))
                                *(rax_18 - 9) = not.b(*(rax_18 - 9))
                                *(rax_18 - 0xd) = not.b(*(rax_18 - 0xd))
                                rax_18 -= 0x10
                                i_4 = i_8
                                i_8 += 4
                            while (i_4 != 0xfffffffc)
                        
                        if (rdx_37 != 0)
                            int64_t rcx_22 = 0
                            
                            do
                                *(rax_18 + (rcx_22 << 2) - 1) = not.b(*(rax_18 + (rcx_22 << 2) - 1))
                                rcx_22 -= 1
                            while (neg.d(rdx_37) != rcx_22.d)
        else
        label_1403c77ee:
            
            if ((rcx_2 & 0x80000) != 0)
                goto label_1403c783b
        
        uint64_t result = zx.q(*(arg1 + 0x15c))
        
        if ((result.d & 0x20000) == 0)
            if ((result.b & 0x10) != 0)
                goto label_1403c79e1
            
            goto label_1403c79a1
        
        sub_1403cb4d0(arg1 + 0x228, *(arg1 + 0x200) + 1)
        result = zx.q(*(arg1 + 0x15c))
        
        if ((result.b & 0x10) == 0)
        label_1403c79a1:
            
            if ((result.d & 0x100000) != 0)
            label_1403c79f8:
                result = *(arg1 + 0x138)
                
                if (result != 0)
                    result(arg1, arg1 + 0x228, *(arg1 + 0x200) + 1)
                
                result.b = *(arg1 + 0x150)
                
                if (result.b != 0)
                    *(arg1 + 0x239) = result.b
                
                result.b = *(arg1 + 0x151)
                
                if (result.b == 0)
                    result.b = *(arg1 + 0x23a)
                else
                    *(arg1 + 0x23a) = result.b
                
                result.w = mulu.dp.b(result.b, *(arg1 + 0x239))
                *(arg1 + 0x23b) = result.b
                uint64_t rcx_27 = zx.q(*(arg1 + 0x228))
                uint64_t rdx_49 = zx.q(result.b)
                uint64_t rdx_51
                
                if (result.b u< 8)
                    rdx_51 = (rcx_27 * rdx_49 + 7) u>> 3
                else
                    rdx_51 = (rdx_49 u>> 3) * rcx_27
                
                *(arg1 + 0x230) = rdx_51
        else
        label_1403c79e1:
            sub_1403cbbd0(arg1 + 0x228, *(arg1 + 0x200) + 1)
            result = zx.q(*(arg1 + 0x15c))
            
            if ((result.d & 0x100000) != 0)
                goto label_1403c79f8
        
        __security_check_cookie(var_28 ^ &var_c8)
        return result
    
    rdx_53 = "png_do_quantize returned rowbytes=0"
else
    rax_1, rdx = sub_1403c84a0(arg1, arg1 + 0x228, *(arg1 + 0x200) + 1)
    
    if (rax_1.d == 0)
        rcx_2 = *(arg1 + 0x15c)
        
        if ((rcx_2 & 0x4000) != 0 && (*(arg1 + 0x155) & 8) == 0)
            goto label_1403c73a8
        
        goto label_1403c73cd
    
    *(arg1 + 0x410) = 1
    rcx_2 = *(arg1 + 0x15c)
    
    if ((rcx_2 & 0x600000) == 0x400000)
        rdx, arg2 = png_warning(arg1, "png_do_rgb_to_gray found nongray pixel")
        rcx_2 = *(arg1 + 0x15c)
    
    if ((rcx_2 & 0x600000) != 0x200000)
        goto label_1403c7384
    
    rdx_53 = "png_do_rgb_to_gray found nongray pixel"

png_error(arg1, rdx_53)
noreturn
