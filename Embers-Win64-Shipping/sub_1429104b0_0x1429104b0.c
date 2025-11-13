// 函数: sub_1429104b0
// 地址: 0x1429104b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
char* rdi = arg1
int64_t* result = sub_142897a00()

if (result != 0)
    if (arg3 == 0x14)
    label_14291050a:
        
        if (sub_14290fe10(result, rdi) != 0)
            if (arg2 != 0)
                rdi = arg2
            
            if (sub_14290fe70(&result[1], rdi) != 0 && sub_14290fe10(&result[4], rdi) != 0)
                return result
    else
        int32_t* rax = sub_1428c3550()
        result[2] = rax
        
        if (rax != 0 && sub_1428e4980(rax, arg3) != 0)
            goto label_14291050a

sub_1428979d0(result)
return nullptr
