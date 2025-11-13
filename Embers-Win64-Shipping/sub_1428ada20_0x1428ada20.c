// 函数: sub_1428ada20
// 地址: 0x1428ada20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int32_t r12 = 0
char* rsi = nullptr

if (arg2 != 0)
    void* rax_1 = *arg2
    
    if (rax_1 == 0)
        int32_t rax_2 = sub_1428ada20(arg1, 0)
        
        if (rax_2 == 0xffffffff)
            sub_1428a5670(0x32, 0x6c, 0x69, "crypto\ct\ct_oct.c", 0x14a)
            return 0xffffffff
        
        rax_1 = sub_1428a6730(sx.q(rax_2))
        *arg2 = rax_1
        
        if (rax_1 == 0)
            sub_1428a5670((rax_1 + 0x32).d, (rax_1 + 0x6c).d, (rax_1 + 0x41).d, 
                "crypto\ct\ct_oct.c", 0x14e)
            return 0xffffffff
        
        r12 = 1
    
    rsi = rax_1 + 2

int64_t rbp = 2
int32_t r14 = 0

if (sub_142898c70(arg1) s> 0)
    while (true)
        int32_t* rax_6 = sub_142898ea0(arg1, r14)
        int32_t rax_7
        
        if (arg2 == 0)
            if (sub_1428ad4e0(rax_6) == 0)
                sub_1428a5670(0x32, 0x6b, 0x6a, "crypto\ct\ct_oct.c", 0xce)
                sub_1428a6780(0)
            else
                if (*rax_6 != 0)
                    rax_7 = (*(rax_6 + 0x10)).d
                else
                    rax_7 = (*(rax_6 + 0x38)).d + 0x2f + (*(rax_6 + 0x50)).d
                
                if (rax_7 != 0xffffffff)
                    goto label_1428adb86
        else
            char* arg_10 = &rsi[2]
            rax_7 = sub_1428ad7c0(rax_6, &arg_10)
            
            if (rax_7 != 0xffffffff)
                rsi[1] = rax_7.b
                *rsi = (rax_7 s>> 8).b
                rsi = arg_10
            label_1428adb86:
                r14 += 1
                rbp += sx.q(rax_7 + 2)
                
                if (r14 s< sub_142898c70(arg1))
                    continue
                else if (rbp u<= 0xffff)
                    break
        
        if (r12 != 0)
            sub_1428a6780(*arg2)
            *arg2 = 0
        
        return 0xffffffff

if (arg2 != 0)
    uint8_t* rdx_4 = *arg2
    *rdx_4 = ((rbp - 2) u>> 8).b
    rdx_4[1] = (rbp - 2).b
    
    if (r12 == 0)
        *arg2 += rbp

return zx.q(rbp.d)
