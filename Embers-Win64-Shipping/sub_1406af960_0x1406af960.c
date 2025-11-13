// 函数: sub_1406af960
// 地址: 0x1406af960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = *arg1
int32_t rax_1
int32_t rcx

if (rax != arg1[2])
    int32_t ch = sx.d(*rax)
    arg1[0xf].b = ch.b
    
    if (strchr("()$^.*+?[]|\-{},:=!\n\r", ch) == 0)
        rax_1 = zx.d(arg1[0xf].b)
        rcx = 0
    else
        rax_1 = sx.d(arg1[0xf].b)
        rcx = rax_1
else
    arg1[0xf].b = 0xff
    rcx = -1
    rax_1 = 0xff

uint64_t rax_4 = zx.q(sx.d(rax_1.b) - 0xa)
*(arg1 + 0x7c) = rcx

if (rax_4.d u<= 0x73)
    rax_4 = zx.q(lookup_table_1406afaf4[sx.q(rax_4.d)])
    bool cond:0_1
    
    switch (rax_4)
        case 0
            if ((arg1[0x10].b & 4) != 0 && *(arg1 + 0x1c) == 0)
                *(arg1 + 0x7c) = 0x7c
        case 1
            if ((arg1[0x10].d & 0x2000000) != 0)
                rax_4 = *arg1 + 1
                
                if (rax_4 != arg1[2] && *rax_4 != 0xa)
                    *(arg1 + 0x7c) = 0
        case 2
            cond:0_1 = (arg1[0x10].b & 8) != 0
        label_1406afabc:
            
            if (not(cond:0_1))
                *(arg1 + 0x7c) = 0
        case 3
            if ((arg1[0x10].d & 0x4000000) != 0)
                rax_4 = sub_1406aa7e0(&arg1[8])
                
                if (rax_4.b != 0)
                    *(arg1 + 0x7c) = 0
        case 4
            cond:0_1 = (arg1[0x10].b & 1) != 0
            goto label_1406afabc
        case 5
            rax_4 = sub_1406ae380(arg1)
            
            if (rax_4.b != 0)
                void* rax_6 = *arg1
                int32_t rcx_4 = sx.d(*(rax_6 + 1))
                arg1[0xf].b = rcx_4.b
                *(arg1 + 0x7c) = rcx_4
                return rax_6
        case 6
            if ((arg1[0x10].d & 0x2000000) != 0)
                rax_4 = sub_1406aa7e0(&arg1[8])
                cond:0_1 = rax_4.b != 0
                goto label_1406afabc
        case 7
            cond:0_1 = (arg1[0x10].b & 0x10) != 0
            goto label_1406afabc
        case 8
            cond:0_1 = (arg1[0x10].b & 2) != 0
            goto label_1406afabc

return rax_4
