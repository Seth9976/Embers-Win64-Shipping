// 函数: sub_14289d340
// 地址: 0x14289d340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* result = sub_142898ba0()
int32_t* rax = sub_1428a6a70(0x10)
int32_t* rdi = rax
int32_t rbx

if (rax != 0)
    rbx = 0
    *rax = 0
else
    sub_1428a5670((rax + 0xb).d, 0x96, (rax + 0x41).d, "crypto\x509\x509_lu.c", 0x1a0)
    rbx = 0
    rdi = nullptr

if (result == 0)
label_14289d4d6:
    
    if (rdi != 0)
        int32_t rcx_19 = *rdi
        
        if (rcx_19 == 1)
            sub_1428a2c50(*(rdi + 8))
        else if (rcx_19 == 2)
            sub_1428e4430(*(rdi + 8))
else if (rdi != 0)
    if (*arg1 != 0 && sub_14289d720(arg1, 2, arg2, rdi) != 0)
        sub_14289d0f0(rdi)
        sub_1428a5c40(*(*arg1 + 0x90))
        int32_t arg_18
        int32_t rax_2 = sub_14289dd60(*(*arg1 + 8), 2, arg2, &arg_18)
        int32_t rdi_1 = rax_2
        
        if (rax_2 s< 0)
            sub_1428a5d00(*(*arg1 + 0x90))
            sub_142898a10(result)
            return nullptr
        
        int32_t r14_1 = arg_18
        
        if (r14_1 s> 0)
            do
                void* r15_1 = *(sub_142898ea0(*(*arg1 + 8), rdi_1) + 8)
                sub_1428e46f0(r15_1)
                
                if (sub_142898d50(result, r15_1) == 0)
                    sub_1428a5d00(*(*arg1 + 0x90))
                    sub_1428e4430(r15_1)
                    sub_142898cb0(result, sub_1428e4430)
                    return nullptr
                
                rbx += 1
                rdi_1 += 1
            while (rbx s< r14_1)
        
        sub_1428a5d00(*(*arg1 + 0x90))
        return result
    
    goto label_14289d4d6

sub_1428a6780(rdi)
sub_142898a10(result)
return nullptr
