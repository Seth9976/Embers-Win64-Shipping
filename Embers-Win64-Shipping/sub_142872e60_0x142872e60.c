// 函数: sub_142872e60
// 地址: 0x142872e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rbx = nullptr
void* result = nullptr
void* rax = sub_1428654a0(arg2)

if (rax != 0)
    int16_t rdi_1 = *(rax + 8) & 3
    int32_t rcx_2
    
    if (rdi_1 != 2)
        rcx_2 = 0x198
    else
        rcx_2 = *rax
    
    int64_t* rax_1 = sub_1428bcf50(rcx_2, nullptr)
    rbx = rax_1
    
    if (rax_1 != 0)
        if (sub_1428c2a60(rbx) s> 0)
            int32_t rax_4
            
            if (rdi_1 != 2)
                rax_4 = sub_1428bcb30(rbx, 0x198, 6, 0x1001, *rax, 0)
            
            if (rdi_1 == 2 || rax_4 s> 0)
                if (sub_1428c2970(rbx, &result) s<= 0)
                    sub_142856580(arg1, 0x50, 0x22f, 6, "ssl\s3_lib.c", 0x126a)
                    sub_1428965a0(result)
                    result = nullptr
            else
                sub_142856580(arg1, 0x50, 0x22f, 6, "ssl\s3_lib.c", 0x1265)
        else
            sub_142856580(arg1, 0x50, 0x22f, 6, "ssl\s3_lib.c", 0x125f)
    else
        sub_142856580(arg1, (&rbx[0xa]).d, 0x22f, (rbx + 0x41).d, "ssl\s3_lib.c", 0x125a)
else
    sub_142856580(arg1, 0x50, 0x22f, 0x44, "ssl\s3_lib.c", 0x1250)

sub_1428bcda0(rbx)
return result
