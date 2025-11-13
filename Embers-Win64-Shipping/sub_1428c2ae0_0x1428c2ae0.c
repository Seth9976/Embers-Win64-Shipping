// 函数: sub_1428c2ae0
// 地址: 0x1428c2ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rdi = nullptr
int64_t* rax = sub_1428bcf50(arg1, arg2)

if (rax == 0)
    return rax

void* rax_1 = *rax

if (rax_1 == 0 || *(rax_1 + 0x38) == 0)
    sub_1428a5670(6, 0x93, 0x96, "crypto\evp\pmeth_gn.c", 0x4a)
else
    rax[4].d = 4
    int64_t rdx = *(rax_1 + 0x30)
    int32_t rax_2
    
    if (rdx != 0)
        rax_2 = rdx(rax)
    
    if (rdx == 0 || rax_2 s> 0)
        if (sub_1428bcb30(rax, 0xffffffff, 4, 6, arg4, arg3) s> 0)
            void* rax_4 = *rax
            
            if (rax_4 == 0 || *(rax_4 + 0x38) == 0)
                sub_1428a5670(6, 0x92, 0x96, "crypto\evp\pmeth_gn.c", 0x5c)
            else if (rax[4].d == 4)
                int64_t* rax_5 = sub_1428968f0()
                rdi = rax_5
                
                if (rax_5 != 0)
                    int64_t r8_1 = *rax
                    
                    if ((*(r8_1 + 0x38))(rax, rax_5, r8_1) s<= 0)
                        sub_1428965a0(rdi)
                        rdi = nullptr
            else
                sub_1428a5670(6, 0x92, 0x97, "crypto\evp\pmeth_gn.c", 0x60)
    else
        rax[4].d = 0

sub_1428bcda0(rax)
return rdi
