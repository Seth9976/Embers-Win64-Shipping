// 函数: sub_14296b770
// 地址: 0x14296b770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* result = sub_14296ba60(arg1)

if (result == 0)
    return result

void* rax = *result

if (rax != 0 && (*(rax + 0x10) & 0x20) != 0)
    int64_t* rax_1 = sub_142899e40(arg2, 0x401)
    
    if (rax_1 == 0)
        sub_1428a5670((rax_1 + 0x2e).d, (rax_1 + 0x6e).d, (rax_1 + 0x69).d, "crypto\cms\cms_lib.c", 
            0x77)
        return 0
    
    int64_t arg_18
    int32_t rax_3 = sub_142899cf0(rax_1, 3, 0, &arg_18)
    sub_14289a9a0(rax_1, 0x200)
    sub_142899cf0(rax_1, 0x82, 0, 0)
    sub_1428f2e40(*result, arg_18, rax_3)
    void* rax_4 = *result
    *(rax_4 + 0x10) &= 0xffffffdf

int32_t rax_5 = sub_1428a96d0(*arg1)
bool cond:1_1

if (rax_5 s<= 0x19)
    if (rax_5 == 0x19)
        return sub_1429760d0(arg1, arg2, 0) __tailcall
    
    if (rax_5 != 0x15)
        if (rax_5 == 0x16)
            return sub_14293cc30(arg1, arg2) __tailcall
        
        cond:1_1 = rax_5 == 0x17
        goto label_14296b8ae
else if (rax_5 != 0x1a)
    cond:1_1 = rax_5 == 0x312
label_14296b8ae:
    
    if (not(cond:1_1))
        sub_1428a5670(0x2e, 0x6e, 0x9c, "crypto\cms\cms_lib.c", 0x92)
        return 0
return 1
