// 函数: sub_142893d00
// 地址: 0x142893d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rax = sub_142890ec0(arg1)
int32_t rdi_1 = sub_142890eb0(sub_140687ad0(arg1)) & 0xf0007
int32_t rax_5
int64_t (* rcx_4)(int64_t* arg1, int128_t* arg2, int64_t arg3, int64_t arg4, int32_t arg5)
int64_t (* rdx_1)(int32_t* arg1, int32_t* arg2, int32_t* arg3)

if (rdi_1 - 1 u> 1 || arg4 != 0)
    rax_5 = sub_1428cf200(arg2, sub_142890ee0(arg1) << 3, rax)
    rcx_4 = nullptr
    
    if (rdi_1 == 2)
        rcx_4 = sub_1428d01d0
    
    rdx_1 = sub_1428ce970
else
    rax_5 = sub_1428cef80(arg2, sub_142890ee0(arg1) << 3, rax)
    rcx_4 = nullptr
    
    if (rdi_1 == 2)
        rcx_4 = sub_1428d01d0
    
    rdx_1 = sub_1428ce380

*(rax + 0xf8) = rdx_1
*(rax + 0x100) = rcx_4

if (rax_5 s>= 0)
    return 1

sub_1428a5670(6, 0x85, 0x8f, "crypto\evp\e_aes.c", 0xa66)
return 0
