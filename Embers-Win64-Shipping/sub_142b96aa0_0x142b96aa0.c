// 函数: sub_142b96aa0
// 地址: 0x142b96aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 0
char* rbx = arg2

if (arg2 == 0)
    return zx.q((&arg2[6]).d)

if (arg1 == 0)
    return zx.q((&arg1[5]).d)

void* r9 = arg1[7]
int32_t rax_3 = zx.d(*arg2) - 4
int32_t rsi = 0

if (rax_3 u> 0x15)
label_142b96c95:
    arg1[7] = r9
else
    while (true)
        uint32_t rax_7
        char rcx_5
        uint32_t rdx_2
        uint32_t rdx_3
        
        switch (jump_table_142b96cd0[sx.q(rax_3)])
            case 0x2b96b2f
                int32_t rax_5 = sub_142b96500(arg1, zx.d(*(rbx + 2)))
                rsi = rax_5
                
                if (rax_5 != 0)
                    break
                
                r9 = arg1[7]
                r14.b = 1
                goto label_142b96c81
            case 0x2b96b51
                uint64_t rax_6 = zx.q(rbx[1])
                void* rbp_1 = rax_6 + r9
                
                if (rbp_1 u> arg1[8])
                    rsi = 0x55
                    break
                
                if (*rbx == 0x18)
                    memcpy(zx.q(*(rbx + 2)) + arg3, r9, rax_6.d)
                
                r9 = rbp_1
                goto label_142b96c81
            case 0x2b96b82
                rdx_2 = zx.d(*r9)
                rcx_5 = 0x18
                r9 += 1
            label_142b96c57:
                
                if ((*rbx & 1) != 0)
                    rdx_2 = rdx_2 << rcx_5 s>> rcx_5
                
                uint32_t rcx_6 = zx.d(rbx[1])
                uint32_t* r8_2 = zx.q(*(rbx + 2)) + arg3
                
                if (rcx_6 == 1)
                    *r8_2 = rdx_2.b
                else if (rcx_6 == 2)
                    *r8_2 = rdx_2.w
                else
                    *r8_2 = rdx_2
                
            label_142b96c81:
                uint32_t rax_16 = zx.d(rbx[4])
                rbx = &rbx[4]
                rax_3 = rax_16 - 4
                
                if (rax_3 u> 0x15)
                    goto label_142b96c95
                
                continue
            case 0x2b96b93
                rdx_3 = zx.d(*r9)
                r9 += 2
                rcx_5 = 0x10
                rax_7 = zx.d(*(r9 - 1))
            label_142b96c52:
                rdx_2 = rdx_3 << 8 | rax_7
                goto label_142b96c57
            case 0x2b96baa
                rdx_3 = zx.d(*(r9 + 1))
                r9 += 2
                rcx_5 = 0x10
                rax_7 = zx.d(*(r9 - 2))
                goto label_142b96c52
            case 0x2b96bc2
                uint32_t rax_8 = zx.d(*(r9 + 1))
                r9 += 4
                rdx_2 =
                    ((zx.d(*(r9 - 4)) << 8 | rax_8) << 8 | zx.d(*(r9 - 2))) << 8 | zx.d(*(r9 - 1))
                rcx_5 = 0
                goto label_142b96c57
            case 0x2b96bed
                uint32_t rax_11 = zx.d(*(r9 + 2))
                r9 += 4
                rdx_2 =
                    ((zx.d(*(r9 - 1)) << 8 | rax_11) << 8 | zx.d(*(r9 - 3))) << 8 | zx.d(*(r9 - 4))
                rcx_5 = 0
                goto label_142b96c57
            case 0x2b96c18
                uint32_t rax_14 = zx.d(*(r9 + 1))
                r9 += 3
                rdx_3 = zx.d(*(r9 - 3)) << 8 | rax_14
                rax_7 = zx.d(*(r9 - 1))
                rcx_5 = 8
                goto label_142b96c52
            case 0x2b96c32
                uint32_t rax_15 = zx.d(*(r9 + 1))
                r9 += 3
                rdx_3 = zx.d(*(r9 - 1)) << 8 | rax_15
                rax_7 = zx.d(*(r9 - 3))
                rcx_5 = 8
                goto label_142b96c52
            case 0x2b96c95
                goto label_142b96c95

if (r14.b != 0)
    sub_142b96620(arg1)

return zx.q(rsi)
